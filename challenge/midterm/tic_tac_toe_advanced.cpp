#include <iostream>

using namespace std;

const int numCell = 3;
char board[numCell][numCell]{};




bool isValid(int x, int y) {

	if (x >= numCell || y >= numCell) {// 좌표 범위를 벗어날때
		cout << x << "," << y << ": x와 y둘중 하나가 칸을 벗어납니다. " << endl;
		return false;
	}
	if (board[x][y] != ' ') {// 좌표범위의 입력값이 중복될때
		cout << x << "," << y << ": 이미 돌이 차있습니다. " << endl;
		return false;
	}

	return true;
}

bool checkWin(char currentUser) {
	bool win = false;

	for (int i = 0; i < numCell; i++) {
		// 가로가 모두 찬 경우 
		win = true;
		for (int j = 0; j < numCell; j++) {
			if (board[i][j] != currentUser) {
				win = false;
				break;
			}
		}
		if (win) {
			cout << "가로에 모든 돌이 놓였습니다! " << endl;
			cout << "( " << currentUser << " )유저의 승리입니다!" << endl;
			cout << "게임을 종료합니다.";
			exit(1);
		}

		// 세로가 모두 찬 경우 
		win = true;
		for (int j = 0; j < numCell; j++) {
			if (board[j][i] != currentUser) {
				win = false;
				break;
			}
		}
		if (win) {
			cout << "세로에 모든 돌이 놓였습니다! ";
			cout << "( " << currentUser << " )유저의 승리입니다!" << endl;
			cout << "게임을 종료합니다.";
			exit(1);
		}
	}

	// 대각선
	win = true;
	for (int i = 0; i < numCell; i++) {
		if (board[i][i] != currentUser) {
			win = false;
			break;
		}
	}
	if (win) {
		cout << "왼쪽 위에서 오른쪽 아래 대각선으로 돌이 모두 놓였습니다! ";
		cout << "( " << currentUser << " )유저의 승리입니다!" << endl;
		cout << "게임을 종료합니다.";
		exit(1);
	}

	win = true;
	for (int i = 0; i < numCell; i++) {
		if (board[i][numCell - 1 - i] != currentUser) {
			win = false;
			break;
		}
	}
	if (win) {
		cout << "오른쪽 위에서 왼쪽 아래 대각선으로 돌이 모두 놓였습니다! ";
		cout << "( " << currentUser << " )유저의 승리입니다!" << endl;
		cout << "게임을 종료합니다.";
		exit(1);
	}

	return false;
}



int main() {
	
	int x, y; // 사용자에게 입력받는 x,y 좌표를 저장할 변수

	//보드판 초기화
	for (x = 0; x < numCell; x++) {
		for (y = 0; y < numCell; y++) {
			board[x][y] = ' ';
		}

	}




	// 게임하는 코드 
	int k = 0;
	char currentUser = 'X';
	while (1) {


		// 1. 누구 차례인지 출력
		switch (k % 3) {
		case 0:
			cout << "1번 유저(X)의 차례입니다 -> ";
			currentUser = 'X';
			break;
		case 1:
			cout << "2번 유저(O)의 차례입니다 -> ";
			currentUser = 'O';
			break;
		case 2:
			cout <<  "3번 유저(H)의 차례입니다 -> ";
			currentUser = 'H';
			break;
		}

		//2. 좌표 입력 받기
		cout << "(x, y) 좌표를 입력하세요: ";
		cin >> x >> y;

		//3. 입력받은 좌표와 유효성 체크
		if (isValid(x, y) == false) {
			continue;
		}
		


		//4. 입력받은 좌표에 현재 유저의 돌 놓기
		board[x][y] = currentUser;



		// 5. 현재 보드 판 출력
		for (int i = 0; i < numCell; i++) {
			for (int j = 0; j < numCell; j++) {
				cout << board[i][j];
				if (j < numCell - 1) {
					cout << "  |";
				}
			}
			cout << endl;

			if (i < numCell - 1) {
				for (int k = 0; k < numCell; k++) {
					cout << "---";
					if (k < numCell - 1) {
						cout << '|';
					}
				}
				cout << endl;
			}
		}



		// 6. 모든 칸 다 찼는지 체크
		int checked = 0;
		for (int i = 0; i < numCell; i++) {
			for (int j = 0; j < numCell; j++) {
				if (board[i][j] == ' ') {
					checked++;
				}
			}
		}
		if (checked == 0) {
			cout << "모든 칸이 다 찼습니다. 종료합니다.";
			break;
		}




		// 7. 승자 체크하기 
		if (checkWin(currentUser)) {
			// 승자가 있으면 게임 종료
			break;
		}

		k++;


	}
	return 0;

}

