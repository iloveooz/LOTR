// тест на знание трилогии "Властелин колец"
#include <iostream>

  char Bonp [80][100] = {
  "KTO ABTOP TPuлOruu \"BлACTEлuH KOлEц\"?",
  "B KAKuX rOgAX 6ылA HAnuCAHA TPuлOru9?",
  "3A CBOю жu3Hb gжOH TOлKuEH HAnuCAл...",
  "gж. TOлKuEH жuл u PA6OTAл B...",
  "TPuлOru9 PA3OwлACb TuPAжOM 6OлEE...",
  "фuлbM 6ыл CH9T KuHOKOMnAHuEu...",
  "PEжuCEP-noCTAHOBwuK фuлbMA...",
  "OCHOBHыe nPuMETы PEжuCEPA n. gжeKCOHA?",
  "rgE CHuMAлACb OCHOBHA9 4ACTb фuлbMA?",
  "CKOлbKO BPEMEHu 3KPAHu3uPOBaлaCb TpuлOru9?",
   			// 10
  "лю6uMыu HAnuTOK BCEX TOлKuEHuCTOB B MuPE?",
  "KAKuX cLLEH B фuлbME HET?",
  "KTO CH9лC9 B POлu фPOgO TOP6uHCA?",
  "KTO CH9лC9 B POлu MArA reHgaлbфa?",
  "KTO CH9лC9 B POлu 3лbфA лerOлaCA?",
  "KTO CH9лC9 B Poлu 3лbфA 3лPoHga?",
  "3TA 3KPAHU3ALLu9 KHuru no c4eTy...",
  "C 4ErO HA4uHAETC9 TPuлOru9?",
  "KOлu4eCTBO AKTEPOB CH9BwuXC9 B 3nu3ogAX (MAлыx POл9X)?",
  "rлaBHOE OTлu4uE фuлbMA OT KHUru...",
   // 20
  "CKOлbKO лET (no KHurE) 6uлb6o TOP6uHCy?",
  "CKOлbKO лET (no KHurE) фPOgO TOP6uHCy?",
  "no KHure TPu BEлuKux KOлbLLA gocTAлuCb 3лPoHgy, rAлAgpu3лu u...",
  "no KHure APAropHa B Ha4aлE HA3ыBAюT...",
  "KAKOu nepcoHAж KHuru OTCyTcTByeT B фuлbME?",
  "no KHure xo6uTAHu9, a no фuлbMy...",
  "xo66uTы go6pogywHыu Hapog, Ho oguH Pa3 OHu cpaжaлucb. c KEM?",
  "KAKA9 фaMuлu9 6ылa y c3MA?",
  "CKOлbKO BpeMeHu npoxoguT nocлe yxoga 6uлb6o go HA4aлa nyTEwecTBU9 no KHure?",
  "B rocT9x y TOMA 6oM6aHguлa xo66uTы noMuMo egы u cHA...",
   // 30
  "no фuлbMy AparoPHy okoлo...",
  "BCAgHUKu-npu3PAKu - 3TO 6ыBwuE KOлbLLeHOcLLы...",
  "ME4 KOPOлeBcKOrO roHgoPCKOro poga HA3BIBaлc9...",
  "HAcTo9щee uM9 APAroPHA KAK Kopoл9?",
  "APBEH - 3TO gO4b",
  "noMHuTe naлaHTup y CAPyMAHA. CkoлbKO ux BCEro?",
  "KAK HA3ыBAюTc9 3лbфuucKUE Xлe6LLы?",
  "4TO go6ыBAлu B KOn9x Mopuu?",
  "BeлuKOE лuXO 6aлuHA. 4TO 3TO?",
  "HEnpeMeHHыM ATPu6yTOM PыLLAPeu MuHacTupuTa 9Bл9eTC9...",
   // 40
  "6oEBыe opKu - ypyKxau - 3To 6ыBwuE...",
  "roBOP9щue gePeBb9 - 3TO...",
  "noTEP9HHыe gepeBb9-жeHщuHы - 3TO...",
  "KAK HA3ыBAлaCb rлaBHA9 6awH9 B u3eHrapge?",
  "HA3oBuTe npo3Buщe rpuMы.",
  "kak 3BAлu KOPOл9 PoxaHA?",
  "yKAжuTE POgcTBO 3oBuH k 3oMePy.",
  "B nepeBoge ro6лuHA cTOлuca PoxaHA HA3ыBAлaCb...",
  "KAK 3BAлu 6eлoro koH9 reHgaлbфa?",
  "MECTO rge жuByT 3лbфы. 3TO...",
    // 50
  "KAK 3BAлu ropлyMA go ero BcTPe4u c koлbцoM?",
  "KAK 3Baлu nay4uxy жuBwyю B ropax Mopgopa?",
  "KAK 3BAлu 6opoMuPa u фaPaMuPA?",
  "XAлruP - 3TO...",
  "OHTы o4eHb...",
  "HA3oBuTE oco6eHHocTb BCEx LLapcTByющux oco6 B npou3BegeHuu.",
  "rapLLyющuu noHu - 3TO...",
  "KTO pa3Pywuл u3eHrapg?",
  "HA3oBuTe uM9 oTLLA rHOMA ruMлu.",
  "4TO raлagPueлb nogaPuлa rHoMy ruMлu?",
    // 60
  "CKOлbKo лeT KoлbLLO HAxoguлocb y ropлyMA?",
  "HageBAewb KoлbLLO 3лa u cTAHOBuwbc9...",
  "HA KaKOM 93ыKe HAnucaHA HAgnucb HA Koлbce?",
  "CkoлbKO 9pycoB-ypoBHeu 6ылo B MUHAc-TuPuTe?",
  "KAK nepeBoguTc9 HA3BAHue MUHAc-TupuT?",
  "cuMBoл roHgopa?",
  "rлaBHOe OTлu4uE AparopHA KHUжHoro oT KuHowHoro?",
  "no KHure MePTBыe Ha noлe 6o9 He 6uлucb. 4eM oHu noMorлu?",
  "uM9 geBywku, y6uBweu rлaBHOro HA3ryлa?",
  "6лuжauwee 4eлoBE4ecKOE noceлeHue K MoPgoPy?",
   // 70
  "no KHure AparoPHA koPoHOBaлu...",
  "B фuлbME Hurge HET cлegyющero npegMETa...",
  "BлacTEлuH Koлec. TAK KTO жe eTO?",
  "no KHure no MopgoPy фpogo u c3M wлu okoлo...",
  "4To ropлyM oTKYcuл фegoPy B PoKoBOu rope?",
  "фaPAMup жeHuлc9 HA...",
  "no KHure uMeHHo oH y6uл cAPyMAHa.",
  "no KHure xo66uTы BePHyлucb goMou u o6HaPyжuлu 4To...",
  "no фuлbMy nyTewecTBue KoлbLLa gлuлocb okoлo...",
  "B koHLLE TPeTbeu 4acTu BлacTEлuHA Koлec TuTPы gл9Tc9 oKoлo..."
    // 80
  };

  char BAP[80] [4] [50] = {
  {"gж. ToлKueH", "gж. PoyлuHr", "gж. MuлbToH", "MarucTp uOga" },
  {"B 40-x", "B 50-x", "B 60-x", "B 70-x" },
  {"1 KHury", "3 KHuru", "4 KHuru", "8 KHur" },
  {"CwA", "AHrлuu", "фPaHLLuu", "CCCP" },
  {"100000 3k3.", "800000 3k3.", "3500000 3k3.", "15000000 3k3." },
  {"napaMayHT", "DreaMWorks", "NEWLineCinema", "MupaMakc" },
  {"n. gжekCoH", "CT. cnuл6epr", "3aлMaH KuHr", "MarucTp uOga" },
  {"o4Ku u 6opoga", "лыcuHa u 3a94b9 ry6a", "Tpy6ka u cлyXoBou annaPaT", "orPoMHыu жuBOT u TaTyupoBku" },
  {"B aHrлuu", "B ABCTPAлuu u HOBou 3eлaHguu", "Ha rpaHuLLe poccuu u MoHroлuu", "B юAP" },
  {"15 лeT", "6 лeT", "3 roga", "9 лeT" },
    //10
  {"BogKa", "nuBO", "BuHO", "Mep3aB4uK" },
  {"coKpoBeHHыx pa3roBopoB", "cpaжeHuu", "nocTeлbHыx", "noroHu" },
  {"eлaugжa Byg", "woH yu3лu", "nuTep goycoH", "3ggu ryg" },
  {"o33u o36opH", "KeBuH 6payH", "gжuM yauT", "9H MakKeллeH" },
  {"gжoHHu gen", "BuH gu3eлb", "opлaHgo 6лyM", "Koppu cnuHKc" },
  {"Xyro Bы0BuHr", "ToMMu лu gжoHc", "yuлл cMuT", "ToM Kpy3" },
  {"4-a9", "5-a9", "2-a9", "1-a9" },
  {"c HA4aлa", "c Hagnucu HA koлbce", "co cTuxoB", "c npo3ы" },
  {"100", "200", "50", "okoлo 1200" },
  {"guHaMu4HocTb co6ыTuu", "HecoBnageHue uMeH", "gpyrou cюжeT", "B KHure HeT фpogo Top6uHca" },
    //20
  {"110", "111", "112", "191" },
  {"33", "22", "44", "11" },
  {"лeroлacy", "ruMлu", "aparoPHy", "reHgaлbфy" },
  {"6OMжoM", "cTPaHHuKoM", "6pog9жHuKOM", "KHuжHuKOM" },
  {"TeogeH", "geHETOp", "ToM 6oM6aHguл", "3oMeP" },
  {"wup", "Mup", "PoxaH", "6PuBeHguлb" },
  {"c opKaMu", "c ro6лuHaMu", "c люgbMu", "c BoлKoлaKAMu" },
  {"6eH лageH", "cKPoM6u", "wepcTonaл", "6peHgu3auK" },
  {"1 Hegeл9", "1 mec9LL", "9 Mec9LLEB", "15 лeT" },
  {"Mылucb B 6aHe", "xoguлu 3a rpu6aMu", "BopoBaлu aneлbcuHы", "Hюxaлu Kлeu" },
        //30
  {"87 лeT", "97 лeT", "400 лeT", "25 лeT" },
  {"Kopoлu люgeu", "kopoлu opKoB", "kopoлu 3лbфoB", "Kopoлu HeжuTeu" },
  {"gюpaHgaлb", "poaлuH", "3лeHguл", "фpocTMoyPH" },
  {"6лa3eP", "KeллeP", "TePPoH", "3лeCcaP" },
  {"3лpoHga", "reHgaлbфa", "geHEToPA", "Kы3ылgyPA" },
  {"7", "8", "9", "14" },
  {"nyTлu6ы", "roTлu6ы", "Mлu6ы", "oлagbлu6ы" },
  {"yroлb", "6yлaTHYю cTAлb", "cepe6Po-MuфPuл", "3oлoTo" },
  {"6aHgepлor", "6apлor", "Mapлor", "MArucTp uoga" },
  {"KypuTeлbHa9 Tpy6KA", "por", "лыcuHA", "6puTыe nogMыwKu" },
            //40
  {"люgu", "3лbфы", "opKu", "npoToCCы" },
  {"oHTы", "yHTы", "noHTы", "wMoHTы" },
  {"oHTucы", "oHT-repлы", "oHTuxu", "oHT6a6ы" },
  {"MuHAcMopryл", "opTxaHk", "ogyuP", "opaggyP" },
  {"6oлBaH", "rHuлoycT", "npocBeTuTeлb", "gypa4oK" },
  {"y3reH", "TeoreH", "TeogeH", "Mao LL3egyH" },
  {"cecTPA", "жeHA", "3oлoBKA", "cHoXa" },
  {"6oлbwue 6ogyHы", "Maлыe 6ogyHы", "MocKBA", "KpuBou Por" },
  {"cBEToKoHb", "cBEToTeHb", "CBETO3aP", "cBEToлaHb" },
  {"puBeHgeл", "oHaPueH", "MuTaPuoH", "3TpueHgeл" },
              //50
  {"wMыroл", "yroл", "nyroл", "cMEaropл" },
  {"weлo6", "Keлo6", "weлoc", "Keллoc" },
  {"reHgaлbф", "TeoreH", "geHETop", "nypreH" },
  {"MecTHocTb", "gpeBHuu Kopoлb", "oTBAжHыu 3лbф", "Tynou opk" },
  {"3лыe", "gepeB9HHыe", "MeeegлeHHыe", "rлynыe" },
  {"oTcyTcTBue kopoH", "oTcyTcTBue MaHTuu", "oTcyTcTBue geTEu", "oTcyTcTBue жeH" },
  {"rocTuHuca", "TpaKTup", "жuBoTHoe", "BыTpe3BuTeлb" },
  {"oHTы", "люgu", "ypyKXAu", "3лbфы" },
  {"rHouH", "rлouH", "gBaPф", "6aлuH" },
  {"лaMno4Ky uлbu4a", "np9gb cBoux BoлoC", "cBeTo4 3aPTы", "BePeBKy" },
                  //60
  {"100", "200", "500", "1000" },
  {"go6pыM", "HeBuguMыM", "6oraTыM", "o4eHb yMHыM" },
  {"HA 93ыKe ceBEpHыx 3eMeлb", "Ha MopryлbCKOM", "Ha MopgopcKoM", "HA uBpuTe" },
  {"2", "5", "7", "10" },
  {"kpenocTb nocлegHeu Hageжgы", "лeHuH Bcerga жuBOu", "KpenocTb cuлы", "kpauHuu py6eж" },
  {"6eлoe gepeBo", "6eлa9 KpenocTb", "6eлы por", "6eлыu 3a9LL" },
  {"nлocKocTonue", "6eлoKyPыe Boлocы", "6opogKA", "лыcuHa" },
  {"go CMePTu Hanyraлu nupaToB", "oTnyruBaлu BoлkoлakoB OT CTo9HoK", "neperopoguлu peky", "oHu 6uлucb go KoHLLA" },
  {"3oBuH", "APBEH", "3BE3guHKa", "лapa KpoфT" },
  {"MuHac-TupuT", "ocTruлuAT", "MuHacMopryл", "6лeKXoyK" },
                      //70
  {"go 6o9 y 4ePHыx BOpoT", "nocлe 6o9 y 4ePHыx BopoT", "He KopoHoBaлu Boo6щe", "oH cAM ce69 KopoHoBAл" },
  {"kapTuHы", "cBe4Ku", "BuлKu", "4ACOB" },
  {"фpogo", "caypoH", "ropлyM", "reHgaлbф" },
  {"2 gHEu", "4 gHEu", "2 Hegeлb", "2 лET" },
  {"HOC", "naлec", "yXO", "geTopogHыu opraH" },
  {"3oMEP", "ApBEH", "3oBuH", "3Mup 3oл9" },
  {"reHgaлbф", "APAroPH", "CAyPoH", "rpuMA" },
  {"xo66uTaHu9 3axBA4eHA", "xo66uTaHuu HeT", "xo66uTaHuю 3aTonuлo", "Hu4ero HE cлy4uлocb" },
  {"1 roga", "9 MEc9LLEB", "15 лeT", "3.5 roga" },
  {"5 MuHyT", "10 MuHyT", "15 MuHyT", "25 MuHyT" },
  };                      //80


  int OTB [80] =   {1, 3, 3, 2, 4, 3, 1, 1, 2, 4,
                    2, 3, 1, 4, 3, 1, 4, 2, 4, 1,
                    2, 1, 4, 3, 3, 1, 4, 2, 4, 1,
                    1, 1, 3, 4, 1, 1, 1, 3, 2, 2,
                    2, 1, 1, 2, 2, 3, 1, 1, 3, 1,
                    4, 1, 3, 3, 3, 4, 2, 1, 2, 2,
                    3, 2, 3, 3, 1, 1, 2, 1, 1, 2,
                    1, 4, 1, 3, 2, 3, 4, 1, 1, 4 };
  char name[50];
  int oTBeT, s;

