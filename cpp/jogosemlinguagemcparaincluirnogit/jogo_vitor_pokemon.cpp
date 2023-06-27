// achei no gmail enviado no dia 07/04/2006 

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <windows.h>
#include <time.h>

HANDLE  hConsoleOut = 0;                   /* Handle to the console */
CONSOLE_SCREEN_BUFFER_INFO csbiInfo;   /* Console information */
CHAR attribute;

int parede(int x, int y,int fase){
    int b=3;
    switch(fase){
    case 1:if(x<2)b=0;
           if(x>77)b=1;
           break;
    case 2:if(x<3)b=0;
           if(x>76)b=1;
           if(y>10 && y<15 && x==28)b=0;
           if(y>10 && y<15 && x==2)b=1;
           if(y>11 && y<14 && x==53)b=0;
           if(y>11 && y<14 && x==42)b=1;
           if(y<10 && x==36)b=0;
           if(y<10 && x==30)b=1;
           break;
    case 3:if(x<3)b=0;
           if(x>76)b=1;
           if(y<14 && x==36)b=0;
           if(y<10 && x==30)b=1;       
    case 4:if(x<2)b=0;
            if(x>77)b=1;
            if(x>=12&&y>38&&y<42)b=1;
            if(x>=12&&y>28&&y<32)b=1;
            if(x>=12&&y>18&&y<22)b=1;
            if(x>=12&&y>8&&y<12)b=1;
            if(x<=67&&y>13&&y<17)b=0;
            if(x<=67&&y>23&&y<27)b=0;
            if(x<=67&&y>33&&y<37)b=0;
            break;      
    case 5:if(x==71&&y>=8&&y<=47)b=1;
           if(x==71&&y==6)b=1;
           if(x==29&&y<=37&&y>=34)b=0;
           if(x==31&&y<=33&&y>=31)b=0;
           if(x==30&&y==30)b=0;
           if(x==14&&y<=37&&y>=35)b=2;
           if(x==8&&y<=37&&y>=34)b=1;
           if(x==7&&y<=33&&y>=31)b=1;
           if(x==8&&y==30)b=1;
           if(x==59&&y<=27&&y>=24)b=0;
           if(x==61&&y<=23&&y>=21)b=0;
           if(x==60&&y==20)b=0;
           if(x==38&&y<=27&&y>=24)b=1;
           if(x==44&&y<=27&&y>=25)b=2;
           if(x==37&&y<=23&&y>=21)b=1;
           if(x==38&&y==20)b=1;
           if(x<2)b=0;
           if(x>77)b=1;break;
    case 6:if(x==62 && y>=13 &&y<=16){b=1;}
           if(x==70 && y>=13 &&y<=16){b=0;}
           if(x<2)b=0;
           if(x>77)b=1;break;                          
    case 8: if(x==4&&y==7)b=1;
            if(x==4&&y>=8&&y<=11)b=2;
            if(x==9&&y<=11)b=0;
            if(x==37&&y>=25&&y<=29)b=1;
            if(x==38&&y==24)b=1; if(x==39&&y==23)b=1; if(x==40&&y==22)b=1;
            if(x==49&&y>=25&&y<=29)b=0;
            if(x==48&&y==24)b=0; if(x==47&&y==23)b=0; if(x==46&&y==22)b=0;
            if(x==43&&y>=27&&y<=29)b=2; 
            if(x<3)b=0;
            if(x>76)b=1;break;      
    default:if(x<2)b=0;
            if(x>77)b=1;break;
                 }
    return(b);
    }
int topo(int x,int y,int fase){
    int b;
    switch(fase){
    case 1:if(y<7)b=0;
           if(y>46)b=1;break;
    case 2:if(y<7)b=0;
           if(y>46)b=1;
           if(x>2 && x<28 && y==15)b=0;
           if(x>2 && x<28 && y==10)b=1;
           if(x>31 && x<35 && y==11)b=0;
           if(x>43 && x<52 && y==10)b=1;
           if(x>43 && x<52 && y==15)b=0;
           break;
    case 3:if(x>43 && x<52 && y==10)b=0;        
           if(y<7)b=0;
           if(y>46)b=1;break;
    case 4:if(y<7)b=0;
           if(y>46)b=1;
           if(x>=12&&y==42)b=0;
           if(x>=12&&y==32)b=0;
           if(x>=12&&y==22)b=0;
           if(x>=12&&y==12)b=0;
           if(x<=67&&y==17)b=0;
           if(x<=67&&y==27)b=0;
           if(x<=67&&y==37)b=0;
            if(x>=12&&y==38)b=1;
            if(x>=12&&y==28)b=1;
            if(x>=12&&y==18)b=1;
            if(x>=12&&y==8)b=1;
            if(x<=67&&y==13)b=1;
            if(x<=67&&y==23)b=1;
            if(x<=67&&y==33)b=1;
            break;
    case 5: if(x>71&&y==7){b=2;}
            if(x>=15&&x<=28&&y==38){b=0;}
            if(x<=13&&x>=9&&y==38)b=0;
            if(x==8&&y==34)b=0;
            if(x>=14&&x<=15&&y==35)b=0;
            if(x>=29&&x<=30&&y==34)b=0;
            if(x>=10 && x<=28 &&y==29 )b=1; 
            if(x>=45&&x<=58&&y==28){b=0;}
            if(x<=43&&x>=39&&y==28)b=0;
            if(x==38&&y==24)b=0;
            if(x>=44&&x<=45&&y==25)b=0;
            if(x>=59&&x<=60&&y==24)b=0;
            if(x>=40 && x<=58 &&y==19 )b=1;
            if(y==7&&x<=71)b=0;
            if(y>46)b=1;break;
    case 6: if(y==13)b=0;
            if(x>=63 &&x<=69 &&y==17)b=0;
            if(y<7)b=0;
            if(y>46)b=1;break;
    case 8: if(x>=5&&x<=8&&y==12)b=0;
            if(x<=3&&y==12)b=0;
            if(x<=3&&y==7)b=1;
            if(x<=45&&x>=41&&y==21)b=1;
            if(x==40&&y==22)b=1;if(x==39&&y==23)b=1;if(x==38&&y==24)b=1;
            if(x==46&&y==22)b=1;if(x==47&&y==23)b=1;if(x==48&&y==24)b=1;
            if(x>=38&&x<=42&&y==30)b=0;
            if(x>=44&&x<=48&&y==30)b=0;
            if(x==43&&y==27)b=0;
            if(y<8)b=0;
            if(y>45)b=1;break;                
    default:if(y<7)b=0;
            if(y>46)b=1;break;
                 } return(b);
       }
    int damage(char status1,char status2,char status,int ataque,int defesa,int forcaatt){
        int r=(ataque*forcaatt)-defesa;if(r<0)r=0;if(r==0)r=1;
           if(((status1=='g'||status2=='g')&&status=='n')||((status1=='p'||status2=='p')&&status=='e')){r=0;}
           else{
           if(status1=='g'||status2=='g'){if(status=='P'){r=(forcaatt*ataque)-defesa/3;
                if(r<0)r=2;if(r==0)r=3;
            }}
            if(status1=='i'||status2=='i'){if(status=='F'){r=(forcaatt*ataque)-defesa/3;
                if(r<0)r=2;if(r==0)r=3;
            }}
            if(status1=='i'||status2=='i'){if(status=='v'||status=='b'){
             r=(forcaatt*ataque/2)-defesa;if(r<0)r=2;if(r==0)r=3;
             }}
           if(status1=='p'||status2=='p'){if(status=='b'){r=(forcaatt*ataque)-defesa/2;
            if(r<0)r=1;if(r==0)r=2;
            }else{if(status=='a'){r=(forcaatt*ataque)-defesa/3;if(r<0)r=2;if(r==0)r=3;}}
                 }
           if(status!='n'){      
           if(status1==status||status2==status){r=(forcaatt*ataque/2)-defesa;
            if(r<0)r=0;if(r==0)r=1;}}     
           }return(r);}              
              


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


