#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
	void Print() {
		cout << "x ��ǥ�� " << x << endl;
		cout << "y ��ǥ�� " << y << endl;
	}
};

int main() {
	Point point = { 1,2 };
	point.Print();

	return 0;
}