int main () {
	
  
  std::cout << "\n\n\t\t\t\tOzZy prodaction";
  std::cout << "\n\t\t\t\t  coBMeCTHo c";
  std::cout << "\n\t\t\t        ToLKieN socieTy";
  std::cout << "\n\t\t\t\t npegcTaBл9юT";
  std::cout << "\n\n\t           TecT Ha 3HaHue TPuлoruu \"BлacTeлuH Koлeц\"";
  std::cout << "\n\n\t\t\tVersion 1.00  Bce npaBa 3aщuщeHы\n";
  std::cout << "\n\n\n\n\t\t\t\t   Ha4aTb ? ";

  std::cout << "\n\tBBeguTe BAwe repou4eckoe uM9 - ";
  std::cin >> name;
  std::cout << "  ok. uTak, Ha4HeM... \n";

  for (int i = 0; i < 80; i++)
    {
    std::cout << "\n   Bonpoc #"<< (i + 1) <<": "<< Bonp[i];
    std::cout << "\n\tBapuaHTы oTBeToB:\n";
    std::cout << "\t1. " << BAP[i][0] << ";\n";
    std::cout << "\t2. " << BAP[i][1] << ";\n";
    std::cout << "\t3. " << BAP[i][2] << ";\n";
    std::cout << "\t4. " << BAP[i][3] << ";\n";
    std::cout << "TBOu oTBeT - ";
    std::cin >> oTBeT;

    if (oTBeT == OTB[i]) s = s + 1;
    std::cout << "\t\t\t  npaBuлbHыu oTBeT - " << OTB[i] << ". gaлee ?";
	system("clear");
    std::cout << "\n";
   }
  std::cout << "\n\n\n  BыnoлHeHue TecTa okoH4eHo. BыgaTb pe3yлbTaTы";
  std::cout << "\n\n u3 80 BonpoCoB Bы oTBeTuлu npaBuлbHo Ha " << s;
  float koef = ((float)s / 80) * 100.0;
  std::cout << ", 4To cooTBeTcTByeT " << koef << "%";

  if (koef == 0.0) std::cout << "\n Bы ToлKueHa HaBePHo coBceM He cMoTpeлu u He 4uTaлu :(((";
  if (koef > 0.0 && koef <= 20.0) std::cout << "\n yPoBeHb Bawux 3HaHuu KpauHe cлa6 :(. ";
  if (koef > 20.0 && koef <= 40.0) std::cout << "\n ypoBeHb Bawux no3HaHuu Ha Hu3KoM ypoBHe :|. ";
  if (koef > 40.0 && koef <= 60.0) std::cout << "\n ypoBeHb BaLLiux no3HaHuu Ha cpegHeHbKoM ypoBHe, Hago Bыwe :0";
  if (koef > 60.0 && koef <= 80.0) std::cout << "\n ypoBeHb Bawux 3HaHuu Ha xopoweM ypoBHe :)";
  if (koef > 80.0 && koef < 100.0) std::cout << "\n y Bac oTлu4Hыe no3HaHu9 Cyg9 no eToMy Bы xopowuu ToлKuEHucT";
  if (koef == 100.0) std::cout << "\n y Bac npoCTo cynep-no3HaHu9. :)))";
  
  return 0;
}