main(){
       int direcional=0,antefase,pared,top,po[1000],perdeu,tempo=0,tem;
       int a=1,b=219,x=17,X=0,ipsilone=0,y=39,Y=0,n=0,random,fase=0,d=0,e=0,HP[1000];
       int defesa[1000],specialat[1000],specialde[1000],velocidade[1000],hp[1000],inimigo=3; 
       char c,Pok[1000][20],inv,LUT,poka[20],atac;
       int random2,hpa,HPa,forcaa,defesaa,specialata,specialdefa,velocidadea,levela,poder;
       int p[1000],g=0,GP=0,bosta=0,squir=0,fugir=0,forca[1000],inicio=0,insignias=0,lutas=0;
       int r,com,exp[1000],level[1000],espaco=0,tam=0,Ya=0,Xa=0,leveli=0;
       int ra,rd,rsa,rsd,rv,mae=0,sanduiche=0,pokeboll=0,lutar=0,level1[1000],pegar=0;
       char poderes[1000][20],status[1000][10],statusp[6][3];
       int attpoder[1000],numero,falta=0,troca=0,maximo,para[11],zx,mov=0,instan=0; 
        for(int i=0;i<1000;i++){
                             Pok[i][0]='1';
                             poderes[i][0]='1';
                             status[i][0]='1';}
        for(int i=1;i<1000;i++){
                             level1[i]=0;
                             attpoder[i]=0;}                     
       exp[1]=0;level[0]=1;
       po[0]=0;
       Pok[0][0]='1';
       p[0]=0;
       level1[0]=15;
       GP=100;
       do{
                             
                            
       clrscr();
       random=rand()%10;if(random==0)random=10;
      
       if(fase==1||fase==4||fase==5||fase==6||fase==7||fase==8){ //fase 1
       gotoxy(60,1);printf("r=%i x=%i  y=%i  r2=%d antef=%d",random,x,y,random2,antefase);}
       else
       if(fase==2||fase==3||fase==5){
                   gotoxy(65,3);printf("r=%i x=%i  y=%i antef=%d",random,x,y,antefase);}
if(inimigo==10){//caterpie
gotoxy(38,12);puts(" _    ,--------.");
gotoxy(38,13);puts("(_`--'_,--' )__ \\");
gotoxy(38,14);puts("  `--.  ,-,',-.`.\\");
gotoxy(38,15);puts("   | |_|  || 0 |||");
gotoxy(38,16);puts("   |  ___ `.`--''|");
gotoxy(38,17);puts("    \\/    \\      |\\");
gotoxy(38,18);puts("     |___  /\\____/ \\        _");
gotoxy(38,19);puts("      \\__\\/_ /      \\      / \\");
gotoxy(38,20);puts("      /     \\       |     |   |");
gotoxy(38,21);puts("     |       |   O  |     |   |");
gotoxy(38,22);puts("     /\\    /\\|      |     |   |");
gotoxy(38,23);puts("     \\/\\___\\/|_____/       \\_/");
gotoxy(38,24);puts("       /     |    |        |_|");
gotoxy(38,25);puts("      |      | O  |       /  |");
gotoxy(38,26);puts("      /\\___/\\|___/ \\_____/   |");
gotoxy(38,27);puts("      \\/\\  \\/ \\   O |   | O  |");
gotoxy(38,28);puts("         \\_____\\    | O |   /|");
gotoxy(38,29);puts("           \\    \\----.__,-./ /");
gotoxy(38,30);puts("            `----`.___\\_\\__\\/");
}                   
if(inimigo==11){//metapod
gotoxy(38,9); puts("          __");
gotoxy(38,10);puts("         /  \\");
gotoxy(38,11);puts("        /\\   |");
gotoxy(38,12);puts("       / /   |");
gotoxy(38,13);puts("      /      | ");
gotoxy(38,14);puts("     /        \\");
gotoxy(38,15);puts("   _/    __    \\");
gotoxy(38,16);puts("  /`.\\  /,'\\____|");
gotoxy(38,17);puts("  \\0_|  \\0_/    /\\");
gotoxy(38,18);puts("  /  /         /  \\");
gotoxy(38,19);puts(" /| /         (    \\");
gotoxy(38,20);puts("/ |(_          \\   /");
gotoxy(38,21);puts("\\ |             \\/");
gotoxy(38,22);puts(" \\/     _       |");
gotoxy(38,23);puts("  \\      -_     |");
gotoxy(38,24);puts("   |     -     /");
gotoxy(38,25);puts("  < ___      /");
gotoxy(38,26);puts("   |   \\   /");
gotoxy(38,27);puts("   |--. \\/");
gotoxy(38,28);puts("  /    /");
gotoxy(38,29);puts(" / \\ /");
gotoxy(38,30);puts("<__/");
                }//fim metapod
if(inimigo==12){//buterffle
gotoxy(38,30);puts("  .-.              ________");
gotoxy(38,30);puts("-. \\ \\            /    // )\\");
gotoxy(38,30);puts("\\ \\ `-`          /  __// (  \\");
gotoxy(38,30);puts(" `-`  \\         /  |,-.\\  ) |");
gotoxy(38,30);puts("    \\  \\       /  /   || (  |");
gotoxy(38,30);puts("     \\  |     |  /    |/  ) |");
gotoxy(38,30);puts("      \\_|__   | /    /   (  /");
gotoxy(38,30);puts("     / _   \\  |/    /     )|");
gotoxy(38,30);puts("    / ||\\   \\/     /_____( |");
gotoxy(38,30);puts("   '\\ |_|   |     /       )|");
gotoxy(38,30);puts("   `,`      /____/\\      / |");
gotoxy(38,30);puts("    \\__    /\\       \\    \\ |");
gotoxy(38,30);puts(" ,-, / .-.   \\___     \\   || ");
gotoxy(38,30);puts(" | >/  < |    \\ \\`-._  \\_/ |");
gotoxy(38,30);puts(" `-`|  '-'    |  \\   `-`.__/");
gotoxy(38,30);puts("    \\         /\\  \\   ) ||");
gotoxy(38,30);puts("     \\       /  \\/ `./ \\||");
gotoxy(38,30);puts("      \\_____/    \\`._|_/ |");
gotoxy(38,30);puts("      | | / |     \\_____/");
gotoxy(38,30);puts("      | | | |");
gotoxy(38,30);puts("      | | | /");
gotoxy(38,30);puts("      |/  |/");
}//fim buterfle                
if(inimigo==13){
gotoxy(38,16);puts("    |\\");
gotoxy(38,17);puts("   _| \\__");
gotoxy(38,18);puts("  / |__\\ \\");
gotoxy(38,19);puts(" |        |");
gotoxy(38,20);puts(" |0   0   |");
gotoxy(38,21);puts(",--.      |");
gotoxy(38,22);puts("`--'      /      ");
gotoxy(38,23);puts("  `--,--.'             ");
gotoxy(38,24);puts("    /    \\            | |");
gotoxy(38,25);puts("  C|   O  |           | |");
gotoxy(38,26);puts("    \\____/\\           ,-,");
gotoxy(38,27);puts("     /     |__       /  \\");
gotoxy(38,28);puts("   O|    O |  \\,---.' \\ /");
gotoxy(38,29);puts("     \\____/  O |  O|  O/");
gotoxy(38,30);puts("        O\\____/.__/`--'");
}                
if(inimigo==16){//pidgei
gotoxy(38, 5);puts("                /|_");
gotoxy(38, 6);puts("              /   _>_");
gotoxy(38, 7);puts("            /    /   >");
gotoxy(38, 8);puts("           |   ,'---`\\");
gotoxy(38, 9);puts("           |  /0_|\\   |");
gotoxy(38,10);puts("          _|_/ \\   \\  |");
gotoxy(38,11);puts("         /,  |  \\  /  |");
gotoxy(38,12);puts("           \\_|   |/   |");
gotoxy(38,13);puts("          /(/|  /      \\");
gotoxy(38,14);puts("          ---' (        \\");
gotoxy(38,15);puts("            |   \\        \\");
gotoxy(38,16);puts("           /     \\/       \\     _");
gotoxy(38,17);puts("          /      /         \\   / |");
gotoxy(38,18);puts("         |      |         / | / /");
gotoxy(38,19);puts("         |       \\       /  |/ /|");
gotoxy(38,20);puts("         |        \\^\\|\\_/   |_/_|___");
gotoxy(38,21);puts("         |         \\        |______/");
gotoxy(38,22);puts("         |          \\  \\   ||");
gotoxy(38,23);puts("         |/|__|\\_\\/  \\  \\  ||");
gotoxy(38,24);puts("             \\        \\__\\_|");
gotoxy(38,25);puts("           ___\\__________/");
gotoxy(38,26);puts("          /_\\_`-'  `--_||");
gotoxy(38,27);puts("            /_\\__,---'   `--,_");
gotoxy(38,28);puts("               /_\\,---'   __|_\\");
gotoxy(38,29);puts("                /_\\_,--' /");
gotoxy(38,30);puts("                   /_\\_/");}
else                   
       if(inimigo==19){
gotoxy(38,10);puts("                 --\\");
gotoxy(38,11);puts("                | -.\\");
gotoxy(38,12);puts("                 \\_|\\\\");
gotoxy(38,13);puts("                     \\\\");
gotoxy(38,14);puts("     __               \\\\");
gotoxy(38,15);puts("    /_ \\       __     ||");
gotoxy(38,16);puts("    \\_||____  /_ |    ||");
gotoxy(38,17);puts("    /       `'/ ||    ||");
gotoxy(38,18);puts("   |     _   '  ||_,--||");
gotoxy(38,19);puts("  ,'   /||   )__||      \\");
gotoxy(38,20);puts(" | '__'ø''               |");
gotoxy(38,21);puts(" `-'     `=========      |");
gotoxy(38,22);puts("  \\__      \\,   ,____    |");
gotoxy(38,23);puts(" _ |,//\\    |   |   /\\_  \\");
gotoxy(38,24);puts("/  ___|(| __|   |_/|   \\_ |");
gotoxy(38,25);puts("\\,'   ---'  /   /_/    / `'    ");
gotoxy(38,26);puts("           /   /      `___'   ");
gotoxy(38,27);puts("          /_  /        ");
gotoxy(38,28);puts("         /  \\/");
gotoxy(38,29);puts("         '---'");
gotoxy(38,30);puts("");
                       }
else
if(inimigo==21){ //spearow
gotoxy(38, 6);puts("          ____/|__          ___________");
gotoxy(38, 7);puts("         |       /_        / /    /   /");
gotoxy(38, 8);puts("         |        /_      / /   /     /");
gotoxy(38, 9);puts("        /   /|| ___/     / /  /   /   /");
gotoxy(38,10);puts("   /|__/\\  /0|| |       / /  |    /   /");
gotoxy(38,11);puts("  |       \\    _|\\      ||    \\   /   /");
gotoxy(38,12);puts("  |  ___  /   |   \\     ||    |   /   /");
gotoxy(38,13);puts("   \\/ \\ /      \\   \\____||    |   /   /");
gotoxy(38,14);puts("       |      \\|       / |   /    /   /    ");
gotoxy(38,15);puts("       |      |_      /  /__/         /_ ");
gotoxy(38,16);puts("       |/\\    |  \\   /  /            >// ");
gotoxy(38,17);puts("         | \\  |   | /  /            >///  ");
gotoxy(38,18);puts("         |   \\|   /\\__/            >_// ");
gotoxy(38,19);puts("         |      /      \\          >__/_ ");
gotoxy(38,20);puts("  _ __   |____/         \\________>____/ ");
gotoxy(38,21);puts(" <_<_ \\  |            /          /");
gotoxy(38,22);puts("  __\\  \\  \\         /        _  / ");
gotoxy(38,23);puts(" <____\\  \\  \\_____/________/__|/  ");
gotoxy(38,24);puts("       \\  |_____|  |        |  | ");
gotoxy(38,25);puts("        |  ________|       /  / ");
gotoxy(38,26);puts("        | |               /  /    ");
gotoxy(38,27);puts("       <_/           ____/  /_   ");
gotoxy(38,28);puts("                   _/__    ___\\ ");
gotoxy(38,29);puts("                  /_ ,--- / ");
gotoxy(38,30);puts("                    '----'    ");}                       
  else                                  
       if(inimigo==32){ //imprime inimigos mostra inimigos //nidoran macho
gotoxy(38,12); puts("                            __");
gotoxy(38,13); puts("                      ____/  |/|");
gotoxy(38,14); puts("                 |\\__/   /     |");
gotoxy(38,15);puts("             _  /    ___/    /|>");
gotoxy(38,16);puts("            | |/    <      /  ||");
gotoxy(38,17);puts("            |        \\   /  / |__");
gotoxy(38,18);puts("        ____|___|\\ |/    / /     /");
gotoxy(38,19);puts("       /        |  |  _ //      /__");
gotoxy(38,20);puts("      /        _|  | ////      // /");
gotoxy(38,21);puts(" ____/__     _     |////         /");
gotoxy(38,22);puts(" \\         /| |    /      __    /");
gotoxy(38,23);puts("  \\      /0_|_|   |     /___|   \\");
gotoxy(38,24);puts("  /               |            |  \\");
gotoxy(38,25);puts("  \\^             /           /     \\");
gotoxy(38,26);puts("   `-----------'            /       |");
gotoxy(38,27);puts("     <_\\       /          /___|     |");
gotoxy(38,28);puts("       <_\\___/          /     |      |");
gotoxy(38,29);puts("         /__|_        /        \\___/  \\");
gotoxy(38,30);puts("           /__\\_____/          / /_|__/");}
else
      if(inimigo==41){
gotoxy(38,11);puts("        /\\     --      //|   |\\\\");
gotoxy(38,12);puts("       /,-\\   |  \\\\___// |   |/\\\\");
gotoxy(38,13);puts("      // \\/\\   \\_/  __ \\/   //  \\\\");
gotoxy(38,14);puts("     //  //\\\\   \\ ,'`,|  /\\\\   \\\\");
gotoxy(38,15);puts("    ||  ||  \\\\_ / \\__/\\ // \\\\   \\\\");
gotoxy(38,16);puts("    ||  ||   `-|         |/   \\\\   \\\\");
gotoxy(38,17);puts("    ||  ||    _|         |___,-''--''");
gotoxy(38,18);puts("    ||  ||   / |         |");
gotoxy(38,19);puts("    ``--``--'   \\_______/");       
gotoxy(38,20);puts("                 // ||");
gotoxy(38,21);puts("                //  ||");
gotoxy(38,22);puts("               //   ||");
gotoxy(38,23);puts("              //    ||");
gotoxy(38,24);puts("             //     ||");
gotoxy(38,25);puts("            |/      |/");}else
   if(inimigo==74){
gotoxy(38,13);puts("                   ,---.  ");
gotoxy(38,14);puts("                  _`--' \\");
gotoxy(38,15);puts("          __     | `--'  \\");
gotoxy(38,16);puts("       _-|_,|  __`--`-'   \\");
gotoxy(38,17);puts("      `.`-_ |_/__   \\-,    |");
gotoxy(38,18);puts("       |_|__/ /___     \\   |");
gotoxy(38,19);puts("        \\ |  //      \\ /\\  |");
gotoxy(38,20);puts("        |(.,_  /|    / \\  ||");
gotoxy(38,21);puts("        | |   |0|    __ \\ '|");
gotoxy(38,22);puts("        | |         '  `-' /");
gotoxy(38,23);puts("        |  \\__      `-----'");
gotoxy(38,24);puts("         \\__\\ `---     /");
gotoxy(38,25);puts("             `--------'");
}else
   if(inimigo==95){
gotoxy(38,12);puts("           /.");
gotoxy(38,13);puts("          |||");
gotoxy(38,14);puts("          |||           __ ");
gotoxy(38,15);puts("          |||  _,----  /|  \\");
gotoxy(38,16);puts("      ___//_/\\/ \\    \\/_|_  |__");
gotoxy(38,17);puts("     /       _\\  |  / |   `-|  \\");
gotoxy(38,18);puts("    |/|,--. /  | |/___|o_ __|  |");
gotoxy(38,19);puts("   /___|o_||   | |    |\\_|_/   |\\");
gotoxy(38,20);puts("  | `-     |   |/-----|  |     | |");
gotoxy(38,21);puts("  `----.  __\\_/ \\____/    \\___/  |");
gotoxy(38,22);puts("   /__/` /                 \\____/ \\");
gotoxy(38,23);puts("   `----                    |     |");
gotoxy(38,24);puts("                           / \\___/");
gotoxy(38,25);puts("                          |     |");
gotoxy(38,26);puts("                          |     |");
gotoxy(38,27);puts("                           \\___/ | ");
gotoxy(38,28);puts("                            |    |");
gotoxy(38,29);puts("                             \\   |");
gotoxy(38,30);puts("                              \\___\\");
                    }
         if(p[0]==1){ // imprime seus pokemons bulbasaur
gotoxy(3+mov,15); puts("   ^^^^");
gotoxy(3+mov,16); puts("  / || \\___");
gotoxy(3+mov,17); puts(" / /  \\    \\  __       _");
gotoxy(3+mov,18);puts("| |     \\   \\/  \\_____|_\\ ");
gotoxy(3+mov,19);puts("| |      |__/           \\|   ");
gotoxy(3+mov,20);puts(" \\ \\    /             ^  \\  ");
gotoxy(3+mov,21);puts("  \\__\\/                   |  ");
gotoxy(3+mov,22);puts("   /              /|\\    |  ");
gotoxy(3+mov,23);puts(" /               /_|0_\\   |   ");
gotoxy(3+mov,24);puts("|                         \\");
gotoxy(3+mov,25);puts("|              \\___________|");
gotoxy(3+mov,26);puts("|                       /");
gotoxy(3+mov,27);puts("|     __\\    \\________/");
gotoxy(3+mov,28);puts("|    |   \\    \\  /\\");
gotoxy(3+mov,29);puts("|    |   |\\    \\/  \\");
gotoxy(3+mov,30);puts(" \\___|\\__| \\____\\___\\");}
       if(p[0]==4){ //charmander
gotoxy(3+mov,7);  puts("                ______");
gotoxy(3+mov,8);  puts("              /        \\");
gotoxy(3+mov,9);  puts("            /        \\  |");
gotoxy(3+mov,10); puts("           |      __    |__");
gotoxy(3+mov,11); puts("           |     |  |      \\ ");
gotoxy(3+mov,12); puts("           |     | 0|       | ");
gotoxy(3+mov,13); puts("           |                | ");
gotoxy(3+mov,14); puts(" ^^        |       \\_______`| ");
gotoxy(3+mov,15); puts("| ^|       |       _______/    ");
gotoxy(3+mov,16); puts("|| |        \\     / |\\   ");
gotoxy(3+mov,17); puts("|| |         |     / \\\\");
gotoxy(3+mov,18); puts("||  \\       /    \\/   \\\\");
gotoxy(3+mov,19); puts("|| _/     /       \\   | |");
gotoxy(3+mov,20); puts("|_|      /   \\      \\ | \\");
gotoxy(3+mov,21); puts("|||     /     |\\      \\  \\");
gotoxy(3+mov,22); puts("|||    |      |  \\    /___\\  ");
gotoxy(3+mov,23); puts("|| \\   |      |    \\/ |");
gotoxy(3+mov,24); puts("||  \\  |      |       /\\");
gotoxy(3+mov,25); puts("| \\  \\_|       \\    /   \\");
gotoxy(3+mov,26); puts("|   \\            \\/      \\");
gotoxy(3+mov,27); puts(" \\    \\_\\         |       |");
gotoxy(3+mov,28); puts("   \\______\\    ___/     __/");
gotoxy(3+mov,29); puts("           /     \\       \\ ");
gotoxy(3+mov,30); puts("           \\______|_______> ");}
     if(p[0]==7){ //squirtle
gotoxy(3+mov,7+2);  puts("                ______");
gotoxy(3+mov,8+2);  puts("               /      \\");
gotoxy(3+mov,9+2);  puts("              |     /\\ \\");
gotoxy(3+mov,10+2); puts("              |    |  | |");
gotoxy(3+mov,11+2); puts("             _|    | 0| |  ");
gotoxy(3+mov,12+2); puts("            /\\ \\  _______\\");
gotoxy(3+mov,13+2); puts("           /   \\ \\ _____/___"); 
gotoxy(3+mov,14+2); puts("          /     \\ \\          >"); 
gotoxy(3+mov,15+2); puts("         |       \\ \\         >");
gotoxy(3+mov,16+2); puts("         |       / /_________>__"); 
gotoxy(3+mov,17+2); puts("         |      | |\\     |   /  >");
gotoxy(3+mov,18+2); puts("         |      | | \\    |______>");
gotoxy(3+mov,19+2); puts("         |      | |  \\___|");
gotoxy(3+mov,20+2); puts("         |      | |  /   |");
gotoxy(3+mov,21+2); puts("  _      |     / /  /    /");
gotoxy(3+mov,22+2); puts(" /  \\     \\   / /__/    /");
gotoxy(3+mov,23+2); puts("| /\\  \\    \\ | |   \\   /\\");
gotoxy(3+mov,24+2); puts("|   |  \\____\\|_|    \\_/  |");
gotoxy(3+mov,25+2); puts(" \\  |         /|    |    |");
gotoxy(3+mov,26+2); puts("   \\|_______/  |    |   /");
gotoxy(3+mov,27+2); puts("               |    |____>");
gotoxy(3+mov,28+2); puts("                \\___|");}
if(p[0]==10){
gotoxy(3+mov,12);puts("               ,--------.    _");
gotoxy(3+mov,13);puts("              / __( `--._`--'_)");
gotoxy(3+mov,14);puts("             /,',-.`.-.  ,--' ");
gotoxy(3+mov,15);puts("             ||| o ||  |_| |");
gotoxy(3+mov,16);puts("             |``--',' ___  |");
gotoxy(3+mov,17);puts("            /|      /    \\/");
gotoxy(3+mov,18);puts("  _        /  \\___/\\  ___|");
gotoxy(3+mov,19);puts(" / \\      /      \\ _\\/__/");
gotoxy(3+mov,20);puts("|   |     |       /    \\");
gotoxy(3+mov,21);puts("|   |     |  O   |      |"); 
gotoxy(3+mov,22);puts("|   |     |      |/\\    /\\");
gotoxy(3+mov,23);puts(" \\_/       \\_____|\\/___/\\/"); 
gotoxy(3+mov,24);puts(" |_|        |    |     \\");
gotoxy(3+mov,25);puts(" |  \\       |  O |      |");
gotoxy(3+mov,26);puts(" |   \\_____/ \\___|/\\___/\\");
gotoxy(3+mov,27);puts(" |  O |   | O   / \\/  /\\/");
gotoxy(3+mov,28);puts(" |\\   | O |    /_____/");
gotoxy(3+mov,29);puts(" \\ \\,-.__,----/    /");
gotoxy(3+mov,30);puts("  \\/__/_/___,'----'");}
  if(p[0]==16){//pidgei
gotoxy(3+mov, 5);puts("               _|\\");
gotoxy(3+mov, 6);puts("             _<_   \\");
gotoxy(3+mov, 7);puts("            <   \\    \\");
gotoxy(3+mov, 8);puts("           /'----`,   |");
gotoxy(3+mov, 9);puts("          |    /|_0\\  |");
gotoxy(3+mov,10);puts("          |   /    /\\_|_");
gotoxy(3+mov,11);puts("          |   \\  /  |  ,\\");
gotoxy(3+mov,12);puts("          |    \\|   |_/");
gotoxy(3+mov,13);puts("         /       \\  |\\)\\");
gotoxy(3+mov,14);puts("        /         ) `---");
gotoxy(3+mov,15);puts("       /         /   |");
gotoxy(3+mov,16);puts("  _   /        \\/     \\");
gotoxy(3+mov,17);puts(" | \\ /          \\      \\");
gotoxy(3+mov,18);puts("  \\ \\| \\         |      |");
gotoxy(3+mov,19);puts("  |\\ |  \\       /       |");
gotoxy(3+mov,20);puts("__|_\\|   \\_/|/^/        |");
gotoxy(3+mov,21);puts("\\____|        /         |");
gotoxy(3+mov,22);puts("     ||   /  /          |");
gotoxy(3+mov,23);puts("     ||  /  /  \\/_/|__|\\|");
gotoxy(3+mov,24);puts("      |_/__/        /");
gotoxy(3+mov,25);puts("        \\_________/___");
gotoxy(3+mov,26);puts("         ||_--'  `-'_/_\\");
gotoxy(3+mov,27);puts("    _,--'   `---,__/_\\");
gotoxy(3+mov,28);puts("   /_|__   `---,/_\\");
gotoxy(3+mov,29);puts("        \\ `--,/_\\");
gotoxy(3+mov,30);puts("          \\_/_\\");}
     if(p[0]==19){
gotoxy(3+mov,10);puts("        /-- ");
gotoxy(3+mov,11);puts("       /,- |");
gotoxy(3+mov,12);puts("      //|_/");
gotoxy(3+mov,13);puts("     //");
gotoxy(3+mov,14);puts("    //              __ ");
gotoxy(3+mov,15);puts("   ||     __       / _\\");
gotoxy(3+mov,16);puts("   ||    | _\\  ____||_/");
gotoxy(3+mov,17);puts("   ||    || \\`´       \\");
gotoxy(3+mov,18);puts("   ||--._||  `    _    |");
gotoxy(3+mov,19);puts("  /      ||__(   ||\\   '.  ");
gotoxy(3+mov,20);puts(" |               ''ø'__' |");
gotoxy(3+mov,21);puts(" |     =========´      '-' ");   
gotoxy(3+mov,22);puts(" |        .   ./    ___/");
gotoxy(3+mov,23);puts(" /  _/\\   |   |    /\\,|_  ");
gotoxy(3+mov,24);puts("| _/   |\\ |   |___ |)|__  \\");
gotoxy(3+mov,25);puts("'´ \\    \\_\\   \\   '---  `./");
gotoxy(3+mov,26);puts("'___´      \\   \\");
gotoxy(3+mov,27);puts("            \\  _\\");
gotoxy(3+mov,28);puts("             \\/  \\"); 
gotoxy(3+mov,29);puts("             '---'");}                     
if(p[0]==32){
gotoxy(3+mov,12);puts("       __");
gotoxy(3+mov,13);puts("    |\\|  \\____");
gotoxy(3+mov,14);puts("    |     \\   \\__/|");
gotoxy(3+mov,15);puts("    <|\\    \\__     \\  _");
gotoxy(3+mov,16);puts("    || \\      >     \\| |");
gotoxy(3+mov,17);puts("   __|\\ \\    /         |");
gotoxy(3+mov,18);puts("   \\   \\ \\    \\ |/|____|____");
gotoxy(3+mov,19);puts("  __\\   \\ \\  _ |  |         \\");
gotoxy(3+mov,20);puts("  \\ \\\\   \\ \\ \\\\|  |_         \\");
gotoxy(3+mov,21);puts("   \\       \\\\_\\|     _      __\\___");    
gotoxy(3+mov,22);puts("    \\   ___    \\    | |\\         /");
gotoxy(3+mov,23);puts("    /  |____\\   |   |_|_0\\     /");
gotoxy(3+mov,24);puts("  /  |          |              \\");
gotoxy(3+mov,25);puts("/     \\          \\            ^/");
gotoxy(3+mov,26);puts("|      \\          `----------'");
gotoxy(3+mov,27);puts("|     |___\\       \\         /_>");
gotoxy(3+mov,28);puts("|      |     \\        \\_____/_>");
gotoxy(3+mov,29);puts("/  \\___/       \\       _|___\\");
gotoxy(3+mov,30);puts("\\__|_\\ \\         \\____/___\\");}
      if(p[0]==41){
gotoxy(3+mov,11);puts("        /\\     --      //|   |\\\\");
gotoxy(3+mov,12);puts("       /,-\\   |  \\\\___// |   |/\\\\");
gotoxy(3+mov,13);puts("      // \\/\\   \\_/  __ \\/   //  \\\\");
gotoxy(3+mov,14);puts("     //  //\\\\   \\ ,'`,|  /\\\\   \\\\");
gotoxy(3+mov,15);puts("    ||  ||  \\\\_ / \\__/\\ // \\\\   \\\\");
gotoxy(3+mov,16);puts("    ||  ||   `-|         |/   \\\\   \\\\");
gotoxy(3+mov,17);puts("    ||  ||    _|         |___,-''--''");
gotoxy(3+mov,18);puts("    ||  ||   / |         |");
gotoxy(3+mov,19);puts("    ``--``--'   \\_______/");       
gotoxy(3+mov,20);puts("                 // ||");
gotoxy(3+mov,21);puts("                //  ||");
gotoxy(3+mov,22);puts("               //   ||");
gotoxy(3+mov,23);puts("              //    ||");
gotoxy(3+mov,24);puts("             //     ||");
gotoxy(3+mov,25);puts("            |/      |/");}
 if(p[0]==74){
gotoxy(3+mov,13);puts("    ,---.");
gotoxy(3+mov,14);puts("   / '--'_");
gotoxy(3+mov,15);puts("  /  '--' |     __");
gotoxy(3+mov,16);puts(" /   '-'--'__  |._|-_ ");
gotoxy(3+mov,17);puts("|    .-/   __\\_| _-','");
gotoxy(3+mov,18);puts("|   /     ___\\ \\__|_|");
gotoxy(3+mov,19);puts("|  /\\ /      \\\\  | /");
gotoxy(3+mov,20);puts("||  / \\    |\\  _.,)| ");
gotoxy(3+mov,21);puts("|' /  __   |0|   | |");
gotoxy(3+mov,22);puts(" \\ '-'  '        | |");
gotoxy(3+mov,23);puts("  `-----'     __/  |");
gotoxy(3+mov,24);puts("     \\    ---' /__/");
gotoxy(3+mov,25);puts("      `-------'");}                
if(p[0]==95){
gotoxy(3+mov,12);puts("           /.");
gotoxy(3+mov,13);puts("          |||");
gotoxy(3+mov,14);puts("          |||           __ ");
gotoxy(3+mov,15);puts("          |||  _,----  /|  \\");
gotoxy(3+mov,16);puts("      ___//_/\\/ \\    \\/_|_  |__");
gotoxy(3+mov,17);puts("     /       _\\  |  / |   `-|  \\");
gotoxy(3+mov,18);puts("    |/|,--. /  | |/___|o_ __|  |");
gotoxy(3+mov,19);puts("   /___|o_||   | |    |\\_|_/   |\\");
gotoxy(3+mov,20);puts("  | `-     |   |/-----|  |     | |");
gotoxy(3+mov,21);puts("  `----.  __\\_/ \\____/    \\___/  |");
gotoxy(3+mov,22);puts("   /__/` /                 \\____/ \\");
gotoxy(3+mov,23);puts("   `----                    |     |");
gotoxy(3+mov,24);puts("                           / \\___/");
gotoxy(3+mov,25);puts("                          |     |");
gotoxy(3+mov,26);puts("                          |     |");
gotoxy(3+mov,27);puts("                           \\___/ | ");
gotoxy(3+mov,28);puts("                            |    |");
gotoxy(3+mov,29);puts("                             \\   |");
gotoxy(3+mov,30);puts("                              \\___\\");}                                                       

      
      if(fase==1000){//INICIO FASE 1000 LUTA
      int rh=rand()%5;
      ra=rand()%2;
      rd=rand()%2;
      rsa=rand()%2;
      rsd=rand()%2;
      rv=rand()%2;
    gotoxy(1,43);puts(" _______________________________________________________________________________");
    gotoxy(1,44);puts("|                                                    |                         |");      
    gotoxy(1,45);puts("|                                                    |   Atacar      Itens     |");
    gotoxy(1,46);puts("|                                                    |                         |");
    gotoxy(1,47);puts("|                                                    |   Trocar      fugir     |");           
    gotoxy(1,48);puts("|____________________________________________________|_________________________|");
    gotoxy(55+X,44+Y); printf("%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,187);
    gotoxy(55+X,45+Y); printf("%c",186);
    gotoxy(65+X,45+Y); printf("%c",186);
    gotoxy(55+X,46+Y); printf("%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,188);
           if(antefase==8){//se antefase 8
           if(random2<=2&&inimigo==3){inimigo=10;
             //g==0 signigfica desenha só uma vez
             if(g==0){
               printf("\a");Sleep(100);         
               printf("\a");Sleep(100);      
                r=rand()%5;if(r==0)r=5;
            poka[0]='c';poka[1]='a';poka[2]='t';poka[3]='e';poka[4]='r';poka[5]='p';poka[6]='i';
             poka[7]='e';poka[8]=0;
             HPa=hpa=10-rh;specialata=3-rsa;statusp[3][0]='i';statusp[4][0]='1';statusp[5][0]='1';
             forcaa=3-ra;specialdefa=3-rsd;
             defesaa=3-rd;velocidadea=3-rv;g=1;levela=r;leveli=15;
             for(int i=1;i<r;i++){leveli+=15;
                      hpa=HPa+(HPa/8)+1;
                      forcaa=forcaa+(forcaa/6)+1;
                      defesaa=defesaa+(defesaa/6)+1;
                      specialdefa=specialdefa+specialata/6+1;
                      specialata=specialata+specialata/6+1;
                      velocidadea=velocidadea+velocidadea/6+1;}}continue;}
            else
            if(random2<=4&&random2>2&&inimigo==3){inimigo=13;
             //g==0 signigfica desenha só uma vez
             if(g==0){
               printf("\a");Sleep(100);         
               printf("\a");Sleep(100);      
                r=rand()%5;if(r==0)r=5;
            poka[0]='w';poka[1]='e';poka[2]='d';poka[3]='l';poka[4]='e';poka[5]=0;
             HPa=hpa=10-rh;specialata=3-rsa;statusp[3][0]='i';statusp[4][0]='1';statusp[5][0]='1';
             forcaa=4-ra;specialdefa=3-rsd;
             defesaa=3-rd;velocidadea=3-rv;g=1;levela=r;leveli=15;
             for(int i=1;i<r;i++){leveli+=15;
                      hpa=HPa+(HPa/8)+1;
                      forcaa=forcaa+(forcaa/6)+1;
                      defesaa=defesaa+(defesaa/6)+1;
                      specialdefa=specialdefa+specialata/6+1;
                      specialata=specialata+specialata/6+1;
                      velocidadea=velocidadea+velocidadea/6+1;}}continue;}
            else          
              if(random2>5&&random2<=10&&inimigo==3){inimigo=11;
             //g==0 signigfica desenha só uma vez
             if(g==0){
               printf("\a");Sleep(100);         
               printf("\a");Sleep(100);      
                r=5+rand()%3;if(r==5)r=6;
             poka[0]='m';poka[1]='e';poka[2]='t';poka[3]='a';poka[4]='p';poka[5]='o';poka[6]='d';
             poka[7]=0;
             HPa=hpa=28-rh;specialata=10-rsa;statusp[3][0]='i';statusp[4][0]='1';statusp[5][0]='1';
             forcaa=10-ra;specialdefa=10-rsd;
             defesaa=15-rd;velocidadea=10-rv;g=1;levela=r;leveli=90;
             for(int i=6;i<r;i++){leveli+=15;
                      hpa=HPa+(HPa/8)+1;
                      forcaa=forcaa+(forcaa/6)+1;
                      defesaa=defesaa+(defesaa/6)+1;
                      specialdefa=specialdefa+specialata/6+1;
                      specialata=specialata+specialata/6+1;
                      velocidadea=velocidadea+velocidadea/6+1;}}continue;}//fecha o desenho do metapod               
           }//fim antefase 8
           if(antefase==7){//se antefase==7
              if(g==0){poka[0]='g';poka[1]='e';poka[2]='o';poka[3]='d';poka[4]='u';poka[5]='d';poka[6]='e';poka[7]=0;
                   poka[0]='g';poka[1]='e';poka[2]='o';poka[3]='d';poka[4]='u';poka[5]='d';poka[6]='e';poka[7]=0;
                   levela==4;hpa=HPa=27;forcaa=7;statusp[3][0]='p';statusp[4][0]='t';statusp[5][0]='1';
                   specialata=7;specialdefa=11;
                   defesaa=16;velocidadea=4;g=1;levela=3;}if(poka[0]=='g'&&hpa>0&&inimigo==3){inimigo=74;continue;}                   
              if(poka[0]=='g'&&hpa<=0){
                     g=0;                  
                    poka[0]='z';poka[1]='u';poka[2]='b';poka[3]='a';poka[4]='t';poka[5]=0;
                    levela=4;hpa=HPa=38;forcaa=9;statusp[3][0]='v';statusp[4][0]='f';statusp[5][0]='1';
                    defesaa=7;specialata=9;specialdefa=7;
                    velocidadea=19;g=1;inimigo=41;continue;}if(poka[0]=='z'&&hpa>0&&inimigo==3){inimigo=41;continue;}
              if(poka[0]=='z'&&hpa<=0){
                     g=0;                  
                    poka[0]='o';poka[1]='n';poka[2]='i';poka[3]='x';poka[4]=0;                                                
                    levela=1;hpa=HPa=50;forcaa=10;statusp[3][0]='p';statusp[4][0]='1';statusp[5][0]='1';
                    defesaa=19;specialata=10;specialdefa=10;velocidadea=3;
                    g=1;inimigo=95;continue;}if(poka[0]=='o'&&hpa>0&&inimigo==3){inimigo=95;continue;}
                    }     
           if(antefase==4){//antefase = 4
           if(random2>5&&inimigo==3){inimigo=19;
             //g==0 signigfica desenha só uma vez
             if(g==0){
               printf("\a");Sleep(100);         
               printf("\a");Sleep(100);      
                r=rand()%3;if(r==0)r=3;
             poka[0]='r';poka[1]='a';poka[2]='t';poka[3]='a';poka[4]='t';poka[5]='a';poka[6]=0;
             HPa=hpa=20-rh;specialata=4-rsa;statusp[3][0]='n';statusp[4][0]='1';statusp[5][0]='1';
             forcaa=7-ra;specialdefa=4-rsd;
             defesaa=4-rd;velocidadea=7-rv;g=1;levela=r;leveli=15;
             for(int i=1;i<r;i++){leveli+=15;
                      hpa=HPa+(HPa/8)+1;
                      forcaa=forcaa+(forcaa/8)+1;
                      defesaa=defesaa+(defesaa/8)+1;
                      specialdefa=specialdefa+specialata/8+1;
                      specialata=specialata+specialata/8+1;
                      velocidadea=velocidadea+velocidadea/8+1;}}continue;}//fecha o desenho do ratata    
           else                           
              if(random2<5&&inimigo==3){inimigo=16;
             //g==0 signigfica desenha só uma vez
             if(g==0){printf("\a");Sleep(100);         
               printf("\a");Sleep(100);      
               r=rand()%3;if(r==0)r=3;
             poka[0]='p';poka[1]='i';poka[2]='d';poka[3]='g';poka[4]='e';poka[5]='i';poka[6]=0;
             HPa=hpa=15-rh;specialata=4-rsa;statusp[3][0]='n';statusp[4][0]='f';statusp[5][0]='1';
             forcaa=4-ra;specialdefa=4-rsd;
             defesaa=4-rd;velocidadea=4-rv;g=1;levela=r;leveli=15;
             for(int i=1;i<r;i++){
                      hpa=HPa+(HPa/8)+1;leveli+=15;
                      forcaa=forcaa+(forcaa/8)+1;
                      defesaa=defesaa+(defesaa/8)+1;
                      specialdefa=specialdefa+specialata/8+1;
                      specialata=specialata+specialata/8+1;
                      velocidadea=velocidadea+velocidadea/8+1;}}continue;}//fecha o desenho do pidgei    
           else
             if(random2==5&&inimigo==3){inimigo=32;
             //g==0 signigfica desenha só uma vez
             if(g==0){
                      printf("\a");Sleep(100);         
               printf("\a");Sleep(100);      
               r=rand()%4;if(r==0)r=4;
             poka[0]='n';poka[1]='i';poka[2]='d';poka[3]='o';poka[4]='r';poka[5]='a';poka[6]='n';poka[7]=0;
             HPa=hpa=20-rh;specialata=4-rsa;
             forcaa=7-ra;specialdefa=4-rsd;statusp[3][0]='v';statusp[4][0]='1';statusp[5][0]='1';
             defesaa=4-rd;velocidadea=4-rv;g=1;levela=r;leveli=15;
             for(int i=1;i<r;i++){
                      hpa=HPa+(HPa/8)+1;leveli+=15;
                      forcaa=forcaa+(forcaa/8)+1;
                      defesaa=defesaa+(defesaa/8)+1;
                      specialdefa=specialdefa+specialata/8+1;
                      specialata=specialata+specialata/8+1;
                      velocidadea=velocidadea+velocidadea/8+1;}}continue;}//fecha o desenho do ratata    
           
                                   }// fecha o se antefase==4
           if(antefase==1){
           if(random2==0&&inimigo==3){
                                      inimigo=32;
           if(g==0){poka[0]='n';poka[1]='i';poka[2]='d';poka[3]='o';poka[4]='r';poka[5]='a';poka[6]='n';poka[7]=' ';poka[8]=0;
           levela=1;HPa=hpa=20-rh;specialata=4-rsa;
           forcaa=7-ra;specialdefa=4-rsd;statusp[3][0]='v';statusp[4][0]='1';statusp[5][0]='1';
           defesaa=4-rd;velocidadea=4-rv;g=1;leveli=15;}
           continue;}
           else{
                if(random2>0&&inimigo==3){
                                      inimigo=16;
           if(g==0){poka[0]='p';poka[1]='i';poka[2]='d';poka[3]='g';poka[4]='e';poka[5]='i';poka[6]=0;
           levela=1;HPa=hpa=15-rh;specialata=4-rsa;
           forcaa=4-ra;specialdefa=4-rsd;statusp[3][0]='n';statusp[4][0]='f';statusp[5][0]='1';
           defesaa=4-rd;velocidadea=4-rv;g=1;leveli=15;}
           continue;}}}//fim da fase 1             
             inimigo=3;
             gotoxy(45,32);printf(" _________________");
             gotoxy(45,33);printf("|%s       |",poka);
             gotoxy(45,34);printf("|level=%d,HP = %d |",levela,hpa);
             gotoxy(45,35);printf("|ataque = %d      |",forcaa);
             gotoxy(45,36);printf("|defesa = %d      |",defesaa);
             gotoxy(45,37);printf("|special att= %d  |",specialata);
             gotoxy(45,38);printf("|special def= %d  |",specialdefa);
             gotoxy(45,39);printf("|velocidade = %d  |",velocidadea);
             gotoxy(45,40);printf("|________________|");
             if(p[0]!=0){
             gotoxy(1,32);printf("_________________");
             gotoxy(1,33);printf("|%s        |",Pok[bosta]);
             gotoxy(1,34);printf("|HP = %d         |",hp[bosta]);//deletar depois
             gotoxy(1,35);printf("|ataque = %d      |",forca[bosta]);
             gotoxy(1,36);printf("|defesa = %d      |",defesa[bosta]);
             gotoxy(1,37);printf("|special att= %d  |",specialat[bosta]);
             gotoxy(1,38);printf("|special def= %d  |",specialde[bosta]);
             gotoxy(1,39);printf("|velocidade = %d  |",velocidade[bosta]);
             gotoxy(1,40);printf("|________________|");}if(mov==0){
             if(Pok[bosta][0]=='c'){
                if(Pok[bosta][1]=='a'){
                                    if(level[bosta]>0){
                                                poderes[0][0]='t';poderes[0][1]='a';poderes[0][2]='c';poderes[0][3]='l';poderes[0][4]='e';
                                                poderes[0][5]=0;
                                                status[0][0]='n';status[0][1]=0;attpoder[0]=1;
                                                poderes[1][0]='1';}//body slan/normal poder 1
 if(p[0]==0){p[0]=10;instan=4;statusp[0][0]='i';statusp[1][0]='1';statusp[2][0]='1';continue;}
                                       }                    
                 else{                   
                                    if(level[bosta]>0){
                                                poderes[0][0]='b';poderes[0][1]='o';poderes[0][2]='d';poderes[0][3]='y';poderes[0][4]=' ';
                                                poderes[0][5]='s';poderes[0][6]='l';poderes[0][7]='a';poderes[0][8]='n';poderes[0][9]=0;
                                                status[0][0]='n';status[0][1]=0;attpoder[0]=1;//body slan/normal poder 1
                                                poderes[1][0]='b';poderes[1][1]='o';poderes[1][2]='l';poderes[1][3]='a';poderes[1][4]=' ';
                                                poderes[1][5]='d';poderes[1][6]='e';poderes[1][7]=' ';poderes[1][8]='f';poderes[1][9]='o';
                                                poderes[1][10]='g';poderes[1][11]='o';poderes[1][12]=0;
                                                status[1][0]='F';status[1][1]=0;attpoder[1]=1;}//bola de fogo/q==fogo(pois f=fly pois v==venenoso) poder 1;  q==fire
            if(p[0]==0){p[0]=4;instan=4;statusp[0][0]='F';statusp[1][0]='1';statusp[2][0]='1';continue;}}
p[0]=0;LUT=getch();}
            else
             if(Pok[bosta][0]=='b'){if(level[bosta]>0){
                                                poderes[0][0]='b';poderes[0][1]='o';poderes[0][2]='d';poderes[0][3]='y';poderes[0][4]=' ';
                                                poderes[0][5]='s';poderes[0][6]='l';poderes[0][7]='a';poderes[0][8]='n';poderes[0][9]=0;
                                                status[0][0]='n';status[0][1]=0;attpoder[0]=1;//body slan/normal poder 1
                                                poderes[1][0]='c';poderes[1][1]='h';poderes[1][2]='i';poderes[1][3]='c';poderes[1][4]='o';
                                                poderes[1][5]='t';poderes[1][6]='e';poderes[1][7]=' ';poderes[1][8]='d';poderes[1][9]='e';
                                                poderes[1][10]=' ';poderes[1][11]='c';poderes[1][12]='i';poderes[1][13]='p';poderes[1][14]='o';
                                                poderes[1][15]=0;status[1][0]='b';status[1][1]=0;attpoder[1]=1;}//chicote de cipo/planta poder 1
               if(p[0]==0){p[0]=1;instan=1;statusp[0][0]='b';statusp[1][0]='1';statusp[2][0]='1';
               continue;}
p[0]=0; LUT=getch();}
            else
            if(Pok[bosta][0]=='s'){if(level[bosta]>0){
                                                poderes[0][0]='b';poderes[0][1]='o';poderes[0][2]='d';poderes[0][3]='y';poderes[0][4]=' ';
                                                poderes[0][5]='s';poderes[0][6]='l';poderes[0][7]='a';poderes[0][8]='n';poderes[0][9]=0;
                                                status[0][0]='n';status[0][1]=0;attpoder[0]=1;//body slan/normal poder 1
                                                poderes[1][0]='b';poderes[1][1]='o';poderes[1][2]='l';poderes[1][3]='h';poderes[1][4]='a';
                                                poderes[1][5]='s';poderes[1][6]=0;
                                                status[1][0]='a';status[1][1]=0;attpoder[1]=1;}//bolhas / agua poder 1   
              if(p[0]==0){p[0]=7;instan=7;statusp[0][0]='a';statusp[1][0]='1';statusp[2][0]='1';continue;}
p[0]=0; LUT=getch();}                        
            else
            if(Pok[bosta][0]=='p'){if(level[bosta]>0){
                                                poderes[0][0]='b';poderes[0][1]='o';poderes[0][2]='d';poderes[0][3]='y';poderes[0][4]=' ';
                                                poderes[0][5]='s';poderes[0][6]='l';poderes[0][7]='a';poderes[0][8]='n';poderes[0][9]=0;
                                                status[0][0]='n';attpoder[0]=1;//body slan/normal poder 1
                                                poderes[1][0]='v';poderes[1][1]='e';poderes[1][2]='n';poderes[1][3]='t';poderes[1][4]='a';
                                                poderes[1][5]='n';poderes[1][6]='i';poderes[1][7]='a';poderes[1][8]=0;
                                                status[1][0]='f';status[1][1]=0;attpoder[1]=1;}//ventania / fly(voador) 
               if(p[0]==0){p[0]=16;instan=16;statusp[0][0]='n';statusp[1][0]='f';statusp[2][0]='1';
               continue;}p[0]=0;LUT=getch();}                    
            else 
  if(Pok[bosta][0]=='n'){if(level[bosta]>0){
                                                poderes[0][0]='b';poderes[0][1]='o';poderes[0][2]='d';poderes[0][3]='y';poderes[0][4]=' ';
                                                poderes[0][5]='s';poderes[0][6]='l';poderes[0][7]='a';poderes[0][8]='n';poderes[0][9]=0;
                                                status[0][0]='n';status[0][1]=0;attpoder[0]=1;//body slan/normal poder 1
                                                poderes[1][0]='p';poderes[1][1]='o';poderes[1][2]='i';poderes[1][3]='s';poderes[1][4]='o';
                                                poderes[1][5]='n';poderes[1][6]=' ';poderes[1][7]='s';poderes[1][8]='t';poderes[1][9]='r';
                                                poderes[1][10]='i';poderes[1][11]='n';poderes[1][12]=g;poderes[1][13]=0;
                                                status[1][0]='v';status[1][1]='1';attpoder[1]=1;}//poison string/ venenoso poder 1    
              if(p[0]==0){p[0]=32;instan=32;statusp[0][0]='v';statusp[1][0]='1';statusp[2][0]='1';continue;}
p[0]=0; LUT=getch();}                        
            else
            if(Pok[bosta][0]=='r'){ if(level[bosta]>0){
                                                poderes[0][0]='b';poderes[0][1]='o';poderes[0][2]='d';poderes[0][3]='y';poderes[0][4]=' ';
                                                poderes[0][5]='s';poderes[0][6]='l';poderes[0][7]='a';poderes[0][8]='n';poderes[0][9]=0;
                                                status[0][0]='n';status[0][1]=0;attpoder[0]=1;//body slan/normal poder 1
                                                poderes[1][0]='1'; }  
              if(p[0]==0){p[0]=19;instan=19;statusp[0][0]='n';statusp[1][0]='1';statusp[2][0]='1';continue;}              
p[0]=0; LUT=getch();}                        
            else
            if(Pok[bosta][0]=='g'){   if(level[bosta]>0){
                                                poderes[0][0]='b';poderes[0][1]='o';poderes[0][2]='d';poderes[0][3]='y';poderes[0][4]=' ';
                                                poderes[0][5]='s';poderes[0][6]='l';poderes[0][7]='a';poderes[0][8]='n';poderes[0][9]=0;
                                                status[0][0]='n';status[0][1]=0;attpoder[0]=1;//body slan/normal poder 1
                                                poderes[1][0]='1';}   
              if(p[0]==0){p[0]=74;instan=74;statusp[0][0]='p';statusp[1][0]='t';statusp[2][0]='1';continue;}              
p[0]=0; LUT=getch();}
           else          
            if(Pok[bosta][0]=='z'){   if(level[bosta]>0){
                                                poderes[0][0]='b';poderes[0][1]='o';poderes[0][2]='d';poderes[0][3]='y';poderes[0][4]=' ';
                                                poderes[0][5]='s';poderes[0][6]='l';poderes[0][7]='a';poderes[0][8]='n';poderes[0][9]=0;
                                                status[0][0]='n';status[0][1]=0;attpoder[0]=1;//body slan/normal poder 1
                                                poderes[1][0]='1';}   
              if(p[0]==0){p[0]=41;instan=41;statusp[0][0]='v';statusp[1][0]='f';statusp[2][0]='1';continue;}              
p[0]=0; LUT=getch();}                                                                  
           else
           if(Pok[bosta][0]=='o'){if(level[bosta]>0){
                                                poderes[0][0]='b';poderes[0][1]='o';poderes[0][2]='d';poderes[0][3]='y';poderes[0][4]=' ';
                                                poderes[0][5]='s';poderes[0][6]='l';poderes[0][7]='a';poderes[0][8]='n';poderes[0][9]=0;
                                                status[0][0]='n';status[0][1]=0;attpoder[0]=1;//body slan/normal poder 1
                                                poderes[1][0]='1';}    
              if(p[0]==0){p[0]=95;instan=95;statusp[0][0]='p';statusp[1][0]='1';statusp[2][0]='1';continue;}              
p[0]=0; LUT=getch();}                                                                  
           else
            LUT=getch();                        }
     if(Y>2)Y=0;
     switch(LUT){
     case 75:if(X>0) X=X-12;break;
     case 77:if(X<12)X=X+12;break;
     case 72:if(Y>0) Y=Y-2;break;
     case 80:if(Y<2) Y=Y+2;break;
     case 13:
             if(X==12&&Y==2){clrscr();fase=antefase;}
             if(X==0&&Y==2){X=0;Y=0;Xa=0;Ya=0;
                    atac==1;
                     for(int i=0;i<=4;i++){
                     gotoxy(2,44+i);printf("              ");
                     if(i==4){ gotoxy(2,44+i);printf("_____________________");} } 
                     for(int i=0;i<6;i++){                                   
                     gotoxy(3+X,45+Y);printf("%s",Pok[i]);if(Y<2)Y=Y+2;
                                                                                 else{X=X+12; Y=0;}}
                     X=0;Y=2;                                                            
                     while(atac!=27){   
                     gotoxy(2+Xa,44+Ya); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,187);
                     gotoxy(2+Xa,45+Ya); printf("%c",186);
                     gotoxy(14+Xa,45+Ya);printf("%c",186);
                     gotoxy(2+Xa,46+Ya); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,188);
                     atac=getch();
                     switch(atac){
                     case 75:if(Xa>0) Xa=Xa-12;break;
                     case 77:if(Xa<24) Xa=Xa+12;break;
                     case 72:if(Xa>0) Ya=Ya-2;break;
                     case 80:if(Xa<2) Ya=Ya+2;break;                                                                              
                     case 13:if(Xa==0&&Ya==0){if(Pok[0][0]!='1'){
                                            bosta=0;atac=27;break;}}else
                             if(Xa==0&&Ya==2){if(Pok[1][0]!='1'){
                                            bosta=1;atac=27;break;}}else
                             if(Xa==12&&Ya==0){if(Pok[2][0]!='1'){
                                             bosta=2;atac=27;break;}}else
                             if(Xa==12&&Ya==2){if(Pok[3][0]!='1'){
                                             bosta=3;atac=27;break;}}else
                             if(Xa==24&&Ya==0){if(Pok[4][0]!='1'){
                                             bosta=4;atac=27;break;}}else                                     
                             if(Xa==24&&Ya==2){if(Pok[5][0]!='1'){
                                             bosta=5;atac=27;break;}}                             
                                             }}atac=1;}
             if(X==12&&Y==0){
                     if(hp[bosta]<=0){gotoxy(3,45);printf("SEU POKEMON NÃO TEM SANGUE TROQUE-0");}
                     else{        
                             atac=1;
                             while(atac!=27){
                             for(int i=0;i<=4;i++){
                     gotoxy(2,44+i);printf("                              "); }        
                     gotoxy(3,45);printf("SANDUICHE=%d",sanduiche);
                     gotoxy(3,47);printf("POKEBOLA =%d",pokeboll);    
                     gotoxy(2,44+Y); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,187);
                     gotoxy(2,45+Y); printf("%c",186);
                     gotoxy(14,45+Y);printf("%c",186);
                     gotoxy(2,46+Y); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,188);
                     atac=getch();
                     if(atac==72)if(Y>0)Y=Y-2;
                     if(atac==80)if(Y<2)Y=Y+2;
                     if(atac==13){if(Y==2){if(pokeboll>0){pokeboll--;
                     atac=1;
                                           if(hpa<=HPa/5){
                                                       int j=0;       
                                                        for( j=0;j<6;j++){
                                                                if(Pok[j][0]=='1'){espaco=1;break;}}
                                                                if(espaco==1){espaco=0;                                                                                    
                                                       gotoxy(2,44);printf("você acaba de capturar o pokemon %s",poka);
                                                       tam=strlen(poka);
                                                       for(int i=0;i<=tam;i++){
                                                               Pok[j][i]=poka[i];}
                                                               level[j]=levela;
                                                               level1[j]=leveli;
                                                               exp[j]=0;
                                                               HP[j]=HPa;forca[j]=forcaa;defesa[j]=defesaa;
                                                               specialat[j]=specialata;specialde[j]=specialdefa;
                                                               velocidade[j]=velocidadea;hp[j]=hpa;                                                               
                                                       Sleep(1000);hpa=0;
                                                       }else{ gotoxy(2,44);printf("vc só pode carregar contigo 6 pokemons");Sleep(1000);}
                                                       }else{ gotoxy(2,44);printf("você não conseguiu capturar o pokemon %s",poka);Sleep(1000);break;}
                                                       if(hpa>0){
                                                                 r=rand()%defesa[bosta];if(r==0)r=defesa[bosta];
                                                                 for(int i=0;i<=3;i++){
                                                                     gotoxy(2,44+i);printf("                              "); }     
                                                                 gotoxy(2,44); printf("%s ataqua cabeça dura",poka);Sleep(1000);
                                                                 com=1*forcaa-r;if(com==0)com=1;if(com<0)com=0;
                                                                 gotoxy(2,45); printf("perde %i damge",com);Sleep(1000);
                                                                 hp[bosta]=hp[bosta]-com;
                                                                 if(hp[0]<1)break;}}}
                                  if(Y==0){                                           
                                       if(sanduiche>0){sanduiche--;    
                                       if(velocidade[bosta]>=velocidadea){
                     for(int i=0;i<=3;i++){
                     gotoxy(2,44+i);printf("                              "); }                
                            gotoxy(2,44);printf("%s recupera 20 de hp",Pok[bosta]);Sleep(1000);
                                  hp[bosta]=hp[bosta]+20;if(hp[bosta]>HP[bosta])hp[bosta]=HP[bosta];
                            r=rand()%defesa[bosta];if(r==0)r=defesa[bosta];
                          for(int i=0;i<=3;i++){
                     gotoxy(2,44+i);printf("                              "); }     
                            gotoxy(2,44); printf("%s ataqua cabeça dura",poka);Sleep(1000);
                            com=1*forcaa-r;if(com==0)com=1;if(com<0)com=0;
                            gotoxy(2,45); printf("perde %i damge",com);Sleep(1000);
                            hp[bosta]=hp[bosta]-com;
                            if(hp[0]<1)break;}
                            else{
                                 r=rand()%defesa[bosta];if(r==0)r=defesa[bosta];
                                 for(int i=0;i<=4;i++){
                     gotoxy(2,44+i);printf("                              "); }   
                                 gotoxy(2,44); printf("%s ataqua cabeça dura",poka);Sleep(1000);
                                 com=1*forcaa-r;if(com==0)com=1;if(com<0)com=0;
                                 gotoxy(2,45); printf("perde %i damge",com);Sleep(1000);hp[bosta]=hp[bosta]-com;
                                 for(int i=0;i<=4;i++){
                     gotoxy(2,44+i);printf("                              "); }   
                                  if(hp[bosta]>0){gotoxy(22,44);printf("%s recupera 20 de hp",Pok[bosta]);Sleep(1000);
                                  hp[bosta]=hp[bosta]+20;if(hp[bosta]>HP[bosta])hp[bosta]=HP[bosta];
                                            }else break;}}}}}}}
                                  
             if(X==0&&Y==0){if(Pok[0][0]!=1){//atacar
                                         if(hp[bosta]<=0){gotoxy(3,45);printf("SEU POKEMON NÃO TEM SANGUE TROQUE-0");}
                     else{atac='a';Xa=0;Ya=0;    
                            for(int i=0;i<1000;i++){
                                              if(poderes[i][0]!='1'){gotoxy(3+Xa,45+Ya);printf("%s",poderes[i]);if(Ya<2)Ya=Ya+2;
                                                                                 else{Xa=Xa+12; Ya=0;}}}Xa=0;Ya=0;
                            while(atac!=13&&atac!=27){                                                      
                            gotoxy(2+Xa,44+Ya); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,187);
                            gotoxy(2+Xa,45+Ya); printf("%c",186);
                            gotoxy(14+Xa,45+Ya);printf("%c",186);
                            gotoxy(2+Xa,46+Ya); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,188);
                            if(mov==0){atac=getch();}else atac=13;
                            if(atac==72){Ya-=2;}
                            if(atac==80){Ya+=2;}
                            if(atac==75){Xa-=12;}
                            if(atac==77){Xa+=12;}}
                            if(atac==13){if(Ya==0&&Xa==0){if(poderes[0][0]!='1')numero=0;}
                                         if(Ya==2&&Xa==0){if(poderes[1][0]!='1')numero=1;}
                                         if(Ya==0&&Xa==12){if(poderes[2][0]!='1')numero=2;}                          
    gotoxy(1,43);puts(" _______________________________________________________________________________");
    gotoxy(1,44);puts("|                                                    |                         |");      
    gotoxy(1,45);puts("|                                                    |   Atacar      Itens     |");
    gotoxy(1,46);puts("|                                                    |                         |");
    gotoxy(1,47);puts("|                                                    |   Trocar      fugir     |");           
    gotoxy(1,48);puts("|____________________________________________________|_________________________|");
                            if(velocidade[bosta]>=velocidadea){             
                            r=rand()%defesaa;if(r==0)r=defesaa;                                        
                            gotoxy(2,44); printf("%s ataca %s",Pok[bosta],poderes[numero]);Sleep(1000);
                            if(poderes[numero][0]=='c'){
                            if(Pok[bosta][0]=='b'){
                                            gotoxy(3,14); puts("                     __" );                               
                                            gotoxy(3,15); puts("   ^^^^   ,========='__)" );
                                            gotoxy(3,16); puts("  / ||   //,=============.__)");
                                            gotoxy(3,17); puts(" / /    // \\  __       _");
                                            gotoxy(3,18);puts("| |    //   \\/  \\_____|_\\ ");
                                            gotoxy(3,19);puts("| |   //\\__/           \\|   ");
                                            gotoxy(3,20);puts(" \\ \\ //  /             ^  \\  ");
                                            gotoxy(3,21);puts("  \\_///                   |  "); Sleep(500);
                                            gotoxy(3,14); puts("                       " );
                                            gotoxy(3,15); puts("   ^^^^                  ");
                                            gotoxy(3,16); puts("  / || \\___                  ");
                                            gotoxy(3,17); puts(" / /  \\    \\  __       _");
                                            gotoxy(3,18);puts("| |     \\   \\/  \\_____|_\\ ");
                                            gotoxy(3,19);puts("| |      |__/           \\|   ");
                                            gotoxy(3,20);puts(" \\ \\    /             ^  \\  ");
                                            gotoxy(3,21);puts("  \\__\\/                   |  ");}}
                             if(status[numero][0]=='q'){
                             if(poderes[numero][0]=='b'){
                            if(Pok[bosta][0]=='c'){
                                            gotoxy(33,11);puts(" ______");
                                            gotoxy(33,12);puts("< ,--  \\");
                                            gotoxy(33,13);puts("<<____) |");
                                            gotoxy(33,14);puts("<______/"); Sleep(500);
                                            gotoxy(33,11);puts("         ");
                                            gotoxy(33,12);puts("         ");
                                            gotoxy(33,13);puts("         ");
                                            gotoxy(33,14);puts("         ");}}}
                            if(status[numero][0]=='a'){          
                              if(poderes[numero][0]=='b'){
                            if(Pok[bosta][0]=='s'){
                                            gotoxy(30,11);puts(" o o o o");
                                            gotoxy(30,12);puts("o o o o");
                                            gotoxy(30,13);puts("o o o ");
                                            gotoxy(30,14);puts(" o o o o"); Sleep(500);
                                            gotoxy(30,11);puts("         ");
                                            gotoxy(30,12);puts("         ");
                                            gotoxy(30,13);puts("         ");
                                            gotoxy(30,14);puts("         ");}}}
                             if(poderes[numero][0]=='v'){
                            if(Pok[bosta][0]=='p'){
                                            gotoxy(30,11);puts(" / / / /");
                                            gotoxy(30,12);puts("/ / / /");
                                            gotoxy(30,13);puts(" / / / ");
                                            gotoxy(30,14);puts("/ / /"); Sleep(500);
                                            gotoxy(30,11);puts("         ");
                                            gotoxy(30,12);puts("         ");
                                            gotoxy(30,13);puts("         ");
                                            gotoxy(30,14);puts("         ");}}                               
                                if(poderes[numero][0]=='p')
                            if(Pok[bosta][0]=='n'){
                                            gotoxy(33,14);puts(" _____");
                                            gotoxy(33,15);puts("|     `.");
                                            gotoxy(33,16);puts("|       >");
                                            gotoxy(33,17);puts("|_____,'"); Sleep(500);
                                            gotoxy(33,14);puts("         ");
                                            gotoxy(33,15);puts("         ");
                                            gotoxy(33,16);puts("         ");
                                            gotoxy(33,17);puts("         ");}             
                           if(status[numero][0]=='n'){
                                                if(poderes[numero][0]=='b'){
                                                         if(mov==0){mov=5;if(p[0]==0){p[0]=instan;continue;}}              
p[0]=0;mov=0;}                               
                            com=damage(statusp[3][0],statusp[4][0],status[numero][0],forca[bosta],r,attpoder[numero]);}
                            else
                            com=damage(statusp[3][0],statusp[4][0],status[numero][0],specialat[bosta],r,attpoder[numero]);
                            gotoxy(2,45); printf("perde %i damge",com);Sleep(1000);
                            hpa=hpa-com;
                            if(hpa>0){
                                      r=rand()%defesa[bosta];if(r==0)r=defesa[bosta];
                            gotoxy(2,44); printf("%s ataqua cabeça dura",poka);Sleep(1000);
                            com=1*forcaa-r;if(com==0)com=1;if(com<0)com=0;
                            gotoxy(2,45); printf("perde %i damge",com);Sleep(1000);
                            hp[bosta]=hp[bosta]-com;
                            if(hp[bosta]<1)break;}
                            else break;}
                            else{
                                 r=rand()%defesa[bosta];if(r==0)r=defesa[bosta];
                                 gotoxy(2,44); printf("%s ataqua cabeça dura",poka);Sleep(1000);
                                 com=1*forcaa-r;if(com==0)com=1;if(com<0)com=0;
                                 gotoxy(2,45); printf("perde %i damge",com);Sleep(1000);hp[bosta]=hp[bosta]-com;
                                  if(hp>0){r=rand()%defesaa;if(r==0)r=defesaa;         
                                           gotoxy(2,44); printf("%s ataca %s",Pok[bosta],poderes[numero]);Sleep(1000);
                                           if(status[numero][0]=='n'){
                                           com=1*forca[bosta]-r;if(com==0)com=1;if(com<0)com=0;}
                                           else{
                                           com=1*specialat[bosta]-r;if(com==0)com=1;if(com<0)com=0;}     
                                           gotoxy(2,45); printf("perde %i damge",com);Sleep(1000);
                                           hpa=hpa-com;
                                            gotoxy(2,46); printf("perde %i damge",hpa);Sleep(1000);
                                           if(hpa<1)break;
                                            }else break;}}
                                 if(atac==27||(hp[bosta]==0&&perdeu==1))break;}}
                            else{
                            gotoxy(2+X,44+Y); printf("vc não tem pokemon");
                            gotoxy(2+X,45+Y); printf("para dar um ataque");Sleep(1000);}}}
                            gotoxy(2+X,44+Y); printf("                               ");
                            gotoxy(2+X,45+Y); printf("                               ");
                            gotoxy(2+X,46+Y); printf("                               ");
                            
                            
          perdeu=0;for(int i=0;i<6;i++){
          if(Pok[i][0]!='1' && hp[i]>0){perdeu=1;}}                          
          if(perdeu==0){ 
                                 
                 gotoxy(10,45);puts("VC PERDEU");Sleep(1000);fase=antefase;}
          if(antefase==7){
                          if(poka[0]=='o'&&hpa<1){
                          gotoxy(10,45);puts("VC VENCEU");                     
                          gotoxy(2,46);puts("vc ganhou 20 pontsos de experiencia");
                          gotoxy(2,47);puts("vc ganhou 150 reais");
                          gotoxy(2,48);puts("vc ganhou a insignia de pedra");exp[bosta]=exp[bosta]+45;GP=GP+15;fase=antefase;insignias=1;Sleep(1000);}}          
          else
           if(hpa<1){
                           gotoxy(10,45);puts("VC VENCEU");
                  if(poka[0]=='w'){
                  gotoxy(2,46);printf("vc ganhou %d pontsos de experiencia",2+levela);
                  gotoxy(2,47);printf("vc ganhou %d reais",2+levela);exp[bosta]=exp[bosta]+2+levela;GP=GP+2+levela;fase=antefase;Sleep(1000);}                                                             
                  if(poka[0]=='c'){
                  gotoxy(2,46);printf("vc ganhou %d pontsos de experiencia",2+levela);
                  gotoxy(2,47);printf("vc ganhou %d reais",1+levela);exp[bosta]=exp[bosta]+2+levela;GP=GP+1+levela;fase=antefase;Sleep(1000);}                                   
                  if(poka[0]=='m'){
                  gotoxy(2,46);printf("vc ganhou %d pontsos de experiencia",3+levela);
                  gotoxy(2,47);printf("vc ganhou %d reais",2+levela);exp[bosta]=exp[bosta]+3+levela;GP=GP+2+levela;fase=antefase;Sleep(1000);}                                   
                  if(poka[0]=='r'){
                  gotoxy(2,46);printf("vc ganhou %d pontsos de experiencia",8+levela);
                  gotoxy(2,47);printf("vc ganhou %d reais",5+levela);exp[bosta]=exp[bosta]+8+levela;GP=GP+5+levela;fase=antefase;Sleep(1000);}         
                  if(poka[0]=='n'){
                  gotoxy(2,46);printf("vc ganhou %d pontsos de experiencia",7+levela);
                  gotoxy(2,47);printf("vc ganhou %d reais",4+levela);exp[bosta]=exp[bosta]+7+levela;GP=GP+4+levela;fase=antefase;Sleep(1000);}
                  if(poka[0]=='p'){
                  gotoxy(2,46);printf("vc ganhou %d pontos de experiencia",4+levela);
                   gotoxy(2,47);printf("vc ganhou %d reais",2+levela);exp[bosta]=exp[bosta]+4+levela;GP=GP+2+levela;
                   fase=antefase;if(antefase==4){antefase=1000;}Sleep(1000);}}clrscr();                 
       }//fim fase 1000 final fase 1000                            
       if(fase==1){//inicio fase 1
       gotoxy(2+X,44+Y); printf("                               ");
                            gotoxy(2+X,45+Y); printf("                               ");
                            gotoxy(2+X,46+Y); printf("                               ");
       if(antefase==2){x=60;y=19;c='a';} 
       if(antefase==3){x=17;y=39;c='a';}
       if(antefase==4){x=35;y=8;c='a';}
       if(x==60&&y==19){
         gotoxy(32,2);puts("casa do Dr.Oak");} 
       else
        if(x==17&&y==39){                     
         gotoxy(32,2);puts("Sua Casa");} 
         else
         if(e==0){                                      
       gotoxy(32,2);puts("escolha um pokemon");
       gotoxy(32,3);puts("na casa do dr.Oak"); }
       for (int i=0;i<9;){
       gotoxy(1,10+i);puts("wwwwwwwwwwwwwwwwwwww");i++;}
       gotoxy(55,16);puts("     / \\ ");
       gotoxy(55,17);puts("    /   \\ ");
       gotoxy(55,18);puts("   / ___ \\");
       gotoxy(55,19);puts("  / |   | \\");
       gotoxy(55,20);puts("  | |  c| | ");
       gotoxy(55,21);puts("  | |   | | ");
       gotoxy(12,36);puts("     / \\ ");
       gotoxy(12,37);puts("    /   \\ ");
       gotoxy(12,38);puts("   / ___ \\");
       gotoxy(12,39);puts("  / |   | \\");
       gotoxy(12,40);puts("  | |  c| | ");
       gotoxy(12,41);puts("  | |   | | ");
       if(y>8&&y<17&&x<18&&random==6){fase=1000;g=0;}
       if(c==72){if(y==7){fase=4;antefase=1;}}
       if(c==13){if(x==60&&y==19)fase=2;}
      
       if(c==13){if(x==17&&y==39)fase=3;c='a';continue;} antefase=1;}//fecha fase 1
       else if(fase==2){ //ksa do professor
         if(antefase==1){x=35;y=46;}
                     for (int i=0;i<44;){
                     gotoxy(80,6+i);puts("|");
                     gotoxy(1,6+i);puts("|");i++;}
       gotoxy(34,45);puts(" ___");              
       gotoxy(34,46);puts("|   |");
       gotoxy(34,47);puts("|  c| ");
       gotoxy(34,48);puts("|   | ");
       gotoxy(34,8);      puts("O");
       gotoxy(33,9);     puts("/#\\");
       gotoxy(33,10);    puts("/ \\");
       if(p[0]==0){
       gotoxy(5,12);  puts(" _____________________");
       gotoxy(5,13);  puts("|    0     0     0    |");
       gotoxy(5,14);  puts("|___[-]___[-]___[-]___|");
       gotoxy(5,15);  puts("  '|                |'  ");}
       gotoxy(45,12); puts(" ______");
       gotoxy(45,13); puts("|      |");          
       gotoxy(45,14); puts(",-----,'");        
    
                 if(c==13){if(x==48 && y==15){
                             for(int i=0;i<6;i++){
                                     if(Pok[i][0]!='1'){hp[i]=HP[i];
                                     gotoxy(46+i,13);puts("°");Sleep(500);}}}               
                          if(x==35 && y==46){fase=1;c='a';continue;}
                         if(x==33&&y==11&&e==0){
                         gotoxy(37,9);puts("escolha um dos tres pokemons na mesa");
                         Sleep(500);d=1;}
                         else
                         if(x==33&&y==11&&e==1){gotoxy(37,9);puts("vc ja tem um pokemon pode ir embora");
                         c=getch();}
                         if(x==15&&y==15&&e==0&&d==1){
                         if(p[0]==0){p[0]=7;continue;}p[0]=0;
                         gotoxy(40,29);puts("escolher este pokemon (s)im ou (n)ao");
                         gotoxy(40,28);puts("speed         =   4");
                         gotoxy(40,27);puts("special defesa=   4");
                         gotoxy(40,26);puts("special ataque=   4");
                         gotoxy(40,25);puts("defesa        =   8");
                         gotoxy(40,24);puts("ataque        =   4");
                         gotoxy(40,23);puts("HP            =  20");
                         gotoxy(40,22);puts("   Squirtle        ");
c=getch();
if(c=='s'){e=1;Pok[0][0]='s';Pok[0][1]='q';Pok[0][2]='u';Pok[0][3]='i';Pok[0][4]='r';Pok[0][5]='t';Pok[0][6]='l';Pok[0][7]='e';Pok[0][8]=0;
level[0]=1;HP[0]=20;forca[0]=4;defesa[0]=8;specialat[0]=4;specialde[0]=4;velocidade[0]=4;hp[0]=HP[0];po[0]=7;}continue;}
if(x==21&&y==15&&e==0&&d==1){
                             if(p[0]==0){p[0]=1;continue;}p[0]=0;  
                         gotoxy(40,29);puts("escolher este pokemon (s)im ou (n)ao");    
                         gotoxy(40,28);puts("speed         =   4");
                         gotoxy(40,27);puts("special defesa=   4");
                         gotoxy(40,26);puts("special ataque=   7");
                         gotoxy(40,25);puts("defesa        =   4");
                         gotoxy(40,24);puts("ataque        =   4");
                         gotoxy(40,23);puts("HP            =  20");
                         gotoxy(40,22);puts("   bulbasauro      ");
                          
c=getch();
if(c=='s'){e=1;level[0]=1;forca[0]=4;hp[0]=HP[0]=20;po[0]=1;
defesa[0]=4;specialat[0]=7;specialde[0]=4;velocidade[0]=4;
Pok[0][0]='b';Pok[0][1]='u';Pok[0][2]='l';Pok[0][3]='b';Pok[0][4]='a';Pok[0][5]='s';Pok[0][6]='a';Pok[0][7]='u';Pok[0][8]='r';Pok[0][9]=0;}
continue;}
if(x==9&&y==15&&d==1&&e==0){
                            if(p[0]==0){p[0]=4;;continue;}p[0]=0;
                         gotoxy(40,29);puts("escolher este pokemon (s)im ou (n)ao");   
                         gotoxy(40,28);puts("speed         =   7");
                         gotoxy(40,27);puts("special defesa=   4");
                         gotoxy(40,26);puts("special ataque=   6");
                         gotoxy(40,25);puts("defesa        =   4");
                         gotoxy(40,24);puts("ataque        =   7");
                         gotoxy(40,23);puts("HP            =  15");
                         gotoxy(40,22);puts("   Charmander      "); 
c=getch();                  
if(c=='s'){e=1;level[0]=1;forca[0]=7;hp[0]=HP[0]=15;po[0]=4;
defesa[0]=4;specialat[0]=6;specialde[0]=4;velocidade[0]=7;
Pok[0][0]='c';Pok[0][1]='h';Pok[0][2]='a';Pok[0][3]='r';Pok[0][4]='m';Pok[0][5]='a';Pok[0][6]='n';Pok[0][7]='d';Pok[0][8]='e';Pok[0][9]='r';Pok[0][10]=0;}
continue;}} 
antefase=2;
} //fecha fase 2
else
     if(fase==3){  // FASE 3 sua casA
     if(antefase==1){x=35;y=46;}
                     for (int i=0;i<44;){
                     gotoxy(80,6+i);puts("|");
                     gotoxy(1,6+i);puts("|");i++;}
       gotoxy(34,45);puts(" ___");              
       gotoxy(34,46);puts("|   |");
       gotoxy(34,47);puts("|  c| ");
       gotoxy(34,48);puts("|   | ");
       gotoxy(28,8);     puts("2O5");
       gotoxy(28,9);     puts("/M\\");
       gotoxy(28,10);    puts("/ \\");
             
       if(c==13){if(x==35&&y==46){fase=1;c='a';continue;}
                 if(x==28&&y==11){
                               if(mae==1){gotoxy(35,9);printf("filho n%co tenho mais nada para lhe entregar",198);}
                               if(mae==0){gotoxy(35,9); puts("filho fiz trez sanduiches p\\ vc levar");
                               gotoxy(32,10);printf("e pegue tamb%cm esta pokebola q comprei pra vc",130);
                         Sleep(1000);sanduiche+=3;pokeboll+=1;mae=1;}
                            }}
               antefase=3;} //fim da fase 3                 
            else //fase 4      
             if(fase==4){if(antefase==1){x=35;y=45;}
                         if(antefase==5){x=62;y=7;}
                         tem=clock()-tem;tem=tem-tempo;
             for(int i=5;i<43;i++){
              gotoxy(1,1+i);puts("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");
              if(i%5==0){gotoxy(1,1+i);puts("==================================================================wwwwwwwwwwwwww");}
             if(i%10==0){gotoxy(1,1+i);puts("wwwwwwwwwwwwww==================================================================");};}
             if(tem-tempo>5000){tempo=tem;fase=1000;g=0;}
             if(x==64&&y>=7&&y<=8){fase=5;continue;}
             if(c==80)if(y==46){fase=1;}antefase=4;}//fim da fase 4
           else
              if(fase==5){//fase 5
                            if(antefase==4){x=35;y=45;}
                            if(antefase==6){x=44;y=25;}
                            if(antefase==7){x=14;y=35;}
                            if(antefase==8){x=77;y=7;}
                            for(int i=11;i<=48;i++){gotoxy(74,i);printf("%c",186);}
                            for(int i=1;i<=80;i++){gotoxy(i,6);printf("%c",205);}                            
                gotoxy(74,10);printf("%c%c%c%c%c%c%c",201,205,205,205,205,205,205);            
                gotoxy(10,31);puts("  _________________");
                gotoxy(10,32);puts(" /   Ginasio de    \\");
                gotoxy(10,33);puts("/_____pewton________\\");
                gotoxy(10,34);puts(" |  ___  |        |"); 
                gotoxy(10,35);puts(" | |   | |        |"); 
                gotoxy(10,36);puts(" | |  c| |        |");
                gotoxy(10,37);puts(" |_|   |_|________|");
                gotoxy(40,21);puts("  _________________");
                gotoxy(40,22);puts(" /     Centro      \\");
                gotoxy(40,23);puts("/_____Pokemon_______\\");
                gotoxy(40,24);puts(" |  ___  |        |"); 
                gotoxy(40,25);puts(" | |   | |        |"); 
                gotoxy(40,26);puts(" | |  c| |        |");
                gotoxy(40,27);puts(" |_|   |_|________|");
                if(x==14 && y==35 && c==13){fase=7;continue;}
                if(x==44 && y==25 && c==13){fase=6;continue;}
                if(x==78&&y==7){if(insignias!=1){gotoxy(20,29);puts("eu ainda não consegui a insignia");}
                                else fase=8;}
                if(c==80&&y==46){fase=4;}
                antefase=5; 
         }//fase 5 cidade de pewton
         else
          if(fase==6){// fase 6 centro pokemon
                  if(antefase==5){x=35;y=45;}
           gotoxy(10,7);printf(" %c",2);
           gotoxy(10,8);printf("/%c\\",176);
           gotoxy(10,9);printf("/ \\");//"curandeira"
           gotoxy(15,7); puts(" ______");
           gotoxy(15,8); puts("|      |");          
           gotoxy(15,9); puts(",-----,'");//maquina q cura os pokemons
           gotoxy(1,10); puts(" ______________________________________________________________________________");
           gotoxy(1,11); puts("|                                                                              |");          
           gotoxy(1,12); puts(",-----------------------------------------------------------------------------,'");
           gotoxy(65,13);puts(" ___");
           gotoxy(65,14);puts("|,-,|");
           gotoxy(65,15);puts("|'-'|");
           gotoxy(65,16);puts(",--,'");
            if(c==80&&y==46){fase=5;}
            if(c==13&&x==66&&y==17){//se for na máquina de enviar pokemons
                       while(1){
                      gotoxy(35,1); puts(" _____________________");          
                      gotoxy(35,2); puts("| ___________________ |");
                      gotoxy(35,3); puts("|| Vc gostaria de:   ||");
                      gotoxy(35,4); puts("||                   ||");
                      gotoxy(35,5); puts("||                   ||");
                      gotoxy(35,6); puts("||  pegar pokemon    ||");
                      gotoxy(35,7); puts("||                   ||");
                      gotoxy(35,8); puts("||  enviar pokemon   ||");
                      gotoxy(35,9); puts("||                   ||");
                      gotoxy(35,10);puts("||   doar pokemon    ||");
                      gotoxy(35,11);puts("||                   ||");
                      gotoxy(35,12);puts("||       Sair        ||");
                      gotoxy(35,13);puts("||                   ||"); 
                      gotoxy(35,14);puts("||___________________||");
                      gotoxy(35,15);puts("'---------------------' ");
                      gotoxy(37,5+Y); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
                      gotoxy(37,6+Y); printf("%c",186);
                      gotoxy(55,6+Y); printf("%c",186);
                      gotoxy(37,7+Y); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
                      atac=getch();
                      if(atac==80)if(Y<6)Y+=2;
                      if(atac==72)if(Y>0)Y-=2;
                      if(atac==13){//se apertar enter
                                   if(Y==6)//Sair
                                   break;
                                   if(Y==4){//doar pokemon
                                   pegar=0;  
                                            for(int i=0;i<6;i++){
                                               if(Pok[i][0]!='1'){pegar++;}}//fim do for e if
                                               if(pegar<6){//if(pegar<6)
                                                   pegar=0;        
                                                   for(int i=6;i<1000;i++){         
                                                    if(Pok[i][0]!='1'){pegar++;}}//fim for e if
                                                    if(pegar==0){
                                                            gotoxy(38,6);puts("vc não tem pokemon para pegar");Sleep(100);     
                                                                 }//fim pegar==0
                                                     else{//INICIO SENÃO
                                                            X=0;Y=0;Xa=0;Ya=0;maximo=0;zx=0;
                                                            atac==1;
                                                            for(int i=0;i<=6;i++){
                                                                if(Pok[i][0]=='1'){falta=i;break;}} //fim do for
                                                            for(int i=6;i<1000;i++){
                                                            if(maximo==8){para[10]=i;break;}                                            
                                                            if(Pok[i][0]!='1'){para[zx]=i;gotoxy(3+Xa,45+Ya);printf("%s",Pok[i]);zx++;
                                                            if(Ya<2)Ya=Ya+2;
                                                            else{Xa=Xa+12; Ya=0;}}maximo++;}//fim else ,Pok[i][0]!='1' e for
                                                            Xa=0;Ya=0;atac='a';                                                            
                     while(atac!=27&&atac!=13){   //inicio while do pegar
                     gotoxy(2+Xa,44+Ya); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,187);
                     gotoxy(2+Xa,45+Ya); printf("%c",186);
                     gotoxy(14+Xa,45+Ya);printf("%c",186);
                     gotoxy(2+Xa,46+Ya); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,188);
                     atac=getch();
                     switch(atac){//inicio switch
                     case 75:if(Xa>0) Xa=Xa-12;break;
                     case 77:if(Xa<48) Xa=Xa+12;break;
                     case 72:if(Ya>0) Ya=Ya-2;break;
                     case 80:if(Y==2&&maximo==8){maximo=0;zx=0;//inimcio mais ppok
                                                            for(int i=para[10];i<1000;i++){
                                                            if(maximo==10){para[10]=i;break;}                                            
                                                            if(Pok[i][0]!='1'){para[zx]=i;gotoxy(3+Xa,45+Ya);printf("%s",Pok[i]);zx++;
                                                            if(Ya<2)Ya=Ya+2;
                                                            else{Xa=Xa+12; Ya=0;}}//fim else e Pok[i]!=0
                                                            maximo++;}//fim for
                                                            Ya=0;}//fim mais pok
                          else{Ya=Ya+2;break;}}//fim do switch
                          }//fim do while
                          if(Xa==0&&Ya==0&&atac==13) {numero=para[0];}
                          if(Xa==0&&Ya==2&&atac==13) {numero=para[1];}
                          if(Xa==12&&Ya==0&&atac==13){numero=para[2];}
                          if(Xa==12&&Ya==2&&atac==13){numero=para[3];}
                          if(Xa==24&&Ya==0&&atac==13){numero=para[4];}
                          if(Xa==24&&Ya==2&&atac==13){numero=para[5];}
                          if(Xa==36&&Ya==0&&atac==13){numero=para[6];}
                          if(Xa==36&&Ya==2&&atac==13){numero=para[7];}
                          if(Xa==48&&Ya==0&&atac==13){numero=para[8];}
                          if(Xa==48&&Ya==2&&atac==13){numero=para[9];}
                          if(atac==13){
                                   Pok[numero][0]='1';Pok[numero][1]=0;}                       
                                                   
                          
                                                            }//fim do else             
                                                        }//fim pegar<6
                                                 
                                            break;    
                                  }//fim do doar pokemon
                                   if(Y==0){//pegar pok
                                            pegar=0;numero=0;  
                                            for(int i=0;i<6;i++){
                                               if(Pok[i][0]!='1'){pegar++;}}//fim do for e if
                                               if(pegar<6){//if(pegar<6)
                                                   pegar=0;        
                                                   for(int i=6;i<1000;i++){         
                                                    if(Pok[i][0]!='1'){pegar++;}}//fim for e if
                                                    if(pegar==0){
                                                            gotoxy(38,6);puts("vc não tem pokemon para pegar");Sleep(100);     
                                                                 }//fim pegar==0
                                                     else{//INICIO SENÃO
                                                            X=0;Y=0;Xa=0;Ya=0;maximo=0;zx=0;
                                                            atac=1;
                                                            for(int i=0;i<=6;i++){
                                                                if(Pok[i][0]=='1'){falta=i;break;}} //fim do for
                                                            for(int i=6;i<1000;i++){
                                                            if(maximo==10){para[10]=i;break;}                                            
                                                            if(Pok[i][0]!='1'){para[zx]=i;gotoxy(3+Xa,45+Ya);printf("%s",Pok[i]);zx++;
                                                            if(Ya<2)Ya=Ya+2;
                                                            else{Xa=Xa+12; Ya=0;}}maximo++;}//fim else ,Pok[i][0]!='1' e for
                                                            Xa=0;Ya=0;atac='a';                                                            
                     while(atac!=27&&atac!=13){   //inicio while do pegar
                     gotoxy(2+Xa,44+Ya); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,187);
                     gotoxy(2+Xa,45+Ya); printf("%c",186);
                     gotoxy(14+Xa,45+Ya);printf("%c",186);
                     gotoxy(2+Xa,46+Ya); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,188);
                     atac=getch();
                     switch(atac){//inicio switch
                     case 75:if(Xa>0) Xa=Xa-12;break;
                     case 77:if(Xa<48) Xa=Xa+12;break;
                     case 72:if(Ya>0) Ya=Ya-2;break;
                     case 80:if(Y==2&&maximo==8){maximo=0;zx=0;//inimcio mais ppok
                                                            for(int i=para[10];i<1000;i++){
                                                            if(maximo==10){para[10]=i;break;}                                            
                                                            if(Pok[i][0]!='1'){para[zx]=i;gotoxy(3+Xa,45+Ya);printf("%s",Pok[i]);zx++;
                                                            if(Ya<2)Ya=Ya+2;
                                                            else{Xa=Xa+12; Ya=0;}}//fim else e Pok[i]!=0
                                                            maximo++;}//fim for
                                                            Ya=0;}//fim mais pok
                          else{Ya=Ya+2;break;}}//fim do switch
                          }//fim do while
                          if(Xa==0&&Ya==0&&atac==13) {numero=para[0];}
                          if(Xa==0&&Ya==2&&atac==13) {numero=para[1];}
                          if(Xa==12&&Ya==0&&atac==13){numero=para[2];}
                          if(Xa==12&&Ya==2&&atac==13){numero=para[3];}
                          if(Xa==24&&Ya==0&&atac==13){numero=para[4];}
                          if(Xa==24&&Ya==2&&atac==13){numero=para[5];}
                          if(Xa==36&&Ya==0&&atac==13){numero=para[6];}
                          if(Xa==36&&Ya==2&&atac==13){numero=para[7];}
                          if(Xa==48&&Ya==0&&atac==13){numero=para[8];}
                          if(Xa==48&&Ya==2&&atac==13){numero=para[9];}
                                 for(int m=0;m<20;m++){
                                          Pok[falta][m]=Pok[numero][m];}
                                  level[falta]=level[numero];forca[falta]=forca[numero];exp[falta]=exp[numero];
                                  hp[falta]=hp[numero];HP[falta]=HP[numero];defesa[falta]=defesa[numero];
                                  specialat[falta]=specialat[numero];specialde[falta]=specialde[numero];
                                  velocidade[falta]=velocidade[numero];level1[falta]=level1[numero];
                                   Pok[numero][0]='1';Pok[numero][1]=0;                       
                                                   
                          
                                                            }//fim do else             
                                                        }//fim pegar<6
                                                  else{gotoxy(39,6); puts("vc já tem 6 pokmon contigo");Sleep(1000);
                                                       }//fim do else  
                                            break;}//fim do pegar pok
                                    if(Y==2){//enviar pok
                                    X=0;Y=0;Xa=0;Ya=0;
                    atac==1;
                     for(int i=0;i<=4;i++){
                     gotoxy(2,44+i);printf("              "); } 
                     for(int i=0;i<6;i++){                                   
                     if(Pok[i][0]=='1'){ gotoxy(3+Xa,45+Ya);printf(" ");if(Ya<2)Ya=Ya+2;
                                                                                 else{Xa=Xa+12; Ya=0;}}
                     else{
                                         gotoxy(3+Xa,45+Ya);printf("%s",Pok[i]);if(Ya<2)Ya=Ya+2;
                                                                                 else{Xa=Xa+12; Ya=0;}}}
                     Xa=0;Ya=0;atac='a';                                                            
                     while(atac!=27&&atac!=13){   
                     gotoxy(2+Xa,44+Ya); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,187);
                     gotoxy(2+Xa,45+Ya); printf("%c",186);
                     gotoxy(14+Xa,45+Ya);printf("%c",186);
                     gotoxy(2+Xa,46+Ya); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,188);
                     atac=getch();
                     switch(atac){
                     case 75:if(Xa>0) Xa=Xa-12;break;
                     case 77:if(Xa<24) Xa=Xa+12;break;
                     case 72:if(Ya>0) Ya=Ya-2;break;
                     case 80:if(Ya<2) Ya=Ya+2;break;}}                                                                              
                     if(Xa==0&&Ya==0&&atac==13){if(Pok[0][0]!='1'){atac=27;
                          for(int i=6;i<1000;i++){
                                  if(Pok[i][0]=='1'){numero=i;break;}}
                                 for(int m=0;m<20;m++){
                                          Pok[numero][m]=Pok[0][m];}
                                  level[numero]=level[0];forca[numero]=forca[0];exp[numero]=exp[0];
                                  hp[numero]=hp[0];HP[numero]=HP[0];defesa[numero]=defesa[0];
                                  specialat[numero]=specialat[0];specialde[numero]=specialde[0];
                                  velocidade[numero]=velocidade[0];level1[numero]=level1[0];
                                   Pok[0][0]='1';Pok[0][1]=0;
                                     }}
                                else
                             if(Xa==0&&Ya==2&&atac==13){if(Pok[1][0]!='1'){atac=27;
                                            
                          for(int i=6;i<1000;i++){
                                  if(Pok[i][0]=='1'){numero=i;break;}}
                                  level[numero]=level[1];forca[numero]=forca[1];exp[numero]=exp[1];
                                  hp[numero]=hp[1];HP[numero]=HP[1];defesa[numero]=defesa[1];
                                  specialat[numero]=specialat[1];specialde[numero]=specialde[1];
                                  velocidade[numero]=velocidade[1];level1[numero]=level1[1];
                                  for(int m=0;m<20;m++){
                                          Pok[numero][m]=Pok[1][m];} Pok[1][0]='1';Pok[1][1]=0;  
                                     }}else
                             if(Xa==12&&Ya==0&&atac==13){if(Pok[2][0]!='1'){atac=27;
                                                              
                          for(int i=6;i<1000;i++){
                                  if(Pok[i][0]=='1'){numero=i;break;}}
                                  level[numero]=level[2];forca[numero]=forca[2];exp[numero]=exp[2];
                                  hp[numero]=hp[2];HP[numero]=HP[2];defesa[numero]=defesa[2];
                                  specialat[numero]=specialat[2];specialde[numero]=specialde[2];
                                  velocidade[numero]=velocidade[2];level1[numero]=level1[2];
                                  for(int m=0;m<20;m++){
                                          Pok[numero][m]=Pok[2][m];}Pok[2][0]='1';Pok[2][1]=0;
                                     }}else
                             if(Xa==12&&Ya==2&&atac==13){if(Pok[3][0]!='1'){atac=27;
                                                               
                          for(int i=6;i<1000;i++){
                                  if(Pok[i][0]=='1'){numero=i;break;}}
                                  level[numero]=level[3];forca[numero]=forca[3];exp[numero]=exp[3];
                                  hp[numero]=hp[3];HP[numero]=HP[3];defesa[numero]=defesa[3];
                                  specialat[numero]=specialat[3];specialde[numero]=specialde[3];
                                  velocidade[numero]=velocidade[3];level1[numero]=level1[3];
                                  for(int m=0;m<20;m++){
                                          Pok[numero][m]=Pok[3][m];}Pok[3][0]='1';Pok[3][1]=0;  
                                     }}else
                             if(Xa==24&&Ya==0&&atac==13){if(Pok[4][0]!='1'){atac=27;
                                                               
                          for(int i=6;i<1000;i++){
                                  if(Pok[i][0]=='1'){numero=i;break;}}
                                  level[numero]=level[4];forca[numero]=forca[4];exp[numero]=exp[4];
                                  hp[numero]=hp[4];HP[numero]=HP[4];defesa[numero]=defesa[4];
                                  specialat[numero]=specialat[numero];specialde[numero]=specialde[4];
                                  velocidade[numero]=velocidade[4];level1[numero]=level1[4];
                                  for(int m=0;m<20;m++){
                                          Pok[numero][m]=Pok[4][m];}
                                          Pok[4][0]='1';Pok[4][1]=0;   
                                     }}else                              
                             if(Xa==24&&Ya==2&&atac==13){if(Pok[5][0]!='1'){atac=27;
                                                               
                          for(int i=6;i<1000;i++){
                                  if(Pok[i][0]=='1'){numero=i;break;}}
                                  level[numero]=level[5];forca[numero]=forca[5];exp[numero]=exp[5];
                                  hp[numero]=hp[5];HP[numero]=HP[5];defesa[numero]=defesa[5];
                                  specialat[numero]=specialat[5];specialde[numero]=specialde[5];
                                  velocidade[numero]=velocidade[5];level1[numero]=level1[5];
                                  for(int m=0;m<20;m++){
                                          Pok[numero][m]=Pok[5][m];}
                                          Pok[5][0]='1';Pok[5][1]=0;   
                                     }}
                                               
                                     
                                     } //fim do enviar pok                   
                                   }//fim do apertar enter
                              }//fim do while
                           }//fim da máquina do professor
            if(c==13&&y==13&&x==10){//se conversar com a infermeira joi
                      Y=0;
                      while(1){
                      gotoxy(35,2); puts(" ___________________");
                      gotoxy(35,3); puts("|   O que vc quer   |");
                      gotoxy(35,4); puts("|                   |");
                      gotoxy(35,5); puts("|                   |");
                      gotoxy(35,6); puts("|      Comprar      |");
                      gotoxy(35,7); puts("|                   |");
                      gotoxy(35,8); puts("| recuperar sangue  |");
                      gotoxy(35,9); puts("|                   |");
                      gotoxy(35,10);puts("|       Sair        |");
                      gotoxy(35,11);puts("|                   |");
                      gotoxy(35,12);puts("|                   |");
                      gotoxy(35,13);puts("|                   |"); 
                      gotoxy(35,14);puts("|___________________|");
                      gotoxy(36,5+Y); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
                      gotoxy(36,6+Y); printf("%c",186);
                      gotoxy(54,6+Y); printf("%c",186);
                      gotoxy(36,7+Y); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
                      atac=getch();
                      if(atac==80)if(Y<4)Y+=2;
                      if(atac==72)if(Y>0)Y-=2;
                      if(atac==13){//se apertar enter
                                   if(Y==4)//Sair
                                   break;
                                   if(Y==2){// recuperar
                                     for(int i=0;i<6;i++){
                                        if(Pok[i][0]!='1'){hp[i]=HP[i];
                                     gotoxy(16+i,8);puts("°");Sleep(500);}}
                                     gotoxy(16,8);puts("      ");Sleep(500);}//fim do recuperar sangue
                                   if(Y==0){//comprar
                                        while(1){
                                         gotoxy(35,2); puts(" ___________________");
                                         gotoxy(35,3); puts("|   comprar o que   |");
                                         gotoxy(35,4); puts("|                   |");
                                         gotoxy(35,5); puts("|                   |");
                                         gotoxy(35,6); puts("| Pokeboll  20 R$   |");
                                         gotoxy(35,7); puts("|                   |");
                                         gotoxy(35,8); puts("| Sanduiche 30 R$   |");
                                         gotoxy(35,9); puts("|                   |");
                                         gotoxy(35,10);puts("|       nada        |");
                                         gotoxy(35,11);puts("|                   |");
                                         gotoxy(35,12);puts("|                   |");
                                         gotoxy(35,13);puts("|                   |"); 
                                         gotoxy(35,14);puts("|___________________|");
                                         gotoxy(36,5+Y); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
                                         gotoxy(36,6+Y); printf("%c",186);
                                         gotoxy(54,6+Y); printf("%c",186);
                                         gotoxy(36,7+Y); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
                                         atac=getch();
                                         if(atac==72)if(Y>0)Y-=2;
                                         if(atac==80)if(Y<4)Y+=2;
                                         if(atac==13){if(Y==4)//nada
                                                      break;
                                                      if(Y==0){//comprar pokeboll
                                                               if(GP<20){gotoxy(36,6);puts("vc nao tem dinheiro");Sleep(1000);}
                                                               else{
                                                                    GP-=20;pokeboll+=1;
                                                                    gotoxy(36,6);puts("vc comprou pokebola");Sleep(1000);} 
                                                               }//fim do pokeboll
                                                      if(Y==2){//comprar sanduiche
                                                               if(GP<30){gotoxy(36,8);puts("vc nao tem dinheiro");Sleep(1000);}
                                                               else{ 
                                                                     GP-=30;sanduiche+=1;
                                                                     gotoxy(36,8);puts("vc comprou sanduiche");Sleep(1000);}
                                                               }//fim do comprar sanduiche
                                                     }//fim do se apertar enter do whilwe compra                
                                                 }//fim do while do comprar   
                                            }//fim do comprar 
                                  }//fim do enter
                                              
                      }//fim do  while
                                    }//fim da conversa
                       antefase=6;}//fim da fase 6        
         else
          if(fase==7){// fase 7 ginasio de pewton
             gotoxy(35,6);puts("`o'");
             gotoxy(35,7);puts("/H\\");
             gotoxy(35,8);puts("/ \\"); 
             if(antefase==5){x=35;y=45;}//se vier da fase 5
             if(c==80&&y==46){fase=5;continue;}//se voltar a fase 5
             if(c==13&&x==35&&y==9){//se falar com brock
             if(insignias==0){
                  
gotoxy(2,31);puts("______/|_           Meu nome e Brock sou o lider do ");
gotoxy(2,32);puts("\\        '-,        Ginasio de Pewton, Se vc me vencer ");
gotoxy(2,33);puts("-` /\\|`'\\ /                eu lhe darei a ");
gotoxy(2,34);puts("\\ |-- ,--|>              INSIGNIA DE PEDRA");
gotoxy(2,35);puts("/ | -  - |\\       Se quiser me infrentar aperte 's'");                      
gotoxy(2,36);puts("\\_|   ,  |/");
gotoxy(2,37);puts("   \\ --'/");
gotoxy(2,38);puts("    `--'");
c=getch();
if(c=='s'){fase=1000;g=0;continue;}}
else{
gotoxy(2,31);puts("______/|_           Meu nome e Brock sou o lider do ");
gotoxy(2,32);puts("\\        '-,        Ginasio de Pewton,");
gotoxy(2,33);puts("-` /\\|`'\\ /              VC JÁ TEM A  ");
gotoxy(2,34);puts("\\ |-- ,--|>              INSIGNIA DE PEDRA");
gotoxy(2,35);puts("/ | -  - |\\        NÃO PRECISSA ME ENFRENTAR DENOVO");                      
gotoxy(2,36);puts("\\_|   ,  |/");
gotoxy(2,37);puts("   \\ --'/");
gotoxy(2,38);puts("    `--'");
               Sleep(1000);}}//fim do se falar com brock
                   antefase=7;}//fim da fase 7
   else
     if(fase==8){// fase 8 labirinto
     if(antefase==5){x=3;}
     if(antefase==9){x=43;y=27;system("color 0a");}
     for(int i=6;i<=48;i++){
              gotoxy(1,1+i);puts("wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww");}
              gotoxy(43,24);   puts("/ \\");
              gotoxy(42,25);  puts("/   \\");
              gotoxy(41,26); puts("/ ___ \\");
              gotoxy(40,27);puts("/ |   | \\");
              gotoxy(40,28);puts("| |  c| |");
              gotoxy(40,29);puts("|_|   |_|");
              gotoxy(1,6); printf("%c%c%c%c%c%c%c%c",205,205,205,205,205,205,187,201);
              gotoxy(80,6);printf("%c",187);
              for(int i=9;i<=79;i++){gotoxy(i,6);printf("%c",205);}
              gotoxy(1,10);printf("%c%c%c",205,205,187);
              gotoxy(1,11);printf("%c%c%c",201,205,188);
              gotoxy(7,11);printf("%c%c",200,188);
              gotoxy(80,49);printf("%c",188);gotoxy(1,49);printf("%c",200);
              for(int i=7;i<11;i++){gotoxy(7,i);printf("%c",186);}
              for(int i=12;i<=48;i++){gotoxy(1,i);printf("%c",186);}
              for(int i=7;i<=48;i++){gotoxy(80,i);printf("%c",186);}
              for(int i=7;i<11;i++){gotoxy(8,i);printf("%c",186);}
              for(int i=2;i<=79;i++){gotoxy(i,49);printf("%c",205);}
       gotoxy(43,24);   puts("/ \\");
       gotoxy(42,25);  puts("/   \\");
       gotoxy(41,26); puts("/ ___ \\");
       gotoxy(40,27);puts("/ |   | \\");
       gotoxy(40,28);puts("| |  c| |");
       gotoxy(40,29);puts("|_|   |_|");               
              if(x==2&&y==7){fase=5;}
              if(c==13&&x==43&&y==27){fase=9;continue;}
              antefase=8;
         if(random==random2){g=0;fase=1000;continue;}
              }//fim fase 8 ou final fase 8   
        if(fase==9){
             if(antefase==8){x=35;y=45;system("color 08");}//se vier da fase 5
             if(c==80&&y==46){fase=8;continue;}//se voltar a fase 5
             gotoxy(35,6);puts(" ___");
             gotoxy(35,7);puts("|°°°|");
             gotoxy(35,8);puts("|°°°|");
             gotoxy(35,9);puts("|°°°|"); 
             gotoxy(36,10);puts(" 0 ");
             gotoxy(36,11);puts("/l`ø");
             gotoxy(36,12);puts("/ \\"); 
             antefase=9;
                    }                                 
       for(int i=0;i<6;i++){        
       if(exp[i]>=level1[i]){level1[i]+=15;exp[i]=0;HP[i]=hp[i]=HP[i]+(HP[i]/5)+1;
                      forca[i]=forca[i]+(forca[i]/5)+1;
                      defesa[i]=defesa[i]+(defesa[i]/5)+1;
                      specialde[i]=specialde[i]+specialat[i]/5+1;
                      specialat[i]=specialat[i]+specialat[i]/5+1;
                      velocidade[i]=velocidade[i]+velocidade[i]/5+1;level[i]++;}}
                   
       if(fase<1000&&fase>0){
          gotoxy(70,2);printf("fase=%i",fase);
          gotoxy(1,5);puts("________________________________________________________________________________");
          gotoxy(x+1,y);printf("%c",a);
          gotoxy(x,y+1);printf("/%c\\",b);
          gotoxy(x,y+2);printf("/ \\"); gotoxy(x+1,y+1);c=getch();
          top=topo(x,y,fase);
          pared=parede(x,y,fase);random2=rand()%10;
        switch(c){//mexe boneco
                 case 75:if(pared!=0&&pared!=2)x--;break;
                 case 77:if(pared!=1&&pared!=2)x++;break;
                 case 72:if(top!=0&&top!=2)y--;break;
                 case 80:if(top!=1&&top!=2)y++;break;
                 case 27:{
                      while(1){clrscr();
                      gotoxy(1,2); puts(" ___________________");
                      gotoxy(1,3); puts("|                   |");
                      gotoxy(1,4); puts("|      Itens        |");
                      gotoxy(1,5); puts("|                   |");
                      gotoxy(1,6); puts("|     Pokemons      |");
                      gotoxy(1,7); puts("|                   |");
                      gotoxy(1,8); puts("|      Salvar       |");
                      gotoxy(1,9); puts("|                   |");
                      gotoxy(1,10);puts("|      Voltar       |");
                      gotoxy(1,11);puts("|                   |");
                      gotoxy(1,12);puts("|    fim de jogo    |");
                      gotoxy(1,13);puts("|                   |"); 
                      gotoxy(1,14);puts("|___________________|");
               gotoxy(2,3+Y); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
                      gotoxy(2,4+Y); printf("%c",186);
                      gotoxy(20,4+Y); printf("%c",186);
                      gotoxy(2,5+Y); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);       
                      gotoxy(22,2); printf(" _________________________________________________________");
                      gotoxy(22,3); printf("|                                                         |");
                      gotoxy(22,4); printf("|                                                         |");
                      if(Pok[0][0]!='1'){
                      gotoxy(22,5); printf("|           %s        level %d                        |",Pok[0],level[0]);            
                      gotoxy(22,6); printf("|       experiencia     %d/%d            HP %d / %d      |",exp[0],level1[0],hp[0],HP[0]);}
                      else{
                      gotoxy(22,5); printf("|                                                         |");            
                      gotoxy(22,6); printf("|                                                         |");}                        
                      gotoxy(22,7); printf("|                                                         |");            
                      gotoxy(22,8); printf("|                                                         |");            
                      gotoxy(22,9); printf("|                                                         |");            
                      gotoxy(22,10);printf("|                                                         |");            
                      gotoxy(22,11);printf("|                                                         |");
                      if(Pok[1][0]!='1'){
                      gotoxy(22,12); printf("|           %s      level %d                         |",Pok[1],level[1]);            
                      gotoxy(22,13); printf("|      experiencia     %d/%d            HP %d / %d       |",exp[1],level1[1],hp[1],HP[1]);}
                      else{            
                      gotoxy(22,12);printf("|                                                         |");            
                      gotoxy(22,13);printf("|                                                         |");}           
                      gotoxy(22,14);printf("|                                                         |");            
                      gotoxy(22,15);printf("|                                                         |");            
                      gotoxy(22,16);printf("|                                                         |");            
                      gotoxy(22,17);printf("|                                                         |");            
                      gotoxy(22,18);printf("|                                                         |");
                      if(Pok[2][0]!='1'){
                      gotoxy(22,19); printf("|           %s                   HP   %d/%d     |",Pok[2],hp[2],HP[2]);            
                      gotoxy(22,20); printf("|    level %d            experiencia     %d/%d           |",level[2],exp[2],level1[2]);}
                      else{            
                      gotoxy(22,19);printf("|                                                         |");            
                      gotoxy(22,20);printf("|                                                         |");}            
                      gotoxy(22,21);printf("|                                                         |");            
                      gotoxy(22,22);printf("|                                                         |");            
                      gotoxy(22,23);printf("|                                                         |");            
                      gotoxy(22,24);printf("|                                                         |");            
                      gotoxy(22,25);printf("|                                                         |"); 
                      if(Pok[3][0]!='1'){
                      gotoxy(22,26); printf("|           %s                   HP   %d/%d     |",Pok[3],hp[3],HP[3]);            
                      gotoxy(22,27); printf("|     level %d         experiencia     %d/%d             |",level[3],exp[3],level1[3]);}
                      else{           
                      gotoxy(22,26);printf("|                                                         |");
                      gotoxy(22,27);printf("|                                                         |");}
                      gotoxy(22,28);printf("|                                                         |");            
                      gotoxy(22,29);printf("|                                                         |");            
                      gotoxy(22,30);printf("|                                                         |");            
                      gotoxy(22,31);printf("|                                                         |");            
                      gotoxy(22,32);printf("|                                                         |");
                      if(Pok[4][0]!='1'){
                      gotoxy(22,33); printf("|           %s                   HP   %d/%d     |",Pok[4],hp[4],HP[4]);            
                      gotoxy(22,34); printf("|         level %d        experiencia     %d/%d          |",level[4],exp[4],level1[4]);}
                      else{           
                      gotoxy(22,33);printf("|                                                         |");            
                      gotoxy(22,34);printf("|                                                         |");}           
                      gotoxy(22,35);printf("|                                                         |");            
                      gotoxy(22,36);printf("|                                                         |");            
                      gotoxy(22,37);printf("|                                                         |");            
                      gotoxy(22,38);printf("|                                                         |");            
                      gotoxy(22,39);printf("|                                                         |");
                      if(Pok[5][0]!='1'){
                      gotoxy(22,40); printf("|           %s                   HP   %d/%d     |",Pok[5],hp[5],HP[5]);            
                      gotoxy(22,41); printf("|       level %d           experiencia     %d/%d         |",level[5],exp[5],level1[5]);}
                      else{                       
                      gotoxy(22,40);printf("|                                                         |");            
                      gotoxy(22,41);printf("|                                                         |");}            
                      gotoxy(22,42);printf("|                                                         |");            
                      gotoxy(22,43);printf("|                                                         |");            
                      gotoxy(22,44);printf("|                                                         |");            
                      gotoxy(22,45);printf("|                                                         |");            
                      gotoxy(22,46);printf("|                                                         |");            
                      gotoxy(22,47);printf("|                                                         |");            
                      gotoxy(22,48);printf("|                                                         |");             
                      gotoxy(22,49);printf("|_________________________________________________________|"); 
                      gotoxy(1,47);  puts(" ___________________");
                      gotoxy(1,48);printf("|dinheiro %d      |",GP); 
                      gotoxy(1,49);  puts("|___________________|");
                      inv =getch();
                        switch(inv){
                      case 72:if(Y>0)Y-=2;break;
                      case 80:if(Y<8)Y+=2;break;}
                       if(Y==8&&inv==13){c=107;break;}
                       if(Y==0&&inv==13){//Itens
                       do{
                                         gotoxy(22,2); printf(" _________________________________________________________");
                      gotoxy(22,3); printf("|                                                         |");
                      gotoxy(22,4); printf("|                                                         |");
                      if(insignias>0){
                      gotoxy(22,5); printf("|        INSIGNIA DE PEDRA (boulder badge)                |");}
                      else{
                      gotoxy(22,5); printf("|                          %d                             |",insignias);}            
                      if(insignias>=2){
                      gotoxy(22,6); printf("|        INSIGNIA DE CASCATA (cascade badge)              |");}
                      else{                        
                      gotoxy(22,6); printf("|                                                         |");}
                      if(insignias>=3){
                      gotoxy(22,7); printf("|        INSIGNIA DO TROVAO (thunder badge)                                       |");}
                      else{
                      gotoxy(22,7); printf("|                                                         |");}            
                      if(insignias>=4){
                      gotoxy(22,8); printf("|        INSIGNIA DO ARCO-IRIS (Rainbow badge)              |");}
                      else{                        
                      gotoxy(22,8); printf("|                                                         |");}
                      if(insignias>=5){
                      gotoxy(22,9); printf("|        INSIGNIA DA ALMA (Soul badge)                                       |");}
                      else{
                      gotoxy(22,9); printf("|                                                         |");}            
                      if(insignias>=6){
                      gotoxy(22,10); printf("|        INSIGNIA DO PANTANO (Marsh badge)              |");}
                      else{                        
                      gotoxy(22,10); printf("|                                                         |");}
                      if(insignias>=7){
                      gotoxy(22,11); printf("|        INSIGNIA DO VULCAO (Vulcano badge)                                       |");}
                      else{
                      gotoxy(22,11); printf("|                                                         |");}            
                      if(insignias>=8){
                      gotoxy(22,12); printf("|        INSIGNIA DA TERRA (Earth badge)              |");}
                      else{                        
                      gotoxy(22,12); printf("|                                                         |");}
                      if(Pok[1][0]!='1'){
                      gotoxy(22,13); printf("|   POKEBOLAS %d                        SANDUICHES %d   |",pokeboll,sanduiche);            
                      gotoxy(22,14); printf("|                                                       |");}
                      else{            
                      gotoxy(22,13);printf("|                                                         |");            
                      gotoxy(22,14);printf("|                                                         |");}           
                      gotoxy(22,15);printf("|                                                         |");            
                      gotoxy(22,16);printf("|                                                         |");            
                      gotoxy(22,17);printf("|                                                         |");            
                      gotoxy(22,18);printf("|                                                         |");
                      gotoxy(22,19);printf("|                                                        |");
                      gotoxy(22,20);printf("|                                                         |");                                  
                      gotoxy(22,21);printf("|                                                         |");            
                      gotoxy(22,22);printf("|                                                         |");            
                      gotoxy(22,23);printf("|                                                         |");            
                      gotoxy(22,24);printf("|                                                         |");            
                      gotoxy(22,25);printf("|                                                         |"); 
                      gotoxy(22,26);printf("|                                                         |");
                      gotoxy(22,27);printf("|                                                         |");
                      gotoxy(22,28);printf("|                                                         |");            
                      gotoxy(22,29);printf("|                                                         |");            
                      gotoxy(22,30);printf("|                                                         |");            
                      gotoxy(22,31);printf("|                                                         |");            
                      gotoxy(22,32);printf("|                                                         |");
                      gotoxy(22,33);printf("|                                                         |");            
                      gotoxy(22,34);printf("|                                                         |");           
                      gotoxy(22,35);printf("|                                                         |");            
                      gotoxy(22,36);printf("|                                                         |");            
                      gotoxy(22,37);printf("|                                                         |");            
                      gotoxy(22,38);printf("|                                                         |");            
                      gotoxy(22,39);printf("|                                                         |");
                      gotoxy(22,40);printf("|                                                         |");            
                      gotoxy(22,41);printf("|                                                         |");
                      gotoxy(22,42);printf("|                                                         |");            
                      gotoxy(22,43);printf("|                                                         |");            
                      gotoxy(22,44);printf("|                                                         |");            
                      gotoxy(22,45);printf("|                                                         |");            
                      gotoxy(22,46);printf("|                                                         |");            
                      gotoxy(22,47);printf("|                                                         |");            
                      gotoxy(22,48);printf("|                                                         |");             
                      gotoxy(22,49);printf("|_________________________________________________________|");  
                                      }while(getch()==27);}//fim itens
                       if(Y==4&&inv==13){
                                         struct {
                                           char titulo[1000][20];
                                           int lvl[1000],experiencia[1000],ataque[1000],sangue[1000],levl[1000];
                                           int def[1000],espatt[1000],espdef[1000],speed[1000],sang[1000];
                                           int tela,dia,hor,bata,insig,pokeb,sand,dinheiro,w,lutas,o;
                                           }
                                         livro;
                                         FILE *fptr;
                                         if((fptr = fopen("livros.rec","wb")) == NULL ){
                                         printf("\nNao posso abrir o arquivo livros.rec");
                                         exit(1);}
                                         
         for(int i=0;i<1000;i++){
                 for(int m=0;m<20;m++){
                           livro.titulo[i][m]=Pok[i][m];}
                     if(Pok[i][0]!='1'){
                     livro.lvl[i]=level[i];
                     livro.levl[i]=level1[i];
                     livro.experiencia[i]=exp[i];
                     livro.sang[i]=hp[i];
                     livro.sangue[i]=HP[i];
                     livro.ataque[i]=forca[i];
                     livro.def[i]=defesa[i];
                     livro.espatt[i]=specialat[i];
                     livro.espdef[i]=specialde[i];
                     livro.speed[i]=velocidade[i];}}
                     livro.tela=fase;livro.dia=x;livro.hor=y;
                     livro.insig=insignias;livro.bata=lutas;                         
                    livro.sand =sanduiche;livro.pokeb=pokeboll;
                    livro.dinheiro= GP;livro.w=e;
                    livro.lutas=lutar;livro.o=mae;
        fwrite(&livro,sizeof(livro),1,fptr);
         fclose(fptr);break;}           
                                             
                       if(Y==6&&inv==13)break;}}}}
                         if(fase==0){Y=0;inv='a';
                while(1){                                
                      gotoxy(21,22); puts(" ___________________");
                      gotoxy(21,23); puts("|                   |");
                      gotoxy(21,24); puts("|   Novo  jogo      |");
                      gotoxy(21,25); puts("|                   |");
                      gotoxy(21,26); puts("|  carregar jogo    |");
                      gotoxy(21,27); puts("|                   |");
                      gotoxy(21,28); puts("|       Sair        |");
                      gotoxy(21,29); puts("|                   |");
                      gotoxy(21,30); puts("|___________________|");
                      gotoxy(22,23+Y); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
                      gotoxy(22,24+Y); printf("%c",186);
                      gotoxy(40,24+Y); printf("%c",186);
                      gotoxy(22,25+Y); printf("%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
                      inv=getch();
                      switch(inv){
                      case 72:if(Y>0)Y-=2%4;break;
                      case 80:Y+=2;if(Y==6)Y=0;break;}
                      if(Y==2&&inv==13){
      struct {
                                           char titulo[1000][20];
                                           int lvl[1000],experiencia[1000],ataque[1000],sangue[1000],levl[1000];
                                           int def[1000],espatt[1000],espdef[1000],speed[1000],sang[1000];
                                           int tela,dia,hor,insig,bata,pokeb,sand,dinheiro,w,lutas,o;
                                           }                                 
       livro;
       FILE *fptr;
       if((fptr=fopen("livros.rec","rb"))==NULL){
          printf("Nao posso abrir o arquivo livros.rec");
          exit(1);
          }
      while(fread(&livro,sizeof(livro),1,fptr)==1){
            for(int i=0;i<1000;i++){
                 if(livro.titulo[i][0]!='1'){
                     for(int m=0;m<20;m++){
                           Pok[i][m]=livro.titulo[i][m];}
                     e=livro.w;      
                     level[i]=livro.lvl[i];
                     level1[i]=livro.levl[i];
                     exp[i]=livro.experiencia[i];
                     hp[i]=livro.sang[i];
                     HP[i]=livro.sangue[i];
                     forca[i]=livro.ataque[i];
                     defesa[i]=livro.def[i];
                     specialat[i]=livro.espatt[i];
                     specialde[i]=livro.espdef[i];
                     velocidade[i]=livro.speed[i];}}
                     fase=livro.tela;x=livro.dia;y=livro.hor;
                     insignias=livro.insig;lutas=livro.bata; 
                     sanduiche=livro.sand;pokeboll=livro.pokeb;
                     GP=livro.dinheiro;lutar=livro.lutas;mae=livro.o;
                }
          fclose(fptr);break;
          }
                      if(Y==0&&inv==13){clrscr();
                        gotoxy(15,25);puts(" VC E UM GAROTO Q ACABOU DE COMPLETAR 10 ANOS");Sleep(3000);
                        gotoxy(15,26);puts(" VA ATE A CASA DO PROFESSOR OAK PARA ESCOLHER"); Sleep(3000);
                        gotoxy(15,27);puts(" E COMECAR A SUA JORNADA POKEMON EM BUSCA DE GANHAR");Sleep(3000);
                        gotoxy(15,28);puts(" O TORNEIO POKEMON PARA ISSO VC DEVERA GANHAR OITO INSIGNIAS");Sleep(3000);
                        gotoxy(15,29);puts(" CADA UMA EM UM GINASIO E VC TERA Q VENCER O  LIDER DO GINASIO");Sleep(3000);fase=3;break;}
                    
      if(Y==4&&inv==13){c=107;break;}}}}
while(c!=107);} 
