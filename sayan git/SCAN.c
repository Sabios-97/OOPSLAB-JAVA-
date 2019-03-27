#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int a[200],n,x,pos;
	printf("Enter the number of access requests\n");
	scanf("%d",&n);
	printf("Enter the Request Values\n");
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("Enter the current request\n");
	scanf("%d",&x);
	a[0]=x;
	for(int i=0;i<=n-1;i++)
	{
		for(int j=0;j<=n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	int left=0;
    for(int i=0;i<=n;i++)
    {
    	if(a[i]==x)
    		{pos=i;
    			break;}

    }
    if(abs(a[pos-1]-x)<abs(a[pos+1]-x))
    	left=1;
    else
    	left=0;

    if(left)
    {
    	for(int i=pos;i>=0;i--)
    		printf("%d ",a[i]);
    	for(int i=pos+1;i<=n;i++)
    		printf("%d ",a[i]);
    }
    else
    {
    	for(int i=pos;i<=n;i++)
    		printf("%d ",a[i]);
    	for(int i=pos-1;i>=0;i--)
    		printf("%d ",a[i]);
    }

	
}