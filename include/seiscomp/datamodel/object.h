/***************************************************************************
 * Copyright (C) gempa GmbH                                                *
 * All rights reserved.                                                    *
 * Contact: gempa GmbH (seiscomp-dev@gempa.de)                             *
 *                                                                         *
 * GNU Affero General Public License Usage                                 *
 * This file may be used under the terms of the GNU Affero                 *
 * Public License version 3.0 as published by the Free Software Foundation *
 * and appearing in the file LICENSE included in the packaging of this     *
 * file. Please review the following information to ensure the GNU Affero  *
 * Public License version 3.0 requirements will be met:                    *
 * https://www.gnu.org/licenses/agpl-3.0.html.                             *
 *                                                                         *
 * Other Usage                                                             *
 * Alternatively, this file may be used in accordance with the terms and   *
 * conditions contained in a signed written agreement between you and      *
 * gempa GmbH.                                                             *
 ***************************************************************************/


#ifndef SEISCOMP_DATAMODEL_SCHEMEOBJECT_H__
#define SEISCOMP_DATAMODEL_SCHEMEOBJECT_H__


#include <seiscomp/core/baseobject.h>
#include <seiscomp/core/enumeration.h>
#include <seiscomp/core/metaobject.h>
#include <seiscomp/core/metaproperty.h>
#include <seiscomp/core.h>
#include <vector>


namespace Seiscomp {
namespace DataModel {


DEFINE_SMARTPOINTER(Object);
DEFINE_SMARTPOINTER(Observer);
DEFINE_SMARTPOINTER(Visitor);
class PublicObject;
class DatabaseArchive;





class SC_SYSTEM_CORE_API Observer : public Seiscomp::Core::BaseObject {
	DECLARE_SC_CLASS(Observer);

	// ------------------------------------------------------------------
	//  Xstruction
	// ------------------------------------------------------------------
	protected:
		//! Protected c'tor
		Observer();

	public:
		//! D'tor
		virtual ~Observer() override;


	// ------------------------------------------------------------------
	//  Interface
	// ------------------------------------------------------------------
	public:
		//! This method is called when a new child has been
		//! added to an object
		virtual void onObjectAdded(Object* parent,
		                           Object* newChild);

		//! This method is triggered when a child has been
		//! removed from an object
		virtual void onObjectRemoved(Object* parent,
		                             Object* oldChild);

		//! Whenever an objects gets updated this method will be called
		virtual void onObjectModified(Object* object);

		//! Destruction callback
		virtual void onObjectDestroyed(Object* object);
};


class SC_SYSTEM_CORE_API Visitor {
	public:
		enum TraversalMode {
			TM_TOPDOWN,
			TM_BOTTOMUP,
			TM_QUANTITY
		};
	
	// ------------------------------------------------------------------
	//  Xstruction
	// ------------------------------------------------------------------
	protected:
		//! Protected c'tor
		Visitor(TraversalMode = TM_TOPDOWN);

	public:
		//! D'tor
		virtual ~Visitor();


	// ------------------------------------------------------------------
	//  Interface
	// ------------------------------------------------------------------
	public:
		TraversalMode traversal() const;

		//! Callback when visiting a PublicObject.
		//! When this methods returns false and the traversal has to
		//! be done TOPDOWN, the traversion stops
		virtual bool visit(PublicObject*) = 0;
		virtual void visit(Object*) = 0;

		//! If visit(PublicObject* po) returns true and traversal is
		//! done TOPDOWN this methods will be called when visiting 'po'
		//! has been finished
		virtual void finished() {}

	private:
		TraversalMode _traversal;
};


MAKEENUM(
	Operation,
	EVALUES(
		OP_UNDEFINED,
		OP_ADD,
		OP_REMOVE,
		OP_UPDATE
	),
	ENAMES(
		"undefined",
		"add",
		"remove",
		"update"
	)
);


extern DECLARE_METAENUM(Operation, MetaOperation);


class SC_SYSTEM_CORE_API Object : public Core::BaseObject {
	DECLARE_SC_CLASS(Object);


	// ----------------------------------------------------------------------
	//  Enumerations
	// ----------------------------------------------------------------------
	public:
		/*
		enum Operation {
			OP_UNDEFINED,
			OP_ADD,
			OP_REMOVE,
			OP_UPDATE,
			OP_QUANTITY
		};
		*/

	// ------------------------------------------------------------------
	//  Xstruction
	// ------------------------------------------------------------------
	protected:
		//! Constructor
		Object();

		//! Copy constructor
		Object(const Object& other);

	public:
		//! Destructor
		virtual ~Object() override;


	// ------------------------------------------------------------------
	//  Interface
	// ------------------------------------------------------------------
	public:
		//! Returns the parent object
		PublicObject* parent() const;

		//! Sets the parent element
		bool setParent(PublicObject* parent);
		
		static bool RegisterObserver(Observer*);
		static bool UnregisterObserver(Observer*);

		//! Creates a notifier that updates this object
		void update();

		//! Sets the last modification timestamp. This attribute is not part
		//! of a data model and will not be written to e.g. the database. Each
		//! archive may handle or may not handle that value.
		void setLastModifiedInArchive(const Core::Time &t);

		//! Returns the last modification timestamp as read from the database
		//! column _last_modified. May be invalid if either the database does
		//! not support that column or the object has been created in memory.
		const Core::Time &lastModifiedInArchive() const;

		//! Assign the metadata of 'other' to 'this'
		//! Returns true, if this and other are of same
		//! type, false else.
		virtual bool assign(Object* other) = 0;

		//! Clones an object. If the clonee is a PublicObject
		//! it does not become registered in the global instance
		//! pool but receives exactly the same publicID like
		//! 'this'.
		virtual Object* clone() const = 0;

		//! Adds the object to a parent. If it has already
		//! a parent, the method returns false.
		virtual bool attachTo(PublicObject* parent) = 0;
		//! Removes the object from a parent. If it has another or
		//! no parent, the method returns false.
		virtual bool detachFrom(PublicObject* parent) = 0;

		//! Removes the object from its parent object
		virtual bool detach() = 0;

		//! Visitor interface
		virtual void accept(Visitor*) = 0;


	// ------------------------------------------------------------------
	//  Protected interface
	// ------------------------------------------------------------------
	protected:
		//! This methods has the be called in derived classes to
		//! notify registered observers
		void childAdded(Object*);
		void childRemoved(Object*);
		void modified();


	// ------------------------------------------------------------------
	//  Private members
	// ------------------------------------------------------------------
	private:
		PublicObject *_parent;
		Core::Time    _lastModifiedInArchive;
	
		typedef std::vector<Observer*> ObserverList;
		static ObserverList _observers;
};


}
}


#endif
