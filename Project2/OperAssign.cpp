#include <iostream>
using namespace std;

class Student {
private:
	char* name;
	int age;
public:
	Student(const char *name, int age) : age(age) {
		this->name = new char[20];
		strcpy_s(this->name, 20, name);
	}
	void ShowInfo() {
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	Student& operator=(Student& ref) {
		delete[] name;
		name = new char[20];
		strcpy_s(name, 20, ref.name);
		age = ref.age;
		return *this;	//this는 현재객체(st2)를 가리키는 포인터이다
		//따라서 *this는 st2의 내용이 된다
	}
	~Student() {
		delete[] name;
		cout << "~Student 소멸자 호출" << endl;
	}
};
int main() {
	Student st1("미림인", 27);
	Student st2("마이스터인", 10);
	st2 = st1;	//st2.operator=(st1)으로 변환된다
	st1.ShowInfo();
	st2.ShowInfo();
	return 0;
}