#include <iostream>
#include <string>


using namespace std;

int main() {


	string s1 = "사과"; 
	string s2;

	/*s2 = s1 + " " + 10 + "개";*/
	// 위와 같은 형태는 문자열이 아닌, 10이라는 정수형이므로 출력이 제대로 되지 않음. 
	// "10" 과 같은 형태로 사용하면 사용 할 수는 있음 

	s2 = s1 + " " + to_string(10) + "개"; // to_string을 사용하여 정수를 문자열 타입으로 바꿔서 출력해줌. 
	
	cout << s2 << endl;






	return 0;


}
