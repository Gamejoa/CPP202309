#include <iostream>


using namespace std;

auto add(int x, int y) { 

	return x + y; // add () 는 x + y 를 반환한다고 미리 정의한 auto


}


int main() { 

	auto sum = add(5, 6); 
	cout << sum; // sum을 출력하면 x+y를 자동으로 반환하므로  5+6 = 11 이라는 값을
	// 별도로 x + y 라는 식을 쓰지 않고도 덧셈을 할 수 있음 




	return 0;


}
