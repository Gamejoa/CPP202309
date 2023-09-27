#include <iostream>

using namespace std;

int main() {
	int number; // 정수를 입력받을 정수값 number 
	cout << "숫자를 입력하세요 :";
	cin >> number; 

	if (number == 0) { // 만약 number 가 0이라면 
		cout << "zero\n"; // zero (개행) 출력 
	}
	else if (number == 1) {// 만약 number 가 1이라면 
		cout << "one\n"; // one (개행) 출력 
	}
	else { // 입력받은 정수값이 0과 1이 둘 다 아니라면 
		cout << "many\n"; // many (개행) 출력 
	}

	return 0;


}
