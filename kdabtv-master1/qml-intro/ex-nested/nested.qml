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
        id : root
        width: 400
        height: 400
        color: "grey"

        Rectangle {
            id: blue
                color: "lightblue"
                x: 50
                y: 50
                width: root.width - 100
                height: root.height/2 - 50
                Rectangle {
                        x: 50; y: 50
                        width: 50; height: 50
                        color: "blue"
                    }
            }
        Rectangle {
                color: "#aa00ff"       //"green"
                x: 50
                y: 150
                width: blue.x + blue.height
                height: 150
                //clip: true//mujhse koi bahar jane ki kosis karega, the i'll clip that.
                Rectangle {
                        x: -100
                        y: 50
                        width: 150
                        height: 50
                        color: "white"
                        clip: true
                    }
            }
    }






//Item {
////    width = 400 Error Expected Token ':"                    remember we're talkin about property bindings
////    height = 400                                            NOT assignment

//    width: 600
//    height: 600

//    Rectangle {
//        width: 400
//        height: 400
//        color: "grey"
        
//        Rectangle {
//                color: "lightblue"
//                x: 50
//                y: 50
//                width: 300
//                height: 150
//                Rectangle {
//                        x: 50; y: 50
//                        width: 50; height: 50
//                        color: "blue"
//                    }
//            }
//        Rectangle {
//                color: "#aa00ff"       //"green"
//                x: 50
//                y: 150
//                width: 300
//                height: 150
//                clip: true//mujhse koi bahar jane ki kosis karega, the i'll clip that.
//                Rectangle {
//                        x: -100
//                        y: 50
//                        width: 150
//                        height: 50
//                        color: "white"
//                        clip: true
//                    }
//            }
//    }
//}
