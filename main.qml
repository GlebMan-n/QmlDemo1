import QtQuick 2.15
import QtQuick.Window 2.15
import com.company.movieplayer 1.0
Window {
    width: 480
    height: 480
    visible: true
    title: qsTr("Movie player")
    Rectangle {
        id: root
        MoviePlayer {
            onSignSetBackgroundOpacity: {
                console.log("onSignSetBackgroundOpacity ", opacity)
                background.opacity = opacity;
            }
            onSignSetPulseOpacity: {
                console.log("onSignSetPulseOpacity ", opacity)
                pulse.opacity = opacity;
            }
            onSignSetTextOpacity: {
                console.log("onSignSetTextOpacity ", opacity)
                txt.opacity = opacity;
            }
            onSignSetBackgroundPic: background.source = path;
        }
        anchors.fill: parent
        Image {
            id: background
            anchors.fill: parent
            source: "qrc:/bNsFIa.jpg"
            opacity: 0.5
            visible: true
        }
        Image {
            id: pulse
            anchors.centerIn: parent
            source: "qrc:/glow.png"
            opacity: 0.5
            visible: true
        }
        Text {
            font {
                family: "Arial"
                pointSize: 24
            }
            visible: true
            opacity: 0.5
            color: "red"
            id: txt
            anchors.centerIn: parent
            text: qsTr("<b>WIFI:IIII</b>")
        }
    }
}
