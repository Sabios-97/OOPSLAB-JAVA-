#include<stdio.h>

int main()
{
	int a[5]={-1},freq[5]={0},f[5000]={0},p[5000],maxx,n,x,pos,ch=0,cf=0,g=0,i,t,k;
	printf("Enter the number of pages in the seuqence\n");
	scanf("%d",&n);
	
      for( i=0;i<n && g<3;i++)
      {
      	scanf("%d",&x);
       

      	if(f[x])
      	{
      		freq[p[x]]++;
           for(int k=0;k<3;k++)
               {
                printf("%d ",a[k]);
               }
               printf("HIT \n");
               ch++;
          continue;
      	}
         p[x]=i;
        freq[p[x]]++;
        f[x]=1;
        a[g++]=x;
         for(int k=0;k<3;k++)
               {
                printf("%d ",a[k]);
               }
               printf("FAULT \n");
               cf++;
          
      }
	
	for( t=i;i<n;i++)
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
     p[x]=t;
     maxx=-1;
     pos=2;
     for(int j=2;j>=0;j--)
     {   printf("Value of freq[j] %d and maxx %d\n",freq[j],maxx);
     	if(freq[j]>maxx)
     		{maxx=freq[j];
     			pos=j;
     			break;}

     }
     a[pos]=x;
     freq[pos]++;

     for(int m=0;m<3;m++)
     	printf("%d ",freq[m]);
     printf("\n");

     for(int k=0;k<3;k++)
     {
      printf("%d ",a[k]);
     }
     printf("FAULT \n");
     cf++;


	}
  printf("total hit=%d total fault=%d",ch,cf);

}