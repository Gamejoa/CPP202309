#include <iostream>
#include <string>
using namespace std;

const int mapX = 5;
const int mapY = 5;

// ����� ���� �Լ� 
bool checkXY(int user_x, int mapX, int user_y, int mapY); // �̵��Ϸ��� ���� ��ȿ�� ��ǥ���� üũ�ϴ� �Լ�
void displayMap(int map[][mapX], int user_x, int user_y); // ���� �����ֱ� �Լ� 
bool checkGoal(int map[][mapX], int user_x, int user_y); // �������� �����ߴ� ���� �˷��� �Լ� 
void checkState(int map[][mapX], int user_x, int user_y, int& user_hp); // ���� ���� üũ �Լ�  (�߰��� �κ�)

// ����  �Լ�
int main() {
	// 0�� �� ����, 1�� ������, 2�� ��, 3�� ����, 4�� ������
	int map[mapY][mapX] = { {0, 1, 2, 0, 4},
					{1, 0, 0, 2, 0},
					{0, 0, 0, 0, 0},
					{0, 2, 3, 0, 0},
					{3, 0, 0, 0, 2} };


	// ������ ��ġ�� ������ ����
	int user_x = 0; // ���� ��ȣ
	int user_y = 0; // ���� ��ȣ
	int user_hp = 20; // ������ ü��  (��� 4��) 

	// ���� ���� 
	while (user_hp > 0) { // ������� ü���� hp�� 0���� ũ�� ���� �ݺ�  (�߰��� �κ� )

		cout << "���� HP: " << user_hp << endl; // ���� ü�� ��� (��� 6��)

		// ������� �Է��� ������ ����
		string user_input = "";

		cout << "��ɾ �Է��ϼ��� (��,��,��,��,����,����): ";
		cin >> user_input;

		
		if (user_input == "��") {
			// ���� �� ĭ �ö󰡱�
			user_y -= 1;
			bool inMap = checkXY(user_x, mapX, user_y, mapY); // bool ������ ���� ��ġ, �� ��ġ Ȯ�� 
			if (inMap == false) { // ��� 2�� ( ���� ������ ������ ���� )
				cout << "���� ������ϴ�. �ٽ� ���ư��ϴ�." << endl;
				user_y += 1; 
			}
			else { // ��� 1�� (�����¿� �̵� )
				cout << "���� �� ĭ �ö󰩴ϴ�." << endl;
				displayMap(map, user_x, user_y);
				user_hp -= 1;// (��� 5��)
			}
		}
		else if (user_input == "��") {
			// TODO: �Ʒ��� �� ĭ ��������
			user_y += 1;
			bool inMap = checkXY(user_x, mapX, user_y, mapY);
			if (inMap == false) {
				cout << "���� ������ϴ�. �ٽ� ���ư��ϴ�." << endl;
				user_y -= 1;
			}
			else {
				cout << "�Ʒ��� �� ĭ �������ϴ�." << endl;
				displayMap(map, user_x, user_y);
				user_hp -= 1;
			}
		}
		else if (user_input == "��") {
			// TODO: �������� �̵��ϱ�
			user_x -= 1;
			bool inMap = checkXY(user_x, mapX, user_y, mapY);

			if (inMap == false) {
				cout << "���� ������ϴ�. �ٽ� ���ư��ϴ�." << endl;
				user_x += 1;
			}
			else {
				cout << "�������� �̵��մϴ�." << endl;
				displayMap(map, user_x, user_y);
				user_hp -= 1;
			}
		}
		else if (user_input == "��") {
			// TODO: ���������� �̵��ϱ�
			user_x += 1;
			bool inMap = checkXY(user_x, mapX, user_y, mapY);
			if (inMap == false) {
				cout << "���� ������ϴ�. �ٽ� ���ư��ϴ�." << endl;
				user_x -= 1;
			}
			else {
				cout << "���������� �̵��մϴ�." << endl;
				displayMap(map, user_x, user_y);
				user_hp -= 1;
			}
		}
		else if (user_input == "����") {
			// TODO: ���� �����ֱ� �Լ� ȣ��
			displayMap(map, user_x, user_y);
		}
		else if (user_input == "����") {
			cout << "�����մϴ�.";
			break;
		}
		else {
			cout << "�߸��� �Է��Դϴ�." << endl;
			continue;
		}

		// ��� 3�� ����. �������� �����ߴ��� üũ
		bool finish = checkGoal(map, user_x, user_y);
		if (finish == true) {
			cout << "�������� �����߽��ϴ�! �����մϴ�!" << endl;
			cout << "������ �����մϴ�." << endl;
			break;
		}

		checkState(map, user_x, user_y, user_hp);

		
	}

	// ��� 7��
	if (user_hp <= 0) { 
		cout << "����! HP�� 0�� �Ǿ����ϴ�!" << endl;
	}

	return 0;
}


