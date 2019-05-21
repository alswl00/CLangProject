#include <iostream>
using namespace std;

class Cat {
private:
	int age;
	const char* name;
public:
	Cat() {
		age = 18;
		name = "야옹이";
	}
	~Cat() {}
	int getAge() { return age; }
	void setAge(int age) { this->age = age; }
	char *getName() { return (char*)name; }
	void setName(const char* name) { this->name = name; }
};

int main() {
	Cat* pCat = new Cat;//포인터 객체변수 생성시 생성자 호출을 통해서
	//멤버변수를 초기화한다. 여기에서 pCat은 Cat클래스 전체를 가리킨다
	cout << "고양이의 나이 : " << (*pCat).getAge() << ", 고양이의 이름 : " << (*pCat).getName() << endl;
	pCat->setAge(20);
	pCat->setName("방울이");
	cout << "고양이의 나이 : " << (*pCat).getAge() << ", 고양이의 이름 : " << (*pCat).getName() << endl;
	return 0;
}