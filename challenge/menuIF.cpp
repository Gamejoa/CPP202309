#include <iostream> 

using namespace std;

int main() {

	int choice; // 입력 받을 정수값을 저장할 공간 

	cout << "1. 파일 저장" << endl;
	cout << "2. 저장 없이 닫기" << endl;
	cout << "3. 종료" << endl;
	cin >> choice;


	if (choice == 1) {
		cout << "파일 저장을 선택했습니다. " << endl; // 만약 입력받은 정수가 1일 경우 출력 
	}
	else if (choice == 2) {
		cout << "파일 닫기를 선택했습니다. " << endl; // 만약 입력받은 정수가 2일 경우 출력 
	}
	else if (choice == 3) {
		cout << "프로그램을 종료합니다. " << endl; // 만약 입력받은 정수가 3일 경우 출력 
	}
	else {
		cout << " 잘못된 선택입니다. " << endl; // 1,2,3 이 모두 아닐 경우 출력 
	}

	

	return 0;


}