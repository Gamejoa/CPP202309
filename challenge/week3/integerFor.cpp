#include <iostream>

using namespace std;

int main() {
	int userInput; 

	cout << "정수를 10번 입력하세요 (0을 입력하면 종료) : ";
	for (int i = 0; i < 10; i++) { // 0~9까지 10번 반복하는 반복문
		cin >> userInput; // 입력받은 변수
		if (userInput == 0) { // 만약 0을 입력받으면 반복문 종료
			break;
		}
		cout << "입력값 :" << userInput << "횟수 :"<< i+1 << endl; 
		
	}

	cout << "종료되었습니다";

	return 0;


}