#include <iostream>
#include <time.h>

using namespace std;

int main() {
	int i = 0; // 정답횟수를 저장할 변수
	int ans; // 입력받을 정답 변수 
	cout << "산수 문제를 자동으로 출제합니다. " << endl;


	while (true) { // 조건이 true면 항상 반복 
		int firstNum = rand() % 100; // 첫번째 변수, 두번째 변수 모두 0~99사이의 난수
		int SecondNum = rand() % 100;



// 문제 출력 > 답 입력 받기 > 평가
		cout << firstNum << "+" << SecondNum << "="; // x + y = 형식의 출력문
		cin >> ans; // 정답 입력

		if (firstNum + SecondNum == ans) { // 만약 fN + SN가 정답이라면?
			cout << "정답입니다!" << endl; 
			i++; // 정답횟수 증가

			if (i == 5) { // 만약 정답횟수가 5가 되면
				break; // 반복문 종료
			}

		}
		else { // 정답이 아닌 모든 경우엔 무한 반복 
			cout << "오답입니다.." << endl;
			cout << "5번 맞출때까지 계속 됩니다." << endl;
		}
		


	}



	return 0;

}