#include <iostream>
#include <string>

using namespace std;

int main() {
	// ������ �Է� �޾ƾ� �ϴ� �κ�. �׳� ����� ���� 
	const int maxPeople = 3; 
	//cout << "�� �� ���� 3��";
	//cin >> maxPeople;
	string names[maxPeople]; // ���� ���α׷������� naems[3] ���� ����
	int ages[maxPeople]; // �������� ages[3] ���� ���� 

	for (int i = 0; i < maxPeople; i++) { // (������) �Է¹��� ������ŭ �ݺ����� ���ƾ� ��, ���⼱ 0,1,2
		cout << "��� " << i + 1 << "�� �̸�: ";  // ����ڰ� �б� ���ϵ��� i+1 ���·� (��� 1) ������
		cin >> names[i]; // �Է� ���� ������ names[0] -> names[1] -> names[2] ������� ���� 
		cout << "��� " << i + 1 << "�� ���� : "; // ���� �������� 
		cin >> ages[i];
	}




	int ageThreshold; // ���� ������ �Է� ���� ���� 
	cout << "Ư�� ���� �̻��� ����� ã������ ���̸� �Է��ϼ��� :";
	cin >> ageThreshold;


	cout << ageThreshold << "�� �̻��� ���� : \n";

	int detectedPeople = 0; // ����� �Է¹��� ���� �������� �̻������� ������ ���� 

	for (int i = 0; i < maxPeople; i++) { 
		if (ageThreshold <= ages[i]) { // ���� ���� �������� age �迭 �߿� ū ���� ������ 
		cout << names[i] << " (" << ages[i] << "��)\n"; // ���� �迭�� �ش� �ε��� ��� 
		detectedPeople++; // ���� ������ ���� ���� ���� 
	}

}

	if (detectedPeople == 0) { // ���� ������ �� ������ 
		cout << ageThreshold << "�̻��� ���̸� ���� ���� �����ϴ�.";
	}


	return 0;




  }

