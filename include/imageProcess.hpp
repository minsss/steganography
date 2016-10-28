#include <iostream>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

class Image
{
    private:
	int x;
	int y;

    public:
	Image();
	~Image();
	void showImage(Mat img);
	void showRGBValue(Mat img);

};
