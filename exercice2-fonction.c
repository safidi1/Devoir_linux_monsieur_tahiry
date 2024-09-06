#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "exercice.h"
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
void nombrededecoup(int *mask)
{
	if(*mask == 0 || *mask== 8 ||*mask == 16 || *mask == 24 || *mask == 32)
	{
		printf(" ");
	}
	else
	{
		if(*mask< 8)
		{
			*mask=(*mask-8);
			
		}
		else if(*mask> 8 && *mask < 16)
		{
			*mask=*mask - 8;
		}
		else if(*mask > 16 && *mask < 24)
		{
			*mask=*mask- 16;
		}
		else if(*mask > 24 && *mask < 32)
		{
			*mask=*mask-24;
		}
	}
}
