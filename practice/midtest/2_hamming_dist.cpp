#include <iostream>
#include <string>

using namespace std;

string toLowerStr(string& str) {
	string newStr = str;
	for (char& c : str) {
		c = tolower(c);
	}
	return newStr;
}


int calcHammingDist(string s1, string s2, string s3) {
	int count = 0;
	s1 = toLowerStr(s1);
	s2 = toLowerStr(s2);
	s2 = toLowerStr(s3);

	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != s2[i] || s1[i] != s3[i] || s2[i] != s3[i]) {
			count++;
		}
	}
	return count;
}


int main() {
	cout << "���ڿ� 3���� ���� hamming distance�� ���ϴ� ���α׷��Դϴ�. " << endl;
	int count = 0; // distance ����� ���� ����

	string s1, s2, s3;
	cout << "1�� ���ڿ��� �Է��ϼ���. (���� ����): ";
	cin >> s1;
	cout << "2�� ���ڿ��� �Է��ϼ���. (���� ����): ";
	cin >> s2;
	cout << "3�� ���ڿ��� �Է��ϼ���. (���� ����): ";
	cin >> s3;

	// TODO1: ���ڿ� ���̸� ���ϰ� ������ üũ�ϴ� �ڵ� ��� �ۼ�

		if (s1.length() != s2.length() || s1.length() != s3.length() || s2.length() != s3.length()) {
			cout << "�� ���ڿ��� ���̰� �ٸ��ϴ�. ���α׷��� �����մϴ�." << endl;
			exit(1);
		}
	


	// TODO2: ��ҹ��� ���о��� �ع� �Ÿ��� ����ϱ� ���� �ڵ� ��� �ۼ�


	count = calcHammingDist(s1, s2, s3);

	// �ع� �Ÿ� ��� �ڵ�
	cout << "�ع� �Ÿ��� " << count << "�Դϴ�." << endl;

	return 0;

}