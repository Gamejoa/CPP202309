#include <iostream>
#include <string>
using namespace std;

const int mapX = 5;
const int mapY = 5;

// 사용자 정의 함수 
bool checkXY(int user_x, int mapX, int user_y, int mapY); // 이동하려는 곳이 유효한 좌표인지 체크하는 함수
void displayMap(int map[][mapX], int user_x, int user_y); // 지도 보여주기 함수 
bool checkGoal(int map[][mapX], int user_x, int user_y); // 목적지에 도착했는 지를 알려줄 함수 
void checkState(int map[][mapX], int user_x, int user_y, int& user_hp); // 현재 상태 체크 함수  (추가한 부분)

// 메인  함수
int main() {
	// 0은 빈 공간, 1은 아이템, 2는 적, 3은 포션, 4는 목적지
	int map[mapY][mapX] = { {0, 1, 2, 0, 4},
					{1, 0, 0, 2, 0},
					{0, 0, 0, 0, 0},
					{0, 2, 3, 0, 0},
					{3, 0, 0, 0, 2} };


	// 유저의 위치를 저장할 변수
	int user_x = 0; // 가로 번호
	int user_y = 0; // 세로 번호
	int user_hp = 20; // 유저의 체력  (기능 4번) 

	// 게임 시작 
	while (user_hp > 0) { // 사용자의 체력이 hp가 0보다 크면 무한 반복  (추가한 부분 )

		cout << "현재 HP: " << user_hp << endl; // 현재 체력 출력 (기능 6번)

		// 사용자의 입력을 저장할 변수
		string user_input = "";

		cout << "명령어를 입력하세요 (상,하,좌,우,지도,종료): ";
		cin >> user_input;

		
		if (user_input == "상") {
			// 위로 한 칸 올라가기
			user_y -= 1;
			bool inMap = checkXY(user_x, mapX, user_y, mapY); // bool 변수로 유저 위치, 맵 위치 확인 
			if (inMap == false) { // 기능 2번 ( 지도 밖으로 나가면 에러 )
				cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
				user_y += 1; 
			}
			else { // 기능 1번 (상하좌우 이동 )
				cout << "위로 한 칸 올라갑니다." << endl;
				displayMap(map, user_x, user_y);
				user_hp -= 1;// (기능 5번)
			}
		}
		else if (user_input == "하") {
			// TODO: 아래로 한 칸 내려가기
			user_y += 1;
			bool inMap = checkXY(user_x, mapX, user_y, mapY);
			if (inMap == false) {
				cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
				user_y -= 1;
			}
			else {
				cout << "아래로 한 칸 내려갑니다." << endl;
				displayMap(map, user_x, user_y);
				user_hp -= 1;
			}
		}
		else if (user_input == "좌") {
			// TODO: 왼쪽으로 이동하기
			user_x -= 1;
			bool inMap = checkXY(user_x, mapX, user_y, mapY);

			if (inMap == false) {
				cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
				user_x += 1;
			}
			else {
				cout << "왼쪽으로 이동합니다." << endl;
				displayMap(map, user_x, user_y);
				user_hp -= 1;
			}
		}
		else if (user_input == "우") {
			// TODO: 오른쪽으로 이동하기
			user_x += 1;
			bool inMap = checkXY(user_x, mapX, user_y, mapY);
			if (inMap == false) {
				cout << "맵을 벗어났습니다. 다시 돌아갑니다." << endl;
				user_x -= 1;
			}
			else {
				cout << "오른쪽으로 이동합니다." << endl;
				displayMap(map, user_x, user_y);
				user_hp -= 1;
			}
		}
		else if (user_input == "지도") {
			// TODO: 지도 보여주기 함수 호출
			displayMap(map, user_x, user_y);
		}
		else if (user_input == "종료") {
			cout << "종료합니다.";
			break;
		}
		else {
			cout << "잘못된 입력입니다." << endl;
			continue;
		}

		// 기능 3번 연계. 목적지에 도달했는지 체크
		bool finish = checkGoal(map, user_x, user_y);
		if (finish == true) {
			cout << "목적지에 도착했습니다! 축하합니다!" << endl;
			cout << "게임을 종료합니다." << endl;
			break;
		}

		checkState(map, user_x, user_y, user_hp);

		
	}

	// 기능 7번
	if (user_hp <= 0) { 
		cout << "실패! HP가 0이 되었습니다!" << endl;
	}

	return 0;
}


// 기능 8번. 지도와 사용자 위치 출력하는 함수
void displayMap(int map[][mapX], int user_x, int user_y) {
	for (int i = 0; i < mapY; i++) { // 맵 크기만큼 2차원 배열 생성 
		for (int j = 0; j < mapX; j++) {
			if (i == user_y && j == user_x) { // 만약 유저의 위치가 배열의 인덱스 x,y 위치가 같으면 
				cout << " USER |"; // 양 옆 1칸 공백
			}
			else { // 그게 아니면 USER가 아닌 위치 
				int posState = map[i][j]; 
				switch (posState) {
				case 0:
					cout << "      |"; // 6칸 공백
					break;
				case 1:
					cout << "아이템|";
					break;
				case 2:
					cout << "  적  |"; // 양 옆 2칸 공백
					break;
				case 3:
					cout << " 포션 |"; // 양 옆 1칸 공백
					break;
				case 4:
					cout << "목적지|";
					break;
				}
			}
		}
		cout << endl;
		cout << " -------------------------------- " << endl;
	}
}


// 기능 2. 이동하려는 곳이 유효한 좌표인지 체크하는 함수
bool checkXY(int user_x, int mapX, int user_y, int mapY) {
	bool checkFlag = false; // 먼저 bool 변수 하나를 false 값으로 지정 
	if (user_x >= 0 && user_x < mapX && user_y >= 0 && user_y < mapY) { // 유저가 맵 안에 있으면 
		checkFlag = true; // 플래그 변수를 true 값으로 바꿔서 유저를 움직이고, 그게 아니면 에러 메세지 출력으로 연결 
	}
	return checkFlag;
}

// 기능 3. 유저의 위치가 목적지인지 체크하는 함수
bool checkGoal(int map[][mapX], int user_x, int user_y) {
	// 목적지 도착하면
	if (map[user_y][user_x] == 4) { 
		return true;
	}
	return false;
}

// 이동하려는 곳에서의 상호작용 
void checkState(int map[][mapX], int user_x, int user_y, int& user_hp) {
	int posState = map[user_y][user_x];
	switch (posState) {
	case 0:
		cout << "아무 것도 없습니다." << endl;
		break;
	case 1:
		cout << "아이템이 있습니다." << endl;
		break;
	case 2:
		user_hp -= 2; // 적을 만났을 때 HP 감소
		cout << "적이 있습니다! HP가 -2 감소합니다 !" << endl;
		break;
	case 3:
		user_hp += 2; // 포션을 사용하여 HP 회복
		cout << "포션을 사용하여 HP가 + 2 증가합니다 !" << endl;
		break;
	case 4:
		// 목적지에 도착한 경우 아무것도 하지 않음
		break;
	}
}