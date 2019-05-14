#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
	string name;
	int age;
	int salary;
public:
	void setter();
	void getter();
};

void Employee::setter() {
	name = "¿ÃπÃ∏≤";
	age = 29;
	salary = 4500000;
}

void Employee::getter() {
	cout << "Employee1:" << endl;
	cout << name << endl;
	cout << age << endl;
	cout << salary << endl;
}

int main() {
	Employee employee1;
	employee1.setter();
	employee1.getter();

	return 0;
}