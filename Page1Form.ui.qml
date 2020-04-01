import QtQuick 2.12
import QtQuick.Controls 2.5

Page {
    width: 600
    height: 400
    title: {
        propertyTest.testString = "Title"
        var a = propertyTest.testString
        a
    }

    Label {
        text: qsTr("You are on Page 1.")
        anchors.centerIn: parent
    }
}
