#include <iostream>
using namespace std;

void display(char c = '*', int n = 10) {
	//함수 호출이 일어날때 매개변수를 0,1,2 개를 호출할수 있음
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}

int main() {
	cout << "아무런 인수가 전달되지 않는 경우 : ";
	display();
	cout << endl;
	cout << "첫 번째 인수만 전달되는 경우 : ";
	display('A');
	cout << endl;
	cout << "모든 인수가 전달되는 경우 : ";
	display('A', 20);
	cout << endl;
	return 0;
}