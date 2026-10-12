#include<stdio.h>

void main()
{
	int i,ar[10],n,pos=-1;
	printf("Enter array:-\n");
	for(i=0;i<=9;i++)
	{
		printf("ar[%d]=",i);	
		scanf("%d",&ar[i]);
	}
	printf("Enter number to be search=");
	scanf("%d",&n);
	for(i=0;i<=9;i++)
	{
		if(n==ar[i])
		{
			pos=i+1;
			getchar();
		}
	}
	if(pos==-1)
	{
		printf("Number not found.");
        getchar();			
	}	
	else
	{
		printf("Position=%d",pos);
        getchar();			
	}
}

//obtained from:
/* https://www.efaculty.in/c-programs/linear-search-program-in-c/ */
