# CPP-Module-00

Bu projenin amaci size Temel CPP'yi ogretmektir.

***Projede başlamadan önce;*** Ilk once hic CPP bilmiyorsaniz, boş kafa ile cpp yazmak zor olur. Size tavsiyem ilk once vaktiniz varsa videolar izleyerek biraz temel atmak olur. Class nedir nasil olusturulur, Set ve Get fonksiyonlari nelerdir ne ise yarar, bunlari arastirmanizdir. Eger videolarda kafa patlamak istemiyorsaniz, [notion](https://alike-dirigible-d37.notion.site/CPP-Notlarim-86e5660b50d740b5bd6b8803c8ae99f0#e48a300c4e0c44008c30dc95ed1b14c0) hesabimda detayli bilgilere erisebilirsiniz. Burada bilgileri baslik baslik ayristirdim.

CPP pdf'te yazan kurallar geregi header dosyasinda ayni sekilde kod yazmamiza izin vermiyor. Her 2 miras almış class'i aynı header dosyasina koymamiza izin vermiyor. Bu sebeple header ve cpp dosyasi olarak ayrilmak zorunda. 

## **Ex00**
Ilk ex kolay oldugu icin yapabileceginizi dusunuyorum. Kucuk harfleri buyuk harfe ceviren basit bir program yazacaksiniz hepsi bu. Hic arguman almazsa pdf'teki loud ile baslayan yazi yazacak. Artik C'deki libft kutuphanesini kullanamayacaginiz icin c++ fonksiyonlarini kullanmaniz gerekiyor. Toupper fonksiyonu c++'ta da var ancak her fonksiyonu kullanmadan once https://en.cppreference.com/w/ 'dan fonksiyonun c++98 standartlarina uygun olup olmadigini kontrol etmelisiniz. 

## **Ex01**
Bu egzersizde bir telefon rehberi yapacaksiniz. Contact class'inizin name, surname, nickname, numarasi ve darkest Secret isminde 5 tane string kayidi olacak. Bunlara iletisim bilgileride diyebilirsiniz. Buradan iletisim bilgilerini alacaksiniz. Bu 5 string'in setterlarini ve getterlarini siz yapin halledersiniz.

Birde phonebook class'imiz olacak. Buda kendi icerisinde aldigimiz kisilerin listesini Contact[8] lik bir array'de tutacak. Bu array gizli olacak. 

Genelde 3 tane komutumuz olacak. ADD, SEARCH, EXIT. 
Program infinity loopta calisacak. ADD yazdigimiz zaman yeni kisi ekleme fonksiyonumuz calisacak. Ben burada her ince detaya dikkat etmeye calistim arkadaslarim bu kisimda cok patladi. do while kullanarak inputlari aldim. Ornek veriyorum isim yoksa isim atadim. Isme gelipte kisi ahmet123 yazmaya calistigi zaman hata verdirttim. Kisaca error durumlarini handleladim. Kodda her durumun detayli handlelanmis hali var, hepsini burada tek tek aciklamayacagim, bakarsiniz. Birde soyle bir detay var. Telefon rehberi 8 kisi tutabiliyor. 8'den fazla kisi eklemeye calistigimiz zaman tekrardan 0.indexin uzerine kayit yazmasi gerekiyor. Burayi istediginiz sekilde yapabilirsiniz. Ben %8 ile yaptim, tercih sizin. 

Yeri gelmisken sunuda soyleyeyim. cin bosluk gorene kadar input alir, getline ise butun bir satiri input alir. Burada butun inputlari getline ile aldim.

8 inputuda aldiktan sonra rehbere kayit yapacaksiniz. Her kayitta 0'dan 8'e kadar indexi arttiracaksiniz. 

EXIT komutu direkt olarak programdan cikis yapacak.

SEARCH komutu ise ekrana print etmek istedigimiz user'i arayacak. Hangi phone indexini verirsek, o indexteki useri ekrana print edecek.

Projeyi verdikten uzun bir sure sonra bu dokumantasyonu hazirladigim icin burada bir kac ufak detay vardi diye hatirliyorum. Mesela ekrana 0.indexi bastirirken ozellikle elimle ekrana bastigim ciktiniz kayma durumunu space atarak falan ayarlamistim. setw() fonksiyonu text manipulatoru ile bosluklari ayarlamistim diye hatirliyorum. setw[iomanip] sey yapiyor mesela icine 10 girdiniz. Ama ismim batu diyelim 4 harfli, batuyu saga yaslayip onune 6 bosluk atiyor ve 10'a tamamliyor. Bos kisimlari space ile tamamliyor. Bu sekilde ayarlayabilirsiniz. Isminin uzunlugu 10 index'ten fazla isminin onunde atiyorum asdasdasdads.| gibi nokta koyup bitirmeniz gerekiyor tasmamasi gerekiyor. Birde hatirladigim kadariyla turkce karakterlerde kayma yapiyordu ama bu normaldi herhalde. 

c_str vardi stringi char*'a ceviriyor. bilgi iste lazim olur kullanirsin.

Hatirladiklarim bu kadar, hatami yakalarsaniz duzeltmemi istediginiz bir yer olursa haber verin duzeltme yaparim.

## **Ex02**
Burada bize bir header dosyasi, bir log dosyasi birde test dosyasi(main dosyasi yani) veriyor. Bizden istedigi sey ise Account.cpp'yi yazmamiz. Burada header dosyasina baktigimiz zaman belirli bilgileri goruyoruz. 

- AccountIndex = hesap index numarasi
- amount = para miktari
- nbdeposits = ne kadar para yatirdiginin sayisi
- nbwithdrawals = ne kadar para cektiginin sayisi

static olanlar ise su sekilde. [static](https://stackoverflow.com/questions/15725922/static-function-a-storage-class-may-not-be-specified-here) degiskenleri nasil cpp'de kullaniriz kullanimi linkte var. Direkt header dosyasinin icerisindeki degiskene ulasip kullaniyoruz.

- nbAccounts = totalde kac tane musteri varsa onun sayisi
- totalAmount = bankadaki total para
- totalNbDeposits = butun musterilerin bankaya kac kere para yatirdiginin total sayisi
- totalNbWithdrawals =  butun musterilerin bankadan kac kere para cektiginin total sayisi

set ve getleri yazarsiniz klasik.

main'e gelin, programi yarida keserek cpp dosyasini sira ile yazmaya calisin.
Her [Account::displayAccountsInfos();] gordugunuzde exit(1); atarak logdaki ciktilari kontrol ederek cpp dosyasini yazmaya calisin. 

Programi yarida keserek, ciktilari terminal ekraninda almaya calisin. Adim adim ilerleyerek CPP dosyasini yazmaya calisin. Her seferinde log dosyasindaki ciktilara bakarak, duzgun kod yazmaya calisin. Log dosyasindaki ciktilarin bire bir aynisi olmak zorunda. Evo'da ise evoya gelen arkadas log dosyasini indirip bu dosya ile karsilastirma yaparak kontrol etmesi gerekiyor.

Log dosyasinda bastiracaginiz bir zaman damgasi var. Bu zaman damgasini arastirarak cesitli fonksiyonlarla farkli sekilde yazabilirsiniz bir suru yolu var.

---

Default Constructor -> herhangi bir islem yapmayacak, sadece olusturulan musterinin degerlerine default olarak 0 degerini atayacak.

Parametreli Constructor(int initial_depozit) -> Verilen depozito(kendi hesabina para yatirma) miktarini kendi hesabina yatiracak, Total depozito miktarini arttiracak ve ekrana zaman damgasi bastirip ardindan musteri olusturuldu ibaresinde bir yazi bastiracak.

ornek;
```c++
[20240812_185857] index:0;amount:42;created
[20240812_185857] index:1;amount:54;created
[20240812_185857] index:2;amount:957;created
[20240812_185857] index:3;amount:432;created
[20240812_185857] index:4;amount:1234;created
[20240812_185857] index:5;amount:0;created
[20240812_185857] index:6;amount:754;created
[20240812_185857] index:7;amount:16576;created
```
yukarida oldugu gibi yapmaniz gerekiyor.

---

displayAccountInfos -> Ekrana timestamp bastirip, hesaplarin durumunu yazdiracak. Totalde kac hesap oldugu, toplam para miktari, toplam depozito sayisi, toplam withdrawal sayisi seklinde.

```c++
[20240812_185857] accounts:8;total:20049;deposits:0;withdrawals:0
```
seklinde bir cikti vermesi gerekiyor. 

---

checkAmount -> Kendi hesabindaki para miktarini return edecek.

---

displayStatus -> Hesaplarin durumunu gosterecek. hesaplarda ne kadar para var, yok onu gormek icin.

```c++
[20240812_191428] index:0;amount:42;deposits:0;withdrawals:0
[20240812_191428] index:1;amount:54;deposits:0;withdrawals:0
[20240812_191428] index:2;amount:957;deposits:0;withdrawals:0
[20240812_191428] index:3;amount:432;deposits:0;withdrawals:0
[20240812_191428] index:4;amount:1234;deposits:0;withdrawals:0
[20240812_191428] index:5;amount:0;deposits:0;withdrawals:0
[20240812_191428] index:6;amount:754;deposits:0;withdrawals:0
[20240812_191428] index:7;amount:16576;deposits:0;withdrawals:0
```
Sadece hesap durumunu ekranda bastiracak baska bir olayi yok.

---

makeDeposit -> Hesaba para yatiracak. Musterinin kendi banka hesabina para yatiracak. Total depozito miktarini arttiracak. Kendi depozito sayisini ve total depozito sayisini arttiracak.


```c++
[20240812_190942] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
[20240812_190942] index:1;p_amount:54;deposit:765;amount:819;nb_deposits:1
[20240812_190942] index:2;p_amount:957;deposit:564;amount:1521;nb_deposits:1
[20240812_190942] index:3;p_amount:432;deposit:2;amount:434;nb_deposits:1
[20240812_190942] index:4;p_amount:1234;deposit:87;amount:1321;nb_deposits:1
[20240812_190942] index:5;p_amount:0;deposit:23;amount:23;nb_deposits:1
[20240812_190942] index:6;p_amount:754;deposit:9;amount:763;nb_deposits:1
[20240812_190942] index:7;p_amount:16576;deposit:20;amount:16596;nb_deposits:1
--------------------------------------------------------------------------------
[20240812_191155] accounts:8;total:21524;deposits:8;withdrawals:0
```
seklinde cikti vermesi gerekiyor. Burada farkettiyseniz 0.musteride hesabinda 42 TL var diyelim. Uzerine hesabina 5 TL yatiriyor ve toplamda 47 TL'si oluyor. Ardindan kendi hesabinda para yatirma islemi 1 oluyor. Totalde ise displayAccountInfos'u calistirdiktan sonra(ayirdigim kisim), hepsinin total miktarini, total depozito sayisini gorebilirsiniz. Her biri 1'er kez para yatirdigi icin toplam 8 kez para yatirma islemi gercekti. Hepsinin total para miktari ise total kisminda yaziyor.

---

makeWithdrawal -> Bu fonksiyon ise hesaptan para cekme durumunu gosterecek. Hesabinizda 50 tl var diyelim siz 20 tl cekerseniz hesabinizda 30tl kalir. Bunun durumunu kontrol edip setlediginiz fonksiyondur. Ufak bir durum kontrolu var. Eger hesabinizda hic para yoksa 0 tl'niz varsa ve siz 100 tl para cekmeye calisirsaniz, Red yersiniz. Bunun kontrolunu eklemeyi unutmayin.

```c++
[20240812_191826] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
[20240812_191826] index:2;p_amount:1521;withdrawal:657;amount:864;nb_withdrawals:1
[20240812_191826] index:3;p_amount:434;withdrawal:4;amount:430;nb_withdrawals:1
[20240812_191826] index:4;p_amount:1321;withdrawal:76;amount:1245;nb_withdrawals:1
[20240812_191826] index:5;p_amount:23;withdrawal:refused
[20240812_191826] index:6;p_amount:763;withdrawal:657;amount:106;nb_withdrawals:1
[20240812_191826] index:7;p_amount:16596;withdrawal:7654;amount:8942;nb_withdrawals:1
---------------------------------------------------------------------------------------
displayaccountinfos;
[20240812_192014] accounts:8;total:12442;deposits:8;withdrawals:6
```
Ekrana yukaridaki gibi bir cikti vermesi gerekiyor. refused yazan yerler ise az once yukarida bahsettigim durumdur. 819 TL'niz var ve siz 34 tl cektiniz, total olarak bankada 785 tl'niz kalir. Bu sekilde isliyor ve her seferinde total para cekme sayisini ve musterilerin para cekme sayisini guncellemelisiniz.

---

Destructor -> Zaman damgasi bastirip hesaplari kapatacaksiniz baska bir sey yok.

```c++
[20240812_192100] index:7;amount:8942;closed
[20240812_192100] index:6;amount:106;closed
[20240812_192100] index:5;amount:23;closed
[20240812_192100] index:4;amount:1245;closed
[20240812_192100] index:3;amount:430;closed
[20240812_192100] index:2;amount:864;closed
[20240812_192100] index:1;amount:785;closed
[20240812_192100] index:0;amount:47;closed
```
sekilde goruldugu gibi. Burada pdf'tede belirtmis destructorlarin parcalanma sirasinin burada bir onemi yok.

---

Hepinize kolay gelsin. Bir follow edersiniz artik butun c++ projelerine dokumantasyon cikartacagim. Umarim isinize yarar.
