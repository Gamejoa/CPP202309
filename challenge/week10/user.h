#pragma once
#include <iostream>
#include <string>
using namespace std;

class User {

public:
	int hp;
	int GetHp();
	void DecreaseHp(int amount);
	void IncreaseHp(int amount);

};