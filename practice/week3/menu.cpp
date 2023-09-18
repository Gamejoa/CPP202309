#include <iostream> 

using namespace std;

int main() {

	int choice; // 입력 받을 정수값을 저장할 공간 

	cout << "1. 파일 저장" << endl;
	cout << "2. 저장 없이 닫기" << endl;
	cout << "3. 종료" << endl;
	cin >> choice;

	switch (choice) { // 입력받은 choice에 대한 switch 문 
	case 1 :
		cout << "파일 저장을 선택했습니다. " << endl; // 1일 경우 출력 
		break; //break가 없으면 2,3,default가 같이 실행
	case 2 :
		cout << "파일 닫기를 선택했습니다. " << endl; // 2일 경우 출력 
		break; // break가 없으면 3,default가 실행 
	case 3 :
		cout << "프로그램을 종료합니다. " << endl; // 3일 경우 출력 
		break; // break가 없으면 default 가 실행 
	default:
		cout << " 잘못된 선택입니다. " << endl; // 1,2,3 이 아닐 경우 출력 
		break;



	}

	return 0;


}