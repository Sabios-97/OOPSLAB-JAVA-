#include<stdio.h>

int main()
{
	int a[5]={-1},freq[5]={0},f[5000]={0},p[5000],minn,n,x,pos,ch=0,cf=0;
	printf("Enter the number of pages in the seuqence\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
     scanf("%d",&x);
     if(f[x])
     {
     for(int k=0;k<3;k++)
     {
      printf("%d ",a[k]);
     }
     printf("HIT \n");
     ch++;

      freq[p[x]]++;
      continue;
     }
     f[x]=1;
     p[x]=i;
     minn=freq[0];
     pos=0;
     for(int j=1;j<3;j++)
     {   //printf("Value of freq[j] %d and minn %d\n",freq[j],minn);
     	if(freq[j]<minn)
     		{minn=freq[j];
     			pos=j;
     			break;}

     }
     a[pos]=x;
     freq[pos]++;

     // for(int m=0;m<3;m++)
     // 	printf("%d ",freq[m]);
     // printf("\n");

     for(int k=0;k<3;k++)
     {
      printf("%d ",a[k]);
     }
     printf("FAULT \n");
     cf++;


	}
	printf("total hit=%d total fault=%d",ch,cf);

}