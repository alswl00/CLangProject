#include <memory>
#include <iostream>
using namespace std;

class CTest
{
public:
	CTest() { cout << "CTest()" << endl; }
	~CTest() { cout << "~CTest()" << endl; }
	void TestFunc() { cout << "TestFunc()" << endl; }
};
int main() {
	cout << "*****Begin*****" << endl;
	shared_ptr<CTest> ptr1(new CTest);

	// 한 대상을 한 포인터로 포인팅한다.
	// use_count() 는 리소스 소유자 수를 계산합니다.
	cout << "Counter: " << ptr1.use_count() << endl;
	{
		shared_ptr<CTest> ptr2(ptr1); //shared_ptr<CTest> ptr2; pt2=ptr1; 작성해도 무방함
		// 한 대상을 두 포인터로 포인팅한다.
		cout << "Counter: " << ptr1.use_count() << endl;
		ptr2->TestFunc();
	}

	// 한 포인터가 소멸했으므로 포인팅 개수가 1 감소한다.
	cout << "Counter: " << ptr1.use_count() << endl;
	ptr1->TestFunc();
	cout << "******End******" << endl;

	// 결국 카운터가 0이 되면 대상 객체를 소멸시킨다.
	return 0;
}