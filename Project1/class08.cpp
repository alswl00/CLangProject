#include <iostream>
using namespace std;

class Car {
	int ton, price;
public:
	static int count; //���������� �Ϲ��Լ����� ��밡��
	//���������� ��ü�������� 1���� �������.
	Car() {
		ton = 0; price = 1000; count++;
	}
	Car(int ton, int price) {
		this->ton; this->price = price; count++;
	}
	static int getCount() {
		//int imsi = 10;  ��밡��
		//return count+imsi+ton;  ton�� ��� �Ұ���
		return count;
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