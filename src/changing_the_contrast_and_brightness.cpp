//
// Created by 聂师聪 on 2019-04-10.
// Changing the contrast and brightness of an image
//

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

#include <cmath>
#include <iostream>
#include <string>

using namespace cv;
using namespace std;

int main() {
    Mat image = imread("../image/lena.jpg");
    Mat new_image = Mat::zeros(image.size(), image.type());

    double alpha = 2.2;
    int beta = 50;

    // alpha, beta correction
//    image.convertTo(new_image, -1, alpha, beta);

//    for (int y = 0; y < image.rows; ++y)
//        for (int x = 0; x < image.cols; ++x)
//            for (int c = 0; c < image.channels(); ++c)
//                new_image.at<Vec3b>(y, x)[c] = saturate_cast<uchar>(alpha * image.at<Vec3b>(y, x)[c] + beta);

    // gamma correction
    Mat lut(1, 256, CV_8U);
    auto *p = lut.ptr<uchar>();
    double gamma = 0.4;
    for (int i = 0; i < lut.cols; ++i)
        p[i] = saturate_cast<uchar>(pow(i / 255.0, gamma) * 255);
    LUT(image, lut, new_image);

    imshow("Original Image", image);
    imshow("New Image", new_image);

    waitKey();

    return 0;
}

