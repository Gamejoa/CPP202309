#include <iostream> 

using namespace std;

int main() {
	int a, b, c, smallest; // ç���� 

	cout << "3���� ������ �Է��ϼ��� : ";
	cin >> a >> b >> c;

	if (a < b && a < c) { // ���� a�� b,c ���� ������
		smallest = a; // ���� ���� ������ a 
	}
	else if (b < a && b < c) { // �Ǵ� b�� a,c ���� �۴ٸ�
		smallest = b; // ���� ���� ������ b 

	}
	else { // a,b�� �� �� ���� ���� ������ �ƴ϶�� 
		smallest = c; // ���� ���� ������ c 
	}

	cout << "���� ū ������ " << smallest << endl;
	return 0;


}