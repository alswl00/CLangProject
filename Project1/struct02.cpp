#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

int main() {
	Point point = { 1,2 };
	Point *Ppoint = &point;  //*Ppoint==point
	cout << "점 Ppoint의 좌표는 (" << (*Ppoint).x << ", " << (*Ppoint).y << ")입니다." << endl;
	cout << "점 point2의 좌표는 (" << Ppoint->x << ", " << Ppoint->y << ")입니다." << endl;
	return 0;
}