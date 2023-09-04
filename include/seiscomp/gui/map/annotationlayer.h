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


#ifndef SEISCOMP_GUI_MAP_LAYERS_ANNOTATION_LAYER_H__
#define SEISCOMP_GUI_MAP_LAYERS_ANNOTATION_LAYER_H__


#include <seiscomp/gui/map/annotations.h>
#include <seiscomp/gui/map/layer.h>


namespace Seiscomp {
namespace Gui {
namespace Map {


class Canvas;


class AnnotationLayer : public Layer {
	public:
		AnnotationLayer(QObject* parent = nullptr,
		                Annotations *annotations = nullptr);

		void setAnnotations(Annotations *annotations) {
			_annotations = annotations;
		}

		Annotations *annotations() const {
			return _annotations;
		}

		void draw(const Seiscomp::Gui::Map::Canvas*, QPainter &painter);

	private:
		typedef QList<QRect> Row;
		typedef QVector<Row> Grid;

		Annotations *_annotations;
};


} // ns Map
} // ns Gui
} // ns Seiscomp


#endif
