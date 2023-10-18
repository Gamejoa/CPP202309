#include <iostream>
#include <string>

using namespace std;

// �ҹ��ڷ� ���� �Լ� 
string toLowerStr(string& str) {
	string newStr = str;
	for (char& c : str) {
		c = tolower(c);
	}
	return newStr;
}

// �빮�ڷ� ���� �Լ� 
string toUpperStr(string& str) {
	string newStr = str;
	for (char& c : str) {
		c = toupper(c);
	}
	return newStr;
}

// �ҹ��ڷ� ���� �ٲ���� �ع� �Ÿ� ��� �Լ� 
int calcHammingDist(string s1, string s2) {
	s1 = toLowerStr(s1);
	s2 = toLowerStr(s2);
	int count = 0;

	for (int i = 0; i < s1.length(); i++) {
		if (s1[i] != s2[i]) {
			count += 1;
		}
	}
	return count;
}

int main() {
	string s1, s2;

	while (true) {
		cout << "DNA1 : ";
		cin >> s1;
		cout << "DNA2 : ";
		cin >> s2;

		if (s1.length() != s2.length()) {
			cout << "���� : ���̰� �ٸ�" << endl;
			continue;
		}
		else {
			int count = calcHammingDist(s1, s2);
			cout << "�ع� �Ÿ��� " << count << endl;
			break;
		}
	}
	return 0;
}