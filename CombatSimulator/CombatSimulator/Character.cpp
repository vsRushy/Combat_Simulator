#include "Character.h"

Character::Character()
{

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
