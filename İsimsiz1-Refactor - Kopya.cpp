#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <math.h>


float jukas(float p)
{
    float sonucjukas=((-1.0)*(3.0/4.0))*log((1.0-((4.0/3.0)*p)));
	return sonucjukas;
}
float kimura(float p,float q)
{
	float sonuckimura=(1.0/2.0)*log(1.0/(1.0-(2.0*p)-q))+(1.0/4.0)*log(1.0/(1.0-(2.0*q)));
	return sonuckimura;
}
main()
{
	char sonuc,sonuckimura;
	float pjukas,q=0;
	int secenek;
	printf("Hesaplanacak modeli seciniz (1- Jukas 2- Kimura)  : ");
	scanf("%d",&secenek);
	
	
	//Jukas model
	if(secenek==1){
		
		printf("\nJukas modelini sectiniz. p degerini giriniz.\n");
		scanf("%f",&pjukas);
		
		if(pjukas>0 && pjukas<0.75)
			printf("k degeri = %f ",jukas(pjukas));
		else
			printf("0 ile 0.75 arasinda deger giriniz .");
	}

   //Kimura
	if (secenek==2){
		printf("\nKimura modelini sectiniz. \n");
		
		printf("transversion degerini giriniz  :  ");
		scanf("%f",&q);
		printf("transtion degerini giriniz :  ");
		scanf("%f",&pjukas);
		
		printf("k degeri = %f ",kimura(pjukas,q));
	}
}
