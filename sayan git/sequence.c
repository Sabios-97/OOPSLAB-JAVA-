#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){
    printf("Enter the size of each block\n");
    int block_size;
    scanf("%d",&block_size);
    int file_size[100],file_start[100],file_end[100];
    int blocks_req;
    int n=0,i;
    int pointer=0;
    int ch;
    while (1){
        printf("Enter choice-\n1.New file\n2.Display files\n3.Exit");
        scanf("%d",&ch);
        if (ch==1){
            printf("Enter file size\n");
            scanf("%d",&file_size[n]);
            file_start[n]=pointer;
            blocks_req=ceil((double)file_size[n]/(double)block_size);
            file_end[n]=pointer+blocks_req-1;
            pointer=file_end[n]+1;
            n++;
            printf("File allocated\n");
        }
        else if (ch==2){
            printf("File number\tFile size\tStart block\tEnd block\n");
            for (i=0;i<n;i++){
                printf("%d\t\t%d\t\t%d\t\t%d\n",i+1,file_size[i],file_start[i],file_end[i]);
            }
        }
        else if (ch==3){
            printf("\nExited successfully\n");
            break;
        }
    }
}
