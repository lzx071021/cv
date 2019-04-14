//
// Created by 聂师聪 on 2019-04-10.
// Adding (blending) two images using OpenCV
//

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>
#include <string>

using namespace cv;
using namespace std; // Not recommended here: to avoid collisions between
                     // the beta variable and std::beta in C++17

int main() {
    double alpha = 0.5, beta = 1.0 - alpha;
    Mat src1, src2, dst;
    src1 = imread("../image/LinuxLogo.jpg");
    src2 = imread("../image/WindowsLogo.jpg");
    addWeighted(src1, alpha, src2, beta, 0.0, dst);
    imshow("Linear Blend", dst);
    waitKey();

    return 0;
}

