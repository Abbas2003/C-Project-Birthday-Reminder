#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void add(void);
void clear(void);
void boss(void);
void bcheck(void);
int main()

{

int i;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
cleardevice();
//-----------------candal----------------//
setfillstyle(4,13);
rectangle(295,150,305,200);
floodfill(296,195,15);

line(298,150,298,140);
setfillstyle(1,YELLOW);
ellipse(298,130,0,360,4,10);
floodfill(298,130,15);

setcolor(15);
//--------------cake------------//
setfillstyle(1,10);
ellipse(300,200,0,360,60,20);
floodfill(301,210,15);

setfillstyle(1,6);
line(240,200,240,250);
line(360,200,360,250);
ellipse(300,250,180,360,60,20);
floodfill(241,250,15);

settextstyle(5,0,2);
outtextxy(266,230,"HAPPY");

setfillstyle(1,14);
ellipse(300,265,126,54,100,40);
floodfill(241,255,15);

setfillstyle(1,6);
line(200,265,200,325);
line(400,265,400,325);
ellipse(300,320,180,360,100,40);
ellipse(300,320,180,360,100,40);
floodfill(201,320,15);

settextstyle(5,0,2);
outtextxy(246,310,"BRITHDAY");

//----------------------//
setfillstyle(1,12);
ellipse(300,340,140,40,130,50);
floodfill(201,340,15);

setfillstyle(1,6);
line(170,340,170,430);
line(430,340,430,430);
ellipse(300,430,180,360,130,40);
floodfill(171,430,15);

settextstyle(5,0,2);
outtextxy(246,400,"C PROGRAM");

//---------------cake design-------------//
setfillstyle(1,4);
circle(265,200,6);
floodfill(265,200,15);

circle(300,212,6);
floodfill(300,212,15);

circle(335,200,6);
floodfill(335,200,15);
//---------------//
setfillstyle(1,4);
circle(243,262,6);
floodfill(243,262,15);

circle(231,279,6);
floodfill(231,279,15);

circle(275,277,6);
floodfill(275,277,15);

circle(319,276,6);
floodfill(319,276,15);

circle(362,276,6);
floodfill(362,276,15);

setcolor(9);
outtextxy(251,276,"*");
outtextxy(291,270,"*");
outtextxy(332,270,"*");
outtextxy(370,270,"*");

setcolor(15);
//--------------------------------//

setfillstyle(1,4);
circle(200,337,6);
floodfill(200,337,15);

circle(250,360,6);
floodfill(250,360,15);

circle(300,366,6);
floodfill(300,366,15);

circle(350,361,6);
floodfill(350,361,15);

circle(400,338,6);
floodfill(400,338,15);

setcolor(10);
outtextxy(220,345,"*");
outtextxy(275,350,"*");
outtextxy(320,360,"*");
outtextxy(370,350,"*");

//----------------text animation---------//
for(i=0; i<30; i++)
{
settextstyle(10,0,5);
setcolor(i);
outtextxy(14,15,"B");
setcolor(i+1);
outtextxy(52,15,"I");
setcolor(i);
outtextxy(75,15,"R");
setcolor(i+1);
outtextxy(110,15,"T");
setcolor(i);
outtextxy(150,15,"H");
setcolor(i+1);
outtextxy(190,15,"D");
setcolor(i);
outtextxy(225,15,"A");
setcolor(i+1);
outtextxy(255,15,"Y");

setcolor(i);
outtextxy(320,15,"R");
setcolor(i+1);
outtextxy(360,15,"E");
setcolor(i);
outtextxy(395,15,"M");
setcolor(i+1);
outtextxy(440,15,"I");
setcolor(i);
outtextxy(455,15,"N");
setcolor(i+1);
outtextxy(490,15,"D");
setcolor(i);
outtextxy(530,15,"E");
setcolor(i+1);
outtextxy(565,15,"R");

delay(200);
setbkcolor(LIGHTBLUE);
}
getch();
boss();
system("cls");
getch();
closegraph();
return 0;
}
void boss(void)
{
int choice;
FILE *bd;
system("cls");
textcolor(RED);
cprintf("____________________ WELCOME TO BIRTHDAY REMINDER _____________________\n");
printf("\n");
j:cprintf("What do u want to do?\n");
textcolor(MAGENTA+BLINK);
cprintf("\n1. Add Birthday\n");
cprintf("\n2. Clear the list\n");
cprintf("\n3. Check for a birth date\n");
textcolor(RED+BLINK);
cprintf("\n4. Exit\n");
textcolor(BLUE);
printf("\n");
cprintf("\nEnter choice:\n");
scanf("%d",&choice);
if(choice==1)
{
add();}
else if(choice==2)
{
clear();}
else if(choice==3)
{

bcheck();}
else if(choice!=1 && choice!=2 && choice!=3 && choice!=4)
{printf("\nInvalid choice!\n\n");goto j;}
}

