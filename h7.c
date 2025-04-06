#include<stdio.h>

int main() {
int a;
//int i = 0;
FILE *fp = fopen("7", "r");   /* Original HTTP://2242.MOOO.COM/HOKKAIDO/7 */
//char line[256];
/* Set these values after `%!fold -w80' with vi ; as of 250302 */
int oshima = 191, hiyama = 250, matsumae = 332, fukushima = 513; 
int shiriuchi = 622, kikonai = 727, hokuto = 828, hakodate = 953, nanae = 1224;
int shikabe = 1369, mori = 1436, yakumo = 1579, oshamambe = 1706; 
int kaminokuni = 1839, esashi = 1980, assabu = 2139, otobe = 2252; 
int okushiri = 2354, setana = 2421, imakane = 2581, eof = 2683;

/* Original https://stackoverflow.com/questions/36853463  
   Some functions do not work */
enum { MAXL = 20, MAXC = 256000 }; 
int c, i=0, idx = 0, pgsz = MAXL, line = 0;
char fname[MAXC];

printf("Names: 1 Assabu, 2 Esashi, 3 Fukushima, 4 Hakodate, 5 Hiyama, \n"
 "6 Hokuto, 7 Imakane, 8 Kaminokuni, 9 Kikonai, 10 Matsumae, 11 Mori, \n"
 "12 Nanae, 13 Okushiri, 14 Oshamembe, 15 Oshima, 16 Otobe, 17 Setana, \n"
 "18 Shikabe, 19 Shiriuchi, 20 Yakumo. \nEnter No. or 'ctrl+c' to quit: ");
scanf("%d",&a);
 
switch(a){
case 15:
  while ((c = fgetc (fp)) != EOF) {
    /* import lines from A to B */
    if (c == '\n') i++;
    if (i >= oshima-1 && i <= hiyama-1) {

      /* display each 20 lines */
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 5:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= hiyama-1 && i <= matsumae-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 10:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= matsumae-1 && i <= fukushima-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 3:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= fukushima-1 && i <= shiriuchi-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 19:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= shiriuchi-1 && i <= kikonai-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 9:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= kikonai-1 && i <= hokuto-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 6:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= hokuto-1 && i <= hakodate-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 4:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= hakodate-1 && i <= nanae-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 12:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= nanae-1 && i <= shikabe-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 18:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= shikabe-1 && i <= mori-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 11:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= mori-1 && i <= yakumo-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 20:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= yakumo-1 && i <= oshamambe-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 14:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= oshamambe-1 && i <= kaminokuni-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 8:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= kaminokuni-1 && i <= esashi-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 2:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= esashi-1 && i <= assabu-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 1:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= assabu-1 && i <= otobe-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 16:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= otobe-1 && i <= okushiri-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 13:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= okushiri-1 && i <= setana-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 17:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= setana-1 && i <= imakane-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }
case 7:
  while ((c = fgetc (fp)) != EOF) {
    if (c == '\n') i++;
    if (i >= imakane-1 && i <= eof-1) {
      if (c == '\n') idx++;
      if (idx == pgsz){
         line += pgsz;
         printf ("\n__line %d; Enter 'c' to next, 'ctrl-c' to quit: ", line);
         int ch;
         while ((ch = getchar() != '\n' && ch != EOF)) {}
         if ((ch = getchar()) == 'q') break;
         idx = 0;
       }
       else
          putchar (c);
       }
     }

 
 break;
 }
return 0;
}
