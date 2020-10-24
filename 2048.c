#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



/*	hata 1 == kayma hareketi yokken random atmayý engelle---OYUN BÝTÝYOR---*/
/* 	hata 2 == x tek seferlik geri alma iþlemi yapýyor, geri alsa bile sonraki hamle eski oyuna göre devam ediyor---ÇÖZÜLDÜ---*/
/*	hata 3 == oyunu reslemek istediðinde yeni ekrandaki hareketler eski sisteme göre devam ediyor---ÇÖZÜLDÜ---*/


/*	eksik 1 == giriþ ekraný hark atamasý*/
/*	eksik 2 == highest score*/


int main(int argc, char *argv[]) {
	int counter1,counter2,sifirci=0,sifirsayac,cnt1=0,cnt2=0,cnt3=0,degistir,degistir2,control1=0,i,j,highoyun=0,highgenel=0,gameover=0,x,y,k,w,a,s,d;
	char r,e,e2,h,p;
	int diziyedek[4][4];
	int dizisilbastan[4][4];
	/*giriþ ekraný*/
	printf("\t====================\n");
	printf("\t   W E L C O M E    \n");
	printf("\t====================\n\n");
	
	printf("Press k to continue\n");
	printf("Press h to help");
	printf("\n\n\n");
	
	while(cnt2==0){
	
	h=getch();
	
	if(h=='h'){
		printf("\t\t\t HOW TO PLAY\n\n");
		printf("\t\t1-CONTROL BUTTONS\n\n");
		printf("\tW ----> move all blocks up\n");
		printf("\tS ----> move all blocks down\n");
		printf("\tA ----> move all blocks left\n");
		printf("\tD ----Z move all blocks right\n\n");
		printf("\t\t2-EXTRA BUTTONS\n\n");
		printf("\tE ----> open a exit menu\n");
		printf("\tX ----> make one move back (only for once !)\n\n)");
		printf("\t\t3-GAME RULES\n\n");
		printf("\t--- w-a-s-d ve e-x disinda bir tusa basarsaniz oyun biter\n");
		printf("\t--- oyunu yeniden baslattiginizda genel en yuksek puaniniz tutulur\n");
		printf("\t--- 2048 e ulasan kazanir !! Iyi Eglenceler ))\n\n");
		printf("\tPress any key to continue\n");
		p=getch();
		cnt2=1;
	}else if(h=='k'){
		cnt2=1;
	}else{
		printf("Yanlis bir tusa bastiniz !\n");
	}
}
	
	
	
	
	
	
	
/*	0 larla dolu bi dizi yazar*/

		int dizi[4][4];
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		   	dizi[i][j]=0;
		}
	}
	
	/*sýfýrlarý say, lazým olacak*/
	
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(dizi[i][j]==0){
				counter1++;
			}
		}
	}
	int rastgele;
	srand(time(NULL)); 
	rastgele=(rand()%2)*2+2;
	
	/*rastgele boþ olan bi yere ata*/
	
	while(control1==0){
		srand(time(NULL)); 
		x=rand()%4;
		srand(time(NULL)); 
		y=rand()%4;
		if(dizi[x][y]==0){
			dizi[x][y]=rastgele;
			control1=1;
		}
	}
	control1=0;
	
	while(control1==0){
		srand(time(NULL)); 
		x=rand()%4;
		srand(time(NULL)); 
		y=rand()%4;
		if(dizisilbastan[x][y]==0){
			dizisilbastan[x][y]=rastgele;
			control1=1;
		}
	}
	control1=0;
	
		/*giriþ için oluþan diziyi yazdýr*/
		printf("\t Puan : %d\tEn Ýyi Puan : %d\t\n\n",highoyun,highgenel);
		for (j=0;j<4;j++){
			printf("\t");
		for (i=0;i<4;i++){
			if(x==j&&y==i){
			
	printf("| %d*  ",dizi[j][i]);
}else {
	printf("| %d  ",dizi[j][i]);
}
	}	printf("| ");

	printf("\n\t_____________________\n\n");
	
}   
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			diziyedek[i][j]=dizi[i][j];
		}
	}
	/*hareket yönü için karakter al*/
	
	while(gameover==0){
	gameover=1;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			diziyedek[i][j]=dizi[i][j];
		}
	}
		
	
	r=getch();
	/*kaydýrma iþlemleri    --TAMAMLANMADI-- */
		
	if(r=='d'){
				for(i=0;i<4;i++){
					for(j=3;j>=0;j=j-1){
						if(dizi[i][j]==0){
							sifirci++;
						}else {
							if(sifirci!=0){
							
							dizi[i][j+sifirci]=dizi[i][j];
							dizi[i][j]=0;
						;
							}
						
						}
					}
						for(j=3;j>0;j=j-1){
			
			if(dizi[i][j]==dizi[i][j-1]){
				dizi[i][j]=dizi[i][j]+dizi[i][j-1];
				highoyun=highoyun+dizi[i][j];
				gameover=0;
				for(k=j-1;k>0;k=k-1){
					dizi[i][k]=dizi[i][k-1];
					
				}
				dizi[i][1]=0;
				
			}
		}
					sifirci=0;
				}
				if(gameover==0){
				
					while(control1==0){
		srand(time(NULL)); 
	rastgele=(rand()%2)*2+2;
		srand(time(NULL)); 
		x=rand()%4;
		srand(time(NULL)); 
		y=rand()%4;
		if(dizi[x][y]==0){
			dizi[x][y]=rastgele;
			control1=1;
		}
	}
	control1=0;		
			
		
	printf("\t Puan : %d\tEn Ýyi Puan : %d\t\n\n",highoyun,highgenel);
for (j=0;j<4;j++){
			printf("\t");
		for (i=0;i<4;i++){
			if(j==x&&i==y){
			
	printf("| %d*  ",dizi[j][i]);
}else {
	printf("| %d  ",dizi[j][i]);
}
	}	printf("| ");

	printf("\n\t_____________________\n\n");
}
printf("\n\n\n\n\n\n\n\n\n\n\n\n");
		
}else{
	printf("\n\n\n\n\n\n\n\n \t\t GAME OVER :( \n\n\n\n\n\n\n\n)");

}	
	}else if(r=='a'){
		
	for(i=0;i<4;i++){
					for(j=0;j<4;j++){
						if(dizi[i][j]==0){
							sifirci=sifirci+1;
						}else {
								if(sifirci!=0){
								
							dizi[i][j-sifirci]=dizi[i][j];
							dizi[i][j]=0;
							
							}
						}
					}
						for(j=0;j<3;j++){
			
			if(dizi[i][j]==dizi[i][j+1]){
				dizi[i][j]=dizi[i][j]+dizi[i][j+1];
				highoyun=highoyun+dizi[i][j];
				gameover=0;
				for(k=j+1;k<3;k++){
					dizi[i][k]=dizi[i][k+1];
					
				}
				dizi[i][3]=0;
				
			}
		}
						sifirci=0;
				}
				if(gameover==0){
				
					while(control1==0){
		srand(time(NULL)); 
		rastgele=(rand()%2)*2+2;
		srand(time(NULL)); 
		x=rand()%4;
		srand(time(NULL)); 
		y=rand()%4;
		if(dizi[x][y]==0){
			dizi[x][y]=rastgele;
		
			control1=1;
		}
	}
	control1=0;
	

				printf("\t Puan : %d\tEn Ýyi Puan : %d\t\n\n",highoyun,highgenel);
				for (j=0;j<4;j++){
			printf("\t");
		for (i=0;i<4;i++){
		
			if(x==j&&y==i){
				printf("| %d*  ",dizi[j][i]);
			}else{
			
	printf("| %d  ",dizi[j][i]);
}
	}	printf("| ");

	printf("\n\t_____________________\n\n");
}
printf("\n\n\n\n\n\n\n\n\n\n\n\n");
}else{
	printf("\n\n\n\n\n\n\n\n \t\t GAME OVER :( \n\n\n\n\n\n\n\n)");
	
}	
	}else if(r=='w'){
		for(j=0;j<4;j++){
			for(i=0;i<4;i++){
				if(dizi[i][j]==0){
					sifirci=sifirci+1;
				}else {
					if(sifirci!=0){
					
					dizi[i-sifirci][j]=dizi[i][j];
					dizi[i][j]=0;
				}
				}
			}
			for(i=0;i<4;i++){
			
			if(dizi[i][j]==dizi[i+1][j]){
				dizi[i][j]=dizi[i][j]+dizi[i+1][j];
				highoyun=highoyun+dizi[i][j];
				gameover=0;
				for(k=i+1;k<3;k++){
					dizi[k][j]=dizi[k+1][j];
					
				}
				dizi[3][j]=0;
				
			}
		}
			sifirci=0;
		}
		if(gameover==0){
		
			while(control1==0){
		srand(time(NULL)); 
		rastgele=(rand()%2)*2+2;
		srand(time(NULL)); 
		x=rand()%4;
		srand(time(NULL)); 
		y=rand()%4;
		if(dizi[x][y]==0){
			dizi[x][y]=rastgele;
			gameover=0;
			control1=1;
		}
	}
	control1=0;

				printf("\t Puan : %d\tEn Ýyi Puan : %d\t\n\n",highoyun,highgenel);
				for (j=0;j<4;j++){
			printf("\t");
		for (i=0;i<4;i++){
			if(x==j&&y==i){
				printf("| %d*  ",dizi[j][i]);
			}else{
			
	printf("| %d  ",dizi[j][i]);
}
	}	printf("| ");

	printf("\n\t_____________________\n\n");
}
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
}else{
	printf("\n\n\n\n\n\n\n\n \t\t GAME OVER :( \n\n\n\n\n\n\n\n)");

}		
	}else if(r=='s'){
		for(j=0;j<4;j++){
			for(i=3;i>-1;i=i-1){
				if(dizi[i][j]==0){
					sifirci++;
					
				}else {
					if(sifirci!=0){
					
					dizi[i+sifirci][j]=dizi[i][j];
					dizi[i][j]=0;
				}
				}
			}
				for(i=3;i>0;i=i-1){
			
			if(dizi[i][j]==dizi[i-1][j]){
				dizi[i][j]=dizi[i][j]+dizi[i-1][j];
				highoyun=highoyun+dizi[i][j];
				gameover=0;
				for(k=i-1;k>0;k=k-1){
					dizi[k][j]=dizi[k-1][j];
					
				}
				dizi[1][j]=0;
				
			}
		}
			sifirci=0;
		}
		if(gameover==0){
		
			while(control1==0){
		srand(time(NULL)); 
		rastgele=(rand()%2)*2+2;
		srand(time(NULL)); 
		x=rand()%4;
		srand(time(NULL)); 
		y=rand()%4;
		if(dizi[x][y]==0){
			dizi[x][y]=rastgele;
			gameover=0;
			control1=1;
		}
	}
	
	control1=0;

				printf("\t Puan : %d\tEn Ýyi Puan : %d\t\n\n",highoyun,highgenel);
				for (j=0;j<4;j++){
			printf("\t");
		for (i=0;i<4;i++){
	printf("| %d  ",dizi[j][i]);
	}	printf("| ");

	printf("\n\t_____________________\n\n");
}
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
}else{
	printf("\n\n\n\n\n\n\n\n \t\t GAME OVER :( \n\n\n\n\n\n\n\n)");
	
}
	}else if(r=='x'){
				printf("\t Puan : %d\tEn Ýyi Puan : %d\t\n\n",highoyun,highgenel);
				for (j=0;j<4;j++){
			printf("\t");
		for (i=0;i<4;i++){
	printf("| %d  ",diziyedek[j][i]);
	dizi[i][j]=diziyedek[i][j];
	}	printf("| ");

	printf("\n\t_____________________\n\n");
	
}
gameover=0;
printf("\n\n\n\n\n\n\n\n\n\n\n\n");
	}else if(r=='e'){
		printf("Oyunu bitirmek istediginize emin misiniz ? e= evet  h=hayir\n");
		
		e=getch();
		
		if(e=='e'){
			gameover=1;
			printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
			printf("Skorunuz  :  %d\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n",highoyun);
		}else if(e=='h'){
		
		printf("Devam etmek mi istersiniz yeniden baslamak mi?? y=yeniden  d=devam\n\n");
		e2=getch();
		
		if(e2=='y'){
			if(highgenel<highoyun){
			
			highgenel=highoyun;
			highoyun=0;
			}
			int dizisilbastan[4][4];
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
		   	dizisilbastan[i][j]=0;
		}
	}
	while(control1==0){
		srand(time(NULL)); 
		x=rand()%4;
		srand(time(NULL)); 
		y=rand()%4;
		if(dizisilbastan[x][y]==0){
			dizisilbastan[x][y]=rastgele;
			control1=1;
		}
	}
	
	printf("\t Puan : %d\tEn Ýyi Puan : %d\t\n\n",highoyun,highgenel);
		for (j=0;j<4;j++){
			printf("\t");
		for (i=0;i<4;i++){
			if(x==j&&y==i){
			
	printf("| %d*  ",dizisilbastan[j][i]);
}else {
	printf("| %d  ",dizisilbastan[j][i]);
}
dizi[j][i]=dizisilbastan[j][i];
	}	printf("| ");

	printf("\n\t_____________________\n\n");
	
}   
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
gameover=0;
	
		
		}else if(e2=='d'){
			printf("\t Puan : %d\tEn Ýyi Puan : %d\t\n\n",highoyun,highgenel);
				for (j=0;j<4;j++){
			printf("\t");
		for (i=0;i<4;i++){
	printf("| %d  ",dizi[j][i]);
	}	printf("| ");

	printf("\n\t_____________________\n\n");
}
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
gameover=0;
			
		}
	}
	}else if(r!='x'&&r!='e'&&r!='w'&&r!='a'&&r!='s'&&r!='d'){
		printf("Yanlis bir tusa bastiniz ! \n");
		gameover=0;
	}
		

	
}
printf("\n\n\n\n\n\n \t\t\tGAME OVER :(\n\n\n)");
printf("\t\tSkorunuz= %d ",highoyun);

	return 0;
}
