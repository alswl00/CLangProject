#include <iostream>
using namespace std;

class CTest {
	int m_nData;
public:
	//������ �Ű������� ���޵� ������ ��������� �ʱ�ȭ�Ѵ�.
	CTest(int nParam) :m_nData(nParam) {	//������� ��� �ʱ�ȭ
		//m_nData = nParam;  =>���Թ�
		cout << "CTest::CTest()" << endl;
	}
	~CTest() {
		//�����Ҷ� �Ű������� ���� ���� ����Ѵ�
		cout << "~CTest::CTest()" << m_nData << endl;
	}
};

int main() {
	cout << "Begin" << endl;
	CTest a(10);//CTest a; => �����߻�
	cout << "Before b" << endl;
	CTest b(20);
	cout << "End" << endl;

	return 0;
}