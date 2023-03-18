import QtQuick
import QtQml 2.15
import QtQuick.Controls 2.15
import QtQuick.Layouts 1.15
import QtQuick.Window 2.15

Item {
    id: formFourScreen

    signal clickedFourScreen
    signal clickedBack

    anchors.fill: parent

    Button {
        id: printButton
        anchors.centerIn: parent
        width: 100
        height: 50
        text: "FiveScreen"

        Connections {
            target: printButton

            function onClicked() {
                formFourScreen.clickedFourScreen()
            }
        }
    }

    Button {
        id: backButton

        anchors {
            top: parent
            left: parent
            leftMargin: 10
            topMargin: 10
        }

        width: 100
        height: 50
        text: "Back"

        Connections {
            target: backButton

            function onClicked() {
                formFourScreen.clickedBack()
            }
        }
    }
}