#include <stdio.h>

void main(){
	int n, k=0;
	scanf("%d", &n);
	char a[n];
	scanf("%s", &a);
	for(int i=0; i<n; i++){
		if(a[i]=='H' && a[i+1]=='H'){
			k=1;
			break;

		}
		else if(a[i]=='.'){
			a[i]='B';
		
		}
	}
	if(k==0){
		printf("YES \n");
		printf("%s", a);
	
	}
	else
		printf("NO");
        return 0;
}
	