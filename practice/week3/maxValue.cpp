#include <iostream>

using namespace std;

int main() {
	int a, b, c, largest;

	cout << "3개의 정수를 입력하세요 : ";
	cin >> a >> b >> c;

	if (a > b && a > c) { // 만약 a가 b,c 보다 크다면 
		largest = a; // 가장 큰 정수는 a 
	}
	else if (b > a && b > c) { // 또는 b가 a,c 보다 크다면 
		largest = b; // 가장 큰 정수는 b 

	}
	else { // a,b가 둘 다 가장 큰 정수가 아니라면 
		largest = c; // 가장 큰 정수는 c 
	}

	cout << "가장 작은 정수는 " << largest << endl;
	return 0;


}