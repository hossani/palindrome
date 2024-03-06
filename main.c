#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num,firstNum,reste=0,revNum=0;
	printf("Merci d'entrer un nombre \n");
	scanf("%d",&num);
	firstNum=num;
	do{
			reste=num%10;
		revNum=10*revNum+reste;
		num=num/10;
	}while(num!=0);
	if((revNum==firstNum)&&firstNum!=0){
		printf("%d est un nombre palindrome",firstNum);
	}
	else{
		printf("%d n'est pas un nombre palindrome",firstNum);
	}
    return 0;
}