void add(void)
{
int n;
 FILE *bd;
char *name[25],*bday[10];
system("cls");
textcolor(BLUE);
l:cprintf("\nAdding a birthday...\n");
cprintf("Enter the name:");
scanf("%s",&name);
textcolor(BLUE);
cprintf("Enter the birthday(dd/mm/yyyy):");
scanf("%s",&bday);
bd=fopen("Birthday.txt","a");
fprintf(bd,"%s\n%s\n\n",name,bday);
fclose(bd);
textcolor(BLUE);
cprintf("___________________________");
textcolor(RED);
j:cprintf("\n\nAdd another birthday?\n1 - Yes\n2 - No (Go to main menu) \nEnter your choice:");
scanf("%d",&n);
if(n==2)
{
 boss();
}
else if(n==1)
{
goto l;}
if(n!=1 && n!=2)
{
textcolor(RED);
cprintf("\nInvalid choice!");goto j;}
}

void clear(void)
{
int n1,n2;
FILE *cl;
o:system("cls");
printf("\a");
textcolor(RED);
cprintf("\n WARNING! YOU ARE ABOUT TO CLEAR THE LIST! PROCEED?\n1. Yes\n2. No (Go to main menu)\nEnter choice:");
scanf("%d",&n1);
if(n1==1)
{cl=fopen("Birthday.txt","w");
fclose(cl);
textcolor(BLUE);
k:cprintf("\nThe file is empty now! Do you want to add birthday?\n1 - Yes\n2 - No (Go to main menu)\nEnter your choice:");
scanf("%d",&n2);
if(n2==2)boss();
if(n2==1)
add();
if(n2!=1 && n2!=2)
{
textcolor(RED);
cprintf("\nInvalid choice!");goto k;}}
if(n1==2)boss();
if(n1!=1 && n1!=2)
{
textcolor(BLUE);
cprintf("\nInvalid choice!");goto o;}
setbkcolor(LIGHTBLUE);
}

void bcheck(void)
{
int i=1,flag=0,count=1;
FILE *bd;
char name[50],date[10],input[5];
char *c;
bd = fopen("Birthday.txt","r");
system("cls");
textcolor(MAGENTA+BLINK);
cprintf("Enter the date:(dd/mm):");
scanf("%s",input);
textcolor(MAGENTA);
cprintf("\nList of people with their birthday falling on %s :",input);
do {
if(i%2!=0)
c = fgets(name,50,bd);
if(i%2==0)
{c=fgets(date,6,bd);
if(!strcmp(input,date))
{flag=1;printf("\n\n%d. %s",count,name);count++;}}
i++;
}while (c != NULL);
if(!flag)
textcolor(MAGENTA+BLINK);
cprintf("\nNONE!");
fclose(bd);
textcolor(MAGENTA+BLINK);
cprintf("\n (Press any key to go to main menu)");
setbkcolor(LIGHTBLUE);
getch();
boss();
setbkcolor(LIGHTBLUE);
}