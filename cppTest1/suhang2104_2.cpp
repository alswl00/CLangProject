#include <iostream>
#include <string>
using namespace std;
int main() {
	string a[5];
	int max = 0;

	for (int i = 0; i < 5; i++) 
		cin >> a[i];

	for (int i = 0; i < 4; i++) 
		if (a[max].size() < a[i + 1].size())
			max = i+1;

	cout << "가장 긴 문자열: " << a[max] << endl;

	return 0;
}