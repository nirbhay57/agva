/*************************************************************************
 *
 * Copyright (c) 2013-2019, Klaralvdalens Datakonsult AB (KDAB)
 * All rights reserved.
 *
 * See the LICENSE.txt file shipped along with this file for the license.
 *
 *************************************************************************/

import QtQuick 2.0

Item {
//    width = 400 Error Expected Token ':"                    remember we're talkin about property bindings
//    height = 400                                            NOT assignment

    width: 600
    height: 600

    Rectangle {
        x: 100
        y: 50
        width: height * 2
        height: 200 //width * 2
        color: "lightblue"
    }
}
