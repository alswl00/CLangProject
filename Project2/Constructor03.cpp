#include <iostream>
using namespace std;

class CTest {
public:
	CTest() { cout << "CTest::CTest()" << endl; }
	~CTest() { cout << "~CTest::CTest()" << endl; }
};

int main() {
	cout << "Begin a" << endl;
	CTest a;
	cout << "Begin b" << endl;
	CTest b;
	cout << "End" << endl;

	return 0;//소멸자 2번 호출
}