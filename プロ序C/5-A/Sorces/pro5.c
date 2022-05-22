#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){

	FILE *fp;

	struct cell{
		char *word;
		struct cell *next;
	}*list=NULL, *p, *q;

	int i;
	char buf[1024];

	for(i=1;i<argc;i++){
		if((fp=fopen(argv[i],"r"))==NULL){
			fprintf(stderr,"cannot open %s\n",argv[i]);
			exit(1);
		}


		p=(struct cell *)malloc(sizeof(struct cell));
		p->word=(char *)malloc(strlen(buf)+1);
		strcpy(p->word,buf);
		p->next=list;
		list=p;

		int tmp;
		for(p=list;p!=NULL;p=p->next){
			for(q=p->next;q!=NULL;q=q->next){
				if(strcmp(q->word,p->word)){
					tmp=*(q->word);
					strcpy(q->word,p->word);
					*(p->word)=tmp;
				}
			}
		}
		fclose(fp);
	}

	for(p=list;p!=NULL;p=p->next)printf("%s\n",p->word);

	return 0;
}

