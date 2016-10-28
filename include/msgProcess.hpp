#include <iostream>
#include <string>

#define cMsg_MAX 512

using namespace std;

class Msg
{
    private:
	string sMsg;
	char cMsg[cMsg_MAX];

    public:
	Msg();
	~Msg();

	void getMessage(string msg);
	void setMessage();

	unsigned int getMsglength();

	char * String2Char();
	void setAscii();
};
