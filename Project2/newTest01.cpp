#include <iostream>
using namespace std;

int main() {
	//���������� �Լ��� �Ű������� ��� ���� ������
	//����Ǳ� ������ �Լ������ �ڵ� �����ȴ�
	int *ptr1 = new int;
	//new int;�� heap������ 4����Ʈ ������ �������� �Ҵ�
	*ptr1 = 20;
	cout << *ptr1 << endl;

	delete ptr1;//heap ������ �޸� ����
	return 0;
}