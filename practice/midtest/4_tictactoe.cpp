#include <iostream>

using namespace std;

const int numCell = 5; // �������� ���� ���� ����
char board[numCell][numCell]{}; // �������� ��Ÿ���� 2���� �迭
int x, y = 0; // ����ڿ��� xy��ǥ���� �Է¹ޱ� ���� ����
char currentUser = 'X'; // ���� ������ ���� �����ϱ� ���� ����

bool checkWin(char currnetUser) {

	for (int i = 0; i < numCell; i++) {

		if (board[i][0] == currentUser && board[i][1] == currentUser && board[i][2] == currentUser) {
			cout << "���ο� ��� ���� �������ϴ�!!";
			return  true;
			
		}
		if (board[0][i] == currentUser && board[1][i] == currentUser && board[2][i] == currentUser) {
			cout << "���ο� ��� ���� �������ϴ�!!";
			return  true;
			
		}

		if (board[0][0] == currentUser && board[1][1] == currentUser && board[2][2] == currentUser) {
			cout << "���� ������ ������ �Ʒ� �밢������ ��� ���� �������ϴ�!" << endl;
			 return true;
		}

		if (board[0][2] == currentUser && board[1][1] == currentUser && board[2][0] == currentUser) {
			cout << "������ ������ ���� �Ʒ� �밢������ ��� ���� �������ϴ�!" << endl;
			return  true;
		}


	}


	return false;

}



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

int main() {

	

	int k = 0; // ���� �������� üũ�ϱ� ���� ����
	
	
	

	// ������ �ʱ�ȭ
	for (int i = 0; i < numCell; i++) {
		for (int j = 0; j < numCell; j++) {
			board[i][j] = ' ';
		}
	}

	// ������ ���� �ݺ�
	while (true) {
		// 1. ���� �������� ���
		// TODO 1.1: 3�ο� �������� ����
		switch (k % 2) {
		case 0:
			currentUser = 'X';
			break;
		case 1:
			currentUser = 'O';
			break;
	
		}

		cout << k % 2 + 1<< "�� ����(" << currentUser << ")�� �����Դϴ�. -> ";

		// 2. ��ǥ �Է� �ޱ�
		cout << "(x, y) ��ǥ�� �Է��ϼ���: ";
		int x, y;
		cin >> x >> y;

		// 3. �Է¹��� ��ǥ�� ��ȿ�� üũ
		// TODO FUNC 1: isValid �Լ� ���� �� ȣ��
		

		// 4. �Է¹��� ��ǥ�� ���� ������ �� ����
		board[x][y] = currentUser;



		// 5. ���� ���� �� ���
		// TODO 1.2: numCell ���ڿ� ���� ������ ���
		for (int i = 0; i < numCell; i++) {
			for (int j = 0; j < numCell; j++)
			{
				cout << board[i][j];
				if (j < numCell - 1) {
					cout << "  |";
				}
	
			}
			cout << endl;

			if (i < numCell) {
				for (int k = 0; k < numCell; k++) {
					if (k < numCell) {
						cout << "---";
					}
					if (k < numCell -1 )cout << "|";
				}
			}
			cout << endl;
		}
		



		
		// TODO FUNC2: 6.1���� 6.2���� checkWin �Լ� ���� �� ȣ��
		// 6.1. ����/���� �� üũ�ϱ�

		


		// 6.2. �밢���� üũ�ϱ�
		// TODO 1.3: numCell�� ���� �밢�� ���� üũ �ڵ�� Ȯ��
		// HINT: for ��


		
		// �¸��ڰ� �����Ǿ����� �ش� �÷��̾ ����ϰ� ������ �����Ѵ�.
		if (checkWin(currentUser)) {
			cout << k % 2 + 1 << "�� ����(" << currentUser << ")�� �¸��Դϴ�!" << endl;
			break;
		}

		// 7. ��� ĭ �� á���� üũ�ϱ�
		int checked = 0;
		for (int i = 0; i < numCell; i++) {
			for (int j = 0; j < numCell; j++) {
				if (board[i][j] == ' ') {
					checked++;
				}
			}
		}
		if (checked == 0) {
			cout << "��� ĭ�� �� á���ϴ�.  �����մϴ�. " << endl;
			break;
		}

		k++;
	}

	return 0;
}