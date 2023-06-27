//http://paste.ubuntu.com/510253/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#define G gotoxy
#define W delay(500);
HANDLE  hConsoleOut = 0;                   /* Handle to the console */
CONSOLE_SCREEN_BUFFER_INFO csbiInfo;   /* Console information */
CHAR attribute;

void initvideo()
{
  hConsoleOut = GetStdHandle(STD_OUTPUT_HANDLE);
  GetConsoleScreenBufferInfo(hConsoleOut, &csbiInfo);
  attribute = 0x07;
}

void gotoxy(int column, int row)
{
  COORD c;

  c.X = column - 1;
  c.Y = row - 1;
  SetConsoleCursorPosition(hConsoleOut, c);
}

void clrscr(void)
{
  COORD c;
  DWORD len, wr;

  if(!hConsoleOut)
    initvideo();
    
  len = csbiInfo.dwSize.X * csbiInfo.dwSize.Y;
  c.X = c.Y = 0;
  FillConsoleOutputCharacter(hConsoleOut, ' ', len, c, &wr);
  FillConsoleOutputAttribute(hConsoleOut, attribute, len, c, &wr);

  gotoxy(1, 1);
}

void delay(DWORD milliseconds)
{
  Sleep(milliseconds);
}
 
void snake(int){
int vetor[2000],vetorx[2000];
int limpa[2000],limpax[2000],limpatam=-1;
int tam=0,v=0,x1=0,y1=0,perdeu=0,y3=0;
       
       int w=0,time=100,d=0,velo=0,anted=0,random=0,r1=30,r2=15,anterandom=0;
       int comparede=0,level=1,rapido=1,saiu=0;
       //float tempo;
       int n1,n2,n3,n4,n32, nt,nn3;
       n1=n2=n3=nt=n4=0; n32=1; 
       char c='f';
//       char ops[25];
//       for(int i=0;i<25;i++)ops[i]='a';
       clrscr();
//       int vetor[20];
       int x=10,y=10,qtd=0,pausa=0;
       //tempo=clock();
       
       while (1){

       clrscr();
    
       G(20,y3+5);puts("\x1");
       G(25,5);puts("SEM PAREDE");
       G(25,10);puts("COM PAREDE");
       G(25,15);puts("SAIR");
       c=getche();
       if(c=='e' || c==72)y3=y3-5;
       if(c=='d' || c==80)y3=y3+5;
       if(y3>10)y3=0;
       if(y3<0 )y3=10;      
       if(c==13){
       G(20,y3+5);puts("            ");
       G(25,5);puts("               ");
       G(25,10);puts("              ");
       G(25,15);puts("              ");
                 if(y3==10)exit(2);
                 if(y3==0)break;
                 if(y3==5){comparede=1;break;}
                 }      
             }
       c='f';
       while (1){
    //   clrscr();
      if(tam==0){
                 G(vetorx[0],vetor[0]);puts(" ");
                 }
      for(int i=0;i<limpatam;i++){
      G(vetorx[i],vetor[i]);puts(" ");
                                  }
       if(random>anterandom){
        anterandom=random;
        for(int i=0;i<qtd%20;i++)r1=rand()%67;
        r1+=3;
        for(int i=0;i<qtd%20;i++)r2=rand()%19;
        r2+=3;                             
                             }
             
       anted=d;
       if(c==-32)c=getche();
       rapido=0;
       if(c==77 && d!=2)d=0;
       if(c==72 && d!=3)d=1;
       if(c==75 && d!=0)d=2;
       if(c==80 && d!=1)d=3;
       if(c==13)d=4; 
       if(w==1)if(c==32)rapido=1;
       else  if(c==27){saiu=1;break;}
       else  if(c=='p')pausa=1;
     //  else  if(c=='q')time=1000;
       if(tam>0){
       v=v%tam;                      
       vetorx[v]=x;
       vetor[v]=y;
       v++;}
       switch(d){
       case 0:x++;break;
       case 1:y--;break;
       case 2:x--;break;
       case 3:y++;break;
       case 4:y++;x--;break;
                 }
       for(int i=2;i<25;i++){
       G(2,i); puts("\xBA");       
       G(73,i);puts("\xBA");
               }
       for(int i=3;i<73;i++){
       G(i,2); puts("\xCD");
       G(i,25);puts("\xCD");
               }
       G(73,2);puts("\xBB");
       G(2,25);puts("\xC8");
       G(2,2); puts("\xC9");
      G(73,25);puts("\xBC");
      G(75,3);printf("LEVEL:");
      G(75,4);printf("%d",level);
      G(75,5);printf("PONTOS");
      G(75,6);printf(":%d",tam);
      G(75,7); printf("___");
      G(75,8); printf("WIL");
      G(75,9); printf(" & ");
      G(75,10);printf("VIT");
      G(75,11);printf("\xEE\xEE\xEE");
      printf("%c",c);
      //G(75,6);  puts("TEMPO:");
      //G(75,7);printf("%d:%d:%d",hora,min,nt);
      //G(2,30);printf("tempo: %f",tempo);
      
       if(comparede==1){if(x>71 || y>24 || x<3 || y<3)perdeu=1;}
       //if(rede==1)exit(2);
       if(x>71)x=3;
       if(y>24)y=3;
       if(x<3)x=71;
       if(y<3)y=24;
       
                
//       G(x,y);puts("\xDB");
       G(x,y);puts("\xFA");
       if(tam==0){
         vetorx[0]=x;
         vetor[0]=y;
                  }
       for(int i=0;i<tam;i++){
//       G(vetorx[i],vetor[i]);puts("\xDB");
G(vetorx[i],vetor[i]);puts("\xFE");
limpax[i]=vetorx[i];
limpa[i]=vetor[i];
limpatam=tam;
if(vetorx[i]==x&&vetor[i]==y)perdeu=1;
                            }  
       w=kbhit();
       if(w==1){
       qtd++;
       G(70,24); c=getch();
       G(70,24);puts(" ");
       /*case 's':break;
       case 'f':break;
       case 'e':break;
       case 'd':break;*/
                }
       
       if(x==r1 && y==r2){random++;tam++;}
       G(r1,r2);
       //printf("%d-%d",random,d);
       //tempo=clock();
       if(pausa==1){getch();pausa=0;c='a'; }
      if(rapido==0)delay(time/level);
      if(rapido!=0)delay((time/(level+1)));
       if(random%10==0 && anterandom!=random)level++; 
       qtd++;
       qtd=qtd%60;
//       time=100;
       if(perdeu==1)break;
       }
       clrscr();
       G(1,1);
if(saiu==0){
puts("            ______     _______   _______");
puts("\\        / |      |   |         |       ");
puts(" \\      /  |      |   |         |       ");
puts("  \\    /   |      |   |         |----   ");
puts("   \\  /    |      |   |         |       ");
puts("    \\/     |______|   |_______  |_______");
puts("\n");
puts(" _______    ______   ______     _____   ______  ___   ___  ||| ");
puts("|       )  |        |      )   |     \\ |        ---   ---  |||");
puts("|------´   |___     |------\\   |      ||___     ---   ---  |||");
puts("|          |        |       \\  |      ||         --   --   |||");
puts("|          |______  |        | |_____/ |______    -___-     0 ");
getch();
        }
}
int main(){
snake(1);
clrscr();
printf("Bastaria as pessoas serem mais sinceras, honestas e humildes,\n");
printf(" que ver¡amos comportamentos maravilhosamente diversificados, \n");
printf("personalidades espontaneamente interessantes, decisäes amplamente\n");
printf("mais libertas, preconceitos instantanemente eliminados e atitudes \n");
printf("surpeendentemente menos ego¡stas.\n");
printf("                                                     ( NeoqJav )\n");
getch();
}
