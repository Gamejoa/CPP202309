#include <iostream>
#include <string>


using namespace std;

int main() {


	string s1 = "Good";
	string s2 = "Bad";

	bool b = (s1 == s2); // 문자열 변수 s1,s2 의 값이 같다면, 논리형 변수 b는 참이다. 아니면 거짓
	cout << b << endl; // 따라서 s1,s2의 값이 다르므로 0 (false)가 출력 된다. 

	s2 = "Good"; // s2의 값을 s1 값과 동일하게  초기화 
	b = (s1 == s2); // 다시 논리형 변수 b라면? 
	cout << b << endl; // b는 참이므로, 1을 출력한다!


	






	return 0;


}