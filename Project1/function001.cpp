#include <iostream>
using namespace std;

int sum(int op1, int op2) {
	return op1 + op2;
}

void display();

int main() {
	int print = sum(2, 3);
	cout << "sum �Լ��� ȣ���ϰ� ���� ��� ���� " << print << endl;
	display();

	return 0;
}

void display() {
	cout << "display �Լ��� ��ȯ���� ���� �Լ� " << endl;
	return;
}