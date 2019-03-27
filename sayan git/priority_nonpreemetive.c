#include<stdio.h>
struct prn
{   int id;
    int atm;
    int bst;
    int tat;
    int ct;
    int wt;
    int bst_t;
    int pr;
};

int main()
{int n,t=1;

    struct prn s[100],temp;
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
         printf("Enter the priority number for %d :",s[i].id);
        scanf("%d",&s[i].pr);

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
              t=s[0].atm;
    printf("%d\n",t);
        struct prn a[n+3];
        int p,i=0;
    while(count)
    {int maxx=-1;
        //printf("1");
     while(s[i].atm<=t && i<n)
     {
        a[i]=s[i];
        i++;
     }
    for(int j=0;j<i;j++)
    {
        if(a[j].pr>maxx && a[j].bst!=-1)
            {maxx=a[j].pr;
                p=j;}
    }
    
    s[p].ct=t+s[p].bst;
    t=t+s[p].bst;
    s[p].bst=0;
    a[p].bst=-1;
    count--;
    


    }
    for(int i=0;i<n;i++)
       {s[i].tat=s[i].ct-s[i].atm;
        s[i].wt=s[i].tat-s[i].bst_t; 
        printf("p%d  arrival time=%d  burst time=%d  completion time=%d TAT=%d waiting time=%d",s[i].id,s[i].atm,s[i].bst_t,s[i].ct,s[i].tat,s[i].wt);
         printf("\n");
     }

}