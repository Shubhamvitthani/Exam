#include<stdio.h>
main()
{
 int num;
 char lang;
 char n[200];

 printf("/\\!!  welcome To raJhansh multiplex  !!/\\");
 printf("\n Enter 1 Pushpa 2");
 printf("\n Enter 2 Bhulbhulaiya 3");
 printf("\n Enter 3 RRR");

 printf("\n\nEnter Your Movie :");
 scanf("%d",&num);



 switch(num)
 {
	case 1:
	printf("Time :-\n\n");

		switch(num)
		{
		  case 1:
		  printf("1. morning 9:00 to 11:00 AM\n");
		  printf("2. afternoon 1:00 to 4:00 PM \n");
		  printf("3. evning 6:00 to 9:00 PM\n");

          printf("\n\n Choies Your Time : ");
		  scanf("%d",&num);

		}
	break;

	case 2:
	printf("Time:-\n\n");

		switch(num)
		{

		  case 2:
		  printf("1. morning 9:00 to 11:00 AM\n");
		  printf("2. afternoon 1:00 to 4:00 PM \n");
		  printf("3. evning 6:00 to 9:00 PM\n");

		  printf("\n\n Choies Your Time : ");
		  scanf("%d",&num);

		}
	break;

	case 3:
	printf("Time:-\n\n");

		switch(num)
		{
		  case 3:
		  printf("1. morning 9:00 to 11:00 AM\n");
		  printf("2. afternoon 1:00 to 4:00 PM \n");
		  printf("3. evning 6:00 to 9:00 PM\n");

          printf("\n\n Choies Your Time : ");
		  scanf("%d",&num);

		}
	break;

	default:
	printf("invalid number....");
 }


}
