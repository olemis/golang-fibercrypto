import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12

// Resource imports
// import "qrc:/ui/src/ui/Controls"
import "../Controls" // For quick UI development, switch back to resources when making a release

Dialog {
    id: dialogEditWallet

    property string initialText
    property string newLabel

    title: Qt.application.name
    standardButtons: Dialog.Ok | Dialog.Cancel
    closePolicy: Dialog.NoAutoClose

    Component.onCompleted: {
        standardButton(Dialog.Ok).enabled = initialText
    }

    onAboutToShow: {
        textFieldName.forceActiveFocus()
    }

    

    ColumnLayout {
        id: columnLayoutRoot
        anchors.fill: parent

        Label {
            text: qsTr("Name")
            font.bold: true
            Layout.fillWidth: true
        }
        TextField {
            id: textFieldName
            Layout.fillWidth: true
            placeholderText: qsTr("Wallet's name")
            text: initialText
            selectByMouse: true
            focus: true

            onTextChanged: {
                standardButton(Dialog.Ok).enabled = text
                newLabel = text
            }
        }
    } // ColumnLayout (root)
}