#include <iostream>

using namespace std;

// ����� 2���� �迭�� ���� ������ ���� ( �Լ��� ����ϱ� ���ؼ� )
const int NUM_USERS = 3;
const int NUM_ITEMS = 3;
int userPreferences[NUM_USERS][NUM_ITEMS];


void initializePreferences(int preferences[NUM_USERS][NUM_ITEMS]) {

	// ����ڿ��� ���� �׸��� ��ȣ�� �Է��� �޴� �ڵ� �� 
	for (int i = 0; i < NUM_USERS; ++i) {
		// ����ں��� �׸� �Է� 
		cout << "����� " << (i + 1) << "�� ��ȣ���� �Է��ϼ��� (";
		cout << NUM_ITEMS << "���� �׸� ���� ):";
		for (int j = 0; j < NUM_ITEMS; ++j) {
			// ����ں��� 2���� �迭�� �׸� ����
			cin >> userPreferences[i][j];
		}
	}
}

void findRecommendedItems(const int preferences[NUM_USERS][NUM_ITEMS]) {
	// �� ����ڿ��� ���� ��õ �׸� ã�� 
	for (int i = 0; i < NUM_USERS; ++i) {
		// ��õ���� ������ ���� 
		int maxPreferenceIndex = 0;
		for (int j = 1; j < NUM_ITEMS; ++j) {
			// ������ �׸񰪰� ��õ������ ũ�� �׸�[�ε���]�� ��õ��[�ε���]�� ���� 
			if (userPreferences[i][j] > userPreferences[i][maxPreferenceIndex]) {
				maxPreferenceIndex = j;
			}
		}


		// ����ڿ��� ��õ�ϴ� �׸� ��� 
		// ��õ�ϴ� �׸��� �迭�� �ε����� ��� ( �� �� �׸��� ��õ�ϴ� ��)
		cout << "����� " << (i + 1) << "���� ��õ�ϴ� �׸� : ";
		cout << (maxPreferenceIndex + 1) << endl;
	}

}



int main() {
	// ��ȣ�� �Է� �Լ� ȣ��, �Ű������� userPreferneces(2���� �迭)
	initializePreferences(userPreferences);
	// ��õ �׸� ã�� �Լ� ȣ�� , �Ű� ������ userPreferences (2���� �迭)
	findRecommendedItems(userPreferences);


	return 0;
}