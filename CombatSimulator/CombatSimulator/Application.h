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
	void PrintTitle();
	void PrintMainOptions();

public:
	APPLICATION_STATE application_state = APPLICATION_STATE::INIT;
};