#include "user.h"

// �����ڿ��� hp �ʱ�ȭ
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
