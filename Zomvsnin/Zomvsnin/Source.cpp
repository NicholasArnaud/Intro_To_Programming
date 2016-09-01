#include<iostream>
struct Zambie
{
	int health;
	bool alive;
	int spirit;
};
struct Ninja
{
	int health;
	bool alive;
	int chi;
};
int FightN(Zambie &attacker, Ninja &defender)
{
	std::cout << "Zambie is attacking Ninja \n \n" << std::endl;
	defender.health -= 10;
	std::cout << "The Ninja took 10 damage his Health is now |" << defender.health <<"|" << "\n \n " << std::endl;
	attacker.spirit -= 1;
	std::cout << "The Zambie attacked so his Spirit is now |" << attacker.spirit << "|" << "\n \n " << std::endl;
	return 1;
}
int FightZ(Ninja &attacker, Zambie &defender)
{
	std::cout << "Ninja is attacking Zambie \n \n" << std::endl;
	defender.health -= 10;
	std::cout << "The Zombie took 10 damage his Health is now |" << defender.health << "|" <<" \n \n "<< std::endl;
	attacker.chi -= 1;
	std::cout << "The Ninja attacked so his Chi is now |" << attacker.chi << "|" << " \n \n" << std::endl;
	std::cout << "----------------------------------------------------------- \n";
	
	return 1;
}

int main()
{
	Zambie Chris = { 90,true,10 };
	Zambie Matthew = { 100,true,25 };
	Ninja Regi = { 100,true,25 };
	Ninja Wilson = { 50,true,20 };
	char input = '0';
	bool GameOver = false;
	while (input != 'q' || GameOver == true)
	{
		std::cout << "----------------------------------------------------------- \n";
		std::cout << "Press 'a' for Zambie CHRIS to attack Ninja REGI. \n" << "Press 's' for Ninja REGI to attack Zambie CHRIS. \n" << "Press 'd' for Zambie MATTHEW to attack Ninja WILSON. \n" << "Press 'f' for Ninja WILSON to attack Zambie MATTHEW. \n";
		std::cout << "----------------------------------------------------------- \n\n\n\n\n";
		std::cin >> input;
		std::cout << "Your input was:|" << input << "|\n\n";
#pragma region Attacks
		if (input == 'a'&& Chris.alive == true && Regi.alive == true)
		{
			std::cout << "CHRIS FIGHTS REGI" << std::endl;
			FightN(Chris, Regi);
		}


		if (Regi.health <= 0)
		{
			Regi.alive = false;
			std::cout << "Regi the Ninja is now dead...\n\n";
		}


		if (input == 's' && Regi.alive == true && Chris.alive == true)
		{
			std::cout << "REGI FIGHTS CHRIS" << std::endl;
			FightZ(Regi, Chris);

		}


		if (Chris.health <= 0)
		{
			Chris.alive = false;
			std::cout << "Chris the Zambie is now dead...\n\n";

		}



		if (input == 'd' && Matthew.alive == true && Wilson.alive == true)
		{
			std::cout << "MATTHEW FIGHTS WILSON" << std::endl;
			FightN(Matthew, Wilson);

		}

		if (Matthew.health <= 0)
		{
			Matthew.alive = false;
			std::cout << "Matthew the Zambie is now dead...\n\n";


		}

		if (input == 'f' && Wilson.alive == true && Matthew.alive == true)
		{
			std::cout << "WILSON FIGHTS MATTHEW" << std::endl;
			FightZ(Wilson, Matthew);

		}

		if (Wilson.health <= 0)
		{
			Wilson.alive = false;
			std::cout << "Wilson the Ninja is now dead...\n\n";
		}
#pragma endregion
#pragma region Deaths
			if (Wilson.alive == false && Regi.alive == false)
			{
				std::cout << "----------------------------------------------------------- \n\n\n\n\n";
				printf("Ninjas have won. \n \n GOOD JOB NINJAS! \n \n");
				printf("Zambies are no more!");
				break;

			}
			else if  (Matthew.alive == false && Chris.alive == false)
			{
				std::cout << "----------------------------------------------------------- \n\n\n\n\n";
				printf("Zambies have won. \n \n GOOD JOB ZAMBIES! \n \n");
				printf("Ninjas are no more! \n \n");
				break;
			}
#pragma endregion 
#pragma region Spirit
		if (Matthew.spirit == 0)
		{
			printf("Zambie out of Spirit and can no longer attack \n");
			printf("Choose a different character \n");

		}

		if (Regi.chi == 0)
		{
			printf("Ninja out of Chi and can no longer attack \n");
			printf("Choose a different character \n");

			if (Wilson.chi == 0)
			{
				printf("Ninja out of Chi and can no longer attack \n");
				printf("Choose a different character \n");
			}
			if (Chris.spirit == 0)
			{
				printf("Zambie out of Spirit and can no longer attack \n");
				printf("Choose a different character \n");
			}
#pragma endregion 
#pragma region Chi
			if (Wilson.chi == 0)
			{
				printf("Ninja out of Chi and can no longer attack \n");
				printf("Choose a different character \n");

			}


			if (Regi.chi == 0)
			{
				printf("Ninja out of Chi and can no longer attack \n");
				printf("Choose a different character \n");

			}
#pragma endregion

			printf("\n \n \n");
		}
	}
	system("pause");
	return 1;

}