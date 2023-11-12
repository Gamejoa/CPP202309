#include <iostream>
#include <string>

using namespace std;

int randomNum; // ����� �ϴ� 3�ڸ����� ���� ���� ����
int firstNum; // ������ ù��° �ڸ���
int secondNum; // ������ �ι�° �ڸ���
int thirdNum; // ������ ����° �ڸ���

int userNumber; // ����ڰ� �Է��� ���ڸ��� ���� ����
int guessFirst; // ������ ������ ù��° �ڸ���
int guessSecond; // ������ ������ �ι�° �ڸ���
int guessThird; // ������ ������ ����° �ڸ���




int checkNumber() {

	// TODO 1: 3�ڸ� ������ �ڸ����� �����ϰ�, ��� ���� �ٸ��� üũ�ϴ� �ڵ��� �ۼ�
	firstNum = randomNum / 100;
	secondNum = (randomNum / 10) % 10;
	thirdNum = (randomNum % 10);


	if (firstNum == secondNum || secondNum == thirdNum || firstNum == thirdNum) {
		return false;
	}
	else {
		return true;
	}

}



void provideHint(int& strike, int& ball) {
	// TODO 2: ����� ������ ������ �ڸ����� ���ڸ� ���ϸ� ��Ʈ�� �ֱ� ���� �ڵ��� �ۼ�

	 strike = 0; // ��Ʈ����ũ ������ �����ϴ� ����
	 ball = 0; // �� ������ �����ϴ� ����


	// TODO 2: ����� ������ ������ �ڸ����� ���ڸ� ���ϸ� ��Ʈ�� �ֱ� ���� �ڵ��� �ۼ�
	if (firstNum == guessFirst) {
		strike++;
	}

	if (secondNum == guessSecond) {
		strike++;
	}

	if (thirdNum == guessThird) {
		strike++;
	}

	if (guessFirst == secondNum || guessFirst == thirdNum) {
		ball++;
	}

	if (guessSecond == firstNum || guessSecond == thirdNum) {
		ball++;
	}

	if (guessThird == firstNum || guessThird == secondNum) {
		ball++;
	}

	cout << userNumber << "�� ��� : " << strike << " ��Ʈ����ũ, " << ball << "�� �Դϴ�." << endl;

	
}

int main() {


	while (1) {
		randomNum = rand() % 900 + 100; // ������ 3�ڸ��� ����

		bool same = false; // ��� ���� �ٸ� ��� true�� ���� ����

		// TODO 1: 3�ڸ� ������ �ڸ����� �����ϰ�, ��� ���� �ٸ��� üũ�ϴ� �ڵ��� �ۼ�



		if (checkNumber()) {
			break;
		}
		else {
			continue;
		}


		if (same == true) {
			break;
		}


	}


	int turn = 0;
	while (1) {
		cout << turn + 1 << "��° �õ��Դϴ�. " << endl;



		// ����ڿ��� ���ڸ� ���� �Է¹޴� �ڵ� ���
		while (1) {
			cout << "���ڸ� ���� �Է����ּ���: ";
			cin >> userNumber;

			bool same = false; // ��� ���� �ٸ� ��� true�� ���� ����
			// TODO 1: 3�ڸ� ������ �ڸ����� �����ϰ�, ��� ���� �ٸ��� üũ�ϴ� �ڵ��� �ۼ�
			guessFirst = userNumber / 100;
			guessSecond = (userNumber / 10) % 10;
			guessThird = (userNumber % 10);

			if (guessFirst == guessSecond || guessSecond == guessThird || guessFirst == guessThird) {
				cout << "�Էµ� ���ڿ� �ߺ��� ���ڰ� �ֽ��ϴ�. �ٽ� �Է��ϼ���. " << endl;
				continue;

			}
			else {
				break;
			}


			if (to_string(userNumber).length() != 3) {
				cout << "�Էµ� ���ڰ� 3�ڸ� ���� �ƴմϴ�. �ٽ� �Է��ϼ���." << endl;
				continue;
			}

			if (same == true) {
				break;
			}
		}

	


		// TODO 2: ����� ������ ������ �ڸ����� ���ڸ� ���ϸ� ��Ʈ�� �ֱ� ���� �ڵ��� �ۼ�
	
		int strike; // ��Ʈ����ũ ������ �����ϴ� ����
		int ball; // �� ������ �����ϴ� ����

		provideHint(strike, ball);

		// TODO 2: ����� ������ ������ �ڸ����� ���ڸ� ���ϸ� ��Ʈ�� �ֱ� ���� �ڵ��� �ۼ�
	

		if (strike == 3) {

			cout << "������ ������ϴ�. �����մϴ�.";
			break;
		}

		turn += 1;
	}

	return 0;
}
