#include<stdio.h>
#include<conio.h>

main()
{
	float salary, bonus;
	
	printf("\n Entre salary :");
	scanf("%f", &salary);
	
	bonus = salary*0.30;
	
	printf("\n Bonus =%f", bonus);
	return 0;
}
