//
// Created by 聂师聪 on 2019-04-09.
// How to scan images, lookup tables and time measurement with OpenCV
//

#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>

#include <iostream>
#include <string>
#include <sstream>

using namespace cv;
using namespace std;

int main(int argc, char** argv) {
    auto t = (double) getTickCount();

    stringstream ss;
    int divideWith;
    ss << argv[1];
    ss >> divideWith;
    cout << divideWith << endl;

    t = ((double) getTickCount() - t) / getTickFrequency();
    cout << t << endl;

    Mat m(3, 3, CV_8UC3, Scalar::all(0));
    cout << m << endl;
    int channels = m.channels();

    int nRows = m.rows;
    int nCols = m.cols * channels;
    if (m.isContinuous())
        nCols *= nRows;
    if (!m.isContinuous()) cout << "sss" << endl;
    auto it = m.begin<uchar>();
    m = imread("../image/lena.jpg");
    namedWindow("lena", WINDOW_AUTOSIZE);
    imshow("lena", m);
    waitKey();
}


