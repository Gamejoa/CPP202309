#include <iostream>
#include <time.h>

using namespace std;

int main() {
	srand(time(NULL));

	int answer = rand() % 100; // 0~99 ������ ������ answer�� ���� 
	int tries = 0;  // �õ� Ƚ���� ���� ���� ����
	int guess; // �������� �Է��� ����

	while (true) {
		cout << "Guess Answer : "; // ������ �Է�
		cin >> guess; 
		if (guess == answer) { // ���� �������� ������ ���ٸ�
			break; // �ݺ����� ����
		}
		else if (guess < answer) { // ���� �������� �������� �۴ٸ� 
			cout << "������ ���� ���亸�� ���� ���Դϴ�" << endl;
		}
		else { // �� �ܿ� �������� �������� ũ�� 
			cout << "������ ���� ���亸�� ���� ���Դϴ�" << endl;
		}
		

		tries++; // �ݺ����� �������� �õ�Ƚ�� ����


	}






	cout << "�����մϴ�. �õ� Ƚ�� : " << tries << endl;
 

}
