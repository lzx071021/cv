//
// Created by 聂师聪 on 2019-04-09.
// Load, Modify, and Save an Image
//

#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {
    string imageName("../image/Gray_Image.jpg");
    Mat image = imread(imageName, IMREAD_COLOR);

    Mat gray_image;
    cvtColor(image,  gray_image, COLOR_BGR2GRAY);

    imwrite("../image/Gray_Image2.jpg", gray_image);

    namedWindow(imageName, WINDOW_AUTOSIZE);
    namedWindow("Gray image", WINDOW_AUTOSIZE);

    imshow(imageName, image);
    imshow("Gray image", gray_image);
    waitKey(0);

    return 0;
}

