#include "msgProcess.hpp"

Msg::Msg()
{
	sMsg = "This is not Lena you used to know";
	fill_n(cMsg, cMsg_MAX, 0);
}

Msg::~Msg()
{

}

void Msg::getMessage(string msg)
{
	sMsg = msg;
}

void Msg::setMessage()
{
	cout << sMsg << endl;
}

char * Msg::String2Char()
{
    for (int i = 0; i < sMsg.length(); i++)
    {
	cMsg[i] = sMsg.at(i);
	
    }
    cMsg[sMsg.length()] = 0;

    return cMsg;
}

void Msg::setAscii()
{
    int j;
    for(int i = 0; i < sizeof(cMsg); i++)
    {
	if(cMsg[i] == 0) break;
	j = cMsg[i];
	cout << j;
    }
    cout << endl;
}
