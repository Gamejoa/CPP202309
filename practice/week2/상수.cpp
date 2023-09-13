#include <iostream>
#define PI 3.14159265359;// PI라는 변수를 3.14159265359 라는 실수 형태로 Define (정의) 함. 


using namespace std;

int main() {

	int income = 1000; 
	const double TAX_RATE = 0.25; // const로 초기화한 변수는 재정의 할 수 없는 '상수'다. 
	income = income - TAX_RATE * income;

	double x = 100; // 실수형 변수 x
	x = x * PI; // 기호상수 PI를 x와 곱한 값을 x에 다시 초기화 
	/*PI = 35454;*/
	// define 된 PI는 재정의 할 수 없음. 

	cout << income << endl; // 1000 - 250 = 750
	cout << x << endl; // 314.159




return 0;


}
