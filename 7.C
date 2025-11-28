#include<stdio.h>

/* ``hokkaidou'' a game to check place names in hokkaidou. ver 251128 */
int main() {
int a;
//int i = 0;
FILE *fp = fopen("5.TXT", "r");  /* Original HTTP://2242.MOOO.COM/HOK/5.TXT */
//char line[256];

/* Set the first line (top of a box), eof = SOURSE */
int oshima=173, hiyama=257, shiribeshi=0000, iburi=0000, hidaka=0000; 
int ishikari=00000, matsumae=371, fukushima=626, shiriuchi=775, kikonai=919; 
int hokuto=1053, hakodate=1229, nanae=1627, shikabe=1841, mori=1917; 
int yakumo=2135, oshamanbe=2307, kaminokuni=2500, esashi=2733, assabu=2989; 
int otobe=3176, okushiri=3340, setana=3428, imakane=3659, shimamaki=0000; 
int kuromatsunai=0000, suttsu=0000, rankoshi=0000, niseko=0000, makkari=0000;
int rusutsu=0000, kimobetsu=0000, kyougoku=0000, kucchan=0000, kyouwa=0000;
int iwanai=0000, tomari=0000, kamoenai=0000, shakotan=0000, furubira=0000;
int niki=0000, yoichi=0000, akaigawa=0000, otaru=0000, otaru_east=0000;
int otaru_south=0000, otaru_west=0000, toyoura=0000, touyako=0000, date=0000;
int muroran=0000, soubetsu=0000, noboribetsu=0000, shiraoi=0000; 
int tomakomai=0000, abira=0000, atsuma=0000, mukawa=0000, biratori=0000;
int erimo=0000, hidaka_town=0000, niikappu=0000, samani=0000, shin_hidaka=0000;
int shin_hidaka_hokkaidou_univ_ranch=0000, urakawa=00000, kita_hiroshima=00000;
int ishikari_city=00000, eniwa=00000, chitose=00000, toubetsu=00000; 
int ebetsu=00000, shin_shinotsu=00000, sapporo=00000, sapporo_minami=00000; 
int sapporo_teine=00000, sapporo_nishi=00000, sapporo_chuuou=00000; 
int sapporo_toyohira=00000, sapporo_kiyota=00000, sapporo_kita=00000; 
int sapporo_kita_hokkaidou_univ=00000, sapporo_higashi=00000; 
int sapporo_shiroishi=00000, sapporo_atsubetsu=00000, eof=3801;

/* Original http://stackoverflow.com/questions/36853463 */
enum { MAXL = 20, MAXC = 256000 }; 
int c, i=0, idx = 0, pgsz = MAXL, line = 0;
char fname[MAXC];

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
case 44: DISPLAY(oshima, hiyama)
case 17: DISPLAY(hiyama, matsumae)

case 33: DISPLAY(matsumae, fukushima)
case 12: DISPLAY(fukushima, shiriuchi)
case 73: DISPLAY(shiriuchi, kikonai)
case 26: DISPLAY(kikonai, hokuto)
case 18: DISPLAY(hokuto, hakodate)
case 14: DISPLAY(hakodate, nanae)
case 37: DISPLAY(nanae, shikabe)
case 67: DISPLAY(shikabe, mori)
case 34: DISPLAY(mori, yakumo)
case 82: DISPLAY(yakumo, oshamanbe)
case 43: DISPLAY(oshamanbe, kaminokuni)

case 24: DISPLAY(kaminokuni, esashi)
case 11: DISPLAY(esashi, assabu)
case  3: DISPLAY(assabu, otobe)
case 49: DISPLAY(otobe, okushiri)
case 42: DISPLAY(okushiri, setana)
case 65: DISPLAY(setana, imakane)
case 20: DISPLAY(imakane, eof)
 }
}
