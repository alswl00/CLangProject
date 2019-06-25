#include <iostream>
using namespace std;

class BoxNum {
private:
	int num1, num2;
public:
	BoxNum(int num1, int num2) : num1(num1), num2(num2) {}
	void ShowNum() {
		cout << "num1 : " << num1 << ", num2 : " << num2 << endl;
	}
	BoxNum& operator+=(BoxNum &ref) {
		num1 += ref.num1;
		num2 += ref.num2;
		return *this;
	}
};
int main() {
	BoxNum nb1(10, 20);
	BoxNum nb2(3, 4);
	nb1 += nb2;

	nb1.ShowNum();
	nb2.ShowNum();
	return 0;
}