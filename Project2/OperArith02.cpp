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
	BoxNum operator-(BoxNum &ref) {//ref는 nb2를 참조
		return BoxNum(num1 - ref.num1, num2 - ref.num2);
		//num1과 num2는 nb1 객체를 가리킨다
	}
};
int main() {
	BoxNum nb1(10, 20);
	BoxNum nb2(3, 4);
	BoxNum result = nb1 - nb2;
	//컴파일 시점에서 BoxNum result=nb1.operator+(nb2); 으로 자동변환한다

	//BoxNum result=nb1.operator+(nb2);으로 표현해도 실행된다
	nb1.ShowNum();
	nb2.ShowNum();
	result.ShowNum();
	return 0;
}