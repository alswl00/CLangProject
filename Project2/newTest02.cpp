#include <iostream>
using namespace std;

int main() {
	int *ptr2 = new int[4];

	for (int i = 0; i < 4; i++) {
		ptr2[i] = 10 + i;
		cout << ptr2[i] << endl;
	}

	delete[] ptr2;//heap 영역의 메모리 삭제
	//배열로 할당된 메모리를 삭제할때 반드시 []를 붙여야함
	//delete ptr2;하면 첫번째 배열의 ptr2[0]만 삭제된다
	return 0;
}