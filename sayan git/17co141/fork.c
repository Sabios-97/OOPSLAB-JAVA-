#include<unistd.h>
#include<sys/types.h>
#include<stdio.h>

void main() {
	fork();
	
	printf("Hello\n");
}