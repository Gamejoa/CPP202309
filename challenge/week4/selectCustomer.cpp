#include <iostream>
#include <string>

using namespace std;

int main() {
	// 원래는 입력 받아야 하는 부분. 그냥 상수로 제한 
	const int maxPeople = 3; 
	//cout << "총 고객 수는 3명";
	//cin >> maxPeople;
	string names[maxPeople]; // 현재 프로그램에서는 naems[3] 으로 고정
	int ages[maxPeople]; // 마찬가지 ages[3] 으로 고정 

	for (int i = 0; i < maxPeople; i++) { // (원래는) 입력받은 변수만큼 반복문이 돌아야 함, 여기선 0,1,2
		cout << "사람 " << i + 1 << "의 이름: ";  // 사용자가 읽기 편하도록 i+1 형태로 (사람 1) 보여줌
		cin >> names[i]; // 입력 받은 변수를 names[0] -> names[1] -> names[2] 순서대로 저장 
		cout << "사람 " << i + 1 << "의 나이 : "; // 이하 마찬가지 
		cin >> ages[i];
	}




	int ageThreshold; // 나이 제한을 입력 받을 변수 
	cout << "특정 나이 이상인 사람을 찾으려면 나이를 입력하세요 :";
	cin >> ageThreshold;


	cout << ageThreshold << "세 이상인 고객들 : \n";

	int detectedPeople = 0; // 몇명이 입력받은 제한 변수보다 이상인지를 세어줄 변수 

	for (int i = 0; i < maxPeople; i++) { 
		if (ageThreshold <= ages[i]) { // 만약 제한 변수보다 age 배열 중에 큰 수가 있으면 
		cout << names[i] << " (" << ages[i] << "세)\n"; // 나이 배열의 해당 인덱스 출력 
		detectedPeople++; // 감지 됐으면 감지 변수 증가 
	}

}

	if (detectedPeople == 0) { // 만약 감지된 게 없으면 
		cout << ageThreshold << "이상의 나이를 가진 고객이 없습니다.";
	}


	return 0;




  }

