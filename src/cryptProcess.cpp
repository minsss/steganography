#include "cryptProcess.hpp"

Crypt::Crypt()
{
	fill_n(fMsg, 3, 0.f);
}

Crypt::~Crypt()
{

}

void Crypt::get_Steg_level1(char * pMsg)
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
