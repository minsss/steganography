#include <iostream>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

class Image
{
    private:

    public:
	Image();
	~Image();
	void showImage(Mat img, char *name, unsigned int w, unsigned int h);
	void showRGBValue(Mat img);

};
