#include <memory>
#include <iostream>
using namespace std;

int main() {
	unique_ptr<int> ptr(new int);
	*ptr = 100;
	cout << *ptr << endl;

	//delete를 사용하지 않아도 된다
	return 0;
}