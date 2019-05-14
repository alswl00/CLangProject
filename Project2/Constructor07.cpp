#include <iostream>
using namespace std;

class CRefTest {
	int &m_nData;
public:
	//참조형 멤버는 반드시 생성자 초기화 목록을 이용해 초기화 된다
	//생성자 초기화 형식을 사용하지 않으면 오류가 발생된다
	CRefTest(int &rParam) :m_nData(rParam) {};

	int GetData(void) { return m_nData; }
};

int main() {
	int a = 10;
	CRefTest t(a);

	cout << t.GetData() << endl;

	//참조원본인 a의 값이 수정되었다.
	a = 20;
	cout << t.GetData() << endl;

	return 0;
}