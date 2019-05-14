#include <iostream>
using namespace std;

class Car {
	int ton, price;
public:
	static int count; //정적변수는 일반함수에서 사용가능
	//정적변수는 객체생성전에 1개만 만들어짐.
	Car() {
		ton = 0; price = 1000; count++;
	}
	Car(int ton, int price) {
		this->ton; this->price = price; count++;
	}
	static int getCount() {
		//int imsi = 10;  사용가능
		//return count+imsi+ton;  ton은 사용 불가능
		return count;
	}
};

int Car::count = 0;
int main() {
	Car car1;
	cout << "생성된 자동차의 수 : " << Car::count << endl;
	//정적변수에 클래스이름으로 접근 가능
	cout << "생성된 자동차의 수 : " << car1.count << endl;
	//정적변수에 객체이름으도 접근 가능
	Car car2(10, 3000);
	cout << "생성된 자동차의 수 : " << Car::count << endl;
	return 0;
}