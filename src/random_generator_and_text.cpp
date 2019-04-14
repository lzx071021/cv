//
// Created by 聂师聪 on 2019-04-12.
//

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>

using namespace cv;
using namespace std;

int main() {
    Mat img(400,400,CV_8UC3);
    imshow("das", img);
    if (waitKey(5000) >= 0)
        cout << "a" << endl;
}

