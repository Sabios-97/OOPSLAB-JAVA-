#include<stdio.h>
int main()
{
	int b[30],p[30],n,m,f[30]={0};
	printf("Enter the number of blocks\n");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
			printf("Enter the memory size for block %d ",i+1);
			scanf("%d",&b[i]);
			f[i]++;

	}
	printf("Enter the number of processes\n");
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
			printf("Enter the memory size for process %d ",i+1);
			scanf("%d",&p[i]);

	}
	for(int i=0;i<m;i++)
	{int flag=0;
		for(int j=0;j<n;j++)
		{
			if(p[i]<=b[j] && b[j]!=-1)
			{   
				printf("Process %d assigned to Block number=%d Internal fragment=%d\n",i+1,j+1,b[j]-p[i]);
				flag=1;
				b[j]=-1;
				f[j]--;
				break;
				
			}
			
		}
		if(!flag)
				printf("Process %d cant be allocated\n",i+1);
	}

    for(int j=0;j<m;j++)
    {
    	if(f[j])
    		{printf("Block %d remains empty\n",j+1);}
    }

}