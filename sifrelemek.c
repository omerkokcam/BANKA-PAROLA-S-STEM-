#include <stdio.h>
int main() 
{
	int sifre,deneme=1;
	do{
		printf("Sifrenizi giriniz: \n") ;
		scanf("%d",&sifre) ;
		if(sifre==8822)
		printf("Programa Hosgeldiniz.\n") ; 
		else if(sifre<1000||sifre>9999){
		
		printf("Aralik disi giris yaptiniz\n");
	}
		else{
		
		printf("Hatali giris yaptiniz.\n") ; 
		deneme++ ;
	son:printf(" ") ;
}
	}
	while(deneme<=3) ;
	return 0;
}
