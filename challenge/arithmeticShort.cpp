#include <iostream>

using namespace std;

int main() {

	
	int two = 2;
	int eight = 8;
	int sum1 = 2; // 이름은 sum이지만, 2라는 정수형 값 저장되어 있음 
	int sum2 = 2;

	sum1 = sum1 + two; // sum1 에 2 + 2 값으로 다시 초기화 
	sum2 += eight; // sum2 가 원래 가지고 있던 2 값과 8값을 더한 값인 10으로 다시 초기화 

	cout << "sum1 = " << sum1 << endl; // 따라서 4
	cout << "sum2 = " << sum2 << endl; // 10
	 
	









	return 0;


}