#include <iostream>

using namespace std;

int main() {
	int vowel = 0; // ���� ������ ������ ����
	int consonant = 0; // ���� ������ ������ ����
	char ch;

	cout << "�����ڸ� �Է��ϰ� ctrl + z�� ġ����" << endl;

	

	while (cin >> ch) { 
	

		switch (ch) { // �Է¹��� ���ڰ� ������ ��쿡�� 
		case 'a': case'i':case'o': case 'u': case 'e':
			vowel++; // ���� ���� ���� 
			break; // ����ġ�� break
		default:
			consonant++; // ������ �ƴ� ��쿡�� ��� ���� ���� ���� 
			break;

		
		}




	}
	

	cout << "���� : " << vowel << endl; // ���� ����  ��� 
	cout << "���� : " << consonant << endl;

	return 0;


}