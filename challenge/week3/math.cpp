#include <iostream>
#include <time.h>

using namespace std;

int main() {
	int i = 0; // ����Ƚ���� ������ ����
	int ans; // �Է¹��� ���� ���� 
	cout << "��� ������ �ڵ����� �����մϴ�. " << endl;


	while (true) { // ������ true�� �׻� �ݺ� 
		int firstNum = rand() % 100; // ù��° ����, �ι�° ���� ��� 0~99������ ����
		int SecondNum = rand() % 100;



// ���� ��� > �� �Է� �ޱ� > ��
		cout << firstNum << "+" << SecondNum << "="; // x + y = ������ ��¹�
		cin >> ans; // ���� �Է�

		if (firstNum + SecondNum == ans) { // ���� fN + SN�� �����̶��?
			cout << "�����Դϴ�!" << endl; 
			i++; // ����Ƚ�� ����

			if (i == 5) { // ���� ����Ƚ���� 5�� �Ǹ�
				break; // �ݺ��� ����
			}

		}
		else { // ������ �ƴ� ��� ��쿣 ���� �ݺ� 
			cout << "�����Դϴ�.." << endl;
			cout << "5�� ���⶧���� ��� �˴ϴ�." << endl;
		}
		


	}



	return 0;

}