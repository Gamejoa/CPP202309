#include "user.h"

int User::GetHp() {
	return hp;
}

void User::DecreaseHp(int amount) {
	hp -= amount;
}

void User::IncreaseHp(int amount) {
	hp += amount;
 }
