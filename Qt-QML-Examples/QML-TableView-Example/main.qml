import QtQuick
import QtQuick.Controls 2.15
import QtQml 2.15
import QtQuick.Layouts 1.15

// Import C ++ class
import TableTable 0.1 as Models

import "qml/Widgets/" 1.0 as Widgets

Window {
    id: appWindow
    width: 640
    height: 480
    visible: true

    property QtObject currentModel: Models.TableModel{}

    Widgets.TableViewData {
        id: tableView
        anchors.fill: parent

        hasHorizontalHeader: true
        hasHorizontalSeparator: true

        model: currentModel
    }
}
