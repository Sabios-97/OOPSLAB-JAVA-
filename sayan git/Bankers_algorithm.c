#include<stdio.h>
#include<stdbool.h>
int main()
{int n=5,m=3;
	bool finish[30];
	int available[30],allocation[30][30],need[30][30],max[30][30],work[30];
printf("Enter the value for Available in the order A B C\n");
for(int i=0;i<3;i++)
{
	scanf("%d",&available[i]);
    work[i]=available[i];
}

for(int i=0;i<n;i++)
{int j=0;
	finish[i]=false;
	printf("Enter the value for Max in the order A B C for process%d ",i);
	scanf("%d%d%d",&max[i][j],&max[i][j+1],&max[i][j+2]);

}
for(int i=0;i<n;i++)
{int j=0;
	printf("Enter the value for Allocation in the order A B C for process%d ",i);
	scanf("%d%d%d",&allocation[i][j],&allocation[i][j+1],&allocation[i][j+2]);
    need[i][j]=max[i][j]-allocation[i][j];
    need[i][j+1]=max[i][j+1]-allocation[i][j+1];
    need[i][j+2]=max[i][j+2]-allocation[i][j+2];

}
// for(int i=0;i<n;i++)
// {
// 	printf("%d\t",available[i]);
// }
// printf("\n");
// for(int i=0;i<n;i++)
// {
// 	printf("%d\t",work[i]);
// }
// printf("\n");

// for(int i=0;i<n;i++)
// {
// 	for(int j=0;j<3;j++)
// 		printf("%d\t",max[i][j]);
// 	printf("\n");
// }
// printf("\n");

// for(int i=0;i<n;i++)
// {
// 	for(int j=0;j<3;j++)
// 		printf("%d\t",allocation[i][j]);
// 	printf("\n");
// }


printf("The safe sequence is\n");
int i=0,r=n;
while(r)
{   int flag=0;
	for(int j=0;j<3;j++)
		if(need[i%n][j]>work[j])
			flag=1;

	if(finish[i%n]==false && flag==0)
	{
		for(int j=0;j<3;j++)
		{
			work[j]=work[j]+allocation[i%n][j];
			finish[i%n]=true;
			
			
			
		}
		r--;
		printf("Process %d\t",i%n);
	}
	

i++;

}
int flag2=0;
for(int i=0;i<n;i++)
{
	if(finish[i]=false)
		{flag2=1;
			break;}
}
if(!flag2)
	printf("SYSTEM IN SAFE STATE\n");
else
	printf("SYSTEM IN UNSAFE STATE\n");





}