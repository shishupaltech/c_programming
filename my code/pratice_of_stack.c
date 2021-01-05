#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define max 10
void push();
void pop();
void traverse();
struct Stack{
	int data[max];
	int top;
}s;
int main()
{
	int x;
	s.top=-1;
	while(1){
		printf("\n1.push");
		printf("\n1.pop");
		printf("\n3.traverse");
		printf("\n4.exit");
		printf("enter your choice:");
		scanf("%d",&x);
		switch(x){
			case 1:
				push();
				getch();
				break;
			case 2:
				pop();
				getch();
				break;
			case 3:
				traverse();
				getch();
				break;
			case 4:
				exit(0);
			default:
				printf("\nchoose write option\n");
		}
	}
}
void push(){
	int a;
	if(s.top>=max-1){
		printf("\nStack is overflow\n");
	}
	else{
		s.top +=1;
		printf("\nEnter a number to store in stack\n");
		scanf("%d",&a);
		s.data[s.top]=a;
	}
}
void pop()
{
	if(s.top==-1){
		printf("\nStack is underflow\n");
	}else{
		printf("%d",s.data[s.top]);
		printf("\nElement is deleted from the stack\n");
		s.top -=1;
	}
}
void traverse()
{
	int i;
	i=s.top;
	printf("\nAll the element in the stack\n");
	while(i>=0){
		printf("%d",s.data[i]);
		i--;
	}
}
