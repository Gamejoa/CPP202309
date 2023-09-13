#include <iostream>

using namespace std;

int main() {


	const int GREATE_VICTORY_SALSU = 612; // 값을 변경할 수 없는 정수형 타입 변수 (상수) GREATE_VICTORY_SALSU
	const int GREATE_VICTORY_GWIJU = 1019;  // 이하 동일 

	cout << "고구려 살수대첩 연도 : " << GREATE_VICTORY_SALSU << "년" << endl;
	cout << "고려 귀주대첩 연도 : " << GREATE_VICTORY_GWIJU << "년" << endl;

	// 살수대첩 연도와, 귀주대첩 연도는 변하지 않는 절대값이므로 상수 선언하는 것이 좋음. 


	return 0;


}