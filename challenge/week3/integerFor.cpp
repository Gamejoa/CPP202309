#include <iostream>

using namespace std;

int main() {
	int userInput; 

	cout << "������ 10�� �Է��ϼ��� (0�� �Է��ϸ� ����) : ";
	for (int i = 0; i < 10; i++) { // 0~9���� 10�� �ݺ��ϴ� �ݺ���
		cin >> userInput; // �Է¹��� ����
		if (userInput == 0) { // ���� 0�� �Է¹����� �ݺ��� ����
			break;
		}
		cout << "�Է°� :" << userInput << "Ƚ�� :"<< i+1 << endl; 
		
	}

	cout << "����Ǿ����ϴ�";

	return 0;


}