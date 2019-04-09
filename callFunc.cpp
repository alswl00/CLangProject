#include <iostream>
using namespace std;
void swap_value(int a, int b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "a : " << a << "    b : " << b << endl;
}

void swap_pointer(int *a, int *b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void swap_reference(int &a,int &b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main() {
	int num1, num2;
	cout << "두 개의 수를 입력하시오 >> ";
	cin >> num1;
	cin >> num2;
	cout << "a : " << num1 << "    b : " << num2 << endl;
	swap_value(num1, num2);
	swap_pointer(&num1, &num2);
	cout << "a : " << num1 << "    b : " << num2 << endl;
	swap_reference(num1, num2);
	cout << "a : " << num1 << "    b : " << num2 << endl;
	return 0;
}