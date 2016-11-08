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


/*SourceImage-------------------------------------------------------*/
    
    Image *image1;   //Image class init
    image1->showImage(src, "src", 100, 100);

/*Text--------------------------------------------------------------*/

    Msg *plaintext1 = new Msg();;   //Msg class init
    char * pMsg = 0;
    unsigned int nMsgLength = 0;

    plaintext1->setMessage();
    pMsg = plaintext1->String2Char();
    nMsgLength = plaintext1->getMsglength();
    plaintext1->setAscii();

/*Steganogrphy------------------------------------------------------*/

    Crypt *steg1 = new Crypt();   //steganography init
    Image *image2;   //dst Image init

    dst = steg1->get_Steg_level2(pMsg, nMsgLength, src);
    imwrite("steg2.jpg", dst);
    image2->showImage(dst, "dst", 600, 100);

    waitKey(0);

    destroyAllWindows(); //destroy all open windows

    return 0;
}
