#include <iostream>
using namespace std;

class Point {
public://�Ʒ��� �ִ� ��������� �Լ��� public���� ����
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
	cout << "x ��ǥ�� " << x << endl;
	cout << "y ��ǥ�� " << y << endl;
}