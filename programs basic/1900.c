#include<stdio.h>

int main()
{
	int n,a,m = 0;
	
	printf("Enter a year : ");
	scanf("%d", &n);
	
	//Counting total number of days
	for(a = 1; a < n; a++)
	{
		if(a % 4 == 0)//366 days if a leap year
			m = m + 366;
		else
			m = m + 365;
	}
	
	m = m % 7;
	
	if(m == 1)
		printf("Monday on %d", n);
	if(m == 2)
		printf("Tuesday %d", n);
	if(m == 3)
		printf("Wednesday %d", n);
	if(m == 4)
		printf("Thursday %d", n);
	if(m == 5)
		printf("Friday %d", n);
	if(m == 6)
		printf("Saturday%d", n);
	if(m == 0)
		printf("Sunday %d", n);
		
	
	return 0;
}