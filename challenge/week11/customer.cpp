
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int maxPeople;
    cout << "�� �� ���� �Է��ϼ���: ";
    cin >> maxPeople;

    vector<string> names;
    vector<int> ages;

    for (int i = 0; i < maxPeople; i++) {
        string name;
        cout << "��� " << i + 1 << "�� �̸�: ";
        cin >> name;
        names.push_back(name);

        int age;
        cout << "��� " << i + 1 << "�� ����: ";
        cin >> age;
        ages.push_back(age);
    }

  

    int ageThreshold;
    cout << "Ư�� ���� �̻��� ����� ã������ ���̸� �Է��ϼ���: ";
    cin >> ageThreshold;

    cout << ageThreshold << "�� �̻��� ����: \n";

    int detectedPeople = 0;

    for (int i = 0; i < maxPeople; i++) {
     

        if (ageThreshold <= ages[i]) {
            cout << names[i] << " (" << ages[i] << "��)\n";
            detectedPeople++;
        }
    }

    if (detectedPeople == 0) {
        cout << ageThreshold << "�̻��� ���̸� ���� ���� �����ϴ�.";
    }

    return 0;
}