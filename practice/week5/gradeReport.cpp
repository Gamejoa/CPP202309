#include <iostream>
#include <string>
using namespace std;

int main() {

	const int STUDENT = 5; // �迭�� ũ�⸦ ����� �����ؾ� �� 
	const int SUBJECT = 3;
	int scores[STUDENT][SUBJECT]; // (�л� 1���� ���� 3�� )* 5 , 2���� �迭
	string studentNames[STUDENT]  // �л� �迭ũ�⸸ŭ ���ڿ� �迭�� �̸� 5�� ���� 
		= {"����", "����", "ö��", "�̹�", "����"};
	string subjectNames[SUBJECT] = { "����","����","CPP" }; // ���� �Ȱ��� ���� 3�� ����

	for (int i = 0; i < STUDENT; i++) { // [�л�] �迭�� ũ�⸸ŭ 5�� �ݺ�
		cout << studentNames[i] 
			<< "�� ������ �ϳ��� �Է��ϼ���." << endl;
		for (int j = 0; j < SUBJECT; j++) { // ���� �ݺ����� �л� �� ������ ���� �迭 ũ�⸸ŭ �Է�
			cout << subjectNames[j] << ":"; // ����, ����, CPP ������ �Է� �޾Ƽ� 
			cin >> scores[i][j]; // ������ 2���� �迭 scores�� ���� 
		}
	}

	// �� �л��� ����� ���ϴ� ���߹ݺ��� 
	for (int i = 0; i < STUDENT; i++) { // �л� �迭 ũ�⸸ŭ �ݺ� ���� 
		cout << studentNames[i] << "�� ��� ������ "; 
		double sum = 0; // ������ ���� ������ ���� sum
		double average = 0; // ����� ������ ���� average
		for (int j = 0; j < SUBJECT; j++) {
			sum += scores[i][j]; // score[0][0], [0][1], [0][2] ���·� ���� ������ ��� sum�� ���ؼ� ����
		}

		average = sum / SUBJECT; // ���� ���� ���� ���� ���� ��հ��� average�� ���� 
		cout << average << "�Դϴ�" << endl; // ��� ��� 

	}
	return 0;

}