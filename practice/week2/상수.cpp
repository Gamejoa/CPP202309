#include <iostream>
#define PI 3.14159265359;// PI��� ������ 3.14159265359 ��� �Ǽ� ���·� Define (����) ��. 


using namespace std;

int main() {

	int income = 1000; 
	const double TAX_RATE = 0.25; // const�� �ʱ�ȭ�� ������ ������ �� �� ���� '���'��. 
	income = income - TAX_RATE * income;

	double x = 100; // �Ǽ��� ���� x
	x = x * PI; // ��ȣ��� PI�� x�� ���� ���� x�� �ٽ� �ʱ�ȭ 
	/*PI = 35454;*/
	// define �� PI�� ������ �� �� ����. 

	cout << income << endl; // 1000 - 250 = 750
	cout << x << endl; // 314.159




return 0;


}
