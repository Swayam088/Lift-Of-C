#include <stdio.h>

int main(){
	long long int oc,of,od,cs,cb,cm,cd,D;
	long long int a=0,b=0;
	scanf("%lld",&D);
	scanf("%lld%lld%lld",&oc,&of,&od);
	scanf("%lld%lld%lld%lld",&cs,&cb,&cm,&cd);
	    a= oc+((D-of)*od);
	    b= cb+((D/cs)*cm)+(D*cd);
	if(a<=b)
	printf("Online Taxi");
	else
	printf("Classic Taxi");
	

	return 0;
    
}