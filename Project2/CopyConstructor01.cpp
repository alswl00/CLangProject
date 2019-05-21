#include <iostream>
using namespace std;

class MyPerson {
public:
	MyPerson() { cout << "MyPerson()" << endl; }

	MyPerson(const MyPerson &rhs)
		// : nAge(rhs.nAge)
	{
		this->nAge = rhs.nAge;	//rhs�� p1, this�� p2
		cout << "Myperson(const MyPerson &)" << endl;
	}
	int getData(void) const { return nAge; }
	void setData(int nData) { nAge = nData; }
private:
	int nAge = 0;
};
int main() {
	MyPerson p1;//����Ʈ������ȣ��
	p1.setData(20);

	//��������
	//MyPerson p2(p1);//���������ȣ��
	//MyPerson p2 = p1;//ȣ���

	//��������(���������ȣ��ȵ�)
	MyPerson p2;
	p2 = p1;

	cout << "Person�� ���� : " << p2.getData() << endl;
	return 0;
}