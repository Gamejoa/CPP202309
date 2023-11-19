#include "user.h"

// 생성자에서 hp 초기화
User::User() {
	hp = 20;  
}

int User::GetHp() {
	return hp;
}

void User::DecreaseHp(int amount) {
	hp -= amount;
}

void User::IncreaseHp(int amount) {
	hp += amount;
}
