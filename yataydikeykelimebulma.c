#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#define str 3
#define stn 3

int uzunluk(char z[]){
	
	int i=0;
	while(z[i] != 0){
		i++;
	}
	return i;
}



int main(){
   
   char *p,*pa,m;
   int u,i,j,sayac;
   int k=0;
   int l;
   int t=0;
   int r=0;
   char matris[str][stn];
   
   printf("sirayla harve ve enter'a basarak matrisi doldurunuz.\n");
    
    for(i=0; i<str; i++)
    {
    	for(j=0;j<stn;j++){
        scanf("%s",&matris[i][j]);
    }
    
}
   
   printf("aranacak kelimeyi giriniz.\n");
   char a[50];
   scanf("%s",&a[0]);
   pa=&a[0];
   
   u=uzunluk(a);

    
    p=&matris[0][0];
   
   
   for(i=0;i<=stn-(u-1);i++){
   	
   	if(*(pa)==*(p+k)+i){
   		
   		sayac=1;
   		
   		for(j=1;j<u;j++){
   			
   			if(*(pa+j)==*(p+k)+(j+i)){
   				
   				sayac++;
   				
   				if(sayac==u){
   					t++;
				   }
   			
			   }
   			else break;
   			
		   }
   			
	   }
   	  	
   	if(i==stn-(u-1) && k<str ){
   		
   	   k++;
   	   i=0;
	   }
   	
   }
   k=0;
   
   for(i=0;i<=str-(u);i++){
   	
   	if(*(pa)==*(p+i)+k){
   		
   		sayac=1;
   		
   		for(j=1;j<u;j++){
   			
   			if(*(pa)==*(p+i)+k){
   				
   				sayac++;
   				
   				if(sayac==u){
   					r++;
				   }
   			
			   }
   			else break;
   			
		   }
   			
	   }
   	  	
   	if(i==str-(u) && k<stn ){
   		
   	   k++;
   	   i=0;
	   }
   	
   }
   
    
   
   printf("aradiginiz kelime yatayda %d kere bulundu.\n",t);
   printf("aradiginiz kelime dikeyde %d kere bulundu.\n",r);
   
   
   
   
   
	return 0;
}







