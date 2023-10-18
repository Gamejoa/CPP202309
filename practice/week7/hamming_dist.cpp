#include <iostream>
#include <string>


using namespace std;




int main() {
	// 문자열 객체 2개, 해밍 거리를 측정해줄 count 변수 생성
	string s1, s2;
	int count = 0;

	cout << "DNA1 : ";
	cin >> s1;
	cout << "DNA2 : ";
	cin >> s2;

	// 첫번째 조건 : 두 문자열의 길이가 같아야 해밍거리를 측정할 수 있음 
	if (s1.length() != s2.length())
		cout << "오류 : 길이가 다름" << endl;
	// 두번째 조건 : 문자열 길이만큼 반복, 각 문자열의 인덱스를 하나씩 검사해서 다르면 count 증가
	else {
		for (int i = 0; i < s1.length(); i++) {
			if (s1[i] != s2[i])
				count += 1;
		}
		cout << "해밍 거리는 " << count << endl;
	}



	return 0;

}