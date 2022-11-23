#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define N 5
int T[N];
int max,i,j,nb,aux,freq;
float a ;
int main(){
for (i=0;i<N;i++)
{T[i] = ( -5.3 +rand()%13 + (rand()%4)*0.1 );
}
for (i=0;i<N;i++){
	max = i;
	for (j=0;i<=N;i++){
	if (T[j]>T[max]){
	max = j;
	}
	}
	if (max != i){
		aux = T[i];
		T[i] = T[max];
		T[max] = aux ;
	}	
}
freq = 0 ;
for (i=0;i<N;i++){
	for (j=1;i<=N;i++){
	nb = 0 ;
	if (T[i] == T[j]){
	nb += 1;
	}
	if (nb>freq){
	freq = nb;
	}
	}
}
for (i=0;i<N;i++){
	for (j=1;i<=N;i++){
	nb = 0 ;
	if (T[i] == T[j]){
	nb += 1;
	}
	if (nb == freq){
	a = T[i] ;
	printf("la valeur la plus frequante est %dl",&a);
	}
	}
}
return 0;
}
