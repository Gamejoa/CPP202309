#include <iostream>
#include <string>


using namespace std;

int main() {


	string s1 = "���"; 
	string s2;

	/*s2 = s1 + " " + 10 + "��";*/
	// ���� ���� ���´� ���ڿ��� �ƴ�, 10�̶�� �������̹Ƿ� ����� ����� ���� ����. 
	// "10" �� ���� ���·� ����ϸ� ��� �� ���� ���� 

	s2 = s1 + " " + to_string(10) + "��"; // to_string�� ����Ͽ� ������ ���ڿ� Ÿ������ �ٲ㼭 �������. 
	
	cout << s2 << endl;






	return 0;


}
