#include <iostream>
using namespace std;

void jungjuk() {
	static int a = 0;
	int b = 0;
	cout << "정적 변수 a는" << a << ",지역변수b:" << b << endl;
	a++; b++;
}
int main() {
	jungjuk();
	jungjuk();
	jungjuk();

	return 0;
}