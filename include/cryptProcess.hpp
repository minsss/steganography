#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "opencv2/opencv.hpp"

#define STEG1_ADJUST_ROWS 10
#define STEG2_ADJUST_COLS 10

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
	void getSplitMsg(char cMsg, RNG rng);
	Mat get_Steg_level1(char * pMsg, unsigned int Msglength, Mat src);   //stage 1
	Mat get_Steg_level2(char * pMsg, unsigned int Msglength, Mat src);   //stage 2

};
