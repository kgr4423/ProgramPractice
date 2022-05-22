#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	FILE *fp;
	int i,ch;
	int state=0;

	for(i=1;i<argc;i++){
		if((fp=fopen(argv[i],"r"))==NULL){
			fprintf(stderr,"cannot open %s\n",argv[i]);
			exit(1);
		}
		while((ch=getc(fp))!=EOF){
			if(state==0){
				if(ch=='/'){
					state=1;
				}else{
					putchar(ch);
				}
			}else if(state==1){
				if(ch=='/'){
					state=2;
				}else{
					putchar('/');
					putchar(ch);
					state=0;
				}
			}else{
				if(ch=='\n'){
					putchar('\n');
					state=0;
				}
			}
		}
		fclose(fp);
	}
	return 0;
}



