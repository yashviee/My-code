#include<stdio.h>
//code blocks ma clrscr() and getch(); na aave
//only turbo c ma...
int main()
{
int population=1441981744,Twomen,Tmen;
float Pwomen=48.4,Pmen,Lwomen=62.84,Lmen=80.95;

Twomen=(population*Pwomen)/100;
printf("\n the number of total women=%d",Twomen);

Tmen=population-Twomen;
printf("\n the number of total men=%d",Tmen);

Lwomen=(population*Lwomen)/100;
printf("\n the number of litrate women=%d",Lwomen);

Lmen=(population*Lmen)/100;
printf("\n the number of litrate men=%d",Lmen);

return 0;
}
