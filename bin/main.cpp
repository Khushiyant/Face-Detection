#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/objdetect.hpp>

using namespace std;
using namespace cv;

int main()
{
    #pragma region // declaraction

    VideoCapture cap(0);
    Mat img;
    CascadeClassifier faceCascade;
    vector<Rect> faces;

    #pragma endregion

    faceCascade.load("C:/Program Files/opencv/build/etc/haarcascades/haarcascade_frontalface_default.xml"); // Location to xml file

    if(faceCascade.empty())
        cout<<"XML not loaded!"<<endl;
    else
        while(true)
        {
        cap.read(img);
        faceCascade.detectMultiScale(img,faces,1.1,10);

        for(int i=0;i<faces.size();i++)
            rectangle(img,faces[i].tl(),faces[i].br(),Scalar(255,255,255),3);
        imshow("Color",img);
        waitKey(1);
        }
    return 0;
}
