#include <iostream>

using namespace std;

int main() {

	
	int two = 2;
	int eight = 8;
	int sum1 = 2; // �̸��� sum������, 2��� ������ �� ����Ǿ� ���� 
	int sum2 = 2;

	sum1 = sum1 + two; // sum1 �� 2 + 2 ������ �ٽ� �ʱ�ȭ 
	sum2 += eight; // sum2 �� ���� ������ �ִ� 2 ���� 8���� ���� ���� 10���� �ٽ� �ʱ�ȭ 

	cout << "sum1 = " << sum1 << endl; // ���� 4
	cout << "sum2 = " << sum2 << endl; // 10
	 
	









	return 0;


}