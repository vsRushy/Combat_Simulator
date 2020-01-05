#include <iostream>

#include "Application.h"

int main()
{
	Application application;
	
	application.PrintTitle();
	application.PrintMainOptions();

	while (application.application_state != APPLICATION_STATE::EXIT)
	{
		char input_menu = getchar();
		switch (input_menu)
		{
		case '1':
			application.application_state = APPLICATION_STATE::PLAYER_VS_MACHINE;
			application.PlayerVsMachine();
			break;
		case '2':
			application.application_state = APPLICATION_STATE::PLAYER_VS_PLAYER;
			break;
		case '3':
			application.application_state = APPLICATION_STATE::MACHINE_VS_MACHINE;
			break;
		case '4':
			application.application_state = APPLICATION_STATE::EXIT;
			break;
		default:
			break;
		}

	}

	std::cin.get();
	return 0;
}
