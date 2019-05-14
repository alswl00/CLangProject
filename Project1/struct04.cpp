#include <iostream>
using namespace std;

struct Point {
	int x;
	int y;
	void Print();
};
int main() {
	Point point = { 1,2 };
	point.Print();
}
void Point::Print() {
	cout << "x ÁÂÇ¥´Â " << x << endl;
	cout << "y ÁÂÇ¥´Â " << y << endl;
}