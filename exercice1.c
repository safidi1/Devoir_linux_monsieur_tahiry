
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	printf("Content-type: text/html\n\n");
	printf("<!DOCTYPE HTML>");
	printf("<html><head></head><body>");
	
	
	int num1;
	int num2;
	int num3;
	int num4;
	int mask;
	int bite1[8];
	int bite2[8];
	int bite3[8];
	int bite4[8];
	int mask1[8];
	int mask2[8];
	int mask3[8];
	int mask4[8];
	int adr1[8];
	int adr2[8];
	int adr3[8];
	int adr4[8];
	int broad1[8];
	int broad2[8];
	int broad3[8];
	int broad4[8];
	

	val(&num1,&num2,&num3,&num4,&mask);  
												
	verification(num1,num2,num3,num4);			
	
	printf("le masque de sous reseau est :");						
	msr(mask1,&mask); 					
	msr(mask2,&mask);
	msr(mask3,&mask);
	msr(mask4,&mask);
	dismsr(mask1);
	dismsr(mask2);
	dismsr(mask3);
	dismsr(mask4);
	
	
	printf("<p>l'adresse reseau en binaire est :</p>");						///adresse du reseau
	
	binaire(&num1,bite1);					///rendre l'ip en binaire
	binaire(&num2,bite2);
	binaire(&num3,bite3);
	binaire(&num4,bite4);
	adressereseau(adr1,mask1,bite1);
	point();
	adressereseau(adr2,mask2,bite2);
	point();
	adressereseau(adr3,mask3,bite3);
	point();
	adressereseau(adr4,mask4,bite4);
	
	printf("<p>l'adresse du broadcast en binaire est :</p>");
	inverse(mask1);
	inverse(mask2);
	inverse(mask3);
	inverse(mask4);
	
	broadcast(mask1,broad1,bite1);
	broadcast(mask2,broad2,bite2);
	broadcast(mask3,broad3,bite3);
	broadcast(mask4,broad4,bite4);
	disbroadcast(broad1);
	point();
	disbroadcast(broad2);
	point();
	disbroadcast(broad3);
	point();
	disbroadcast(broad4);
	printf("</body></html>");
	return 0;
}
