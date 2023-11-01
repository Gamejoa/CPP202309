#include <iostream>

using namespace std;

int main() {

	int pound = 0;
	cout << "파운드 무게를 입력하세요 : ";
	cin >> pound;

	float kilogram = pound / 2.2046;
	cout << "변환된 pound는 " << kilogram << "kg입니다." << endl;

	return 0;

}