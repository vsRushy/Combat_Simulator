class Character
{
public:
	Character();
	~Character();

public:
	void SetHP(const float& value);
	void SetATK(const float& value);
	void SetDEF(const float& value);
	void SetCRIT(const float& value);

	float GetHP() const;
	float GetATK() const;
	float GetDEF() const;
	float GetCRIT() const;

private:
	float hit_points = 0.0f;
	float attack = 0.0f;
	float defense = 0.0f;
	float critical = 0.0f;
};