#include <iostream>
#include "opencv2/opencv.hpp"
#include "imageProcess.hpp"
#include "cryptProcess.hpp"
#include "msgProcess.hpp"

using namespace cv;
using namespace std;

int main(int argc, const char** argv)
{
    if(argc != 2)
    {
	cout << "./s 'image_path_name'" << endl;
	return -1;
    }

    Mat src; 
    src = imread( argv[1] , CV_LOAD_IMAGE_COLOR);

    if(src.empty())
    {
	cout << "Image cannot be loaded..!!" << endl;
        return -1;
    }

    Image image1 = Image();

    image1.showSrcImage(src);
    //image1.showRGBValue(src);

    Msg plaintext1 = Msg();

    plaintext1.setMessage();


    waitKey(0);

    destroyAllWindows(); //destroy all open windows

    return 0;
}
