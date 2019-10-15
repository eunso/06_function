#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n)
{
	int res=1; 
	int i;
	for(i=1;i<=n;i++)
	{	res=res*i;
	
	}
	
	return res;
}

int calcCombination(int n, int r)
{
	int bunja, bunmo;
	bunja= factorial(n);
	bunmo= factorial(n-r)*factorial(r);
	
	return (bunja/bunmo);
}

int main(int argc, char *argv[]) {

 int n, r;
 int res;

 printf ("input n and r");
 scanf("%d %d", &n, &r);
 
 res = calcCombination(n,r);
 printf("combination result is %d\n", res);
 
  

	return 0;
	}

