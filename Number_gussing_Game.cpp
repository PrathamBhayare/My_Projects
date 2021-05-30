#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

int main()
{
	int num,guess,nguesses=1;
	srand(time(0));
	num = rand()%100+1;
	
//	printf("the number is %d",num);
	
	do{
		printf("guess the number between 1 to 100\n" );
		scanf("%d",&guess);
		if(guess>num)
		{
			printf("lower number please\n");
		}
		else if(guess<num)
		{
			printf("higher number please\n");
		}
		else{
			printf("you guesssed it in %d attempt",nguesses);
		}
		nguesses++;
			
	}while(guess!=num);
	getch();
	return 0;
}