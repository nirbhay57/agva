/*************************************************************************
 *
 * Copyright (c) 2013-2019, Klaralvdalens Datakonsult AB (KDAB)
 * All rights reserved.
 *
 * See the LICENSE.txt file shipped along with this file for the license.
 *
 *************************************************************************/

import QtQuick 2.0
Image {
    id: image
    width: 1000; height: 400
    source: "https://www.thespruce.com/thmb/b45NsEHSrZ7kcZqQTR9USncofp8=/1138x1138/smart/filters:no_upscale()/bird-bill-parts-387362-hero-94dfe8a28cf74e83a36945b850bd6d4c.jpg"
    fillMode: Image.PreserveAspectFit
    Rectangle{// this rectangle acts as progress bar showing how much image has loaded
        color: "red"
        x: 0; y:950;
        height: 50
        width: 1000*image.progress//how much thye image has loaded already
        visible: image.progress != 1
    }
    onStatusChanged: console.log(sourceSize)

    
}

//si1       
//Rectangle {
//    width: 400; height: 400
//    color: "#00a3fc"
//    width: sourceSize.width
//    height: sourceSize.height
//    onStatusChanged: console.log(sourceSize)

//    Image {
//        x: 150; y: 150
//        source: "../images/rocket.png"
//    }
//}
