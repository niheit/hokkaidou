#include<stdio.h>

/* The tilte is ``hokkaidou.'' This is a game to check gazetteer in Hokkaidou 
   Island.  Version 2610 */

int main() {
int a;
FILE *fp = fopen("5.TXT", "r");  /* Original HTTP://2242.MOOO.COM/HOK/5.TXT */

/* Set the first line (top of a box) for these words in 5.TXT */
int OSHIMA=332, HIYAMA=488, SHIRIBESHI=680, IBURI=0000, HIDAKA=0000; 
int ISHIKARI=0000, MATSUMAE=799, FUKUSHIMA=1194, SHIRIUCHI=1425, KIKONAI=1650; 
int HOKUTO=1873, HAKODATE=2141, NANAE=2791, SHIKABE=3244, MORI=3384; 
int YAKUMO=3724, OSHAMANBE=4027, KAMINOKUNI=4330, ESASHI=4725, ASSABU=5133; 
int OTOBE=5450, OKUSHIRI=5730, SETANA=5878, IMAKANE=6228, SHIMAMAKI=6449; 
int KUROMATSUNAI=6737, SUTTSU=7152, RANKOSHI=7507, NISEKO=7759, MAKKARI=8114;
int RUSUTSU=8583, KIMOBETSU=8955, KYOUGOKU=9257, KUCCHAN=9546, KYOUWA=10074;
int IWANAI=10276, TOMARI=10732, KAMOENAI=10999, SHAKOTAN=11256, FURUBIRA=11637;
int NIKI=11873, YOICHI=12296, AKAIGAWA=12889, OTARU=13284, OTARU_EAST=14184;
int OTARU_SOUTH=14496, OTARU_WEST=14613, TOYOURA=00000, TOUYAKO=00000;
int DATE=00000, MURORAN=00000, SOUBETSU=00000, NOBORIBETSU=00000;
int SHIRAOI=00000, TOMAKOMAI=00000, ABIRA=00000, ATSUMA=00000, MUKAWA=00000;
int BIRATORI=00000, ERIMO=00000, HIDAKA_TOWN=00000, NIIKAPPU=00000;
int SAMANI=00000, SHIN_HIDAKA=00000, SHIN_HIDAKA_HOKKAIDOU_UNIV_RANCH=00000; 
int URAKAWA=00000;
int KITA_HIROSHIMA=00000, ISHIKARI_CITY=00000, ENIWA=00000, CHITOSE=00000;
int TOUBETSU=00000, EBETSU=00000, SHIN_SHINOTSU=00000, SAPPORO=00000;
int SAPPORO_MINAMI=00000, SAPPORO_TEINE=00000, SAPPORO_NISHI=00000;
int SAPPORO_CHUUOU=00000, SAPPORO_TOYOHIRA=00000, SAPPORO_KIYOTA=00000; 
int SAPPORO_KITA=00000, SAPPORO_KITA_HOKKAIDOU_UNIV=00000;
int SAPPORO_HIGASHI=00000, SAPPORO_SHIROISHI=00000, SAPPORO_ATSUBETSU=00000; 
int SOURCE=14763;

printf (
"Hokkaidou Gazetteer ; South & Central --> __Abira 2_Akaigawa 3_Assabu \n" 
"__Atsuma __Biratori __Chitose __Date __Ebetsu __Eniwa ___Erimo \n"
"11_Esashi 12_Fukushima 13_Furubira 14_Hakodate ___Hidaka sub-prefecture \n"
"___Hidaka_Town 17_Hiyama 18_Hokuto ___Iburi 20_Imakane ___Ishikari_City \n"
"___Ishikari_sub-prefecture 23_Iwanai 24_Kaminokuni 25_Kamoenai 26_Kikonai \n"
"27_Kimobetsu ___Kita-hiroshima 29_Kucchan 30_Kuromatsunai 31_Kyougoku \n"
"32_Kyouwa 33_Makkari 34_Matsumae 35_Mori ___Mukawa ___Muroran 38_Nanae \n"
"___Niikappu 40_Niki 41_Niseko ___Noboribetsu 43_Okushiri 44_Oshamenbe \n"
"45_Oshima 46_Otaru 47_Otaru_east 48_Otaru_south 49_Otaru_west 50_Otobe \n"
"51_Rankoshi 52_Rusutsu ___Samani ___Sapporo ___Sapporo_Atsubetsu \n"
"___Sapporo_Chuuou ___Sapporo_Higashi ___Sapporo_Kita \n"
"___Sapporo_Kita_Hokkaidou_Univ ___Sapporo_Kiyota ___Sapporo_Minami \n"
"___Sapporo_Nishi ___Sapporo_Shiroishi ___Sapporo_Teine ___Sapporo_Toyohira \n"
"66_Setana 67_Shakotan 68_Shikabe 69_Shimamaki ___Shin-shinotsu \n"
"___Shin-hidaka ___Shin-hidaka_Hokkaidou_Univ_Ranch ___Shiraoi \n"
"74_Shiribeshi 75_Shiriuchi ___Soubetsu 77_Suttsu ___Tomakomai 79_Tomari \n"
"___Toubetsu ___Touyako ___Toyoura ___Urakawa 84_Yakumo 85_Yoichi \n"
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
case 45: DISPLAY (OSHIMA, HIYAMA)
case 17: DISPLAY (HIYAMA, SHIRIBESHI)
case 74: DISPLAY (SHIRIBESHI, MATSUMAE)

case 34: DISPLAY (MATSUMAE, FUKUSHIMA)
case 12: DISPLAY (FUKUSHIMA, SHIRIUCHI)
case 75: DISPLAY (SHIRIUCHI, KIKONAI)
case 26: DISPLAY (KIKONAI, HOKUTO)
case 18: DISPLAY (HOKUTO, HAKODATE)
case 14: DISPLAY (HAKODATE, NANAE)
case 38: DISPLAY (NANAE, SHIKABE)
case 68: DISPLAY (SHIKABE, MORI)
case 35: DISPLAY (MORI, YAKUMO)
case 84: DISPLAY (YAKUMO, OSHAMANBE)
case 44: DISPLAY (OSHAMANBE, KAMINOKUNI)

case 24: DISPLAY (KAMINOKUNI, ESASHI)
case 11: DISPLAY (ESASHI, ASSABU)
case  3: DISPLAY (ASSABU, OTOBE)
case 50: DISPLAY (OTOBE, OKUSHIRI)
case 43: DISPLAY (OKUSHIRI, SETANA)
case 66: DISPLAY (SETANA, IMAKANE)
case 20: DISPLAY (IMAKANE, SHIMAMAKI)

case 69: DISPLAY (SHIMAMAKI, KUROMATSUNAI)
case 30: DISPLAY (KUROMATSUNAI, SUTTSU)
case 77: DISPLAY (SUTTSU, RANKOSHI)
case 51: DISPLAY (RANKOSHI, NISEKO)
case 41: DISPLAY (NISEKO, MAKKARI)
case 33: DISPLAY (MAKKARI, RUSUTSU)
case 52: DISPLAY (RUSUTSU, KIMOBETSU)
case 27: DISPLAY (KIMOBETSU, KYOUGOKU)
case 31: DISPLAY (KYOUGOKU, KUCCHAN)
case 29: DISPLAY (KUCCHAN, KYOUWA)
case 32: DISPLAY (KYOUWA, IWANAI)
case 23: DISPLAY (IWANAI, TOMARI)
case 79: DISPLAY (TOMARI, KAMOENAI)
case 25: DISPLAY (KAMOENAI, SHAKOTAN)
case 67: DISPLAY (SHAKOTAN, FURUBIRA)
case 13: DISPLAY (FURUBIRA, NIKI)
case 40: DISPLAY (NIKI, YOICHI)
case 85: DISPLAY (YOICHI, AKAIGAWA)
case  2: DISPLAY (AKAIGAWA, OTARU)
case 46: DISPLAY (OTARU, OTARU_EAST)
case 47: DISPLAY (OTARU_EAST, OTARU_SOUTH)
case 48: DISPLAY (OTARU_SOUTH, OTARU_WEST)
case 49: DISPLAY (OTARU_SOUTH, SOURCE)


 }
}
