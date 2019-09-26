#include <stdio.h>
#include <stdlib.h>

struct point{
	
	int month;
	int day;
	int year;
}today;

int main(){
	
	today.month=07;
	today.day=31;
	today.year=2014;
	
	printf("Today's date is %i-%i-%i.\n",today.year,today.month,today.day);
	
	return 0;	
}
