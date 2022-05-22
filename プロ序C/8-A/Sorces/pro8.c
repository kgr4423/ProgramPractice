#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define N 100

int stack[N];
int stack_top=0;
int push(int d);
int pop(int *d);
int d0,d1;

int push(int d){
	if(stack_top<N){
		stack[stack_top]=d;
		stack_top++;
		return 1;
	}else{
		return 0;
	}
}

int pop(int *d){
	if(stack_top==0){
		return 0;
	}else{
		*d=stack[stack_top];
		stack_top--;
		return 1;
	}
}

int main(int argc,char *argv[]){

	char buf[1024];

	while(read_word(buf)){
		if(isdigit(buf[0])){
			if(push(atoi(buf))==0)error("stack full",NULL);
		}else if(buf[0]=='p'){
			printf("%d\n",stack[stack_top-1]);
		}else{
			if(pop(&d1)==0)error("stack empty",NULL);
			if(pop(&d0)==0)error("stack empty",NULL);
			switch(buf[0]){
			case '-':
				if(push(d0-d1)==0)error("stack full",NULL);
				break;
			case '+':
				if(push(d0+d1)==0)error("stack full",NULL);
				break;
			case '*':
				if(push(d0*d1)==0)error("stack full",NULL);
				break;
			default:
				error("illegal input%s",buf);
			}
		}
	}
}

int read_word(char buf[]){
	int ch,k=0;

	while(isspace(ch=getchar()) && ch!=EOF);
	if(ch==EOF)return 0;

	buf[k]=ch;
	k++;
	while(!isspace(ch=getchar())){
		buf[k]=ch;
		k++;
	}
	buf[k]='\0';
	return 1;
}


void error(char *f,char *s){
	fprintf(stderr,f,s);
	putc('\n',stderr);
	exit(1);
}

