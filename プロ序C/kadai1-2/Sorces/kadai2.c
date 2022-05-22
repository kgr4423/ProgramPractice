#include<stdio.h>

int addup(int i);

int main()
{
	int i;
	int sum;
	i=0;
	sum=0;
	sum=addup(i);
	printf("i was squared -it now equals %d\n",sum);
}

int addup(int i)
{
	while(i<=4){
		i=i+1;
		printf("i is %d\n", i*i);
	}

	i=i*i;
	return(i);
}
