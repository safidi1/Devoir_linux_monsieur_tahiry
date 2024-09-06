#include<stdio.h>
#include "exercice1.h"
#include<string.h>
#include<stdlib.h>

void verification(int num1,int num2,int num3,int num4){
	  if (num1 >= 256 || num1 < 0 || num2 >= 256 || num2 < 0 || num3 >= 256 || num3 < 0 || num4 >= 256 || num4 < 0) {
		  printf("votre ip est invalide");
		  exit(1);
	  }
  }
  void val(int *num1,int *num2,int *num3,int *num4,int *mask){
	  char *a=getenv("QUERY_STRING");
	  sscanf(a,"ip=%d.%d.%d.%d&mask=%d",num1,num2,num3,num4,mask);
  }
  
void binaire(int *num,int *bite){
	int i=0;
	while(*num>0){
		bite[i]=(*num)%2;
		*num=(*num/2);
		i++;
		if(*num==0){
			do{
			bite[i]=0;
			i++;
			if(i==7){
				bite[i]=0;
			}
				
			
		}while(i<8);
		}
	}
}
void msr(int *mask1,int *mask){
	int i=0;

	if((*mask)>=0&&(*mask)>=8){
			do{
			mask1[i]=1;
			i++;
		}while(i!=8);
		}
		
		else if(*mask>0&&(*mask)<8){
			
		do{
			mask1[i]=1;
			i++;
		}while(i<(*mask));
		
		if(i==(*mask)){
		do{
			mask1[i]=0;
			i++;
		
		
		}while(i<8);
		
	}
}
		
		else {
			do{
				mask1[i]=0;
				i++;
			}while(i!=8);
		}
		*mask=(*mask-8);
				
}
void dismsr(int *mask1){
	int i=0;
	for(int i=0;i<8;i++){
		printf("%d",mask1[i]);
	}
	printf(".");
}

void adressereseau(int *adr1,int *mask1,int *bite){
	int i;
	for(i=0;i<8;i++){
		adr1[i]=mask1[i]*bite[7-i];
		printf("%d",adr1[i]);
		
	}
}
void point(void){
	printf(".");
}
void inverse(int *mask1){
	int i=0;
	for(i=0;i<8;i++){
		if(mask1[i]==1){
			mask1[i]=0;
		}
		else if(mask1[i]==0){
			mask1[i]=1;
		}
	}
}
	
void broadcast(int *mask1,int *broad,int *bite){
	int i=0;
	for(i=0;i<8;i++){
		broad[i]=mask1[i]+bite[7-i];
		if(broad[i]==2){
			broad[i]=1;
		}
	}
}
void disbroadcast(int *broad){
	int i=0;
	for(i=0;i<8;i++){
		printf("%d",broad[i]);
	}
}	

