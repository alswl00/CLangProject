#include <iostream>
using namespace std;

class CRefTest {
	int &m_nData;
public:
	//������ ����� �ݵ�� ������ �ʱ�ȭ ����� �̿��� �ʱ�ȭ �ȴ�
	CRefTest(int rParam) :m_nData(rParam) {
	//rParam�� �Ű������̹Ƿ� ������ ȣ���� ������ �����ȴ�
	//rParam�� �����̱� ������ m_nData�� �����ȴ�
		cout << "������" << m_nData << endl;
	};

	int GetData(void) { return m_nData; }
};

int main() {
	int a = 10;
	CRefTest t(a);

	cout << t.GetData() << endl;

	//���������� a�� ���� �����Ǿ���.
	a = 20;
	cout << t.GetData() << endl;

	return 0;
}