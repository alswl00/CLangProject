#include <iostream>
using namespace std;

void jungjuk() {
	static int a = 0;
	int b = 0;
	cout << "���� ���� a��" << a << ",��������b:" << b << endl;
	a++; b++;
}
int main() {
	jungjuk();
	jungjuk();
	jungjuk();

	return 0;
}