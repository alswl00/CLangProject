#include <iostream>
#include <string>
using namespace std;

class Movie {
private:
	string title;
	string director;
	double rating;
public:
	void show();
	Movie() {
		title = "타이타닉";
		director = "제임스 카메론";
		rating = 9.5;
	}
	Movie(string title, string director, double rating) {
		this->title = title;
		this->director = director;
		this->rating = rating;
	}
};

void Movie::show() {
	cout << "영화 제목: " << title << endl;
	cout << "영화 감독: " << director << endl;
	cout << "영화 평점: " << rating << endl;
}

int main() {
	Movie m1;
	Movie m2("지오스톰","딘 데블린",8.34);
	cout << "영화 #1" << endl;
	m1.show();
	cout << endl;
	cout << "영화 #2" << endl;
	m2.show();

	return 0;
}