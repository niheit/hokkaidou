#include<stdio.h>

/* ``hokkaidou'' is a game to check gazetteer in hokkaidou island. ver 251221 */
int main() {
int a;
//int i = 0;
FILE *fp = fopen("6.TXT", "r");   /* Original HTTP://2242.MOOO.COM/HOK/5 */
//char line[256];

/* Set the first line (top of a box) */
int SORACHI=235, RUMOI_SUB=0000, KAMIKAWA_SUB=0000, SOUYA=0000; 
int TOKACHI=0000, OKHOTSK=0000, KUSHIRO_SUB=00000, NEMURO_SUB=00000; 
int NANPORO=302, NAGANUMA=466, YUNI=628, IWAMIZAWA=779, KURIYAMA=987; 
int YUUBARI=1169, TSUKIGATA=1497, BIBAI=1702, MIKASA=1817, URAUSU=1992; 
int NAIE=2098, ASHIBETSU=2238, SHIN_TOTSUKAWA=2384, SUNAGAWA=2606; 
int KAMI_SUNAGAWA=2739, UTASHINAI=2833, URYUU=3004, TAKIKAWA=3273; 
int AKABIRA=3503, HOKURYUU=3656, MOSEUSHI=3772, FUKAGAWA=3889; 
int CHIPPUBETSU=4102, NUMATA=4247, MASHIKE=0000, RUMOI_CITY=0000, OBIRA=0000;
int TOMAMAE=0000, HABORO=0000, SHOSANBETSU=0000, ENBETSU=0000, TESHIO=00000;
int HIMUKAPPU=0000, MINAMI_FURANO=0000, FURANO=0000, NAKA_FURANO=0000; 
int KAMI_FURANO=0000, BIEI=0000, ASAHIKAWA=0000, HIGASHI_KAGURA=0000;
int HIGASHIKAWA=0000, KAMIKAWA_TOWN=0000, TOUMA=0000, TAKASU=0000, PIPPU=0000;
int AIBETSU=0000, WASSAMU=0000, KENBUCHI=0000, SHIBETSU_KAMIKAWA=0000; 
int HOROKANAI=0000, NAYORO=0000, SHIMOKAWA=0000, BIFUKA=0000, NAKAGAWA=0000; 
int OTOINEPPU=0000, ESASHI=00000, NAKA_TONBETSU=00000, HAMA_TONBETSU=00000; 
int HORONOBE=00000, TOYOTOMI=00000, SARUFUTSU=00000, WAKKANAI=00000; 
int RISHIRI=00000, RISHIRI_FUJI=00000, REBUN=00000, TOKACHI_PLAIN=00000; 
int HIROO=00000, TAIKI=00000, NAKA_SATSUNAI=00000, SARABETSU=00000; 
int SHIMIZU=00000, MEMURO=00000, OBIHIRO=00000, MAKUBETSU=00000;
int TOYOKORO=00000, SHINTOKU=00000, SHIKAOI=00000, OTOFUKE=00000, IKEDA=00000; 
int URAHORO=00000, KAMI_SHIHORO=00000, SHIHORO=00000, HONBETSU=00000; 
int ASHORO=00000, RIKUBETSU=00000, OKHOTSK_NATIONAL_HIGHWAY=00000, OUMU=00000; 
int NISHI_OKOPPE=00000, OKOPPE=00000, TAKINOUE=00000, MONBETSU=00000; 
int ENGARU=00000, YUUBETSU=00000, SAROMA=00000, KITAMI=00000, OKETO=00000;
int KUNNEPPU=00000, TSUBETSU=00000, BIHORO=00000, OOZORA=00000, ABASHIRI=00000;
int KOSHIMIZU=00000, KIYOSATO=00000, SHARI=00000, SHIRANUKA=00000; 
int KUSHIRO_SHI=00000, TSURUI=00000, KUSHIRO_CHOU=00000, AKKESHI=00000; 
int SHIBECHA=00000, TESHIKAGA=00000, HAMANAKA=00000, NEMURO_CITY=00000; 
int BETSUKAI=00000, NAKA_SHIBETSU=00000, SHIBETSU_NEMURO=00000, RAUSU=00000;
int SOURCE=4361;

/* Original http://stackoverflow.com/questions/36853463 */
enum { MAXL = 20, MAXC = 256000 }; 
int c, i=0, idx = 0, pgsz = MAXL, line = 0;
char fname[MAXC];

printf("Hokkaidou Gazetteer; Central, North, & East --> x_Abashiri x_Aibetsu 3_Akabira \nx_Akkeshi x_Asahikawa 6_Ashibetsu x_Ashoro x_Betsukai 9_Bibai xx_Biei xx_Bifuka \nxx_Bihoro 13_Chippubetsu xx_Enbetsu xx_Engaru xx_Esashi 17_Fukagawa xx_Furano \nxx_Haboro xx_Hama-tonbetsu xx_Hamanaka xx_Higashi-kagura xx_Higashikawa \nxx_Hiroo xx_Hokkaidou 26_Hokuryuu xx_Honbetsu xx_Horokanai xx_Horonobe xx_Ikeda \n31_Iwamizawa xx_Kami-furano xx_Kami-shihoro 34_Kami-sunagawa \nxx_Kamikawa_sub-pref xx_Kamikawa_Town xx_Kenbuchi xx_Kitami xx_Kiyosato \nxx_Koshimizu xx_Kunneppu 42_Kuriyama xx_Kushiro_City xx_Kushiro_sub-pref \nxx_Kushiro_Town xx_Makubetsu xx_Mashike xx_Memuro 49_Mikasa xx_Minami-furano \nxx_Monbetsu 52_Moseushi 53_Naganuma 54_Naie xx_Naka-furano xx_Naka-satsunai \nxx_Naka-shibetsu xx_Naka-tonbetsu xx_Nakagawa 60_Nanporo xx_Nayoro \nxx_Nemuro_City xx_Nemuro_sub-pref xx_Nishi-okoppe 65_Numata xx_Obihiro xx_Obira \nxx_Oketo xx_Okhotsk xx_Okhotsk_highways xx_Okoppe xx_Oozora xx_Otofuke \nxx_Otoineppu xx_Oumu xx_Pippu xx_Rausu xx_Rebun xx_Rikubetsu xx_Rishiri \nxx_Rishiri-fuji xx_Rumoi_City xx_Rumoi_sub-pref xx_Sarabetsu xx_Saroma \nxx_Sarufutsu xx_Shari xx_Shibecha xx_Shibetsu_(Kamikawa) xx_Shibetsu_(Nemuro) \nxx_Shihoro xx_Shikaoi xx_Shimizu xx_Shimokawa xx_Shimukappu 96_Shin-totsukawa \nxx_Shintoku xx_Shiranuka xx_Shosanbetsu 100_Sorachi xxx_Souya 102_Sunagawa \nxxx_Taiki xxx_Takasu 105_Takikawa xxx_Takinoue xxx_Teshikaga xxx_Teshio \nxxx_Tokachi_plain xxx_Tokachi_sub-pref xxx_Tomamae xxx_Touma xxx_Toyokoro \nxxx_Toyotomi xxx_Tsubetsu 116_Tsukigata xxx_Tsurui xxx_Urahoro 119_Urausu \n120_Uryuu 121_Utashinai xxx_Wakkanai xxx_Wassamu 124_Yuni 125_Yuubari \nxxx_Yuubetsu __ Enter No. --> "); scanf("%d",&a);

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
               printf ("\n__ line %d, continue (Enter), quit (q)? ", line); \
               int ch; \
               if ((ch = getchar()) == 'q') break; \
               idx = 0; \
               } \
           else \
           putchar (c); \
        } \
     } \
     /* Can these 3 lines be omitted? */ \
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
