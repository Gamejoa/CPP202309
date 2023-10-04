#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	const int numCell = 10; // numList �迭 ũ�⸦ �������� ���� numCell
	int numList [numCell][numCell]; // 10*10 ������ 2���� �迭 

	// 2���� �迭�� 1000 ������ ������ �����ϴ� ���� �ݺ��� 
	for (int i = 0; i < numCell; i++) { 
		for (int j = 0; j < numCell; j++) {
			int elem = rand() % 1000; // elem�� 1000������ ���� 
			numList[i][j] = elem; // ��� �ε����� elem �ϳ��� ���� 
			cout << i << "," << j << " : " << elem << endl; // �� �ε����� � ������ ����Ǿ��� �� ��� 
			}
	}

	cout << endl; // ����

	int max = 0; // ������ ���� ū �� max
	int maxI;  // [i][j] �迭 �� � �ε��� i ���� ���Դ� �� �˷��� maxI
	int maxJ; // ���� maxJ

	for (int i = 0; i < numCell; i++) { 
		for (int j = 0; j < numCell; j++) { // �Ȱ��� ���߹ݺ��� ���� 
			int value = numList[i][j]; // �������� value ���� �����ϸ鼭 
			if (value > max) { // ������ �ִ� value ���� max���� ũ�� 
				max = value; // ��� max ���� value�� �ٽ� �ʱ�ȭ 
				maxI = i; // �� ����  i�� j ���� maxI, maxJ�� �����ص� 
				maxJ = j;

			}
		}
	}


	cout << "���� ū ����" << max << "�̰�"; // ���� ū �� max ��¹� 
	cout << "i�� j�� ����" << maxI << ", " << maxJ << "�Դϴ�. " << endl; // �� ���� �ε��� ��¹� 
	cout << "���� ��� : " << numList[maxI][maxJ] << endl;  // �ѹ� �� maxI, maxJ�� �ش��ϴ� �ε����� �ҷ��� ������ϴ� ��¹� 

	return 0;



}