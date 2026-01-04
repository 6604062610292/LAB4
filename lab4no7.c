#include<stdio.h>
int main(){
	char a;
	int n,time,i,r;
	scanf("%c %d %d",&a,&n,&time);
	for(r=0 ; r<time; r++){
		for (i=0 ; i<n ; i++){
		printf("%c",a);
	 }
	 printf("\n");
	}
}
