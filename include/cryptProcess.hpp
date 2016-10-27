#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "opencv2/opencv.hpp"

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

	void get_Steg_level1(char * pMsg);

};
