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


int numReleased() {

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


int main() {


	while (1) {
		randomNum = rand() % 900 + 100; // ������ 3�ڸ��� ����

		bool same = false; // ��� ���� �ٸ� ��� true�� ���� ����

		// TODO 1: 3�ڸ� ������ �ڸ����� �����ϰ�, ��� ���� �ٸ��� üũ�ϴ� �ڵ��� �ۼ�
	
		

		if (numReleased()) {
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


		int strike = 0; // ��Ʈ����ũ ������ �����ϴ� ����
		int ball = 0; // �� ������ �����ϴ� ����

		// TODO 2: ����� ������ ������ �ڸ����� ���ڸ� ���ϸ� ��Ʈ�� �ֱ� ���� �ڵ��� �ۼ�
		string s1 = to_string(randomNum);
		string s2 = to_string(firstNum);
		string s3 = to_string(secondNum);
		string s4 = to_string(thirdNum);

		string g1 = to_string(userNumber);
		string g2 = to_string(guessFirst);
		string g3 = to_string(guessSecond);
		string g4 = to_string(guessThird);

		//for (int i = 0; i < s1.length(); i++) {
			//for (char& c : s1) {
				
			//}
		//}

		cout << userNumber << "�� ��� : " << strike << " ��Ʈ����ũ, " << ball << "�� �Դϴ�." << endl;

		if (strike == 3) {
			
				cout << "������ ������ϴ�. �����մϴ�.";
			break;
		}

		turn += 1;
	}

	return 0;
}
