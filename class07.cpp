#include <iostream>
using namespace std;

class Car {
	int ton, price;
public :
	static int count; //���������� �Ϲ��Լ����� ��밡��
	//���������� ��ü�������� 1���� �������.
	void test() {
		cout << "�׽�Ʈ�Դϴ�. " << count << endl;
	}
	int test2() const {	//�Լ� �ڿ� �ٴ� const�� �Լ��ȿ� �ִ� �Ϲݺ������� ���� ������Ŵ
		return ++count;
		//++ton;
	}
	Car() {
		ton = 0; price = 1000; count++;
	}
	Car(int ton, int price) {
		this->ton; this->price = price; count++;
	}
	~Car() {
		cout << "�Ҹ��� : " << count-- << endl;
	}
};

int Car::count = 0;
int main() {
	Car car1;
	cout << "������ �ڵ����� �� : " << Car::count << endl;
	//���������� Ŭ�����̸����� ���� ����
	cout << "������ �ڵ����� �� : " << car1.count << endl;
	//���������� ��ü�̸����� ���� ����
	Car car2(10, 3000);
	cout << "������ �ڵ����� �� : " << Car::count << endl;
	return 0;
}