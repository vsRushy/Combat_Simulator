#include <iostream>

#include "Application.h"

Application::Application()
{

}

Application::~Application()
{

}

void Application::PrintTitle()
{
	std::cout << " _____                 _           _     _____                           _             " << std::endl;
	std::cout << "/  __ \\               | |         | |   |  __ \\                         | |            " << std::endl;
	std::cout << "| /  \\/ ___  _ __ ___ | |__   __ _| |_  | |  \\/ ___ _ __   ___ _ __ __ _| |_ ___  _ __ " << std::endl;
	std::cout << "| |    / _ \\| '_ ` _ \\| '_ \\ / _` | __| | | __ / _ \\ '_ \\ / _ \\ '__/ _` | __/ _ \\| '__|" << std::endl;
	std::cout << "| \\__/\\ (_) | | | | | | |_) | (_| | |_  | |_\\ \\  __/ | | |  __/ | | (_| | || (_) | |   " << std::endl;
	std::cout << " \\____/\\___/|_| |_| |_|_.__/ \\__,_|\\__|  \\____/\\___|_| |_|\\___|_|  \\__,_|\\__\\___/|_|   " << std::endl;
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
}

void Application::PlayerVsPlayer()
{
	system("cls");
	PrintTitle();
	std::cout << "----------------------------" << std::endl;
	std::cout << "|___PLAYER --VS-- PLAYER___|" << std::endl;
	std::cout << "----------------------------" << std::endl << std::endl;
}

void Application::MachineVsMachine()
{
	system("cls");
	PrintTitle();
	std::cout << "------------------------------" << std::endl;
	std::cout << "|___MACHINE --VS-- MACHINE___|" << std::endl;
	std::cout << "------------------------------" << std::endl << std::endl;
}
