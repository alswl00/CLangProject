#include <iostream>
using namespace std;

class MyPerson {
private:
	int nAge = 0;
public:
	MyPerson(int nParam) :nAge(nParam) {
		cout << "MyPerson()" << endl;
	}
	//복사생성자
	MyPerson(const MyPerson &rhs) = delete;//=>복사생성자 쓰지않는다
	//안쓰면 컴파일러가 기본복사 생성자를 만들어줘서 성능 떨어짐
	int getData(void) const { return nAge; }
	void setData(int nData) { nAge = nData; }
};
void TestFunc(MyPerson param) {
	cout << "TestFunc()" << endl;
	param.setData(50);
	cout << "param: " << param.getData() << endl;
}
int main() {
	cout << "*****Begin*****" << endl;
	MyPerson p1(30);
	TestFunc(p1);
	//함수 호출 후 
	cout << "p1: " << p1.getData() << endl;
	cout << "****End*****" << endl;
	return 0;
}