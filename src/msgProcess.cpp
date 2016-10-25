#include "msgProcess.hpp"

Msg::Msg()
{
	message = "This is not Lena you used to know";
}

Msg::~Msg()
{

}

void Msg::getMessage(string msg)
{
	message = msg;
}

void Msg::setMessage()
{
	cout << message << endl;
}
