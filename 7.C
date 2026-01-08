#include<stdio.h>

/* ``hokkaidou'' is a game to check gazetteer in hokkaidou island. Ver 2601 */

int main() {
int a;
FILE *fp = fopen("5.TXT", "r");  /* Original HTTP://2242.MOOO.COM/HOK/5.TXT */

/* Set the first line (top of a box) for these words in 5.TXT */
int OSHIMA=226, HIYAMA=310, SHIRIBESHI=0000, IBURI=0000, HIDAKA=0000; 
int ISHIKARI=00000, MATSUMAE=424, FUKUSHIMA=679, SHIRIUCHI=826, KIKONAI=970; 
int HOKUTO=1105, HAKODATE=1281, NANAE=1701, SHIKABE=1917, MORI=1993; 
int YAKUMO=2212, OSHAMANBE=2386, KAMINOKUNI=2579, ESASHI=2812, ASSABU=3071; 
int OTOBE=3258, OKUSHIRI=3425, SETANA=3513, IMAKANE=3744, SHIMAMAKI=0000; 
int KUROMATSUNAI=0000, SUTTSU=0000, RANKOSHI=0000, NISEKO=0000, MAKKARI=0000;
int RUSUTSU=0000, KIMOBETSU=0000, KYOUGOKU=0000, KUCCHAN=0000, KYOUWA=0000;
int IWANAI=0000, TOMARI=0000, KAMOENAI=0000, SHAKOTAN=0000, FURUBIRA=0000;
int NIKI=0000, YOICHI=0000, AKAIGAWA=0000, OTARU=0000, OTARU_EAST=0000;
int OTARU_SOUTH=0000, OTARU_WEST=0000, TOYOURA=0000, TOUYAKO=0000, DATE=0000;
int MURORAN=0000, SOUBETSU=0000, NOBORIBETSU=0000, SHIRAOI=0000; 
int TOMAKOMAI=0000, ABIRA=0000, ATSUMA=0000, MUKAWA=0000, BIRATORI=0000;
int ERIMO=0000, HIDAKA_TOWN=0000, NIIKAPPU=0000, SAMANI=0000, SHIN_HIDAKA=0000;
int SHIN_HIDAKA_HOKKAIDOU_UNIV_RANCH=0000, URAKAWA=00000, KITA_HIROSHIMA=00000;
int ISHIKARI_CITY=00000, ENIWA=00000, CHITOSE=00000, TOUBETSU=00000; 
int EBETSU=00000, SHIN_SHINOTSU=00000, SAPPORO=00000, SAPPORO_MINAMI=00000; 
int SAPPORO_TEINE=00000, SAPPORO_NISHI=00000, SAPPORO_CHUUOU=00000; 
int SAPPORO_TOYOHIRA=00000, SAPPORO_KIYOTA=00000, SAPPORO_KITA=00000; 
int SAPPORO_KITA_HOKKAIDOU_UNIV=00000, SAPPORO_HIGASHI=00000; 
int SAPPORO_SHIROISHI=00000, SAPPORO_ATSUBETSU=00000, SOURCE=3897;

printf (
"Hokkaidou Gazetteer; South & Central --> x_Abira x_Akaigawa 3_Assabu \n" 
"x_Atsuma x_Biratori x_Chitose x_Date x_Ebetsu x_Eniwa xx_Erimo \n"
"11_Esashi 12_Fukushima xx_Furubira 14_Hakodate xx_Hidaka sub-prefecture \n"
"xx_Hidaka_Town 17_Hiyama 18_Hokuto xx_Iburi 20_Imakane xx_Ishikari_City \n"
"xx_Ishikari_sub-prefecture xx_Iwanai 24_Kaminokuni xx_Kamoenai 26_Kikonai \n"
"xx_Kimobetsu xx_Kita-hiroshima xx_Kucchan xx_Kyougoku xx_Kyouwa xx_Makkari \n"
"33_Matsumae 34_Mori xx_Mukawa xx_Muroran 37_Nanae xx_Niikappu xx_Niki \n"
"xx_Niseko xx_Noboribetsu 42_Okushiri 43_Oshamenbe 44_Oshima xx_Otaru \n"
"xx_Otaru_east xx_Otaru_south xx_Otaru_west 49_Otobe xx_Rankoshi xx_Rusutsu \n"
"xx_Samani xx_Sapporo xx_Sapporo_Atsubetsu, xx_Sapporo_Chuuou \n"
"xx_Sapporo_Higashi xx_Sapporo_Kita xx_Sapporo_Kita_Hokkaidou_Univ \n"
"xx_Sapporo_Kiyota xx_Sapporo_Minami xx_Sapporo_Nishi xx_Sapporo_Shiroishi \n"
"xx_Sapporo_Teine xx_Sapporo_Toyohira 65_Setana xx_Shakotan 67_Shikabe \n"
"xx_Shin-shinotsu xx_Shin-hidaka xx_Shin-hidaka_Hokkaidou_Univ_Ranch \n"
"xx_Shiraoi xx_Shiribeshi 73_Shiriuchi xx_Soubetsu xx_Suttsu xx_Tomakomai \n"
"xx_Tomari xx_Toubetsu xx_Touyako xx_Toyoura xx_Urakawa 82_Yakumo xx_Yoichi \n"
"Enter No. --> ");
scanf("%d",&a);

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
               printf ("\n__ line %d, continue (Enter), quit (q)? ", line); \
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
case 44: DISPLAY(OSHIMA, HIYAMA)
case 17: DISPLAY(HIYAMA, MATSUMAE)

case 33: DISPLAY(MATSUMAE, FUKUSHIMA)
case 12: DISPLAY(FUKUSHIMA, SHIRIUCHI)
case 73: DISPLAY(SHIRIUCHI, KIKONAI)
case 26: DISPLAY(KIKONAI, HOKUTO)
case 18: DISPLAY(HOKUTO, HAKODATE)
case 14: DISPLAY(HAKODATE, NANAE)
case 37: DISPLAY(NANAE, SHIKABE)
case 67: DISPLAY(SHIKABE, MORI)
case 34: DISPLAY(MORI, YAKUMO)
case 82: DISPLAY(YAKUMO, OSHAMANBE)
case 43: DISPLAY(OSHAMANBE, KAMINOKUNI)

case 24: DISPLAY(KAMINOKUNI, ESASHI)
case 11: DISPLAY(ESASHI, ASSABU)
case  3: DISPLAY(ASSABU, OTOBE)
case 49: DISPLAY(OTOBE, OKUSHIRI)
case 42: DISPLAY(OKUSHIRI, SETANA)
case 65: DISPLAY(SETANA, IMAKANE)
case 20: DISPLAY(IMAKANE, SOURCE)
 }
}
