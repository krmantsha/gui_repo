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


#ifndef SEISCOMP_GUI_MAP_LAYERS_GRIDLAYER_H
#define SEISCOMP_GUI_MAP_LAYERS_GRIDLAYER_H


#include <seiscomp/gui/qt.h>
#include <seiscomp/gui/map/layer.h>
#include <seiscomp/math/coord.h>


namespace Seiscomp {
namespace Gui {
namespace Map {


class Canvas;


class SC_GUI_API GridLayer : public Layer {
	public:
		GridLayer(QObject* = nullptr);
		virtual ~GridLayer();

		virtual void draw(const Canvas*, QPainter&);

		void setGridDistance(const QPointF&);
		const QPointF& gridDistance() const;
	private:
		QPointF                _gridDistance;
};


} // namespace Map
} // namespce Gui
} // namespace Seiscomp

#endif
