#include "mainwindow.h"
#include "login.h"
#include <QApplication>
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/objdetect.hpp"


using namespace std;
using namespace cv;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    login l;
    l.show();




    return a.exec();
}



