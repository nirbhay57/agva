/*************************************************************************
 *
 * Copyright (c) 2010-2011, Nokia Corporation and/or its subsidiary(-ies).
 * Copyright (c) 2010-2019, Klaralvdalens Datakonsult AB (KDAB)
 * All rights reserved.
 *
 * See the LICENSE.txt file shipped along with this file for the license.
 *
 *************************************************************************/

import QtQuick 2.0

Rectangle {
    property int globalForJs: 50;
    width: 1000; height: 1000; color: "lightblue"


    BorderImage {
        x:60;y:60
        width: 900; height: 900
        border { left: globalForJs; top: globalForJs; right: globalForJs; bottom: globalForJs }
       horizontalTileMode: BorderImage.Stretch
       verticalTileMode: BorderImage.Stretch
        source: "/home/agva/Pictures/camera.jpeg"
    }



}
