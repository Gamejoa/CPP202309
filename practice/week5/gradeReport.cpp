#include <iostream>
#include <string>
using namespace std;

int main() {

	const int STUDENT = 5; // 배열의 크기를 상수로 지정해야 함 
	const int SUBJECT = 3;
	int scores[STUDENT][SUBJECT]; // (학생 1명의 과목 3개 )* 5 , 2차원 배열
	string studentNames[STUDENT]  // 학생 배열크기만큼 문자열 배열의 이름 5개 지정 
		= {"영수", "수희", "철수", "미미", "쥬쥬"};
	string subjectNames[SUBJECT] = { "수학","영어","CPP" }; // 이하 똑같이 과목 3개 지정

	for (int i = 0; i < STUDENT; i++) { // [학생] 배열의 크기만큼 5번 반복
		cout << studentNames[i] 
			<< "의 성적을 하나씩 입력하세요." << endl;
		for (int j = 0; j < SUBJECT; j++) { // 이중 반복으로 학생 한 명으로 과목 배열 크기만큼 입력
			cout << subjectNames[j] << ":"; // 수학, 영어, CPP 순으로 입력 받아서 
			cin >> scores[i][j]; // 정수형 2차원 배열 scores에 저장 
		}
	}

	// 각 학생의 평균을 구하는 이중반복문 
	for (int i = 0; i < STUDENT; i++) { // 학생 배열 크기만큼 반복 먼저 
		cout << studentNames[i] << "의 평균 점수는 "; 
		double sum = 0; // 과목의 합을 저장할 변수 sum
		double average = 0; // 평균을 저장할 변수 average
		for (int j = 0; j < SUBJECT; j++) {
			sum += scores[i][j]; // score[0][0], [0][1], [0][2] 형태로 과목 점수를 모두 sum에 더해서 저장
		}

		average = sum / SUBJECT; // 점수 합을 과목 수로 나눈 평균값을 average에 저장 
		cout << average << "입니다" << endl; // 평균 출력 

	}
	return 0;

}