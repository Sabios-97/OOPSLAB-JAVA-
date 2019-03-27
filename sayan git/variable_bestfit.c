#include<stdio.h>
int main()
{
	int b[30],p[30],n,m;
	printf("Enter the number of blocks\n");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{
			printf("Enter the memory size for block %d ",i+1);
			scanf("%d",&b[i]);
			

	}




	printf("Enter the number of processes\n");
	scanf("%d",&m);
	for(int i=0;i<m;i++)
	{
			printf("Enter the memory size for process %d ",i+1);
			scanf("%d",&p[i]);

	}
	int f[30]={0};
	for(int i=0;i<m;i++)
	{int flag=0,minn=10000,k;
		for(int j=0;j<n;j++)
		{
			if((b[j]-p[i])<minn && b[j]!=0 && p[i]<=b[j])
			{  minn=(b[j]-p[i]);
				k=j;
			    flag=1;
			    
				
			}
			
		}
		    if(!flag)
		    	printf("Process %d cannot be allocated\n",i+1);
		    else{
			printf("Process %d assigned to Block number=%d Internal fragment=%d\n",i+1,k+1,minn);
			// if(b[k]==0)
			// f[k]--;
			b[k]=b[k]-p[i];
		     f[k]=1;}
				
	}

    for(int j=0;j<m;j++)
    {
    	if(!f[j])
    		{printf("Block %d is empty\n",j+1);}
    }

}