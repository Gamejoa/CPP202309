#include <iostream>


using namespace std;

auto add(int x, int y) { 

	return x + y; // add () �� x + y �� ��ȯ�Ѵٰ� �̸� ������ auto


}


int main() { 

	auto sum = add(5, 6); 
	cout << sum; // sum�� ����ϸ� x+y�� �ڵ����� ��ȯ�ϹǷ�  5+6 = 11 �̶�� ����
	// ������ x + y ��� ���� ���� �ʰ� ������ �� �� ���� 




	return 0;


}
