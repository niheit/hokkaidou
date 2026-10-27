#include<stdio.h>

/* The title is ``hokkaidou.'' This is a game to check gazetteer in Hokkaidou 
   Island.  Version 2610 */

int main() {
int a;
FILE *fp = fopen("6.TXT", "r");  /* Original HTTP://2242.MOOO.COM/HOK/6.TXT */

/* Set the first line (top of a box) for these words in 6.TXT */
int SORACHI=309, RUMOI_SUB=0000, KAMIKAWA_SUB=0000, SOUYA=0000; 
int TOKACHI=0000, OKHOTSK=0000, KUSHIRO_SUB=00000, NEMURO_SUB=00000; 
int NANPORO=429, NAGANUMA=699, YUNI=982, IWAMIZAWA=1235, KURIYAMA=1593; 
int YUUBARI=1887, TSUKIGATA=2478, BIBAI=2789, MIKASA=3011, URAUSU=3306; 
int NAIE=3508, ASHIBETSU=3771, SHIN_TOTSUKAWA=4054, SUNAGAWA=4470; 
int KAMI_SUNAGAWA=4686, UTASHINAI=4841, URYUU=5102, TAKIKAWA=5544; 
int AKABIRA=5947, HOKURYUU=6257, MOSEUSHI=6461, FUKAGAWA=6651; 
int CHIPPUBETSU=6984, NUMATA=7226, MASHIKE=00000, RUMOI_CITY=00000;
int OBIRA=00000, TOMAMAE=00000, HABORO=00000, SHOSANBETSU=00000, ENBETSU=00000; 
int TESHIO=00000, HIMUKAPPU=00000, MINAMI_FURANO=00000, FURANO=00000;
int NAKA_FURANO=00000, KAMI_FURANO=00000, BIEI=00000, ASAHIKAWA=00000;
int HIGASHI_KAGURA=00000, HIGASHIKAWA=00000, KAMIKAWA_TOWN=00000, TOUMA=00000; 
int TAKASU=0000, PIPPU=00000, AIBETSU=00000, WASSAMU=00000, KENBUCHI=00000;
int SHIBETSU_KAMIKAWA=00000, HOROKANAI=00000, NAYORO=00000, SHIMOKAWA=00000; 
int BIFUKA=00000, NAKAGAWA=00000, OTOINEPPU=00000, ESASHI=00000;
int NAKA_TONBETSU=00000, HAMA_TONBETSU=00000, HORONOBE=00000, TOYOTOMI=00000; 
int SARUFUTSU=00000, WAKKANAI=00000, RISHIRI=00000, RISHIRI_FUJI=00000;
int REBUN=00000, TOKACHI_PLAIN=00000, HIROO=00000, TAIKI=00000;
int NAKA_SATSUNAI=00000, SARABETSU=00000, SHIMIZU=00000, MEMURO=00000;
int OBIHIRO=00000, MAKUBETSU=00000, TOYOKORO=00000, SHINTOKU=00000;
int SHIKAOI=00000, OTOFUKE=00000, IKEDA=00000, URAHORO=00000;
int KAMI_SHIHORO=00000, SHIHORO=00000, HONBETSU=00000, ASHORO=00000;
int RIKUBETSU=00000, OKHOTSK_NATIONAL_HIGHWAY=00000, OUMU=00000; 
int NISHI_OKOPPE=00000, OKOPPE=00000, TAKINOUE=00000, MONBETSU=00000; 
int ENGARU=00000, YUUBETSU=00000, SAROMA=00000, KITAMI=00000, OKETO=00000;
int KUNNEPPU=00000, TSUBETSU=00000, BIHORO=00000, OOZORA=00000, ABASHIRI=00000;
int KOSHIMIZU=00000, KIYOSATO=00000, SHARI=00000, SHIRANUKA=00000; 
int KUSHIRO_SHI=00000, TSURUI=00000, KUSHIRO_CHOU=00000, AKKESHI=00000; 
int SHIBECHA=00000, TESHIKAGA=00000, HAMANAKA=00000, NEMURO_CITY=00000; 
int BETSUKAI=00000, NAKA_SHIBETSU=00000, SHIBETSU_NEMURO=00000, RAUSU=00000;
int SOURCE=7390;

printf("Hokkaidou Gazetteer ; Central, North, & East --> __Abashiri __Aibetsu 3_Akabira \n__Akkeshi __Asahikawa 6_Ashibetsu __Ashoro __Betsukai 9_Bibai ___Biei ___Bifuka \n___Bihoro 13_Chippubetsu ___Enbetsu ___Engaru ___Esashi 17_Fukagawa ___Furano \n___Haboro ___Hama-tonbetsu ___Hamanaka ___Higashi-kagura ___Higashikawa \n___Hiroo ___Hokkaidou 26_Hokuryuu ___Honbetsu ___Horokanai ___Horonobe ___Ikeda \n31_Iwamizawa ___Kami-furano ___Kami-shihoro 34_Kami-sunagawa \n___Kamikawa_sub-pref ___Kamikawa_Town ___Kenbuchi ___Kitami ___Kiyosato \n___Koshimizu ___Kunneppu 42_Kuriyama ___Kushiro_City ___Kushiro_sub-pref \n___Kushiro_Town ___Makubetsu ___Mashike ___Memuro 49_Mikasa ___Minami-furano \n___Monbetsu 52_Moseushi 53_Naganuma 54_Naie ___Naka-furano ___Naka-satsunai \n___Naka-shibetsu ___Naka-tonbetsu ___Nakagawa 60_Nanporo ___Nayoro \n___Nemuro_City ___Nemuro_sub-pref ___Nishi-okoppe 65_Numata ___Obihiro ___Obira \n___Oketo ___Okhotsk ___Okhotsk_highways ___Okoppe ___Oozora ___Otofuke \n___Otoineppu ___Oumu ___Pippu ___Rausu ___Rebun ___Rikubetsu ___Rishiri \n___Rishiri-fuji ___Rumoi_City ___Rumoi_sub-pref ___Sarabetsu ___Saroma \n___Sarufutsu ___Shari ___Shibecha ___Shibetsu_in_Kamikawa ___Shibetsu_in_Nemuro \n___Shihoro ___Shikaoi ___Shimizu ___Shimokawa ___Shimukappu 96_Shin-totsukawa \n___Shintoku ___Shiranuka ___Shosanbetsu 100_Sorachi ____Souya 102_Sunagawa \n____Taiki ____Takasu 105_Takikawa ____Takinoue ____Teshikaga ____Teshio \n____Tokachi_plain ____Tokachi_sub-pref ____Tomamae ____Touma ____Toyokoro \n____Toyotomi ____Tsubetsu 116_Tsukigata ____Tsurui ____Urahoro 119_Urausu \n120_Uryuu 121_Utashinai ____Wakkanai ____Wassamu 124_Yuni 125_Yuubari \n____Yuubetsu --> Enter No. --> "); scanf("%d",&a);

/* Original http://stackoverflow.com/questions/36853463 */
enum { MAXL = 20, MAXC = 256000 }; 
int c, i=0, idx = 0, pgsz = MAXL, line = 0;
char fname[MAXC];

#define DISPLAY(X, Y) \
while (getchar() != '\n' );  /* Retrieve the first enter key */ \
while ((c = fgetc (fp)) != EOF) { \
      /* Import lines from A to B */ \
      if (c == '\n') i++; \
        if (i >= X-1 && i <= Y-1) {  \
           /* Display earch 20 lines */ \
           if (c == '\n') idx++; \
           if (idx == pgsz){ \
               line += pgsz; \
               printf ("\n---> line %d, continue (Enter), quit (q)? ", line); \
               int ch; \
               if ((ch = getchar()) == 'q') break; \
               idx = 0; \
               } \
           else \
           putchar (c); \
        } \
     } \
     fclose (fp); \
     return 0; \
     break; 

switch(a){
case 100: DISPLAY(SORACHI, NANPORO)

case  60: DISPLAY(NANPORO, NAGANUMA)
case  53: DISPLAY(NAGANUMA, YUNI)
case 124: DISPLAY(YUNI, IWAMIZAWA)
case  31: DISPLAY(IWAMIZAWA, KURIYAMA)
case  42: DISPLAY(KURIYAMA, YUUBARI)
case 125: DISPLAY(YUUBARI, TSUKIGATA)
case 116: DISPLAY(TSUKIGATA, BIBAI)
case   9: DISPLAY(BIBAI, MIKASA)
case  49: DISPLAY(MIKASA, URAUSU)
case 119: DISPLAY(URAUSU, NAIE)
case  54: DISPLAY(NAIE, ASHIBETSU)
case   6: DISPLAY(ASHIBETSU, SHIN_TOTSUKAWA)
case  96: DISPLAY(SHIN_TOTSUKAWA, SUNAGAWA)
case 102: DISPLAY(SUNAGAWA, KAMI_SUNAGAWA)
case  34: DISPLAY(KAMI_SUNAGAWA, UTASHINAI)
case 121: DISPLAY(UTASHINAI, URYUU)
case 120: DISPLAY(URYUU, TAKIKAWA)
case 105: DISPLAY(TAKIKAWA, AKABIRA)
case   3: DISPLAY(AKABIRA, HOKURYUU)
case  26: DISPLAY(HOKURYUU, MOSEUSHI)
case  52: DISPLAY(MOSEUSHI, FUKAGAWA)
case  17: DISPLAY(FUKAGAWA, CHIPPUBETSU)
case  13: DISPLAY(CHIPPUBETSU, NUMATA)
case  65: DISPLAY(NUMATA, SOURCE)
 }
}
