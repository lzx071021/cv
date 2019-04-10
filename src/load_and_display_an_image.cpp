//
// Created by 聂师聪 on 2019-04-09.
// Load and Display an image
//

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>

using namespace std;
using namespace cv;

int main() {
    string imageName("../image/lena.jpg");
    Mat image = imread(imageName, IMREAD_COLOR);

    namedWindow("Display window", WINDOW_AUTOSIZE);

    imshow("Display window", image);

    waitKey(5000);

    return 0;
}

