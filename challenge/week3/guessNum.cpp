#include <iostream>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));

	int answer = rand() % 100; // 0~99 사이의 난수를 answer에 대입 
	int tries = 0;  // 시도 횟수를 세기 위한 변수
	int guess; // 추측값을 입력할 변수

	while (true) {
		cout << "Guess Answer : "; // 추측값 입력
		cin >> guess; 
		if (guess == answer) { // 만약 추측값이 난수와 같다면
			break; // 반복문을 종료
		}
		else if (guess < answer) { // 만약 추측값이 난수보다 작다면 
			cout << "추측한 답이 정답보다 높은 수입니다" << endl;
		}
		else { // 그 외에 추측값이 난수보다 크면 
			cout << "추측한 답이 정답보다 낮은 수입니다" << endl;
		}
		

		tries++; // 반복문이 돌때마다 시도횟수 증가


	}






	cout << "축하합니다. 시도 횟수 : " << tries << endl;
 

}
