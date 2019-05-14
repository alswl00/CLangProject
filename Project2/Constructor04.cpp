#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	//생성자 매개변수로 전달된 값으로 멤버변수를 초기화한다.
	CTest(int nParam) :m_nData(nParam) {	//멤버변수 목록 초기화
		//m_nData = nParam;  =>대입문
		cout << "CTest::CTest()" << endl;
	}
	~CTest() {
		//생성할때 매개변수로 받은 값을 출력한다
		cout << "~CTest::CTest()" << m_nData << endl;
	}
};

int main() {
	cout << "Begin" << endl;
	CTest a(10);//CTest a; => 오류발생
	cout << "Before b" << endl;
	CTest b(20);
	cout << "End" << endl;

	return 0;
}