#include <stdio.h>

int main(){
	int l,r,k,num=0;
	scanf("%d %d %d",&l,&r,&k);
	for(int i =l;i<=r;i++){
		if(i%k==0){
			num++;
		}
	}
	printf("%d",num);
	return 0;
}
