#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
};

int main() {
	Point point = { 1,2 }; //c++ 스타일
	struct Point point2 = { 3,4 }; //C스타일
	cout << "점 point의 좌표는 (" << point.x << ", " << point.y << ")입니다." << endl;
	cout << "점 point2의 좌표는 (" << point2.x << ", " << point2.y << ")입니다." << endl;
	return 0;
}