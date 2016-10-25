#include <iostream>

using namespace std;

class Msg
{
    private:
	string message;

    public:
	Msg();
	~Msg();

	void getMessage(string msg);
	void setMessage();
};
