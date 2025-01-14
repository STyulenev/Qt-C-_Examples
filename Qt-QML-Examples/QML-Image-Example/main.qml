import QtQuick 2.15
import QtQuick.Window 2.15
import QtQuick.Layouts 1.3

import MyWidgets 1.0 as MyWidgets

Window {
    id: app

    width: 640
    height: 480
    visible: true
    title: qsTr("QML-Image-Example")

    property QtObject someModel: MyWidgets.SomeModel {}

    RowLayout {
        id: layout

        anchors.centerIn: parent

        spacing: 20

        MyWidgets.ImageBox {
            height: 32
            width: 32
        }

        Image {
            width: 32
            height: 32
            source: "image://colors"
        }

        Image {
            width: 32
            height: 32
            source: someModel.image
        }
    }
}
