#include <iostream>

using namespace std;

const int numCell = 3;
char board[numCell][numCell]{};




bool isValid(int x, int y) {

	if (x >= numCell || y >= numCell) {// ��ǥ ������ �����
		cout << x << "," << y << ": x�� y���� �ϳ��� ĭ�� ����ϴ�. " << endl;
		return false;
	}
	if (board[x][y] != ' ') {// ��ǥ������ �Է°��� �ߺ��ɶ�
		cout << x << "," << y << ": �̹� ���� ���ֽ��ϴ�. " << endl;
		return false;
	}

	return true;
}

bool checkWin(char currentUser) {
	bool win = false;

	for (int i = 0; i < numCell; i++) {
		// ���ΰ� ��� �� ��� 
		win = true;
		for (int j = 0; j < numCell; j++) {
			if (board[i][j] != currentUser) {
				win = false;
				break;
			}
		}
		if (win) {
			cout << "���ο� ��� ���� �������ϴ�! " << endl;
			cout << "( " << currentUser << " )������ �¸��Դϴ�!" << endl;
			cout << "������ �����մϴ�.";
			exit(1);
		}

		// ���ΰ� ��� �� ��� 
		win = true;
		for (int j = 0; j < numCell; j++) {
			if (board[j][i] != currentUser) {
				win = false;
				break;
			}
		}
		if (win) {
			cout << "���ο� ��� ���� �������ϴ�! ";
			cout << "( " << currentUser << " )������ �¸��Դϴ�!" << endl;
			cout << "������ �����մϴ�.";
			exit(1);
		}
	}

	// �밢��
	win = true;
	for (int i = 0; i < numCell; i++) {
		if (board[i][i] != currentUser) {
			win = false;
			break;
		}
	}
	if (win) {
		cout << "���� ������ ������ �Ʒ� �밢������ ���� ��� �������ϴ�! ";
		cout << "( " << currentUser << " )������ �¸��Դϴ�!" << endl;
		cout << "������ �����մϴ�.";
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
		cout << "������ ������ ���� �Ʒ� �밢������ ���� ��� �������ϴ�! ";
		cout << "( " << currentUser << " )������ �¸��Դϴ�!" << endl;
		cout << "������ �����մϴ�.";
		exit(1);
	}

	return false;
}



int main() {
	
	int x, y; // ����ڿ��� �Է¹޴� x,y ��ǥ�� ������ ����

	//������ �ʱ�ȭ
	for (x = 0; x < numCell; x++) {
		for (y = 0; y < numCell; y++) {
			board[x][y] = ' ';
		}

	}




	// �����ϴ� �ڵ� 
	int k = 0;
	char currentUser = 'X';
	while (1) {


		// 1. ���� �������� ���
		switch (k % 3) {
		case 0:
			cout << "1�� ����(X)�� �����Դϴ� -> ";
			currentUser = 'X';
			break;
		case 1:
			cout << "2�� ����(O)�� �����Դϴ� -> ";
			currentUser = 'O';
			break;
		case 2:
			cout <<  "3�� ����(H)�� �����Դϴ� -> ";
			currentUser = 'H';
			break;
		}

		//2. ��ǥ �Է� �ޱ�
		cout << "(x, y) ��ǥ�� �Է��ϼ���: ";
		cin >> x >> y;

		//3. �Է¹��� ��ǥ�� ��ȿ�� üũ
		if (isValid(x, y) == false) {
			continue;
		}
		


		//4. �Է¹��� ��ǥ�� ���� ������ �� ����
		board[x][y] = currentUser;



		// 5. ���� ���� �� ���
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



		// 6. ��� ĭ �� á���� üũ
		int checked = 0;
		for (int i = 0; i < numCell; i++) {
			for (int j = 0; j < numCell; j++) {
				if (board[i][j] == ' ') {
					checked++;
				}
			}
		}
		if (checked == 0) {
			cout << "��� ĭ�� �� á���ϴ�. �����մϴ�.";
			break;
		}




		// 7. ���� üũ�ϱ� 
		if (checkWin(currentUser)) {
			// ���ڰ� ������ ���� ����
			break;
		}

		k++;


	}
	return 0;

}

