#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

int main() {
	Point point = { 1,2 }; //c++ ��Ÿ��
	struct Point point2 = { 3,4 }; //C��Ÿ��
	cout << "�� point�� ��ǥ�� (" << point.x << ", " << point.y << ")�Դϴ�." << endl;
	cout << "�� point2�� ��ǥ�� (" << point2.x << ", " << point2.y << ")�Դϴ�." << endl;
	return 0;
}