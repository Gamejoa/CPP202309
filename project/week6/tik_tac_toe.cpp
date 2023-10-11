#include <iostream>

using namespace std;




int main() {
	const int numCell = 3;
	char board[numCell][numCell]{};
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
	while (true) {


		// 1. 누구 차례인지 출력
		switch (k % 2) {
		case 0:
			cout << k % 2 + 1 << "번 유저(X)의 차례입니다 -> ";
			currentUser = 'X';
			break;
		case 1:
			cout << k % 2 + 1 << "번 유저(O)의 차례입니다 -> ";
			currentUser = 'O';
			break;
		}

		//2. 좌표 입력 받기
		cout << "(x, y) 좌표를 입력하세요: ";
		cin >> x >> y;

		//3. 입력받은 좌표와 유효성 체크
		if (x >= numCell || y >= numCell) {
			cout << x << ", " << y << ": ";
			cout << "x 와 y 둘 중 하나가 칸을 벗어납니다." << endl;
			continue;
		}
		if (board[x][y] != ' ') {
			cout << x << ", " << y << ": 이미 돌이 차있습니다." << endl;
			continue;
		}


		//4. 입력받은 좌표에 현재 유저의 돌 놓기
		board[x][y] = currentUser;



		// 5. 현재 보드 판 출력
		for (int i = 0; i < numCell; i++) {
			cout << "---|---|---" << endl;
			for (int j = 0; j < numCell; j++) {
				cout << board[i][j];
				if (j == numCell - 1) {
					break;
				}
				cout << "  |";
			}
			cout << endl;
		}
		cout << "---|---|---" << endl;
	



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
			bool win = false;

			
			for (int i = 0; i < numCell; i++) {
				// 가로가 모두 찬 경우 
				if (board[i][0] == currentUser && currentUser == board[i][1] && currentUser == board[i][2]) {
					cout << "가로에 모든 돌이 놓였습니다!: ";
					win = true;
					
				}
				// 세로가 모두 찬 경우 
				if (board[0][i] == currentUser && currentUser == board[1][i] && currentUser == board[2][i]) {
					cout << "세로에 모두 돌이 놓였습니다!: ";
					win = true;
				}

			}
			
		
			// 좌상단 , 우하단 대각선으로 찬 경우 
			if (board[0][0] == currentUser &&
				currentUser == board[1][1] && currentUser == board[2][2]) {
				cout << "왼쪽 위에서 오른쪽 아래 대각선으로 돌이 모두 놓였습니다!: ";
				win = true;
			}

			// 좌하단, 우상단 대각선으로 찬 경우 
			if (board[0][2] == currentUser &&
				currentUser == board[1][1] && currentUser == board[2][0]) {
				cout << "오른쪽 위에서 왼쪽 아래 대각선으로 돌이 모두 놓였습니다!: ";
				win = true;
			}

			if (win == true) {
				cout << k % 2 + 1 << "번 유저( " << currentUser << ")의 승리입니다!" << endl;
				cout << " 종료합니다 " << endl;
				break;
			}



			k++;

		
		}
		return 0;

	}




	


	


