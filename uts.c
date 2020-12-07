# include <stdio.h>

main()
{
float x[] = {5,3,7,55,3,22,24,33,55,33,22,4,4,5,55,6,64,3,2};
float total=0;int i;

int lenght = sizeof(x) / sizeof(x[0]);
int rec = lenght -1;

for (i=0;i<=rec;i++){
	total = total + x[i];
	printf("number index %d : %f\n",i,x[i]);
}
printf("Array length : %d\n",lenght);
printf("Total = %f\n",total);
}
