#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

int main() {
	Point point = { 1,2 };
	Point *Ppoint = &point;  //*Ppoint==point
	cout << "�� Ppoint�� ��ǥ�� (" << (*Ppoint).x << ", " << (*Ppoint).y << ")�Դϴ�." << endl;
	cout << "�� point2�� ��ǥ�� (" << Ppoint->x << ", " << Ppoint->y << ")�Դϴ�." << endl;
	return 0;
}