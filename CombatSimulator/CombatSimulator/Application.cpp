#include <iostream>

#include "Application.h"
#include "Character.h"

Application::Application()
{

}

Application::~Application()
{

}

void Application::MainMenu()
{
	PrintTitle();
	PrintMainOptions();

	char input_menu;
	scanf_s(" %c", &input_menu);
	switch (input_menu)
	{
	case '1':
		application_state = APPLICATION_STATE::PLAYER_VS_MACHINE;
		PlayerVsMachine();
		break;
	case '2':
		application_state = APPLICATION_STATE::PLAYER_VS_PLAYER;
		PlayerVsPlayer();
		break;
	case '3':
		application_state = APPLICATION_STATE::MACHINE_VS_MACHINE;
		MachineVsMachine();
		break;
	case '4':
		application_state = APPLICATION_STATE::EXIT;
		exit(0);
		break;
	default:
		break;
	}
}

void Application::PrintTitle()
{
	std::cout << "   ____                _           _     ____  _                 _       _             " << std::endl;
	std::cout << "  / ___|___  _ __ ___ | |__   __ _| |_  / ___|(_)_ __ ___  _   _| | __ _| |_ ___  _ __ " << std::endl;
	std::cout << " | |   / _ \\| '_ ` _ \\| '_ \\ / _` | __| \\___ \\| | '_ ` _ \\| | | | |/ _` | __/ _ \\| '__|" << std::endl;
	std::cout << " | |__| (_) | | | | | | |_) | (_| | |_   ___) | | | | | | | |_| | | (_| | || (_) | |   " << std::endl;
	std::cout << "  \\____\\___/|_| |_| |_|_.__/ \\__,_|\\__| |____/|_|_| |_| |_|\\__,_|_|\\__,_|\\__\\___/|_|   " << std::endl;
	std::cout << "                                                                                       " << std::endl;
	std::cout << "|||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||" << std::endl;
	std::cout << std::endl << std::endl;
}

void Application::PrintMainOptions()
{
	std::cout << "Please, select the option:" << std::endl;
	std::cout << "(1) Player VS Machine" << std::endl;
	std::cout << "(2) Player VS Player" << std::endl;
	std::cout << "(3) Machine VS Machine" << std::endl;
	std::cout << "(4) Exit" << std::endl;
	std::cout << "------------------------" << std::endl;
}

void Application::PlayerVsMachine()
{
	system("cls");
	PrintTitle();
	std::cout << "-----------------------------" << std::endl;
	std::cout << "|___PLAYER --VS-- MACHINE___|" << std::endl;
	std::cout << "-----------------------------" << std::endl << std::endl;

	Character* character_1 = nullptr;
	Character* character_2 = nullptr;

	std::cout << "--- SELECT CHARACTER 1 TYPE ---" << std::endl;
	std::cout << "(1) Tank" << std::endl;
	std::cout << "(2) Fighter" << std::endl;
	std::cout << "(3) Armored" << std::endl;
	
	char input_c1;
	scanf_s(" %c", &input_c1);
	switch (input_c1)
	{
	case '1':
		character_1 = new Character(CHARACTER_TYPE::TANK);
		break;
	case '2':
		character_1 = new Character(CHARACTER_TYPE::FIGHTER);
		break;
	case '3':
		character_1 = new Character(CHARACTER_TYPE::ARMORED);
		break;
	default:
		break;
	}

	std::cout << "--- SELECT CHARACTER 2 TYPE ---" << std::endl;
	std::cout << "(1) Tank" << std::endl;
	std::cout << "(2) Fighter" << std::endl;
	std::cout << "(3) Armored" << std::endl;

	char input_c2;
	scanf_s(" %c", &input_c2);
	switch (input_c2)
	{
	case '1':
		character_2 = new Character(CHARACTER_TYPE::TANK);
		break;
	case '2':
		character_2 = new Character(CHARACTER_TYPE::FIGHTER);
		break;
	case '3':
		character_2 = new Character(CHARACTER_TYPE::ARMORED);
		break;
	default:
		break;
	}

	system("cls");
	PrintTitle();

	CombatPlayerVsMachine(character_1, character_2);

	system("cls");
	MainMenu();
}

