#include "cryptProcess.hpp"

Crypt::Crypt()
{
	cypertext = "";
	fill_n(fMsg, 3, 0.f);
}

Crypt::~Crypt()
{

}

void Crypt::getSplitMsg(char * pMsg)
{
    unsigned int nMsg;
    unsigned int nRemainder;

    srand((unsigned int)time(NULL));

    for(int i = 0; pMsg[i]; i++)
    {
	nMsg = pMsg[i];

	for(int j = 0; j < 3; j++)
	{
	    nRemainder = rand() % (nMsg + 1);
	    nMsg -= nRemainder;

	    if(j != 2) fMsg[j] = nRemainder;
	    else fMsg[j] = nMsg + nRemainder;

	    //cout << nMsg << " " << nRemainder << "    ";
	}
	
	cout << fMsg[0] + fMsg[1] + fMsg[2];
    }

    cout << endl;
}

void Crypt::getSplitMsg(char pMsg, RNG rng)
{
    unsigned int nMsg;
    unsigned int nRemainder;

    nMsg = pMsg;

    for(int i = 0; i < 3; i++)
    {
	nRemainder = rng.uniform(0, 10000) % (nMsg + 1);
	nMsg -= nRemainder;

	if(i != 2) fMsg[i] = nRemainder;
	else fMsg[i] = nMsg + nRemainder;

    }
}

Mat Crypt::get_Steg_level1(char * pMsg, unsigned int Msglength, Mat src)
{
    Mat dst;
    dst = src + Scalar(-75, -75, -75);
    //dst = Mat::zeros(src.size(), src.type());

    for(int j = src.rows/3 + STEG1_ADJUST_ROWS; j < src.rows/3 + Msglength + STEG1_ADJUST_ROWS; j++) {
	for(int i = 0; i < src.cols; i++) {

	    for(int c = 0; c < 3; c++)
	    {
		//j - (src.rows/3 + ADJUST) = 0
		dst.at<Vec3b>(j, i)[c] = saturate_cast<uchar>(dst.at<Vec3b>(j, i)[c] + pMsg[j - (src.rows/3 + STEG1_ADJUST_ROWS)]);
	    }
	    //cout << "(" << i << ", " << j << ")" << endl;
	}
    }

    return dst;
}

Mat Crypt::get_Steg_level2(char * pMsg, unsigned int Msglength, Mat src)
{
    Mat dst;
    dst = src;

    RNG rng;

    for(int j = 90; j < 140; j++) {
	rng.next();
	for(int i = src.cols/2 - STEG2_ADJUST_COLS; i < src.cols/2 - STEG2_ADJUST_COLS + Msglength; i++) {

	    getSplitMsg(pMsg[i - (src.cols / 2 - STEG2_ADJUST_COLS)], rng);   //i - src.cols / 2 = 0
	    
	    for(int c = 0; c < 3; c++)
	    {
		dst.at<Vec3b>(j, i)[c] = saturate_cast<uchar>(src.at<Vec3b>(j, i)[c] + fMsg[c]);
		
		//cout << fMsg[c] << " ";
	    }
	    //cout << endl;
	}
    //cout << "------------------------------------------" << endl;
    }

    return dst;
}
