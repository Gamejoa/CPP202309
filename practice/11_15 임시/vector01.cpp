#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> scores;
	int sum = 0;

	while (1) {
		int score;
		cout << "������ �Է��Ͻʽÿ�(����� -1) :";
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
	cout << "���� ��� : " << average << endl;


	
	return 0;
}