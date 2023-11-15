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
		cout << "���� : " << title << ", ���� :" << score << endl;
	}
};


int main() {
	vector<Movie> movies;

	movies.push_back(Movie("Ÿ��Ÿ��", 9.9));
	movies.push_back(Movie("�ٶ��� �Բ� �������", 9.7));
	movies.push_back(Movie("�͹̳�����", 9.6));



	cout << "��ȭ ���� ���� " << endl;
	cout << "==============================" << endl;
	for (auto & b : movies)
		b.Print();
	cout << "==============================" << endl;
	return 0;



}