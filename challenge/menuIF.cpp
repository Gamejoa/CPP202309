#include <iostream> 

using namespace std;

int main() {

	int choice; // �Է� ���� �������� ������ ���� 

	cout << "1. ���� ����" << endl;
	cout << "2. ���� ���� �ݱ�" << endl;
	cout << "3. ����" << endl;
	cin >> choice;


	if (choice == 1) {
		cout << "���� ������ �����߽��ϴ�. " << endl; // ���� �Է¹��� ������ 1�� ��� ��� 
	}
	else if (choice == 2) {
		cout << "���� �ݱ⸦ �����߽��ϴ�. " << endl; // ���� �Է¹��� ������ 2�� ��� ��� 
	}
	else if (choice == 3) {
		cout << "���α׷��� �����մϴ�. " << endl; // ���� �Է¹��� ������ 3�� ��� ��� 
	}
	else {
		cout << " �߸��� �����Դϴ�. " << endl; // 1,2,3 �� ��� �ƴ� ��� ��� 
	}

	

	return 0;


}