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
    Mat dst;
    src = imread( argv[1] , CV_LOAD_IMAGE_COLOR);

    if(src.empty())
    {
	cout << "Image cannot be loaded..!!" << endl;
        return -1;
    }

    char * pMsg = 0;
    unsigned int nMsgLength = 0;

    //Image image1 = Image();   //Image class init
    Image image2 = Image();
    Msg plaintext1 = Msg();   //Msg class init
    Crypt steg1 = Crypt();

    //image1.showImage(src);
    //image1.showRGBValue(src);

    plaintext1.setMessage();
    pMsg = plaintext1.String2Char();
    nMsgLength = plaintext1.getMsglength();
    plaintext1.setAscii();

    //dst = steg1.get_Steg_level1(pMsg, nMsgLength, src);
    //imwrite("steg1.jpg", dst);
    //image2.showImage(dst);

    dst = steg1.get_Steg_level2(pMsg, nMsgLength, src);
    imwrite("steg2.jpg", dst);
    image2.showImage(dst);

    waitKey(0);

    destroyAllWindows(); //destroy all open windows

    return 0;
}
