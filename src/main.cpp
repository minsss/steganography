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

    char * pMsg = 0;

    Image image1 = Image();   //Image class init
    Msg plaintext1 = Msg();   //Msg class init
    Crypt steg1 = Crypt();

    image1.showSrcImage(src);
    //image1.showRGBValue(src);

    plaintext1.setMessage();
    pMsg = plaintext1.String2Char();
    plaintext1.setAscii();

    steg1.get_Steg_level1(pMsg);


    waitKey(0);

    destroyAllWindows(); //destroy all open windows

    return 0;
}
