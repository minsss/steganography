#include "imageProcess.hpp"

Image::Image()
{

}

Image::~Image()
{

}

void Image::showImage(Mat img, char * name, unsigned int w, unsigned int h)
{
    //Mat imgH = img + Scalar(75, 75, 75); //increase the brightness by 75 units
    //Mat imgL = img + Scalar(-75, -75, -75); //decrease the brightness by 75 units

    namedWindow(name, CV_WINDOW_AUTOSIZE);
    moveWindow(name, w, h);
    imshow(name, img);
}

void Image::showRGBValue(Mat img)
{
    for(int i = 0; i < img.cols; i++) {
	for(int j = 0; j < img.rows; j++) {
	    Vec3b bgrPixel = img.at<Vec3b>(j, i);
	    float r = bgrPixel[2];
	    float g = bgrPixel[1];
	    float b = bgrPixel[0];
	    cout << "(" << j << ", " << i << ")" << " " << r << " " << g << " " << b << endl;
	}
    }
}
