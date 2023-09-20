#include <iostream>

using namespace std;

int main() {
	int vowel = 0; // 모음 개수를 저장할 변수
	int consonant = 0; // 자음 개수를 저장할 변수
	char ch;

	cout << "영문자를 입력하고 ctrl + z를 치세요" << endl;

	

	while (cin >> ch) { 
	

		switch (ch) { // 입력받은 문자가 모음인 경우에는 
		case 'a': case'i':case'o': case 'u': case 'e':
			vowel++; // 모음 개수 증가 
			break; // 스위치문 break
		default:
			consonant++; // 모음이 아닌 경우에는 모두 자음 개수 증가 
			break;

		
		}




	}
	

	cout << "모음 : " << vowel << endl; // 모음 개수  출력 
	cout << "자음 : " << consonant << endl;

	return 0;


}