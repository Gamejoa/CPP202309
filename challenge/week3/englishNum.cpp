#include <iostream>

using namespace std;

int main() {
	int number; // ������ �Է¹��� ������ number 
	cout << "���ڸ� �Է��ϼ��� :";
	cin >> number; 

	if (number == 0) { // ���� number �� 0�̶�� 
		cout << "zero\n"; // zero (����) ��� 
	}
	else if (number == 1) {// ���� number �� 1�̶�� 
		cout << "one\n"; // one (����) ��� 
	}
	else { // �Է¹��� �������� 0�� 1�� �� �� �ƴ϶�� 
		cout << "many\n"; // many (����) ��� 
	}

	return 0;


}
