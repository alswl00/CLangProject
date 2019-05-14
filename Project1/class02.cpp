#include <iostream>
using namespace std;

class Student {
private:
	int nHakbun;
	const char* sName;
public:
	Student();
	void show();
};

Student::Student() {
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}

void Student::show() {
	cout << "학번은 " << nHakbun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl;
}
int main() {
	Student student1;
	student1.show();
	return 0;//소멸자가 없을 경우에는 컴파일러가 기본소멸자 생성해서 호출
}