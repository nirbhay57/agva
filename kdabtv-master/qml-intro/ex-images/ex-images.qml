/*************************************************************************
 *
 * Copyright (c) 2013-2019, Klaralvdalens Datakonsult AB (KDAB)
 * All rights reserved.
 *
 * See the LICENSE.txt file shipped along with this file for the license.
 *
 *************************************************************************/

import QtQuick 2.0

Rectangle {
    width: 400; height: 400
    color: "#00a3fc"

    Image {
        x: 150; y: 150
        source: "../images/rocket.png"
    }
    Image {
        x: 390; y: 150
        source: "../images/rocket.png"
        height: 400
        width: 200
    }
}
