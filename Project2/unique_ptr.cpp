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

int main()
{
	unique_ptr<CTest> ptr1(new CTest);

	// �Ʒ� �ڵ���� �����ϸ� ��� ������ ������ �߻��Ѵ�.
	// unique_ptr<CTest> ptr2(ptr1);
	// ptr2 = ptr1;

	return 0;
}

// weak_ptr�� shared_ptr �� ����Ű�� ��� ���� �������� ������ �Ҽ� �ִ�.
// weak_ptr�� ���� ������� ����