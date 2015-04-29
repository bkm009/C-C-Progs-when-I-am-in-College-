/* Printing Mirror Image of Pyramid*/

#include<stdio.h>
#include<conio.h>
int main()
{
		int a[100][100],i,j,n,m,k;
		printf("Enter No. of Rows : ");
		scanf("%d",&n);
		m=(2*n)-1;
		i=1;
		while(i<=n-1)
		{
			k=n-i;
			j=(m/n)+k;
			while(j<=m)
			{
					if(a[i][j]>=k)
					{
							printf("*");
					}  else  printf(" ");
					j++;
					k--;
			}printf("\n");
			i++;
		}
		i=1;
		while(i<=n)
		{
			k=i-1;
			j=i;
			while(j<=m)
			{
					if(a[i][j]>=k)
					{
							printf("*");
					}  else  printf(" ");
					j++;
					k--;
			}printf("\n");
			i++;
	    }
		getch ();
		return 0;
}
