#include <iostream>
#include <string>
using namespace std;
class Person {
private:
	string name;	//자신의 클래스 내에서만 접근
protected:
	string addr;	//상속관계에서만 접근할 수 있다
};
class Student : Person {
public:
	/*
	void setNamer(string name) {
	this->name = name;
	} */
	void setAddr(string addr) {
		this->addr = addr;
	}
	string getAddr() {
		return addr;
	}
};
int main() {
	Student student1;
	student1.addr;
	student1.setAddr("서울시 관악구 호암로 546번지");
	cout << student1.getAddr() << endl;
	return 0;
}