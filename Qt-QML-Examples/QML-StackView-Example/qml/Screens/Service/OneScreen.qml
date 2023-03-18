import QtQuick
import QtQml 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtQuick.Window 2.15

import Screens 1.0 as Screens

OneScreen_Form {
    id: formOneScreen
    objectName: "OneScreen"

    Component {
        id: componentTwoScreen
        Screens.ScreenLoader {
            screenName: "TwoScreen"
            screen: Screens.TwoScreen {}
        }
    }

    onClickedTwoScreen: {
        console.log("Open TwoScreen")
        push(componentTwoScreen)
    }

    onClickedBack: {
        console.log("Back")
        exit()
    }
}