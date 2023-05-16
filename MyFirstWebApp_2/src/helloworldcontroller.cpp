#include "helloworldcontroller.h"

HelloWorldController::HelloWorldController(QObject* parent)
    : HttpRequestHandler(parent) {
    // empty
}

HelloWorldController::~HelloWorldController() {
    // empty
}

void HelloWorldController::service(HttpRequest &request, HttpResponse &response) {
    QString str = "";
    for (int i = 0; i < 12852; ++i) {
        if(str.size() > 66000){break;}
        // https://stackoverflow.com/questions/3211771/how-to-convert-int-to-qstring
        str += QString::number(i) + "\n";
    }
    // https://forum.qt.io/topic/83805/how-to-transfer-qstring-to-qbytearray/4
    response.write(str.toUtf8());

    //response.write("Greetings to the reader!");
}
