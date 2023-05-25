
#include <string>
#include <windows.h>

//#include "Header.h"

class A
{
private:
	std::string               m_WebNS{};
public:
	__declspec(property(get = get_WebNS, put = put_WebNS))
	const std::string& WebNS;
	const std::string& get_WebNS(void);
	bool               put_WebNS(const std::string& value);


};

bool A::put_WebNS(const std::string& value)
{
	m_WebNS = value;

	return true;
}

int main()
{
	auto classA = new A();
	LPCSTR lpstr = "Peter";
	classA->WebNS = lpstr;


}
