#include <iostream>
#include <time.h>

#include "Application.h"

int main()
{
	srand(time(NULL));

	Application application;
	application.MainMenu();

	return 0;
}
