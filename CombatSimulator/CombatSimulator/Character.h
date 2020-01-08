enum class CHARACTER_TYPE
{
	NONE,
	TANK,
	FIGHTER,
	ARMORED,
};

class Character
{
public:
	Character();
	Character(const float& hp, const float& atk, const float& def, const float& crit);
	Character(CHARACTER_TYPE type);

	~Character();

public:
	void SetHP(const float& value);
	void SetATK(const float& value);
	void SetDEF(const float& value);
	void SetCRIT(const float& value);

	void SetCurrentHP(const float& value);
	void SetCurrentATK(const float& value);
	void SetCurrentDEF(const float& value);
	void SetCurrentCRIT(const float& value);

	float GetHP() const;
	float GetATK() const;
	float GetDEF() const;
	float GetCRIT() const;

	float GetCurrentHP() const;
	float GetCurrentATK() const;
	float GetCurrentDEF() const;
	float GetCurrentCRIT() const;

	// ---------
	
	void PrintCurrentStats() const;

	// Actions -----

	void DoBasicAttack(Character* enemy) const;
	void DoSpecialAttack(Character* enemy);
	void DoBoostAttack();
	void DoBoostDefense();

	// For machine turns
	void DoAction(Character* enemy);

private:
	float hit_points = 0.0f;
	float attack = 0.0f;
	float defense = 0.0f;
	float critical = 0.0f;

	float current_hit_points = 0.0f;
	float current_attack = 0.0f;
	float current_defense = 0.0f;
	float current_critical = 0.0f;

	bool has_special_attack = true;

private:
	CHARACTER_TYPE type = CHARACTER_TYPE::NONE;
};