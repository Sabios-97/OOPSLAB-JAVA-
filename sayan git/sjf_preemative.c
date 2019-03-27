#include<stdio.h>
struct sjf
{   int id;
    int atm;
    int bst;
    int tat;
    int ct;
    int wt;
    int bst_t;
};

int main()
{int n,t=1;

    struct sjf s[100],temp;
    printf("Enter the number of processes\n");
    scanf("%d",&n);
    int count=n;
    for(int i=0;i<n;i++)
    {   s[i].id=i+1;
        printf("Enter the arrival time for %d :",s[i].id);
        scanf("%d",&s[i].atm);
        printf("Enter the burst time for %d :",s[i].id);
        scanf("%d",&s[i].bst);
        s[i].bst_t=s[i].bst;

    }
    for (int i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (int j = 0; j < n-i-1; j++)  
           if (s[j].atm > s[j+1].atm) 
              {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
              }
        struct sjf a[n+3];
        int p,i=0;
    while(count)
    {int minn=1000;
       // printf("1");
     while(s[i].atm<=t)
     {
        a[i]=s[i];
        i++;
     }
    for(int j=0;j<i;j++)
    {
        if(a[j].bst<minn && a[j].bst!=-1)
            {minn=a[j].bst;
                p=j;}
    }
    s[p].bst--;
    if(s[p].bst==0)
       { count--;
        s[p].ct=t+1;
        a[p].bst=-1;}
        t++;

    }
    for(int i=0;i<n;i++)
       {s[i].tat=s[i].ct-s[i].atm;
        s[i].wt=s[i].tat-s[i].bst_t; 
        printf("p%d  arrival time=%d  burst time=%d  completion time=%d TAT=%d waiting time=%d",s[i].id,s[i].atm,s[i].bst_t,s[i].ct,s[i].tat,s[i].wt);
         printf("\n");
     }

}