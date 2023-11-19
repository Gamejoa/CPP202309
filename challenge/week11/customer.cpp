
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int maxPeople;
    cout << "총 고객 수를 입력하세요: ";
    cin >> maxPeople;

    vector<string> names;
    vector<int> ages;

    for (int i = 0; i < maxPeople; i++) {
        string name;
        cout << "사람 " << i + 1 << "의 이름: ";
        cin >> name;
        names.push_back(name);

        int age;
        cout << "사람 " << i + 1 << "의 나이: ";
        cin >> age;
        ages.push_back(age);
    }

  

    int ageThreshold;
    cout << "특정 나이 이상인 사람을 찾으려면 나이를 입력하세요: ";
    cin >> ageThreshold;

    cout << ageThreshold << "세 이상인 고객들: \n";

    int detectedPeople = 0;

    for (int i = 0; i < maxPeople; i++) {
     

        if (ageThreshold <= ages[i]) {
            cout << names[i] << " (" << ages[i] << "세)\n";
            detectedPeople++;
        }
    }

    if (detectedPeople == 0) {
        cout << ageThreshold << "이상의 나이를 가진 고객이 없습니다.";
    }

    return 0;
}