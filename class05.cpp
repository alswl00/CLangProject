#include <iostream>
using namespace std;

class Student {
private:
	char *name;
	int age;
public:
	Student(const char* myname, int myage) { 
		int len = strlen(myname) + 1;	//null�� ����
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	void ShowStudentInfo() {
		cout << "�̸�: " << name << endl;
		cout << "���� : " << age << endl;
	}
	~Student() {
		delete []name;
		cout << "classed destructor! "<<this->age << endl;
		//�Ҹ��ڴ� �������� �Ҹ��.
		//�Ҵ�� ��� �迭�� ����(�޸� ����)��.
		//delete�� []�� �Ⱦ��� �迭�� ù��° ��Ҹ� ������(������ �ȶ�).
	}
};
int main(void) {
	Student student1("lee mee rim", 33);
	Student student2("hong gil dong", 34);
	student1.ShowStudentInfo();
	student2.ShowStudentInfo();

	return 0;	//�Ҹ��ڴ� ���α׷� �����ϱ� ���� �ڵ����� ȣ��ȴ�.
	//������ ��ü ���� ��ŭ �Ҹ��ڰ� ȣ��ȴ�.
}