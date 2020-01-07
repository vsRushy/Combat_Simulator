#include <iostream>

#include "Character.h"

Character::Character()
{

}

Character::Character(const float& hp, const float& atk, const float& def, const float& crit)
	: hit_points(hp), attack(atk), defense(def), critical(crit),
	current_hit_points(hp), current_attack(atk), current_defense(def), current_critical(crit)
{

}

Character::Character(CHARACTER_TYPE type)
{
	switch (type)
	{
	case CHARACTER_TYPE::TANK:
	{
		hit_points = current_hit_points = 120.0f;
		attack = current_attack = 15.0f;
		defense = current_defense = 10.0f;
		critical = current_critical = 5.0f;
	}
	break;
	case CHARACTER_TYPE::FIGHTER:
	{
		hit_points = current_hit_points = 100.0f;
		attack = current_attack = 17.5f;
		defense = current_defense = 10.0f;
		critical = current_critical = 5.0f;
	}
	break;
	case CHARACTER_TYPE::ARMORED:
	{
		hit_points = current_hit_points = 100.0f;
		attack = current_attack = 15.0f;
		defense = current_defense = 25.0f;
		critical = current_critical = 5.0f;
	}
	break;
	case CHARACTER_TYPE::NONE:
		break;
	default:
		break;
	}
}

Character::~Character()
{

}

void Character::SetHP(const float& value)
{
	hit_points = value;
}

void Character::SetATK(const float& value)
{
	attack = value;
}

void Character::SetDEF(const float& value)
{
	defense = value;
}

void Character::SetCRIT(const float& value)
{
	critical = value;
}

void Character::SetCurrentHP(const float& value)
{
	current_hit_points = value;
}

void Character::SetCurrentATK(const float& value)
{
	current_attack = value;
}

void Character::SetCurrentDEF(const float& value)
{
	current_defense = value;
}

void Character::SetCurrentCRIT(const float& value)
{
	current_critical = value;
}

float Character::GetHP() const
{
	return hit_points;
}

float Character::GetATK() const
{
	return attack;
}

float Character::GetDEF() const
{
	return defense;
}

float Character::GetCRIT() const
{
	return critical;
}

float Character::GetCurrentHP() const
{
	return current_hit_points;
}

float Character::GetCurrentATK() const
{
	return current_attack;
}

float Character::GetCurrentDEF() const
{
	return current_defense;
}

float Character::GetCurrentCRIT() const
{
	return current_critical;
}

void Character::SetOponent(Character* oponent)
{
	this->oponent = oponent;
}

Character* Character::GetOponent() const
{
	return oponent;
}

void Character::PrintCurrentStats() const
{
	std::cout << "HP: " << GetCurrentHP() << std::endl;
	std::cout << "ATK: " << GetCurrentATK() << std::endl;
	std::cout << "DEF: " << GetCurrentDEF() << std::endl;
	std::cout << "CRIT: " << GetCurrentCRIT() << std::endl;
}
