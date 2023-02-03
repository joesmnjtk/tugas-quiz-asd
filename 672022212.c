#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
#include<windows.h>



void panah(int posMenu, int posPanah)
{
    if(posPanah==posMenu)
        printf("  ==>");
    else printf("   ");
}

int getPilihan()
{
    int pos=1;
    int keyPressed=0;
    
    
    while(keyPressed!=27)
    { 
    menu:

	system("cls");
    
        printf("======================\n");
        printf("     TUGAS QUIS ASD    \n");
        printf("======================\n");
        panah(1, pos); printf("  1. Level 1\n");
        panah(2, pos); printf("  2. Level 2\n");
        panah(3, pos); printf("  3. Level 3\n");
        panah(4, pos); printf("  4. keluar\n");
        printf("======================\n");

        keyPressed=getch();
        if(keyPressed==72)pos--;
        else if(keyPressed==80)pos++;
        else pos=pos;
        if(pos>4)pos=4;
        if(pos<1)pos=1;

        if(keyPressed == (int)'\r')
        {
            return pos;
        }
    }
}
void level3()
{
 int a,b,c,n;
printf (" input: \n");
scanf("%d",&n);

for (a=1; a<=n; a++)

{ 
printf("\n");

for (c=1; c<=(n-a); c++)

{

printf(" ");

}
for (b=1; b<=a;b++)

{

printf("%d",b);

}


for (b=a-1; b>=1; b--)

{

printf("%d",b);

}

}

for (a=n-1; a>=1; a--)

{

printf("\n");
for (c=1; c<=(n-a); c++)

{

printf(" ");

}


for (b=1; b<=a;b++)

{

printf("%d",b);

}


for (b=a-1; b>=1; b--)

{

printf("%d",b);

}

}

}
void level1()
{
   int angka, i,a,k;
   printf("masukan angka :");
   scanf("%d", &angka);
   
   printf("\n");
   
   for(i=0; i<=angka; i++){
   	for(a=0; a<=i; a++){
   		k++;
   		printf(" %3d", a+i);
		   } printf("\n");
   } 
   
}


void level2()
{
  int n;
  int i,j;
   printf("masukan angka :");
   scanf("%d", &n);
   
   for(i=1; i<=n; i++)
   {
   	for(j=1; j<=i; j++)
	   {
   		printf("%2d ",i*j );
	   } 
	   printf("\n");
   } 
   
}

int main()
{
    char lanjut;
    
 
    int pilihan = getPilihan();
    while(pilihan!=4)
    
    {
        switch(pilihan)
        {
            case 1:
              //level 1
                level1();
				
            case 2:
                //level 2
                level2();
                break;
            case 3:
                //level 3
                level3();
               
             case 4:
             	system("exit");
                   
        }

    }

    system("pause");
}
