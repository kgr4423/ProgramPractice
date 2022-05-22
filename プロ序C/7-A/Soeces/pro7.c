#include<stdio.h>
#include<stdlib.h>

int cost[20][20];
int s[20], best[20];
void perm(int k,int n,int a[]);
int m=100;

int main(int argc, char *argv[]){
	int i,j,n;
	FILE *fp;

	if((fp=fopen(argv[1],"r"))==NULL){
		fprintf(stderr,"can't open %s\n",argv[1]);
		exit(1);
	}

	fscanf(fp,"%d",&n);
	for(i=0;i<n;i++)s[i]=i;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)fscanf(fp,"%d",&cost[i][j]);
	}

	perm(0,7,s);

	printf("%d : ",m);
	for(i=0;i<7;i++){
		printf("%d ",best[i]);
	}
	printf("%d ",best[0]);
}

void perm(int k,int n,int a[]){
	int i,t,c;

	if(k==n){
		for(c=0,i=1;i<n;i++){
			c+=cost[a[i-1]][a[i]];
		}
		c+=cost[a[i-1]][a[0]];

		if(m>c){
			m=c;
			for(i=0;i<n;i++){
				best[i]=a[i];
			}
		}
	}else{
		for(i=k;i<n;i++){
			t=a[k];a[k]=a[i];a[i]=t;
			perm(k+1,n,a);
			t=a[k];a[k]=a[i];a[i]=t;
		}
	}
}
