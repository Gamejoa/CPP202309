#include <iostream> 

using namespace std;

int main() {

	int choice; // �Է� ���� �������� ������ ���� 

	cout << "1. ���� ����" << endl;
	cout << "2. ���� ���� �ݱ�" << endl;
	cout << "3. ����" << endl;
	cin >> choice;

	switch (choice) { // �Է¹��� choice�� ���� switch �� 
	case 1 :
		cout << "���� ������ �����߽��ϴ�. " << endl; // 1�� ��� ��� 
		break; //break�� ������ 2,3,default�� ���� ����
	case 2 :
		cout << "���� �ݱ⸦ �����߽��ϴ�. " << endl; // 2�� ��� ��� 
		break; // break�� ������ 3,default�� ���� 
	case 3 :
		cout << "���α׷��� �����մϴ�. " << endl; // 3�� ��� ��� 
		break; // break�� ������ default �� ���� 
	default:
		cout << " �߸��� �����Դϴ�. " << endl; // 1,2,3 �� �ƴ� ��� ��� 
		break;



	}

	return 0;


}