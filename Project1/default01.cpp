#include <iostream>
using namespace std;

void display(char c = '*', int n = 10) {
	//�Լ� ȣ���� �Ͼ�� �Ű������� 0,1,2 ���� ȣ���Ҽ� ����
	for (int i = 0; i < n; i++)
		cout << c;
	cout << endl;
}

int main() {
	cout << "�ƹ��� �μ��� ���޵��� �ʴ� ��� : ";
	display();
	cout << endl;
	cout << "ù ��° �μ��� ���޵Ǵ� ��� : ";
	display('A');
	cout << endl;
	cout << "��� �μ��� ���޵Ǵ� ��� : ";
	display('A', 20);
	cout << endl;
	return 0;
}