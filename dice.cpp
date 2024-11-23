 #include <stdio.h>
#include <stdlib.h>
#include <time.h>

main()  {

	int rollADie1, rollADie2, totalDice, key = 0, key2 = 0, end = 0;
	srand(time(0));  // call this only once – seed the random generator

	do
	{
		rollADie1 = rand() % 6 + 1;  // in the range of 1 - 6
		rollADie2 = rand() % 6 + 1;  // in the range of 1 - 6

		printf("Dice #1 is %i\n", rollADie1);
		printf("Dice #2 is %i\n", rollADie2);

		totalDice = rollADie1 + rollADie2;
		printf("The total of both dice is %i\n", totalDice);

		switch (totalDice)  {
		case 2:
			end = 2;
			break;
		case 3:
			end = 3;
			break;
		case 4:
			key = 4;
			break;
		case 5:
			key = 5;
			break;
		case 6:
			key = 6;
			break;
		case 7:
			end = 7;
			break;
		case 8:
			key = 8;
			break;
		case 9:
			key = 9;
			break;
		case 10:
			key = 10;
			break;
		case 11:
			end = 11;
			break;
		case 12:
			end = 12;
			break;
		}
	} while (totalDice != key);

	do
	{
		rollADie1 = rand() % 6 + 1;  // in the range of 1 - 6
		rollADie2 = rand() % 6 + 1;  // in the range of 1 - 6

		printf("Dice #1 is %i\n", rollADie1);
		printf("Dice #2 is %i\n", rollADie2);

		totalDice = rollADie1 + rollADie2;
		printf("The total of both dice is %i\n", totalDice);

		switch (totalDice)  {
		case 2:
			printf("Roll Again\n");
			key2 = 2;
			break;
		case 3:
			printf("Roll Again\n");
			key2 = 3;
			break;
		case 4:
			key = 4;
			break;
		case 5:
			key = 5;
			break;
		case 6:
			key = 6;
			break;
		case 7:
			printf("You Win\n");
			break;
		case 8:
			key = 8;
			break;
		case 9:
			key = 9;
			break;
		case 10:
			key = 10;
			break;
		case 11:
			printf("Roll Again\n");
			key2 = 11;
			break;
		case 12:
			printf("Roll Again\n");
			key2 = 12;
			break;
		}
	} while (totalDice == key2);

	if (totalDice == 7) {
		printf("You are the Winner\n");
	}
	else
	{
		if (totalDice == key);
		printf("You are a Loser\n");
	}


	printf("Thank you for Playing\n");

	system("pause");
}
