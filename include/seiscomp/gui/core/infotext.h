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



#ifndef SEISCOMP_GUI_INFOTEXT_H
#define SEISCOMP_GUI_INFOTEXT_H

#include <seiscomp/gui/core/ui_infotext.h>
#include <seiscomp/gui/qt.h>

#include <QDialog>

namespace Seiscomp {
namespace Gui {


class SC_GUI_API InfoText : public QDialog {
	// ------------------------------------------------------------------
	//  X'truction
	// ------------------------------------------------------------------
	public:
		InfoText(QWidget* parent = 0, Qt::WindowFlags f = 0);
		~InfoText();


	// ------------------------------------------------------------------
	//  Public interface
	// ------------------------------------------------------------------
	public:
		void setText(const QString& text);
		void appendText(const QString& text);

		void setReadOnly(bool readOnly);
		bool isReadOnly() const;


	// ------------------------------------------------------------------
	//  Attributes
	// ------------------------------------------------------------------
	private:
		Ui::InfoText _ui;
};


}
}


#endif
