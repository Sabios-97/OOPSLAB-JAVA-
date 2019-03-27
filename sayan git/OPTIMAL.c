#include<stdio.h>

int main()
{
    int a[5000]={-1},freq[5]={0},f[5000]={0},p[5000],minn,n,x,pos,ch=0,cf=0,arr[5],g=0,i;
    printf("Enter the number of pages in the seuqence\n");
    scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }

   for( i=0;i<n && g<3;i++)
   {
    
    if(f[a[i]])
    {
          for(int k=0;k<3;k++)
               {
                printf("%d ",arr[k]);
               }
               printf("HIT \n");
               ch++;
          continue;
    }
    p[a[i]]=i;
    f[a[i]]=1;
    arr[g++]=a[i];
    for(int k=0;k<3;k++)
               {
                printf("%d ",arr[k]);
               }
               printf("FAULT \n");
               cf++;
          
      }

for(int k=i;k<n;k++)
{




    for(int j=n-1;j>k;j--)
    {
        if(f[a[j]])
        {
            arr[p[a[j]]]=a[k];
             for(int e=0;e<3;e++)
                 {
                  printf("%d ",a[e]);
                 }
                 printf("HIT \n");
                 ch++;

            break;
        }
        else
            {arr[0]=a[k];
              for(int e=0;e<3;e++)
                 {
                  printf("%d ",a[e]);
                 }
                 printf("FAULT \n");
                 cf++;


            }
    }
}


printf("total hit=%d total fault=%d",ch,cf);


   }
   