void Application::PlayerVsPlayer()
{
	system("cls");
	PrintTitle();
	std::cout << "----------------------------" << std::endl;
	std::cout << "|___PLAYER --VS-- PLAYER___|" << std::endl;
	std::cout << "----------------------------" << std::endl << std::endl;

	Character* character_1 = nullptr;
	Character* character_2 = nullptr;

	std::cout << "--- SELECT CHARACTER 1 TYPE ---" << std::endl;
	std::cout << "(1) Tank" << std::endl;
	std::cout << "(2) Fighter" << std::endl;
	std::cout << "(3) Armored" << std::endl;

	char input_c1;
	scanf_s(" %c", &input_c1);
	switch (input_c1)
	{
	case '1':
		character_1 = new Character(CHARACTER_TYPE::TANK);
		break;
	case '2':
		character_1 = new Character(CHARACTER_TYPE::FIGHTER);
		break;
	case '3':
		character_1 = new Character(CHARACTER_TYPE::ARMORED);
		break;
	default:
		break;
	}

	std::cout << "--- SELECT CHARACTER 2 TYPE ---" << std::endl;
	std::cout << "(1) Tank" << std::endl;
	std::cout << "(2) Fighter" << std::endl;
	std::cout << "(3) Armored" << std::endl;

	char input_c2;
	scanf_s(" %c", &input_c2);
	switch (input_c2)
	{
	case '1':
		character_2 = new Character(CHARACTER_TYPE::TANK);
		break;
	case '2':
		character_2 = new Character(CHARACTER_TYPE::FIGHTER);
		break;
	case '3':
		character_2 = new Character(CHARACTER_TYPE::ARMORED);
		break;
	default:
		break;
	}

	system("cls");
	PrintTitle();

	system("cls");
	MainMenu();
}

void Application::MachineVsMachine()
{
	system("cls");
	PrintTitle();
	std::cout << "------------------------------" << std::endl;
	std::cout << "|___MACHINE --VS-- MACHINE___|" << std::endl;
	std::cout << "------------------------------" << std::endl << std::endl;

	Character* character_1 = nullptr;
	Character* character_2 = nullptr;

	std::cout << "--- SELECT CHARACTER 1 TYPE ---" << std::endl;
	std::cout << "(1) Tank" << std::endl;
	std::cout << "(2) Fighter" << std::endl;
	std::cout << "(3) Armored" << std::endl;

	char input_c1;
	scanf_s(" %c", &input_c1);
	switch (input_c1)
	{
	case '1':
		character_1 = new Character(CHARACTER_TYPE::TANK);
		break;
	case '2':
		character_1 = new Character(CHARACTER_TYPE::FIGHTER);
		break;
	case '3':
		character_1 = new Character(CHARACTER_TYPE::ARMORED);
		break;
	default:
		break;
	}

	std::cout << "--- SELECT CHARACTER 2 TYPE ---" << std::endl;
	std::cout << "(1) Tank" << std::endl;
	std::cout << "(2) Fighter" << std::endl;
	std::cout << "(3) Armored" << std::endl;

	char input_c2;
	scanf_s(" %c", &input_c2);
	switch (input_c2)
	{
	case '1':
		character_2 = new Character(CHARACTER_TYPE::TANK);
		break;
	case '2':
		character_2 = new Character(CHARACTER_TYPE::FIGHTER);
		break;
	case '3':
		character_2 = new Character(CHARACTER_TYPE::ARMORED);
		break;
	default:
		break;
	}

	system("cls");
	PrintTitle();

	system("cls");
	MainMenu();
}

void Application::ShowPlayerCombatOptions() const
{
	std::cout << "___Actions___" << std::endl;
	std::cout << "(1) Basic Attack." << std::endl;
	std::cout << "(2) Special Attack." << std::endl;
	std::cout << "(3) Boost Attack." << std::endl;
	std::cout << "(4) Boost Defense" << std::endl;
}

void Application::CombatPlayerVsMachine(Character* c1, Character* c2)
{
	do
	{
		system("cls");
		PrintTitle();

		std::cout << "____STATS____" << std::endl;
		std::cout << "Character 1." << std::endl;
		c1->PrintCurrentStats();
		std::cout << "Character 2." << std::endl;
		c2->PrintCurrentStats();
		
		std::cout << "Player 1, select an option: " << std::endl;
		ShowPlayerCombatOptions();
		
		char option;
		scanf_s(" %c", &option);
		switch (option)
		{
		case '1':
			c1->DoBasicAttack(c2);
			break;
		case '2':
			c1->DoSpecialAttack(c2);
			break;
		case '3':
			c1->DoBoostAttack();
			break;
		case '4':
			c1->DoBoostDefense();
			break;
		default:
			break;
		}

		c2->DoAction(c1);

		//_sleep(100);
	}
	while ((c1->GetCurrentHP() > 0.0f && c2->GetCurrentHP() > 0.0f));
}
