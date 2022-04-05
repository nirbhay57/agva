/*************************************************************************
 *
 * Copyright (c) 2013-2019, Klaralvdalens Datakonsult AB (KDAB)
 * All rights reserved.
 *
 * See the LICENSE.txt file shipped along with this file for the license.
 *
 *************************************************************************/

import QtQuick 2.0


Item {//3
    width: 500; height: 500//initial window size

    Rectangle {
        x: 100; y: 50
        height: 100
        width: height*2
        color: "lightblue"

    }
    Rectangle {
        x: 100; y: 120; z:-1
        height: 100
        width: height*2
        color: "green"

    }

}


//Item {
//    width: 400; height: 200

//    Rectangle {
//        x: 100; y: 50
//        height: 100
//        width: height*2
//        color: "lightblue"

//    }
//    Rectangle {
//        x: 100; y: 120
//        height: 100
//        width: height*2
//        color: "green"

//    }

//}


//Item {
//    width: 400; height: 200

//    Rectangle {
//        x: 100; y: 50
//        height: 100
//        width: foo()
//        color: "lightblue"
//        function foo(){
//            console.log("Hello World", height)
//            return height * 2
//        }
//    }
//    Rectangle {
//        x: 100; y: 170
//        height: 100
//        width: foo()
//        color: "green"
//        function foo(){
//            console.log("Hello World", height)
//            return height * 2
//        }
//    }

//}



//Item {
//    width: 400; height: 200

//    Rectangle {
//        x: 100; y: 50
//        height: 100
//        width: foo()
//        color: "lightblue"
//        function foo(){
//            console.log("Hello World", height)
//            return height * 2
//        }
//    }

//}
