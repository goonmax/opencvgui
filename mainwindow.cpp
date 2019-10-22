#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "opencv2/core.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include "opencv2/objdetect.hpp"
#include <opencv2/opencv.hpp>
#include <QCamera>
#include <QCameraViewfinder>
#include <QCameraImageCapture>
#include <QVBoxLayout>
#include <iostream>

using namespace std;
using namespace cv;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

}
MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
   VideoCapture cap("C:/Users/chety/Videos/faces/100happyfaces.mp4");
   while(cap.isOpened() == false)
   {
       cout << "cannot open file rest in peace sweet prince" << endl;
       cin.get();
       break;
   }

auto fps = cap.get(CAP_PROP_FPS);
cout << "frames per second(FPS):  " << fps <<  endl;



auto window_name = "loaded video bayah";
        namedWindow(window_name, WINDOW_NORMAL);




while(true)
{
    Mat frame;
    bool Success = cap.read(frame);
    if(Success  == false)
    {
        cout << "video has finished " << endl;
        break;
    }
imshow(window_name, frame);
if (waitKey(10) == 27)
{
cout << "esc has been pressed now blowing up kaboom" << endl;
break;


}
}

// same thing but for faces now.

}

void MainWindow::on_pushButton_2_clicked()
{
    VideoCapture cap(0);

    if (cap.isOpened() == false)
    {
        cout << "you're knees deep in fail whale, rest in peace sweet prince" << endl;

    }

    auto width = cap.get(CAP_PROP_FRAME_WIDTH);
    auto height = cap.get(CAP_PROP_FRAME_HEIGHT);

    cout << "resoluation of this vido is : " << width << height << endl;


    auto window_name = "my cam feed lmao";
    namedWindow(window_name);



    while(true)
    {
        Mat frame;
        bool success = cap.read(frame);


        if(success == false)
        {
            cout << "video camra is disconnected" << endl;

            break;
        }
Size frame_size(width, height);
auto camfps = 10;





VideoWriter vidwrite("C:/Users/chety/Videos", VideoWriter::fourcc('m', 'j', 'p', 'g'), camfps, frame_size, true);
imshow(window_name, frame);

    if(waitKey(10) == 27)
    {
        cout << "Exiting now lmao" << endl;
        break;
    }

}
































}

void MainWindow::on_pushButton_3_clicked()
{

}
