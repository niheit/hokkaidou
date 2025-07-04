#include<stdio.h>

/* this is a game ``hokkaidou'' for checking dictionaries of hokkaidou. 
   version 202507 */
int main() {
int a;
//int i = 0;
FILE *fp = fopen("5", "r");   /* Original HTTP://2242.MOOO.COM/HOK/5 */
//char line[256];

/* Set the first line (top of a box), set these after `%!fold -w80' */
int oshima = 265, hiyama = 330, matsumae = 421, fukushima = 624;
int shiriuchi = 742, kikonai = 860, hokuto = 967, hakodate = 1103;
int nanae = 1412, shikabe = 1569, mori = 1634, yakumo = 1796, oshamambe = 1933;
int kaminokuni = 2087, esashi = 2252, assabu = 2431, otobe = 2564;
int okushiri = 2682, setana = 2754, imakane = 2935, eof = 3056;

/* Original http://stackoverflow.com/questions/36853463 */
enum { MAXL = 20, MAXC = 256000 }; 
int c, i=0, idx = 0, pgsz = MAXL, line = 0;
char fname[MAXC];

printf("Names: 1 Assabu, 2 Esashi, 3 Fukushima, 4 Hakodate, 5 Hiyama, \n"
 "6 Hokuto, 7 Imakane, 8 Kaminokuni, 9 Kikonai, 10 Matsumae, 11 Mori, \n"
 "12 Nanae, 13 Okushiri, 14 Oshamembe, 15 Oshima, 16 Otobe, 17 Setana, \n"
 "18 Shikabe, 19 Shiriuchi, 20 Yakumo. \nEnter No. or 'ctrl+c' to quit; ");
scanf("%d",&a);

#define DISPLAY(X, Y) \
while (getchar() != '\n' );  /* retrieve the first enter key */ \
while ((c = fgetc (fp)) != EOF) { \
      /* import lines from A to B */ \
      if (c == '\n') i++; \
        if (i >= X-1 && i <= Y-1) {  \
           /* display earch 20 lines */ \
           if (c == '\n') idx++; \
           if (idx == pgsz){ \
               line += pgsz; \
               printf ("\n__ line %d, continue (Enter), quit (q)? ", line); \
               int ch; \
               if ((ch = getchar()) == 'q') break; \
               idx = 0; \
               } \
           else \
           putchar (c); \
        } \
     } \
     /* can these 3 lines be omitted? */ \
     fclose (fp); \
     return 0; \
     break; 

switch(a){
case 15: DISPLAY(oshima, hiyama)
case  5: DISPLAY(hiyama, matsumae)
case 10: DISPLAY(matsumae, fukushima)
case  3: DISPLAY(fukushima, shiriuchi)
case 19: DISPLAY(shiriuchi, kikonai)

case  9: DISPLAY(kikonai, hokuto)
case  6: DISPLAY(hokuto, hakodate)
case  4: DISPLAY(hakodate, nanae)
case 12: DISPLAY(nanae, shikabe)
case 18: DISPLAY(shikabe, mori)

case 11: DISPLAY(mori, yakumo)
case 20: DISPLAY(yakumo, oshamambe)
case 14: DISPLAY(oshamambe, kaminokuni)
case  8: DISPLAY(kaminokuni, esashi)
case  2: DISPLAY(esashi, assabu)

case  1: DISPLAY(assabu, otobe)
case 16: DISPLAY(otobe, okushiri)
case 13: DISPLAY(okushiri, setana)
case 17: DISPLAY(setana, imakane)
case  7: DISPLAY(imakane, eof)

 }
}
