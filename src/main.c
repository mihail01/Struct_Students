#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#include "DataTypes.h"

typedef enum
{
	ONE=1,
	TWO,
	THREE,
	FOUR,
	FIVE,
	SIX,
	SEVEN,
	EIGHT,
	NINE,
	TEN
}TypeGrades;

typedef struct
{
	sint8 LastName;
	sint8 FirstName;
	TypeGrades informatics;
	TypeGrades matematics;
}TypeGradeRegister;





void main(void)
{
	sint8 idx=0;

	TypeGradeRegister HighSchool[2]=
		{
				"Istrate", "Madalina", FIVE, TEN,
				"Ailenei", "Mihail", TEN, TEN
		};

	for(idx=0; idx<2; idx++)
	{
		printf("Last Name -> %c \n "
				"First Name -> %c \n "
				"Info grade -> %d \n "
				"Mate Grade -> %d",
				HighSchool[idx].LastName, HighSchool[idx].FirstName, HighSchool[idx].informatics, HighSchool[idx].matematics);
		fflush(stdout);

		printf("\n\n");
		fflush(stdout);
	}

	getch();
}
