#include <iostream>
#include <string> // 


using namespace std;

int main() {

	// char s1 = "Good"; :: char은 문자형 타입이므로, 문자열 형식을 사용하면 안 됌 (X)
	string s1 = "Good"; // 문자열형 변수
	string s2 = "Morning";
	// s3는 문자열 변수 s1,s2를 합쳐주는 변수,  (+) 기호를 통해 " "(공백)을 만들어줌 
	string s3 = s1 + " " + s2 + "!";

	cout << s3 << endl; // endl : \n (줄 바꿈) 동일 


	





	return 0;


}
