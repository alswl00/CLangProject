#include <iostream>
using namespace std;
class Person {
public:
	void PrintMethod() {
		cout << "Person's Method" << endl;
	}
};
class Student :public Person {
public:
	void PrintMethod() {
		Person::PrintMethod();//PersonŬ������ PrintMethod()�Լ��� ȣ���Ѵ�
		cout << "Child Method" << endl;
	}
};
int main() {
	Student student;
	Person p1;
	student.PrintMethod();
	p1.PrintMethod();
	return 0;
}