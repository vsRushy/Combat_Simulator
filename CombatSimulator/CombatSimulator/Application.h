class Character;

enum class APPLICATION_STATE
{
	EXIT = -1,
	INIT,
	PLAYER_VS_MACHINE,
	PLAYER_VS_PLAYER,
	MACHINE_VS_MACHINE,
};

class Application
{
public:
	Application();
	~Application();

public:
	void MainMenu();
	void PrintTitle();
	void PrintMainOptions();

	void PlayerVsMachine();
	void PlayerVsPlayer();
	void MachineVsMachine();

	void ShowPlayerCombatOptions() const;

private:
	void CombatPlayerVsMachine(Character* c1, Character* c2);
	void CombatPlayerVsPlayer(Character* c1, Character* c2);
	void CombatMachineVsMachine(Character* c1, Character* c2);

public:
	APPLICATION_STATE application_state = APPLICATION_STATE::INIT;
};