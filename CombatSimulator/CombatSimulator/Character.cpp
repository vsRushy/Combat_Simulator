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
