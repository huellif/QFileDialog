import QtQuick 1.1
import com.nokia.symbian 1.1

Page {
    id: mainPage

    Column{

        Label {
            id:output
        }

        Button {
            text: "Long popup_fixed"
            onClicked:
            {
                //output.text=Helper.getFile()
                //or: (you can do the same in Qt/C++)
                var test=Helper.getFile()
                if(test=="") output.text="empty"
                else output.text=(test)
            }
        }
    }
}
