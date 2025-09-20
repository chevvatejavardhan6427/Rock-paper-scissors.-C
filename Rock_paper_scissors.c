#include<stdio.h>
#include<time.h>
#include<stdlib.h>	
int main(){
	int useropt,comopt,max=3,min=1;
	printf("lets play rock,paper,scissors :\n ");
	printf("choose among the following options (1,2,3) :\n ");
	printf("1)ROCK\n");
	printf("2)PAPER\n");
	printf("3)SCISSORS\n");
	do {
		printf("choose your opt : ");
		scanf("%d",&useropt);
	}while(useropt>3 || useropt<1);
	switch(useropt){
		case 1:printf("you choosen ROCK\n ");break;
		case 2: printf("you choosen PAPER\n");break;
		case 3:printf("you choosen SCISSORS\n");break;
	}	
	srand(time(0));
	comopt=(rand()%max-min+1)+min;
	switch(comopt){
		case 1:printf("computer choosen ROCK\n ");break;
		case 2: printf("computer choosen PAPER\n");break;
		case 3:printf("computer choosen SCISSORS\n");break;
	}
	if((useropt==1 && comopt==3)||(useropt==2&&comopt==1)||(useropt==3&&comopt==2)){
		printf("you won the match ");
	}
	else if(useropt==comopt){
		printf("it's a draw ");
	}
	else{
		printf("you loose the match ");
	}	
	return 0;
}
	
