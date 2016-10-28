#include "cryptProcess.hpp"

Crypt::Crypt()
{
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

Mat Crypt::get_Steg_level1(char * pMsg, unsigned int Msglength, Mat src)
{
    Mat dst;
    dst = src + Scalar(-75, -75, -75);
    //dst = Mat::zeros(src.size(), src.type());
    
    getSplitMsg(pMsg);

    for(int j = src.rows/3 + ADJUST; j < src.rows/3 + Msglength + ADJUST; j++) {
	for(int i = 0; i < src.cols; i++) {

	    for(int c = 0; c < 3; c++)
	    {
		dst.at<Vec3b>(j, i)[c] = saturate_cast<uchar>(src.at<Vec3b>(j, i)[c] + pMsg[j - (src.rows/3 + ADJUST)]);
	    }
	    //cout << "(" << i << ", " << j << ")" << endl;
	}
    }

    return dst;
}
