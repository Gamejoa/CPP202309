#include <iostream>
#include <string>


using namespace std;

int main() {


	string s1 = "Good";
	string s2 = "Bad";

	bool b = (s1 == s2); // ���ڿ� ���� s1,s2 �� ���� ���ٸ�, ���� ���� b�� ���̴�. �ƴϸ� ����
	cout << b << endl; // ���� s1,s2�� ���� �ٸ��Ƿ� 0 (false)�� ��� �ȴ�. 

	s2 = "Good"; // s2�� ���� s1 ���� �����ϰ�  �ʱ�ȭ 
	b = (s1 == s2); // �ٽ� ���� ���� b���? 
	cout << b << endl; // b�� ���̹Ƿ�, 1�� ����Ѵ�!


	






	return 0;


}