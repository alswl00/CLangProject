#include <iostream>
using namespace std;
void sayHello(int n=1) {
	for (int i = 0; i < n; i++) {
		cout << "Hello ";
	}
	cout << endl;
}
int main() {
	int n;
	scanf_s("%d", &n);
	cout << "sayHello()->";
	sayHello();
	cout << "sayHello(" << n << ")->";
	sayHello(n);
	

	return 0;
}