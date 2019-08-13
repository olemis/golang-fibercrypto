import QtQuick 2.12
import QtQuick.Layouts 1.12
import QtQuick.Controls 2.12

Dialog {
    id: dialogQR

    property alias imagePath: imageQR.source
    property var text

    title: Qt.application.name + " - QR" + text
    standardButtons: Dialog.Close

    Image {
        id: imageQR
        anchors.fill: parent

        fillMode: Image.PreserveAspectFit
        verticalAlignment: Qt.AlignTop
    }
}