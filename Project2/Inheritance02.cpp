#include <iostream>
using namespace std;
class BaseData {
public: // 누구나 접근 가능
	BaseData() { cout << "BaseData()" << endl; }
	int GetData() { return m_nData; }
	void SetData(int nParam) { m_nData = nParam; }
protected: // 파생 클래스만 접근 가능
	void PrintData() { cout << "BaseData::PrintData()" << " "; }
private: // 접근 불가능
	int m_nData = 0;
};
class DerivedData : public BaseData {
public:
	DerivedData() { cout << "DerivedData()" << " "; }
	//생성자를 실행하기 전에 부모클래스의 기본생성자가 먼저 실행된다 
	void TestFunc() {
		PrintData();
		SetData(5);
		cout << BaseData::GetData() << endl;
	}
};
void main() {
	DerivedData data;	//매개변수 없는 생성자 호출(15번줄)
	data.SetData(10);
	cout << data.GetData() << endl;
	data.TestFunc();
}