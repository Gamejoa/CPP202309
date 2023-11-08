#include "user.h"

int User::GetHp() {
	return hp;
}

void User::DecreaseHp(int hp) {
	hp -= 1;
}
