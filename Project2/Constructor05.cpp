#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	CTest() { cout << "CTest::CTest()" << endl; }
	~CTest() {cout << "~CTest::CTest()" << m_nData << endl;}
};

int main() {
	cout << "Begin" << endl;
	//new 연산자를 이용해 동적으로 객체를 생성한다.
	CTest *pData = new CTest();
	cout << "Test" << endl;
	//delete 연산자를 이용해 객체를 삭제한다.
	delete pData;
	//pData가 가리키는 heap영역에 있는 메모리 삭제
		//소멸자를 호출한다.

	return 0;
}