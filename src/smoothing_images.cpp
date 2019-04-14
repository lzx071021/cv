//
// Created by 聂师聪 on 2019-04-13.
// Smoothing Images
//

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>

using namespace cv;
using namespace std;

int main() {
    Mat src(400, 400, CV_8UC3);
    line(src,{0, 0}, {400, 400}, Scalar(255,255,255));
    imshow("dda", src);
    cout << waitKey();
    return 0;
}

