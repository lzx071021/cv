//
// Created by 聂师聪 on 2019-04-12.
// Basic Drawing
//

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>
#include <string>
#include <vector>

using namespace cv;
using namespace std;

int main() {
    Mat img(400, 400, CV_8UC3);

    line(img, Point(0, 0), Point(100, 100), Scalar(0, 255, 255), 2, LINE_8);
    ellipse(img, Point(200, 200), Size(100, 400/16), 0, 0, 360, Scalar(255, 0, 0));
    rectangle(img, Point(0, 0), Point(400, 400), Scalar(0, 255, 255), 2);
    imshow("line", img);

    waitKey();

    return 0;
}

