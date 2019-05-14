#include <memory>
#include <iostream>
using namespace std;

int main() {
	unique_ptr<int[]> pArray(new int[10]);

	for (int i = 0; i < 10; i++)
		pArray[i] = 20 + i;

	for (int i = 0; i < 10; i++)
		cout << pArray[i] << "  ";

	cout << endl;

	//delete[] 사용하지 않아도 된다
	return 0;
}