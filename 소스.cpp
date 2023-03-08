//static 선언된 멤버는 객체의 멤버로 존재하진 않는다.
//따라서 static 선언된 함수는 private 멤버에 접근할 수 없다.
//static 멤버함수 내에서는 static 멤버함수와 변수만이 호출될 수 있다.

#include<iostream>
using namespace std;

class CountryArea
{
public:
	const static int RUSSIA = 1707540;	//const static 변수는 선언 시에 초기화해야 한다. const 변수가 이니셜라이저를 쓸 수 있다는 것과 다르다.
	const static int CANADA = 998467;
	const static int CHINA = 957290;
	const static int SOUTH_KOREA = 9922;
};

int main()
{
	cout << "러시아 면적: " << CountryArea::RUSSIA << "km^2" << endl;
	cout << "캐나다 면적: " << CountryArea::CANADA << "km^2" << endl;
	cout << "중국 면적: " << CountryArea::CHINA << "km^2" << endl;
	cout << "한국 면적: " << CountryArea::SOUTH_KOREA << "km^2" << endl;
	return 0;
}