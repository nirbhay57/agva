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
    property int globalForJs: 100;
    width: 1000; height: 1000; color: "lightblue"

    Image{
        x:10; y:10
        id: name
        source: "/home/agva/Pictures/child.jpeg"
        width: 400; height: 400

        //fillMode: Image.PreserveAspectFit
        BorderImage {
            id: name1
            source: "/home/agva/Pictures/eagle.jpeg"
            width: 80; height: 80
            border.left: 5; border.top: 5
            border.right: 5; border.bottom: 5
        }
    }



    Image{
        x:10; y:500
        id: name5
        source: "/home/agva/Pictures/camera.jpeg"
        width: 400; height: 400



    }


    BorderImage {
        x:500;y:60
        width: 1200; height: 900
        border { left: globalForJs; top: globalForJs; right: globalForJs; bottom: globalForJs }
       //horizontalTileMode: BorderImage.Repeat
       //verticalTileMode: BorderImage.Repeat
        source: "/home/agva/Pictures/camera.jpeg"
    }



}
