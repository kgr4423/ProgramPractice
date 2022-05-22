int main(){
	int i,j,n,my_id;
	j=1;my_id=97;

	for(n=3;n<=my_id;n=n+1){
		for(i=2;i<n;i=i+1){
			if(n%i==0){
				break;
			}
		}
		if(i==n){
			printf("%5d",n);
			if(j%10==0){
				printf("\n");
			}
			j=j+1;
		}
	}
	printf("\n");
}