// ��� 8��. ������ ����� ��ġ ����ϴ� �Լ�
void displayMap(int map[][mapX], int user_x, int user_y) {
	for (int i = 0; i < mapY; i++) { // �� ũ�⸸ŭ 2���� �迭 ���� 
		for (int j = 0; j < mapX; j++) {
			if (i == user_y && j == user_x) { // ���� ������ ��ġ�� �迭�� �ε��� x,y ��ġ�� ������ 
				cout << " USER |"; // �� �� 1ĭ ����
			}
			else { // �װ� �ƴϸ� USER�� �ƴ� ��ġ 
				int posState = map[i][j]; 
				switch (posState) {
				case 0:
					cout << "      |"; // 6ĭ ����
					break;
				case 1:
					cout << "������|";
					break;
				case 2:
					cout << "  ��  |"; // �� �� 2ĭ ����
					break;
				case 3:
					cout << " ���� |"; // �� �� 1ĭ ����
					break;
				case 4:
					cout << "������|";
					break;
				}
			}
		}
		cout << endl;
		cout << " -------------------------------- " << endl;
	}
}


// ��� 2. �̵��Ϸ��� ���� ��ȿ�� ��ǥ���� üũ�ϴ� �Լ�
bool checkXY(int user_x, int mapX, int user_y, int mapY) {
	bool checkFlag = false; // ���� bool ���� �ϳ��� false ������ ���� 
	if (user_x >= 0 && user_x < mapX && user_y >= 0 && user_y < mapY) { // ������ �� �ȿ� ������ 
		checkFlag = true; // �÷��� ������ true ������ �ٲ㼭 ������ �����̰�, �װ� �ƴϸ� ���� �޼��� ������� ���� 
	}
	return checkFlag;
}

// ��� 3. ������ ��ġ�� ���������� üũ�ϴ� �Լ�
bool checkGoal(int map[][mapX], int user_x, int user_y) {
	// ������ �����ϸ�
	if (map[user_y][user_x] == 4) { 
		return true;
	}
	return false;
}

// �̵��Ϸ��� �������� ��ȣ�ۿ� 
void checkState(int map[][mapX], int user_x, int user_y, int& user_hp) {
	int posState = map[user_y][user_x];
	switch (posState) {
	case 0:
		cout << "�ƹ� �͵� �����ϴ�." << endl;
		break;
	case 1:
		cout << "�������� �ֽ��ϴ�." << endl;
		break;
	case 2:
		user_hp -= 2; // ���� ������ �� HP ����
		cout << "���� �ֽ��ϴ�! HP�� -2 �����մϴ� !" << endl;
		break;
	case 3:
		user_hp += 2; // ������ ����Ͽ� HP ȸ��
		cout << "������ ����Ͽ� HP�� + 2 �����մϴ� !" << endl;
		break;
	case 4:
		// �������� ������ ��� �ƹ��͵� ���� ����
		break;
	}
}