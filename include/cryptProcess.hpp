#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "opencv2/opencv.hpp"

#define ADJUST 10

using namespace cv;
using namespace std;

class Crypt
{
    private:
	string cypertext;
	float fMsg[3];

    public:
	Crypt();
	~Crypt();

	void getSplitMsg(char * pMsg);
	Mat get_Steg_level1(char * pMsg, unsigned int Msglength, Mat src);   //stage 1

};
