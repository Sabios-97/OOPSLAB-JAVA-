#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{int a[200],n,x,pos;
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
	int count=n+1;
	
	
	while(count)
	{int k,minn=1000;
		int temp;
     for(int i=0;i<=n;i++)
     {
     	if(a[i]==-1)
     		continue;
     	temp=abs(a[i]-x);
     	// printf("Value of temp %d\n",temp);
     	if(temp==0)
           k=i;
     	if(temp<minn && temp!=0)
     	{
     		minn=temp;
     		pos=i;
     	}
     }
      printf("%d ",a[k]);
     x=a[pos];
     //printf("value of x %d\n",x);
     count--;
     a[k]=-1;

	}
}