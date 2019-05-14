#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	CTest()  { cout << "CTest::CTest()" << endl; }
	~CTest() { cout << "~CTest::CTest()" << m_nData << endl; }
};

int main() {
	cout << "Begin" << endl;
	//배열로 연산을 수행할 수 있다
	CTest *pData = new CTest[3];//CTest[3]()로 표현해도 된다
	cout << "Test" << endl;

	//배열로 생성한 것은 반드시 배열로 삭제한다
	//배열로 생성한 객체를 배열로 삭제하지 않으면 첫번째 요소 하나만 소멸한다
	delete[] pData;//delete pData; =>오류 발생
	//pData가 가리키는 배열의 모든 객체를 삭제한다
	//소멸자도 3번 호출된다

	return 0;
}