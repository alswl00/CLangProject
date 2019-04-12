#include <iostream>
using namespace std;

class Student {
private:
	char *name;
	int age;
public:
	Student(const char* myname, int myage) { 
		int len = strlen(myname) + 1;	//null값 포함
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	void ShowStudentInfo() {
		cout << "이름: " << name << endl;
		cout << "나이 : " << age << endl;
	}
	~Student() {
		delete []name;
		cout << "classed destructor! "<<this->age << endl;
		//소멸자는 역순으로 소멸됨.
		//할당된 모든 배열을 삭제(메모리 삭제)함.
		//delete에 []를 안쓰면 배열의 첫번째 요소만 삭제됨(에러는 안뜸).
	}
};
int main(void) {
	Student student1("lee mee rim", 33);
	Student student2("hong gil dong", 34);
	student1.ShowStudentInfo();
	student2.ShowStudentInfo();

	return 0;	//소멸자는 프로그램 종료하기 전에 자동으로 호출된다.
	//생성한 객체 갯수 만큼 소멸자가 호출된다.
}