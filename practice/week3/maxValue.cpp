#include <iostream>

using namespace std;

int main() {
	int a, b, c, largest;

	cout << "3���� ������ �Է��ϼ��� : ";
	cin >> a >> b >> c;

	if (a > b && a > c) { // ���� a�� b,c ���� ũ�ٸ� 
		largest = a; // ���� ū ������ a 
	}
	else if (b > a && b > c) { // �Ǵ� b�� a,c ���� ũ�ٸ� 
		largest = b; // ���� ū ������ b 

	}
	else { // a,b�� �� �� ���� ū ������ �ƴ϶�� 
		largest = c; // ���� ū ������ c 
	}

	cout << "���� ���� ������ " << largest << endl;
	return 0;


}