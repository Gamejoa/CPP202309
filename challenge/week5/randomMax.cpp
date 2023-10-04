#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	const int numCell = 10; // numList 배열 크기를 지정해줄 변수 numCell
	int numList [numCell][numCell]; // 10*10 형태의 2차원 배열 

	// 2차원 배열에 1000 이하의 난수를 저장하는 이중 반복문 
	for (int i = 0; i < numCell; i++) { 
		for (int j = 0; j < numCell; j++) {
			int elem = rand() % 1000; // elem은 1000이하의 난수 
			numList[i][j] = elem; // 모든 인덱스에 elem 하나씩 저장 
			cout << i << "," << j << " : " << elem << endl; // 각 인덱스에 어떤 난수가 저장되었는 지 출력 
			}
	}

	cout << endl; // 개행

	int max = 0; // 난수중 가장 큰 값 max
	int maxI;  // [i][j] 배열 중 어떤 인덱스 i 에서 나왔는 지 알려줄 maxI
	int maxJ; // 이하 maxJ

	for (int i = 0; i < numCell; i++) { 
		for (int j = 0; j < numCell; j++) { // 똑같이 이중반복문 돌고 
			int value = numList[i][j]; // 돌때마다 value 값에 저장하면서 
			if (value > max) { // 가지고 있는 value 값이 max보다 크면 
				max = value; // 계속 max 값을 value로 다시 초기화 
				maxI = i; // 그 때의  i와 j 값을 maxI, maxJ에 저장해둠 
				maxJ = j;

			}
		}
	}


	cout << "가장 큰 값은" << max << "이고"; // 가장 큰 값 max 출력문 
	cout << "i와 j는 각각" << maxI << ", " << maxJ << "입니다. " << endl; // 그 때의 인덱스 출력문 
	cout << "검증 결과 : " << numList[maxI][maxJ] << endl;  // 한번 더 maxI, maxJ에 해당하는 인덱스를 불러서 재검증하는 출력문 

	return 0;



}