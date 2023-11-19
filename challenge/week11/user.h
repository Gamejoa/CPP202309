#pragma once
#include <iostream>
#include <string>

using namespace std;

class User {

private:
	int hp;

public:
	User();

	int GetHp();
	void DecreaseHp(int amount);
	void IncreaseHp(int amount);

};