#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Movie
{
	string title;
	double score;
public:
	Movie(string name, double scores) {
		title = name;
		score = scores;
	}
	void Print() {
		cout << "제목 : " << title << ", 평점 :" << score << endl;
	}
};


int main() {
	vector<Movie> movies;

	movies.push_back(Movie("타이타닉", 9.9));
	movies.push_back(Movie("바람과 함께 사라지다", 9.7));
	movies.push_back(Movie("터미네이터", 9.6));



	cout << "영화 평점 모음 " << endl;
	cout << "==============================" << endl;
	for (auto & b : movies)
		b.Print();
	cout << "==============================" << endl;
	return 0;



}