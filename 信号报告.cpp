#include<stdio.h>
int main()
{
	int num;
	scanf("%d",&num);
	
	int r1;
	int r2;
	int s;
	
	r1 = num/10*10;
	r2 = num/10;
	
	s = num-r1;
	
	if(s==1){
		printf("Faint signals, barely perceptible,");
	}
	else if(s==2){
		printf("Very weak signals,");
	}
	else if(s==3){
		printf("Weak signals,");
	}
	else if(s==4){
		printf("Fair signals,");
	}
	else if(s==5){
		printf("Fairly good signals,");
	}
	else if(s==6){
		printf("Good Signals,");
	}
	else if(s==7){
		printf("Moderately strong signals,");
	}
	else if(s==8){
		printf("Strong signals,");
	}
	else if(s==9){
		printf("Extremely strong signals,");
	}
	else{
		return 0;
	}


	if (r2==1){
		printf(" unreadable.");
	}
	else if(r2==2){
		printf(" barely readable, occasional words distinguishable.");
	}
	else if(r2==3){
		printf(" readable with considerable difficulty.");
	}
	else if(r2==4){
		printf(" readable with practically no difficulty.");
	}
	else if(r2==5){
		printf(" perfectly readable.");
	}
	else{
		return 0;
	}
	
	
	
}
