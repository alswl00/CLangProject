#include <iostream>
#include <string>
using namespace std;

class MyData {
private:
	int *m_nData = nullptr;
public:
	MyData(int nParam) {
		m_nData = new int;//heap������ �޸� ����(int-4����Ʈ)
		*m_nData = nParam;
	}
	MyData(const MyData &rhs) {
		cout << "MyData(const MyData &)" << endl;
		m_nData = new int;
		*m_nData = *rhs.m_nData;
	}
	~MyData() {
		delete m_nData;		//��ü a,b ������ ��������� ������
		//�Ҹ��� ���� �� b,a ������ �Ҹ��
		cout << "called destructor!!" << endl;
	}
	int GetData() {
		if (m_nData != NULL)
			return *m_nData;
		return 0;
	}
};
int main() {
	MyData a(10);//�Ű����� 1���� ������ ȣ��
	MyData b(a);//��������ڰ� ȣ��
	//���� ���簡 �Ͼ
	cout << a.GetData() << endl;
	cout << b.GetData() << endl;
	return 0;
}