#include <iostream>
using namespace std;

class Point {
public://아래에 있는 멤버변수와 함수는 public으로 설정
	int x;
	int y;
	void Print();
};
int main() {
	Point point = { 1,2 };
	point.Print();
	point.x = 100;
	point.y = 200;
}
void Point::Print() {
	cout << "x 좌표는 " << x << endl;
	cout << "y 좌표는 " << y << endl;
}