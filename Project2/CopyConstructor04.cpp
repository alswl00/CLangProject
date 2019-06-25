#include <iostream>
using namespace std;

class MyPerson {
public:
	MyPerson(int nParam) :nAge(nParam) {
		cout << "MyPerson()" << endl;
	}
	//복사생성자
	MyPerson(const MyPerson &rhs) :nAge(rhs.nAge) {
		//rhs는 p1이 된다. 그리고 nAge(rhs.nAge)은 param에 있는
		//nAge에게 값을 전달
		cout << "MyPerson(const MyPerson &)" << endl;
	}
	int getData(void) const { return nAge; }
	void setData(int nData) { nAge = nData; }
private:
	int nAge = 0;
};
//매개변수가 MyPerson 클래스 형식이므로 복사 생성자가 호출된다
void TestFunc(MyPerson &param) {
	//MyPerson param=p1과 같은 문장이다
	//선언과 동시에 객체의 값을 저장할때는 복사생성자가 호출된다
	cout << "TestFunc()" << endl;
	//피 호출자 함수에서 매개변수 인스턴스의 값을 변경
	param.setData(50);
	cout << "param: " << param.getData() << endl;
}
int main() {
	cout << "*****Begin*****" << endl;
	MyPerson p1(30);//매개변수 1개인 생성자 호출
	TestFunc(p1);//객체가 전달된다
	//함수 호출 후 p1값을 출력
	cout << "p1: " << p1.getData() << endl;
	cout << "****End*****" << endl;
	return 0;
}