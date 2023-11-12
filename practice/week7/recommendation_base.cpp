#include <iostream>

using namespace std;

int main() {
	const int NUM_USERS = 3; // 3명의 사용자를 고정할 상수 
	const int NUM_ITEMS = 3; // 3개의 항목을 고정할 상수 
	int userPreferences[NUM_USERS][NUM_ITEMS]; // 사용자별 항목을 저장할 2차원 배열 


	// 사용자에게 여러 항목의 선호도 입력을 받는 코드 블럭 
	
	for (int i = 0; i < NUM_USERS; ++i) {
		// 사용자별로 항목 입력 
		cout << "사용자 " << (i + 1) << "의 선호도를 입력하세요 (";
		cout << NUM_ITEMS << "개의 항목에 대해 ):";
		for (int j = 0; j < NUM_ITEMS; ++j) {
			// 사용자별로 2차원 배열에 항목 저장
			cin >> userPreferences[i][j]; 
		}
	}

	// 각 사용자에게 대한 추천 항목 찾기 
	for (int i = 0; i < NUM_USERS; ++i) {
		// 추천값을 저장할 변수 
		int maxPreferenceIndex = 0;
		for (int j = 1; j < NUM_ITEMS; ++j) {
			// 기존의 항목값가 추천값보다 크면 항목값[인덱스]를 추천값[인덱스]로 대입 
			if (userPreferences[i][j] > userPreferences[i][maxPreferenceIndex]) {
				maxPreferenceIndex = j;
			}
		}


		// 사용자에게 추천하는 항목 출력 
		// 추천하는 항목을 배열의 인덱스로 출력 ( 몇 번 항목을 추천하는 지)
		cout << "사용자 " << (i + 1) << "에게 추천하는 항목 : ";
		cout << (maxPreferenceIndex + 1) << endl; 
	}
	return 0;
}