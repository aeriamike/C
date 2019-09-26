#include <stdio.h>

int main()
{
int x, y, i = 0, inputpower, inputcoeff, max=0;

scanf ("%d %d", &inputpower, &inputcoeff);
max = inputpower+1;
int power[max][2];
for ( x = 0; x < max; x++ ) 
{
	for ( y = 0; y < 2; y++ )
      power[x][y] = 0;
}
power[inputpower][0] = inputpower; 
power[inputpower][1] += inputcoeff;
if (inputpower==0){
	i++;}

for (;i<2;)
{
	scanf ("%d %d", &inputpower, &inputcoeff);
	power[inputpower][0] = inputpower; 
	power[inputpower][1] += inputcoeff;
		if (inputpower==0)
			i++;
}

for (i=max-1;i>1;i--)
{
	if (power[i][0]!=0){
		printf("%dx%d+", power[i][1], power[i][0]);}
}

if (power[1][0]!=0 && max!=1){
	printf("%dx+", power[1][1]);}
printf("%d", power[0][1]);


return 0;


}
