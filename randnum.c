#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int r = rand()%10+1;
	printf("A random number has been generated from 1 to 10, please type a number to guess \n");
	int x;
	do{
		if(scanf("%d",&x)==0){
			printf("Not a suitable character\n");
			while(getchar() != '\n');
		}
		else if (x>r){
			printf("Your number is too big \n");
		}
		else if(x<r||x!=0){
			printf("Your number is too small \n");
		}
		else if (x==r){
			printf("You guessed correct! \n");
		}
	}while(x!=r);
}
