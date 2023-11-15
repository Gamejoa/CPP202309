#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> scores;
	int sum = 0;

	while (1) {
		int score;
		cout << "성적을 입력하십시오(종료는 -1) :";
		cin >> score;
		if (score == -1) {
			break;
		}
		scores.push_back(score);

	}
	for (auto& value : scores) {
		sum += value;
	}

	double average = (double) sum / scores.size();
	cout << "성적 평균 : " << average << endl;


	
	return 0;
}