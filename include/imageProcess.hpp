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
	void showSrcImage(Mat img);
	void showRGBValue(Mat img);

};
