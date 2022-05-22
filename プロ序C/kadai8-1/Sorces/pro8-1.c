#include<stdio.h>
#include<string.h>

void replace(char[],char,char);

int main(){
	char input[80];
	char output[80];
	int i;

	printf("Enter a string:");
	fflush(stdout);
	scanf("%s",input);

	for(i=0;input[i]!='\0';i=i+1){
		output[i] = input[i];
	}

	for(i=0;input[i]!='\0';i=i+1){
		if(input[i]==input[i+1]){
			output[i]='*';
			if(input[i]=='c'){
				output[i+1]='c';
			}else{
				output[i+1]='*';
			}
		}
	}

	printf("input= %s\noutput= %s\n",input,output);
}

