#include <iostream>
using namespace std;

class MyPerson {
public:
	MyPerson() { cout << "MyPerson()" << endl; }

	MyPerson(const MyPerson &rhs)
		// : nAge(rhs.nAge)
	{
		this->nAge = rhs.nAge;	//rhs는 p1, this는 p2
		cout << "Myperson(const MyPerson &)" << endl;
	}
	int getData(void) const { return nAge; }
	void setData(int nData) { nAge = nData; }
private:
	int nAge = 0;
};
int main() {
	MyPerson p1;//디폴트생성자호출
	p1.setData(20);

	//깊은복사
	//MyPerson p2(p1);//복사생성자호출
	//MyPerson p2 = p1;//호출됨

	//얕은복사(복사생성자호출안됨)
	MyPerson p2;
	p2 = p1;

	cout << "Person의 나이 : " << p2.getData() << endl;
	return 0;
}