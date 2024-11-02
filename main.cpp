#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include <cmath>
#include <stdlib.h>
#define PI 3.141
#define KOTAK char(178)
#define BATAS_KIRI 16
#define BATAS_KANAN 59
#define BATANG char(219)

using namespace std;

void spltv(){

	int x1,y1,z1,x2,y2,z2,x3,y3,z3;
	float d1,d2,d3, dx, dy, dz,d;
	double x,y,z;

	cout<<"PROGRAM PERHITUNGAN SPLTV // BIMAXYZ"<<endl;

	cout<<"Masukan nilai x1= ";
	cin>>x1;
	cout<<"masukan nilai y1= ";
	cin>>y1;
	cout<<"masukan nilai z1= ";
	cin>>z1;
	cout<<"masukan hasil pers. 1= ";
	cin>>d1;
	cout<<"Masukan nilai x2= ";
	cin>>x2;
	cout<<"masukan nilai y2= ";
	cin>>y2;
	cout<<"masukan nilai z2= ";
	cin>>z2;
	cout<<"masukan hasil pers. 2= ";
	cin>>d2;
	cout<<"Masukan nilai x3= ";
	cin>>x3;
	cout<<"masukan nilai y3= ";
	cin>>y3;
	cout<<"masukan nilai z3= ";
	cin>>z3;
	cout<<"masukan hasil pers. 3= ";
	cin>>d3;

	d=(x1*y2*z3)+(y1*z2*x3)+(z1*x2*y3)-(x3*y2*z1)-(y3*z2*x1)-(z3*x2*y1);

	dx=(d1*y2*z3)+(y1*z2*d3)+(z1*d2*y3)-(d3*y2*z1)-(y3*z2*d1)-(z3*d2*y1);

	dy=(x1*d2*z3)+(d1*z2*x3)+(z1*x2*d3)-(x3*d2*z1)-(d3*z2*x1)-(z3*x2*d1);

	dz=(x1*y2*d3)+(y1*d2*x3)+(d1*x2*y3)-(x3*y2*d1)-(y3*d2*x1)-(d3*x2*y1);

	x=dx/d;
	y=dy/d;
	z=dz/d;

	cout<<x1<<"x"<<y1<<"y"<<z1<<"z"<<"="<<d1<<endl;
	cout<<x2<<"x"<<y2<<"y"<<z2<<"z"<<"="<<d2<<endl;
	cout<<x3<<"x"<<y3<<"y"<<z3<<"z"<<"="<<d3<<endl;
	cout<<"hasilnya....."<<endl;

	cout<<"jadi x = "<<x<<endl;
	cout<<"jadi y = "<<y<<endl;
	cout<<"jadi z = "<<z<<endl;

}

void relativitas()
{
  cout << "##  Program C++ Rumus Relativitas kesetaraan energi (diam) Pada Laju cahaya 3x10^8, Einstein ##" << endl;
  cout << "==================================" << endl;

  float eE;
  double mE;

  cout<<"Masukkan Massa= ";
  cin>>mE;

  eE=mE*3*pow(10,8)*3*pow(10,8);

  cout<<"Hasilnya adalah = "<<eE<<"J"<<endl;
}

void search()
{
  cout << "##  Program C++ Pencarian Array ##" << endl;
  cout << "==================================" << endl;
  cout << endl;

  int input[100], arr_count, i, num;

  cout << "Input jumlah element Array: ";
  cin >> arr_count;

  cout << "Input "<< arr_count << " angka (dipisah dengan enter): " ;
  cout << endl;

  // simpan setiap angka yang diinput ke dalam array
  for(i = 0; i < arr_count; i++){
    cin >> input[i];
  }

  cout << endl;

  cout << "Input angka yang akan dicari: ";
  cin >> num;

  // proses pencarian array
  for(i = 0; i < arr_count; i++){
    if(input[i] == num){
      cout << "Angka ditemukan pada index ke-" << i;
      break;
    }
  }

  if(i == arr_count){
    cout  << "Angka tidak ditemukan";
  }

  cout << endl;
}

void biner()
{
    int aa[10], nn, ii;

    cout << "Program C++ Konversi Desimal ke Biner" << endl;

    cout << "Masukkan angka desimal/terserah= ";
    cin >> nn;

    for (ii = 0; nn > 0; ii++)
    {
        aa[ii] = nn % 2;
        nn = nn / 2;
    }
    cout << "angka binernya adalah= ";
    for (ii = ii - 1; ii >= 0; ii--)
    {
        cout << aa[ii];
    }

    cout << "\n"
         << endl;
}

void usaha()
{
    double gyaa, pm;
    float usha;

    cout << "ππππππππππππππππππππ" << endl;
    cout << "Program mencari usaha" << endl;
    cout << "ππππππππππππππππππππ" << endl;
    cout << "masukkan gaya N= ";
    cin >> gyaa;
    cout << "Masukkan Perpindahan (m)= ";
    cin >> pm;

    usha = gyaa * pm;

    cout << "Hasilnya adalah " << usha << "J" << endl;
}

void debit()
{
    double vloum, ente;
    float qiu;

    cout << "------------------------------" << endl;
    cout << "Program efisiensi daya" << endl;
    cout << "$$$$$$$$$$$$$$$$$$$$$$" << endl;
    cout << "------------------------------" << endl;
    cout << "masukkan volume air(m3)= ";
    cin >> vloum;
    cout << "masukkan waktu= ";
    cin >> ente;
    qiu = vloum / ente;

    cout << "hasil debit air=  " << qiu << " m3/s" << endl;
}

void efisiensi()
{
    double Wk, Wm;
    float efisien;

    cout << "------------------------------" << endl;
    cout << "Program efisiensi daya" << endl;
    cout << "$$$$$$$$$$$$$$$$$$$$$$" << endl;
    cout << "------------------------------" << endl;
    cout << "masukkan energi keluar= ";
    cin >> Wk;
    cout << "masukkan energi masuk= ";
    cin >> Wm;
    efisien = Wk / Wm * 100 / 100;

    cout << "hasil efisiensi energi=  " << efisien << endl;
}

void lavoisier()
{
    double ex, ye, zet;
    float sebreak, ketreak, setreak;

    cout << "------------------------------" << endl;
    cout << "Program Kimia Hukum Kekekalan Massa" << endl;
    cout << "ketik 0 jika mencari hasil dari reaksi hukum kekekalan massa" << endl;
    cout << "------------------------------" << endl;
    cout << "masukkan unsur x sebelum reaksi= ";
    cin >> ex;
    cout << "masukkan unsur y ketika reaksi= ";
    cin >> ye;
    cout << "masukkan unsur z setelah reaksi= ";
    cin >> zet;
    sebreak = zet - ye;
    ketreak = zet - ex;
    setreak = ex + ye;

    cout << "hasil sebelum reaksi=  " << sebreak << endl;
    cout << "hasil ketika reaksi=  " << ketreak << endl;
    cout << "hasil setelah reaksi=  " << setreak << endl;
}

void segilima()
{
    double alima, dlima, atema;
    double klima, plima, A2lima1, A2lima;

    cout << " 1 Menghitung Luas Pentagon (Diket Apotema) (nb: tahap pengembangan)" << endl;
    cout << " 2 Menghitung Diagonal Pentagon" << endl;
    cout << " 3 Menghitung Keliling Pentagon" << endl;
    cout << "masukkan sisi= ";
    cin >> alima;
    cout << "masukkan sisi apotema= ";
    cin >> atema;
    cout << "masukkan diagonal= ";
    cin >> dlima;

    A2lima = (5 / 4 * sqrt(3)) * alima * alima;

    A2lima1 = 5 * atema * alima / 2;

    plima = (1 + sqrt(5) / 2) * alima;
    klima = 5 * alima;

    cout << "hasilnya keliling adalah= " << klima << ", hasilnya diagonal adalah= " << plima << ", hasilnya luas adalah= " << A2lima << ",luas dengan apotema adalah= " << A2lima1 << endl;
}

void kalkulator()
{
    double bil1, bil2;
    int bil3, bil4;
    int pil;
    string operasi;
    float hasil;

    cout << "1. Penjumlahan" << endl;
    cout << "2. Pengurangan" << endl;
    cout << "3. Perkalian" << endl;
    cout << "4. Pembagian" << endl;
    cout << "5. Modulus" << endl;
    cout << endl;
    cout << "Masukan Pilihan : ";
    cin >> pil;
    cout << "Masukan Bilangan pertama : ";
    cin >> bil1;
    cout << "Masukan Bilangan kedua : ";
    cin >> bil2;
    cout << "Masukan (modulus) Bilangan ketiga : ";
    cin >> bil3;
    cout << "Masukan (modulus)Bilangan keempat : ";
    cin >> bil4;

    switch (pil)
    {
    case 1:
        hasil = bil1 + bil2;
        operasi = '+';
        break;
    case 2:
        hasil = bil1 - bil2;
        operasi = '-';
        break;
    case 3:
        hasil = bil1 * bil2;
        operasi = '*';
        break;
    case 4:
        hasil = bil1 / bil2;
        operasi = '/';
        break;
    case 5:
        hasil = bil3 % bil4;
        operasi = '%';
        break;
        cout << "Salah Masukan Operator" << endl;
    }
    cout << "-----------------------------" << endl;
    cout << "    " << bil1 << operasi << bil2 << "=" << hasil << endl;
    cout << "-----------------------------" << endl;
}

void tekanan()
{
    double gya, Aluas, masjen, pergra, kedalam, berjen;
    float ptekanan, ptekanan1, ptekanan12, ptekanan2;
    cout << " Menghitung tekanan padat cair dan gas By bima " << endl;
    cout << " Masukkan Gaya= ";
    cin >> gya;
    cout << " Masukkan luaspermukaan(m2) = ";
    cin >> Aluas;
    cout << " Masukkan massa jenis (cair kg/m3) = ";
    cin >> masjen;
    cout << " Masukkan percepatan gravitasi(cair m/s2) = ";
    cin >> pergra;
    cout << " Masukkan kedalaman zat(cair m) = ";
    cin >> kedalam;
    cout << " Masukkan berat jenis(cair N/m3) = ";
    cin >> berjen;

    ptekanan = gya / Aluas;
    ptekanan1 = masjen * pergra * kedalam;
    ptekanan12 = berjen * kedalam;
    ptekanan2 = 760 - (kedalam / 10);
    cout << "-----------------------------" << endl;
    cout << " tekanan padatnya =" << ptekanan << endl;
    cout << " tekanan hidrostatisnya = " << ptekanan1 << " atau jika diket berat jenis " << ptekanan12 << endl;
    cout << " tekanan zat gas (760 mmhg)  = " << ptekanan2 << endl;
    cout << " Thank You, Good Game" << endl;
    cout << "-----------------------------" << endl;
}

void tuas()
{
    double wf, wB, lk, lb, ptuas;
    float kmk;
    cout << " Menghitung Gaya yng diperlukan( Tuas ) By bima " << endl;
    cout << " Masukkan berat beban (N)= ";
    cin >> wB;
    cout << " Masukkan lengan kuasa = ";
    cin >> lk;
    cout << " Masukkan lengan beban= ";
    cin >> lb;
    cout << " Atau Panjang Tuas(0 kalau diket lk lb)= ";
    cin >> ptuas;
    wf = wB * lb / lk;
    kmk = lk / lb;
    kmk = wf / wB;
    lk = ptuas - lb;
    lb = ptuas - lk;
    cout << "---------------------------------------------------------------" << endl;
    cout << " Jika gaya yang diperlukan untuk mengangkat beban Hasil nya =" << wf << endl;
    cout << " Jika keuntungan mekanisnya adalah = " << kmk << endl;
    cout << " lengan beban   = " << lb << endl;
    cout << " lengan kuasa   = " << lk << endl;
    cout << "---------------------------------------------------------------" << endl;
}

void resultan()
{
    double R1, R2, R3, R4;
    float force, force2, force3;
    cout << " Menghitung Resultan gaya By bima " << endl;
    cout << " Masukkan gaya 1(mendorong ke kanan)= ";
    cin >> R1;
    cout << " Masukkan gaya 2(mendorong ke kanan)= ";
    cin >> R2;
    cout << " Masukkan gaya 3(mendorong ke kiri/kanan) = ";
    cin >> R3;
    cout << " Masukkan gaya 4(mendorong ke kiri) = ";
    cin >> R4;
    force = R1 + R2 + R3 + R4;
    force2 = R1 + R2 - R3 - R4;
    force3 = R1 + R2 + R3 - R4;

    cout << "---------------------------------------------------------------" << endl;
    cout << " Jika Resultan gaya searah Hasil nya =" << force << endl;
    cout << " Jika Resultan Gaya berlawanan Arah (if gaya ke 3 ke kanan) = " << force3 << endl;
    cout << " Jika Resultan Gaya berlawanan Arah (if gaya ke 3 kekiri)   = " << force2 << endl;
    cout << "---------------------------------------------------------------" << endl;
}

void daya()
{
    double daya, watt, tawal, takhir;
    cout << " Menghitung Daya By bima " << endl;
    cout << " Masukkan Usaha (Joule)= ";
    cin >> watt;
    cout << " Masukkan waktu awal= ";
    cin >> tawal;
    cout << " Masukkan waktu akhir= ";
    cin >> takhir;
    daya = watt / (takhir - tawal);
    cout << " Jadi Daya (Watt) nya = " << daya << endl;
}

void gelombang()
{
    double v, v1, m, T, f;
    cout << " Menghitung Cepat Rambat Gelombang Bunyi By bima " << endl;
    cout << " masukkan nilai panjang gelombang lambda= ";
    cin >> m;
    cout << " masukkan nilai periode waktu s = ";
    cin >> T;
    cout << " atau masukkan frekuensi(Hz)=";
    cin >> f;
    v = m / T;
    v1 = m * f;
    cout << " Hasil nya cepat rambat gel.bunyi(lamda) =" << v << ", Dan dalam frekuensi (Hz)=" << v1 << endl;
}

void pantul()
{
    double s, v21, t4;
    cout << "menghitung Jarak dengan Bunyi Pantul By Bima " << endl;
    cout << "Masukkan Cepat Rambat Gelombang Bunyi (m/s)= ";
    cin >> v21;
    cout << " Masukkan jarak/kedalaman(m)= ";
    cin >> t4;
    s = v21 * t4 / 2;
    cout << " hasilnya adalah= " << s << endl;
}

void geometri()
{
    double a, ra, r, n, un2, sn2, un1, sn1;
    cout << "masukkan nilai a= ";
    cin >> a;
    cout << "masukkan nilai rasio 1 keats= ";
    cin >> ra;
    cout << " jika rasio kebawah, masukkan= ";
    cin >> r;
    cout << "masukkan suku ke- ";
    cin >> n;
    un1 = a * pow(ra, (n - 1));
    un2 = a * pow(r, (n - 1));
    sn1 = a * (pow(ra, n) - 1) / ra - 1;
    sn2 = a * (1 - (pow(r, n))) / 1 - r;

    cout << "jika r>1 suku ke - " << n << "=" << un1 << ", dan jika r <1 suku ke - " << n << "=" << un2 << endl;
    cout << "jika r>1 jumlah deret geometri adalah " << sn1 << ", dan jika r<1 jumlah deret geometrinya adalah " << sn2 << endl;
}

void aritmatika()
{
    int a, b, n;
    float Ut, Un, Sn;
    printf("Suku pertama a     : ");
    scanf("%d", &a);
    printf("Beda         b           : ");
    scanf("%d", &b);
    printf(" suku ke - : ");
    scanf("%d", &n);
    Un = a + (n - 1) * b;
    Sn = 0.5 * b * (n * n) + (a - 0.5 * b) * n;
    Ut = 0.5 * (a + Un);
    cout << " suku ke -" << n << " =" << Un << endl;
    cout << " jumlah deret aritmatika nya : " << Sn << endl;
    cout << "suku tengah (if ganjil) : " << Ut << endl;
}

void kalor()
{
    double m, c, t1, t2, t3;

    float q1, q2;
    cout << " Program kalor buatan bima " << endl;
    cout << " masukkan massa benda kg : ";
    cin >> m;
    cout << " masukkan kalor jenis (J/kgderajatC)";
    cin >> c;
    cout << "masukkan suhu awal: ";
    cin >> t1;
    cout << "masukkan suhu akhir: ";
    cin >> t2;
    cout << "atau langsung perubahan suhu: ";
    cin >> t3;
    cout << "\n";
    q1 = m * c * (t2 - t1);
    q2 = m * c * t3;
    cout << " kalor (J) dengan diket t1 t2 nya adalah : " << q1 << endl;
    cout << " kalor (J) dengan diket delta t adalah :" << q2 << endl;
}

float waktu2(float vo, float vt, float a)
{
    float hasil2;
    hasil2 = vt / (vo + a);
    return hasil2;
}

int waktu1(int s, int v)
{
    int hasil1;
    hasil1 = s / v;
    return hasil1;
}

void skala()
{
    int jp, js;
    float skala;
    cout << "menghitung skala" << endl;
    cout << "silahkan masukkan jarak pada peta :";
    cin >> jp;
    cout << "silahkan masukkan jarak sebenarnya :";
    cin >> js;
    cout << "\n";
    skala = (js / jp);
    cout << "maka skalanya adalah 1:" << skala << endl;
}

void trapesium()
{
    cout << "------------------------------------------------------------------------------------------------------------------------"
         << endl;
    cout << "-------------------------------------------Luas & Keliling trapesium----------------------------------------------------"
         << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------"
         << endl;

    int s1, s2, t, a, b, c, d, pilih, Luas, keliling;

    cout << " 1. Luas trapesium " << endl;
    cout << " 2. Keliling trapesium " << endl;
    cout << " Silahkan pilih :";
    cin >> pilih;

    switch (pilih)
    {
    case 1:
        cout << endl;
        cout << "Masukan nilai sisi bawah: ";
        cin >> s1;
        cout << "Masukan nilai sisi atas: ";
        cin >> s2;
        cout << "Masukan nilai tinggi: ";
        cin >> t;
        cout << endl;

        Luas = 0.5 * t * (s1 + s2);

        cout << "Hasil dari Luas trapesium :" << Luas << endl;
        break;

    case 2:
        cout << endl;
        cout << "Masukan nilai sisi pertama: ";
        cin >> a;
        cout << "Masukan nilai sisi kedua: ";
        cin >> b;
        cout << "Masukan nilai sisi ketiga: ";
        cin >> c;
        cout << "Masukan nilai sisi keempat: ";
        cin >> d;
        cout << endl;

        keliling = a + b + c + d;

        cout << "Hasil dari Keliling trapesium :" << keliling << endl;
        break;

    default:
        cout << "pilihan mu salah";
    }
}

void ketupat()
{
    cout << "------------------------------------------------------------------------------------------------------------------------"
         << endl;
    cout << "-----------------------------------------Luas & Keliling Belah Ketupat--------------------------------------------------"
         << endl;
    cout << "------------------------------------------------------------------------------------------------------------------------"
         << endl;

    int d1, d2, sisi, pilih, Luas, keliling;

    cout << " 1. Luas Belah Ketupat " << endl;
    cout << " 2. Keliling Belah Ketupat " << endl;
    cout << " Silahkan pilih :";
    cin >> pilih;

    if (pilih == 1)
    {
        cout << endl;
        cout << "Masukan nilai diagonal pertama: ";
        cin >> d1;
        cout << "Masukan nilai diagonal kedua: ";
        cin >> d2;
        cout << endl;

        Luas = 0.5 * d1 * d2;

        cout << "Hasil dari Luas Belah Ketupat :" << Luas << endl;
    }
    else if (pilih == 2)
    {
        cout << endl;
        cout << "Masukan nilai sisi : ";
        cin >> sisi;
        cout << endl;

        keliling = 4 * sisi;

        cout << "Hasil dari Keliling Belah Ketupat :" << keliling << endl;
    }
    else
    {
        cout << "pilihan mu salah";
    }
}

void layang()
{
    double d1, d2, a, b, K, L;

    cout << "\t\t\tMENGHITUNG KELILING DAN LUAS LAYANG-LAYANG" << endl;
    cout << "======================================================================================" << endl;
    cout << "Masukkan diagonal 1 atau d1 = ";
    cin >> d1;
    cout << "Masukkan diagonal 2 atau d2 = ";
    cin >> d2;
    cout << "Masukan sisi a = ";
    cin >> a;
    cout << "Masukan sisi b = ";
    cin >> b;
    cout << "===============================\n"
         << endl;

    cout << "Rumus Keliling Layang-Layang = 2*(a+b)" << endl;
    K = 2 * (a + b);
    cout << "Keliling = " << K << endl;

    cout << "\nRumus Luas Layang-Layang = d1*d2/2" << endl;
    L = d1 * d2 / 2;

    cout << "Luas = " << L << endl;
}

void volume_prisma()
{
    float tp, a, ta, volume;
    cout << "Masukan nilai alas: ";
    cin >> a;
    cout << "Masukan nilai tinggi alas: ";
    cin >> ta;
    cout << "Masukan nilai tinggi prisma: ";
    cin >> tp;

    volume = (0.5 * a * ta) * tp;

    cout << "Hasil dari volume prisma segitiga :" << volume << endl;
}

void luas_prisma()
{
    float a, ka, t, Luas;
    cout << "Masukan nilai alas: ";
    cin >> a;
    cout << "Masukan nilai keliling alas: ";
    cin >> ka;
    cout << "Masukan nilai tinggi: ";
    cin >> t;

    Luas = (2 * a) + (ka * t);

    cout << "Hasil dari Luas prisma:" << Luas << endl;
}

char no[15], nama[20];
int d, e, m;
long a, b1, b2, b3;
float b, c;
void tagihan()
{
    cout << "Input No. Rekening : ";
    cin >> no;
    cout << "Input Nama Pelanggan : ";
    cin >> nama;
    cout << "Input penunjuk meter bulan sebelumnya : ";
    cin >> d;
    cout << "Input penunjuk meter bulan sekarang : ";
    cin >> e;
    m = e - d;
    cout << "Jumlah pemakaiannya adalah " << m << " kwh \n";

    if (m >= 20)
    {
        m -= 20;
        b1 = 20 * 500;
        if (m >= 40)
        {
            m -= 40;
            b2 = 40 * 800;
            b3 = m * 1000;
        }
        else
            b2 = m * 800;
    }
    else
        b1 = m * 500;
    a = b1 + b2 + b3;
    b = 0.1 * a;
    c = 30000 + a + b;
    cout << "Tagihan listrik atas pelanggan yang bernama " << nama << " adalah " << c;
}

float pangkat(int x, int y)
{
    return (exp(y * log(x)));
}

void log()
{
    float hasil;
    int a, b;

    cout << "masukkan a : ";
    cin >> a;
    cout << "masukkan b : ";
    cin >> b;
    hasil = pangkat(a, b);
    cout << "hasil pangkat: " << hasil << endl;
}

void pytha()
{
    float alas;
    cout << "masukkan panjang sisi alas (m)   : ";
    cin >> alas;
    float tegak;
    cout << "masukkan panjang sisi tegak (m)  : ";
    cin >> tegak;
    cout << "sisi miring (m)                  :" << sqrt((alas * alas) + (pow(tegak, 2))) << endl;
    cout << "luas (m2)                        : " << 0.5 * alas * tegak << endl;
    system("pause");
}

void akar()
{
    double a, b, c;
    cout << " masukan nilai a :";
    cin >> a;
    c = sqrt(a);
    cout << " akar " << a << " =" << c;
}

void tegangan()
{
    float i, r, v;
    cout << "Besar Arus I = ";
    cin >> i;
    cout << "Besar Hambatan R = ";
    cin >> r;
    v = i * r;
    cout << "Besarnya Tegangan V = " << v << " volt" << endl;
}

void arus()
{
    float I, r2, v2;
    cout << "Besar Tegangan V = ";
    cin >> v2;
    cout << "Besar Hambatan R = ";
    cin >> r2;
    I = (v2 / r2);
    cout << "hasilnya= " << I << endl;
}

void hambatan()
{
    double v3, i3;
    float ohm;
    cout << "Besar Tegangan V = ";
    cin >> v3;
    cout << "Besarnya Arus I = ";
    cin >> i3;
    ohm = (v3 / i3);
    cout << "hasilnya = " << ohm << endl;
}

void energi()
{
    float massa, tinggi, kecepatan, potensial, kinetik, mekanik;

    cout << "Program Menghitung Energi Mekanik Suatu Benda" << endl
         << endl;

    cout << "masukkan Massa Benda : ";
    cin >> massa;
    cout << "masukkan Tinggi Benda : ";
    cin >> tinggi;
    cout << "masukkan Kecepatan Benda : ";
    cin >> kecepatan;

    potensial = massa * 9.8 * tinggi;
    kinetik = massa / 2 * (kecepatan * kecepatan);
    mekanik = potensial + kinetik;

    cout << endl;
    cout << "Energi Potensialnya Adalah : " << potensial << endl;
    cout << "Energi Kinetiknya Adalah : " << kinetik << endl;
    cout << "Energi Mekaniknya Adalah : " << mekanik << endl;
}

void kec()
{
    int s, t, v;
    cout << " Mencari nilai kecepatan dalam satuan km " << endl;
    cout << endl;
    cout << "masukan jarak yang akan di tempuh: ";
    cin >> s;
    cout << "Masukan waktu tempuh: ";
    cin >> t;
    v = (s / t);
    cout << "Kecepatan nya ialah: " << v << "km/jam" << endl;
}

void per()
{
    int a, v, t;
    cout << " Mencari nilai percepatan dalam satuan km/jam^2 " << endl;
    cout << endl;
    cout << "masukan kecepatan: ";
    cin >> v;
    cout << "Masukan waktu tempuh: ";
    cin >> t;
    a = (v / t);
    cout << "percepatan nya ialah: " << a << "km/jam^2" << endl;
}

void gaya()
{
    int F, m, a;
    cout << " Program Mencari Gaya" << endl;
    cout << endl;
    cout << "masukkan massa: ";
    cin >> m;
    cout << "masukkan percepatan: ";
    cin >> a;
    F = m * a;
    cout << "Besar gaya tersebut adalah: " << F << " N " << endl;
}

void lope()
{
    fflush(stdin);
    int i, j;
    for (i = 1; i <= 22; i++)
    {
        for (j = 1; j <= 60; j++)
        {
            if (i == 1)
                if (((j >= 14) && (j <= 23)) || ((j >= 39) && (j <= 48)))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 2)
                if (((j >= 11) && (j <= 26)) || ((j >= 36) && (j <= 51)))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 3)
                if (((j >= 9) && (j <= 28)) || ((j >= 34) && (j <= 53)))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 4)
                if (((j >= 7) && (j <= 30)) || ((j >= 32) && (j <= 55)))
                    cout << "*";
                else
                    cout << " ";
            else if ((i >= 5) && (i <= 8))
                if ((j >= 5) && (j <= 57))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 9)
                if ((j >= 7) && (j <= 55))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 10)
                if ((j >= 9) && (j <= 53))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 11)
                if ((j >= 11) && (j <= 51))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 12)
                if ((j >= 13) && (j <= 49))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 13)
                if ((j >= 15) && (j <= 47))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 14)
                if ((j >= 17) && (j <= 45))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 15)
                if ((j >= 19) && (j <= 43))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 16)
                if ((j >= 21) && (j <= 41))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 17)
                if ((j >= 23) && (j <= 39))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 18)
                if ((j >= 25) && (j <= 37))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 19)
                if ((j >= 27) && (j <= 35))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 20)
                if ((j >= 29) && (j <= 33))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 21)
                if ((j >= 30) && (j <= 32))
                    cout << "*";
                else
                    cout << " ";
            else if (i == 22)
                if ((j == 31) && (j <= 30))
                    cout << "*";
        }
        cout << "\n";
    }
    printf("From = Me");
    cout << "\n";
    printf("To   = You");
}

void piramiga()
{
    cout << "##  Program C++ Piramida Bintang  ##" << endl;
    cout << "====================================" << endl;
    cout << endl;

    int tinggi_segitiga, i, j, k;

    cout << "Input tinggi segitiga: ";
    cin >> tinggi_segitiga;

    cout << endl;

    for (i = 1; i <= tinggi_segitiga; i++)
    {
        for (j = 1; j <= tinggi_segitiga - i; j++)
        {
            cout << " ";
        }

        for (k = 1; k <= i; k++)
        {
            cout << " *";
        }
        cout << endl;
    }
}

void kerucut()
{
    cout << "##  Program C++ Luas Permukaan dan Volume Kerucut  ##" << endl;
    cout << "=====================================================" << endl;
    cout << endl;

    float jari2, tinggi, garis_pelukis, luas_alas, luas_selimut;
    float luas_permukaan, volume;

    cout << "Input jari-jari kerucut: ";
    cin >> jari2;
    cout << "Input tinggi kerucut: ";
    cin >> tinggi;
    cout << endl;

    garis_pelukis = sqrt((jari2 * jari2) + (tinggi * tinggi));
    luas_selimut = (22.0 / 7.0) * jari2 * garis_pelukis;
    luas_alas = (22.0 / 7.0) * jari2 * jari2;

    luas_permukaan = luas_alas + luas_selimut;
    volume = (1.0 / 3.0) * (22.0 / 7.0) * jari2 * jari2 * tinggi;

    cout << "Luas permukaan kerucut = " << luas_permukaan << endl;
    cout << "Volume kerucut = " << volume << endl;
}

void bola()
{
    cout << "##  Program C++ Luas Permukaan dan Volume Bola  ##" << endl;
    cout << "==================================================" << endl;
    cout << endl;

    float jari2, luas_permukaan, volume;

    cout << "Input jari-jari bola: ";
    cin >> jari2;
    cout << endl;

    luas_permukaan = (4.0 / 3.0) * (22.0 / 7.0) * jari2 * jari2 * jari2;
    volume = 4 * (22.0 / 7.0) * jari2 * jari2;

    cout << "Luas permukaan bola = " << luas_permukaan << endl;
    cout << "Volume bola = " << volume << endl;
}

void tabung()
{
    cout << "##  Program C++ Luas Permukaan dan Volume Tabung  ##" << endl;
    cout << "====================================================" << endl;
    cout << endl;

    float jari2, tinggi;

    cout << "Input jari-jari tabung: ";
    cin >> jari2;
    cout << "Input tinggi tabung: ";
    cin >> tinggi;
    cout << endl;

    cout << "Luas permukaan tabung = " << 2 * (22.0 / 7.0) * jari2 * (jari2 + tinggi) << endl;

    cout << "Volume tabung = " << (22.0 / 7.0) * tinggi * jari2 * jari2 << endl;
}

void balok()
{
    cout << "##  Program C++ Luas Permukaan dan Volume Balok  ##" << endl;
    cout << "===================================================" << endl;
    cout << endl;

    float panjang, lebar, tinggi, luas_permukaan, volume;

    cout << "Input panjang balok: ";
    cin >> panjang;
    cout << "Input lebar balok: ";
    cin >> lebar;
    cout << "Input tinggi balok: ";
    cin >> tinggi;
    cout << endl;

    luas_permukaan = 2 * (panjang * lebar) + 2 * (panjang * tinggi) + 2 * (lebar * tinggi);
    volume = panjang * lebar * tinggi;

    cout << "Luas permukaan balok = " << luas_permukaan << endl;
    cout << "Volume balok = " << volume << endl;
}

void kubus()
{
    cout << "##  Program C++ Luas Permukaan dan Volume Kubus  ##" << endl;
    cout << "===================================================" << endl;
    cout << endl;

    float sisi, luas_permukaan, volume;

    cout << "Input panjang sisi kubus: ";
    cin >> sisi;
    cout << endl;

    luas_permukaan = 6 * (sisi * sisi);
    volume = sisi * sisi * sisi;

    cout << "Luas permukaan kubus = " << luas_permukaan << endl;
    cout << "Volume kubus = " << volume << endl;
}

void suhu()
{
    cout << "##  Program C++ Konversi Suhu  ##" << endl;
    cout << "=================================" << endl;
    cout << endl;

    float celc, fahr, kelv, ream;

    cout << "Input suhu celsius: ";
    cin >> celc;
    cout << endl;

    fahr = (9.0 / 5.0 * celc) + 32;
    kelv = celc + 273.15;
    ream = celc * (4.0 / 5.0);

    cout << celc << " derajat Celcius = " << fahr << " derajat Fahrenheit";
    cout << endl;
    cout << celc << " derajat Celcius = " << kelv << " derajat Kelvin";
    cout << endl;
    cout << celc << " derajat Celcius = " << ream << " derajat Reamur";
    cout << endl;
}

void faktorial()
{
    printf("## Program Bahasa C Menghitung Faktorial ## \n");
    printf("=========================================== \n\n");

    int angka, hasil, i;

    printf("Input angka: ");
    scanf("%d", &angka);

    hasil = 1;
    for (i = 1; i <= angka; i++)
    {
        hasil = hasil * i;
    }
    printf("%d! = %d \n", angka, hasil);
}

void kpk()
{
    int hasil;
    int input1, input2;
    cout << "Masukan angka pertama : ";
    cin >> input1;
    cout << "Masukan angka kedua : ";
    cin >> input2;
    hasil = input1;
    while (hasil % input2 != 0)
    {
        hasil = hasil + input1;
    }

    cout << "Kpk dari " << input1 << " dan " << input2 << " adalah " << hasil;
}

void fpbkpk()
{
    int angka1, angka2;
    cout << "Masukan dua angka (pisahkan dengan spasi): ";
    cin >> angka1 >> angka2;

    while (angka1 != angka2)
    {
        if (angka1 > angka2)
        {
            angka1 = angka1 - angka2;
        }
        else
        {
            angka2 = angka2 - angka1;
        }
    }

    cout << "FPB-nya adalah " << angka1;
    cout << "\n===============================\n";
    cout << endl;
}

void pangkat()
{
    int m;
    int n;
    int total = 1;

    cout << " =====================================================" << endl;
    cout << "                Created by Bima Coding               " << endl;
    cout << " =====================================================" << endl
         << endl;

    cout << " Menghitung hasil m pangkat n" << endl
         << endl;
    cout << " Masukkan nilai m = ";
    cin >> m;
    cout << endl
         << " Masukkan nilai n = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        total = total * m;
    }

    cout << endl
         << " Hasil dari " << m << " pangkat " << n << " adalah " << total << endl;
}

void limas()
{
    float sisi, tinggi, hasil_LP, hasil_V;
    float pythagoras, L_STiga;

    cout << "Luas dan Volume Limas Segi Empat Beraturan\n";
    cout << "www.ekorkode.com\n\n";

    cout << "Masukan Tinggi         : ";
    cin >> tinggi;
    cout << "Masukan Panjang sisi   : ";
    cin >> sisi;

    pythagoras = sqrt(((sisi * 0.5) * (sisi * 0.5)) + (tinggi * tinggi));
    L_STiga = 0.5 * sisi * pythagoras;

    hasil_LP = (sisi * sisi) + (4 * L_STiga);
    hasil_V = (0.33333) * (sisi * sisi) * tinggi;

    cout << endl;
    cout << "Luas Limas   = " << hasil_LP;
    cout << "\nVolume Limas = " << hasil_V;
}

void bilprima()
{
    printf("##  Program Bahasa C Angka Prima  ## \n");
    printf("==================================== \n\n");

    int n, i, angka_prima, pembagi;
    angka_prima = 1;

    printf("Input satu angka bulat: ");
    scanf("%i", &n);

    // 0 dan 1 bukan angka prima
    if (n == 0 || n == 1)
    {
        angka_prima = 0;
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                pembagi = i;
                angka_prima = 0;
                break;
            }
        }
    }

    printf("\n");
    if (angka_prima == 1)
        printf("%i adalah angka prima \n", n);
    else
        printf("%i bukan angka prima, karena bisa dibagi %i \n", n, pembagi);
}

void bangundatar()
{
    float Luas, Kell, p, l, t, r, a, s1, s2, s3;
    int input, input2;

    cout << "=================================================\n";
    cout << "Program Menghitung Luas dan Keliling Bangun Datar\n";
    cout << "=================================================\n";
    cout << "1. Luas\n";
    cout << "2. Keliling\n";
    cout << "Silahkan masukkan pilihan Anda\n";
    cin >> input;
    if (input == 1)
    {
        cout << "--------------------------------\n";
        cout << "[1]Luas Persegi\n";
        cout << "[2]Luas Persegi Panjang\n";
        cout << "[3]Luas Segitiga\n";
        cout << "[4]Luas Lingkaran\n";
        cin >> input2;
        if (input2 == 1)
        {
            cout << "--------------------------------\n";
            cout << "Masukkan Panjang Sisi Persegi= ";
            cin >> p;
            Luas = p * p;
            cout << "Luas Persegi = ";
            cout << Luas;
        }
        else
        {
            if (input2 == 2)
            {
                cout << "--------------------------------\n";
                cout << "Masukkan Panjang = ";
                cin >> p;
                cout << "Masukkan Lebar = ";
                cin >> l;
                Luas = p * l;
                cout << "Luas Persegi Panjang = ";
                cout << Luas;
            }
            else
            {
                if (input2 == 3)
                {
                    cout << "--------------------------------\n";
                    cout << "Masukkan Alas = ";
                    cin >> a;
                    cout << "Masukkan Tinggi = ";
                    cin >> t;
                    Luas = a * t / 2;
                    cout << "Luas Segitiga = ";
                    cout << Luas;
                }
                else
                {
                    if (input2 == 4)
                    {
                        cout << "--------------------------------\n";
                        cout << "Masukkan Jari-jari lingkaran= ";
                        cin >> r;
                        Luas = 22 * r * r / 7;
                        cout << "Luas Lingkaran = ";
                        cout << Luas;
                    }
                    else
                    {
                        cout << "Perintah tidak cocok";
                    }
                }
            }
        }
    }
    else
    {
        if (input == 2)
        {
            cout << "--------------------------------\n";
            cout << "[1]Luas Persegi\n";
            cout << "[2]Luas Persegi Panjang\n";
            cout << "[3]Luas Segitiga\n";
            cout << "[4]Luas Lingkaran\n";
            cin >> input2;
            if (input2 == 1)
            {
                cout << "--------------------------------\n";
                cout << "Masukkan Panjang Sisi Persegi = ";
                cin >> p;
                Kell = 4 * p;
                cout << "Keliling Persegi = ";
                cout << Kell;
            }
            else
            {
                if (input2 == 2)
                {
                    cout << "--------------------------------\n";
                    cout << "Masukkan Panjang = ";
                    cin >> p;
                    cout << "Masukkan Lebar = ";
                    cin >> l;
                    Kell = 2 * p + 2 * l;
                    cout << "Keliling Persegi Panjang = ";
                    cout << Kell;
                }
                else
                {
                    if (input2 == 3)
                    {
                        cout << "--------------------------------\n";
                        cout << "Masukkan Panjang Sisi 1 = ";
                        cin >> s1;
                        cout << "Masukkan Panjang Sisi 2 = ";
                        cin >> s2;
                        cout << "Masukkan Panjang Sisi 3 = ";
                        cin >> s3;
                        Kell = s1 + s2 + s3;
                        cout << "Keliling Segitiga = ";
                        cout << Kell;
                        ;
                    }
                    else
                    {
                        if (input2 == 4)
                        {
                            cout << "--------------------------------\n";
                            cout << "Masukkan Jari -jari lingkaran = ";
                            cin >> r;
                            Kell = 2 * 22 * r / 7;
                            cout << "Keliling Lingkaran = ";
                            cout << Kell;
                            ;
                        }
                        else
                        {
                            cout << "Perintah tidak cocok";
                        }
                    }
                }
            }
        }
        else
        {
            cout << "inputan salah";
        }
    }
}

void sincostan()
{
    double sudutA, sinA, cosA, tanA;
    cout << "Masukkan nilai sudut yang akan dihitung";
    cout << " A= ";
    cin >> sudutA;
    // cout << " B= "; cin>>sudutB;
    sinA = sin(sudutA * PI / 180);
    cosA = cos(sudutA * PI / 180);
    tanA = tan(sudutA * PI / 180);

    cout << "sin A = " << sinA << endl;
    cout << "cos A = " << cosA << endl;
    cout << "tan A = " << tanA << endl;
}

struct atom
{
    int no;
    char simbol[4];
    char nama[20];
    float den;
};

float x[50];
int n;

void sistem_periodik()
{
    struct atomik
    {
        int no;
        char simbol[4];
        char nama[20];
        double den;
    };

    atomik data[112] =
        {{1, "H", "Hidrogen", 0.021}, {2, "He", "Helium", 0.126}, {3, "Li", "Litium", 0.53}, {4, "Be", "Berilium", 1.85}, {5, "B", "Boron", 2.34}, {6, "C", "Carbon", 2.26},

         {7, "N", "Nitrogen", 0.81},
         {8, "O", "Oksigen", 1.14},
         {9, "F", "Flour", 1.506},
         {10, "Ne", "Neon", 1.20},
         {11, "Na", "Natrium", 0.97},
         {12, "Mg", "Magnesium", 1.74},
         {13, "Al", "Almunium", 2.70},
         {14, "Si", "silikon", 2.239},

         {15, "P", "Fosfor", 1.83},
         {16, "S", "Sulfur", 2.07},
         {17, "Cl", "Khlor", 1.58},
         {18, "Ar", "Argon", 1.40},
         {19, "K", "Kalium", 0.97},
         {20, "Ca", "Kalcium", 1.55},
         {21, "Sc", "Scandium", 3.0},
         {22, "Ti", "Titanium", 4.51},
         {23, "V", "Vanadium", 6.1},
         {24, "Cr", "Chrom", 7.19},

         {25, "Mg", "Magnesium", 7.86},
         {26, "Fe", "Besi", 7.86},
         {27, "Co", "Kobalt", 8.9},
         {28, "Ni", "Nikel", 6.8},
         {29, "Cu", "Tembaga", 8.96},
         {30, "Zn", "Seng", 7.14},
         {31, "Ga", "Galium", 5.91},
         {32, "Ge", "Germanium", 5.32},

         {33, "Ar", "Arsenic", 5.72},
         {34, "Se", "Selenium", 4.79},
         {35, "Br", "Brom", 3.12},
         {36, "Kr", "Kripton", 2.6},
         {37, "Ru", "Rubidium", 1.53},
         {38, "Sr", "Strontium", 2.6},
         {39, "Y", "Ytitrium", 4.47},
         {40, "Zr", "Zirkonium", 6.46},
         {41, "Nb", "Niobium", 8.4},
         {42, "Mo", "Molypdenum", 10.3},

         {43, "Tc", "Tecnetium", 11.5},
         {44, "Ru", "Ruthenium", 12.2},
         {45, "Rh", "Rhodium", 12.4},
         {46, "Pd", "Palladium", 12.0},
         {47, "Si", "Silver", 10.5},
         {48, "Cd", "Cadmium", 8.65},
         {49, "In", "Indium", 7.31},
         {50, "Sn", "Timah", 7.30},
         {51, "Sb", "Antimony", 6.684},
         {52, "Te", "Tellorium", 6.24},

         {53, "I", "Iodine", 4.94},
         {54, "Xe", "Xenon", 3.06},
         {55, "Cs", "Cesium", 1.90},
         {56, "Ba", "Barrium", 3.5},
         {57, "La", "Lathanum", 6.17},
         {58, "Ce", "Cerum", 6.67},
         {59, "Pr", "Prasecoymium", 6.77},
         {60, "Nd", "Noidymium", 7.0},
         {
             61,
             "Pm",
             "Promethium",
         },
         {62, "Sm", "Samarium", 7.54},
         {63, "Eu", "Europium", 5.26},
         {64, "Gd", "Gadolinium", 7.89},

         {65, "Tb", "Terbium", 8.27},
         {66, "Dy", "Dysprosium", 8.54},
         {67, "Ho", "Holmium", 8.54},
         {68, "E", "Erbium", 9.54},
         {69, "Tm", "Thulium", 9.33},
         {70, "Yb", "Ytterbium", 6.98},
         {71, "Lu", "Luthetium", 9.84},
         {72, "Hf", "Hafnium", 13.1},
         {73, "Ta", "Tantalum", 16.6},
         {74, "W", "Tungsen", 9.3},
         {75, "Re", "Renium", 21.0},

         {76, "Os", "Osmium", 22.6},
         {77, "Ir", "Iridium", 22.5},
         {78, "Pt", "Platinum", 21.4},
         {79, "Au", "Emas", 19.3},
         {80, "Hg", "Raksa", 13.6},
         {81, "Tl", "Talium", 11.85},
         {82, "Pb", "Timbal", 11.4},
         {83, "Bi", "Bismut", 9.8},
         {84, "Po", "Polonium", 9.2},
         {
             85,
             "At",
             "Astatine",
         },
         {
             86,
             "Rn",
             "",
         },
         {
             87,
             "Fr",
             "Fransium",
         },
         {
             88,
             "Ra",
             "Radium",
         },

         {
             89,
             "Ac",
             "Actinium",
         },
         {90, "Th", "Thorium", 11.7},
         {91, "Pa", "Protactinium", 15.4},
         {92, "U", "Uranium", 19.07},
         {93, "Np", "Neptunium", 19.5},
         {94, "Pu", "Plutonium", 0},
         {95, "Am", "Amercium", 0},
         {96, "Cm", "Curium", 0},
         {97, "Bk", "Berkelium", 0},
         {
             98,
             "Cf",
             "Californium",
         },
         {99, "Es", "Einstenium", 0},
         {100, "Fm", "Fermium", 0},

         {101, "Md", "Mendelvium", 0},
         {102, "No", "Nobelium", 0},
         {103, "Lw", "Laerencium", 0},
         {104, "Rf", "Ruterfordium", 0},
         {105, "Db", "Dubnium", 0},
         {106, "Sg", "Seaborgium", 0},
         {107, "Bh", "Bohrium", 0},
         {108, "Hs", "Hassium", 0},
         {109, "Mt", "Meitnerium", 0},
         {110, "Uun", " Ununnilium", 0},
         {111, "Uuu", "Unununium", 0},
         {112, "Uub", "Ununbium", 0}};

    int nomor, nomor2;

    cout << "---------------------------------------------------\n";

    cout << "*=*=*=*=*=*=*= Sistem Periodik Unsur =*=*=*=*=*=*=*\n";

    cout << "```````````````````````````````````````````````````\n";

    cout << "Masukan nomor atom ";
    cin >> nomor;
    nomor2 = nomor - 1;

    cout << "Nomor atom : " << data[nomor2].no
         << "\nLambang atom : " << data[nomor2].simbol
         << "\nNama atom : " << data[nomor2].nama
         << "\nDensitas atom : " << data[nomor2].den << endl;
}

void tukar(float &a, float &b)
{
    float c;

    if (a > b)
    {
        c = a;
        a = b;
        b = c;
    }
}

void statistik()
{
    int j, i, imaks, hi[50], nmaks;

    float rerata, jumlah, sls, simp;

    double median, stdev;

    jumlah = 0;
    simp = 0;

    cout << "Program Statistik \n\n";

    cout << "Msukkan jumlah data";
    cin >> n;

    for (i = 0; i < n; i++)

    {
        cout << "MasukKan nilai ke " << i + 1 << "= ";
        cin >> x[i];
        jumlah = jumlah + x[i];
    }

    rerata = jumlah / n;

    for (i = 0; i < n; i++)

    {
        sls = (rerata - x[i]) * (rerata - x[i]);
        simp = simp + sls;
    }

    stdev = sqrt(simp) / (n - 1);

    cout << "nilai setelah di urutkan\n";

    for (j = n - 1; j >= 1; j--)
        for (i = 0; i < j; i++)
            tukar(x[i], x[i + 1]);

    for (i = 0; i < n; i++)
    {
        cout << "  " << x[i];
        hi[i] = 0;
    }

    cout << endl;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (j <= i)
            {
                if (x[i] == x[j])
                {
                    hi[i] = hi[i] + 1;
                }
            }
        }
    }

    nmaks = 0;

    for (i = 0; i < n; i++)
    {
        if (hi[i] >= nmaks)
        {
            nmaks = hi[i];
            imaks = i;
        }
    }

    if (n % 2 != 0)
    {
        median = x[(n + 1) / 2];
    }

    else
    {
        median = (x[n / 2] + x[(n / 2) + 1]) / 2;
    }

    cout << "Modus Data adalah = ";
    if (hi[imaks] <= 1)
        cout << "0";
    else
        cout << x[imaks];

    cout << endl;

    cout << "Jangkauan dari data = " << x[n - 1] << "-" << x[1] << "= " << x[n - 1] - x[0] << endl;

    cout << "Median dari data adalah = " << median << endl;

    cout << "Rerata dari data adalah = " << rerata << endl;

    cout << "Standar Deviasi dari data adalah = " << stdev << endl;
}

int main()
{
    int z;
    float hasil;
    string operasi;
    float ukur;
    int pembuka;
    char ulangi;

    do
    {
        system("cls");

        cout << "===================================" << endl;
        cout << "--Program konversi rumusBy Bima X2--" << endl;
        cout << "===================================" << endl;
        int input;
        {
            cout << " Konversi Rumus\n " << endl;

            cout << "<------------------ALERT!!!----------------------->" << endl;
            cout << "note: program ini menggunakan perhitungan dengan satuan internasional. Jika terdapat kesalahan jawaban mohon perhatikan satuan yang dipakai di soal "
                 << endl;
            cout << "<------------------------------------------------->" << endl;

            cout << " 0  Sistem periodik Unsur           " << endl;
            cout << " 1  Untuk Milimeter ke Centimeter	" << endl;
            cout << " 2  Untuk Milimeter ke Meter		" << endl;
            cout << " 3  Untuk Milimeter ke Kilometer	" << endl;
            cout << " 4  Untuk Centimeter ke Milimeter	" << endl;
            cout << " 5  Untuk Centimeter ke Meter		" << endl;
            cout << " 6  Untuk Centimeter ke Kilometer	" << endl;
            cout << " 7  Untuk Meter ke Milimeter		" << endl;
            cout << " 8  Untuk Meter ke Centimeter		" << endl;
            cout << " 9  Untuk Meter ke Kilometer		" << endl;
            cout << " 10 Untuk Kilometer ke Milimeter	" << endl;
            cout << " 11 Untuk Kilometer ke Centimeter	" << endl;
            cout << " 12 Untuk Kilometer ke Meter		" << endl;
            cout << " 13 Untuk kilometer ke Hektometer	" << endl;
            cout << " 14 Konversi Kilometer ke Dekameter " << endl;
            cout << " 15 Konversi Kilometer ke Decimeter " << endl;
            cout << " 16 Konversi meter ke hektometer  " << endl;
            cout << " 17 Sin Cos Tan                   " << endl;
            cout << " 18 Kalkulator " << endl;
            cout << " 19 statistika " << endl;
            cout << " 20 bangun datar " << endl;
            cout << " 21 Bilangan Prima " << endl;
            cout << " 22 limas " << endl;
            cout << " 23 Pangkat " << endl;
            cout << " 24 FPB  " << endl;
            cout << " 25 KPK " << endl;
            cout << " 26 Faktorial " << endl;
            cout << " 27 suhu " << endl;
            cout << " 28 kubus " << endl;
            cout << " 29 balok " << endl;
            cout << " 30 tabung " << endl;
            cout << " 31 bola " << endl;
            cout << " 32 kerucut " << endl;
            cout << " 33 piramidsegitiga " << endl;
            cout << " 34 lope " << endl;
            cout << " 35 gaya " << endl;
            cout << " 36 kecepatan " << endl;
            cout << " 37 percepatan " << endl;
            cout << " 38 Energi " << endl;
            cout << " 39 tegangan " << endl;
            cout << " 40 arus " << endl;
            cout << " 41 hambatan" << endl;
            cout << " 42 akar " << endl;
            cout << " 43 pythagoras " << endl;
            cout << " 44 logaritma " << endl;
            cout << " 45 tagihanlistrik(dalam pengembangan)" << endl;
            cout << " 46 V.Prisma segitiga" << endl;
            cout << " 47 L.Prisma Segitiga " << endl;
            cout << " 48 Layang Layang " << endl;
            cout << " 49 Belah Ketupat " << endl;
            cout << " 50 Trapesium " << endl;
            cout << " 51 Skala " << endl;
            cout << " 52 GLB " << endl;
            cout << " 53 GLBB " << endl;
            cout << " 54 Kalor (coding sendiri) " << endl;
            cout << " 55 baris aritmatik(repairsendiri) " << endl;
            cout << " 56 baris geometri(sendiri)" << endl;
            cout << " 57 Cepat Rambat Gelombang Bunyi " << endl;
            cout << " 58 Jarak Dengan Bunyi Pantul " << endl;
            cout << " 59 Daya " << endl;
            cout << " 60 Resultan Gaya " << endl;
            cout << " 61 Tuas " << endl;
            cout << " 62 Tekanan Padat Cair Gas " << endl;
            cout << " 63 Pentagon " << endl;
            cout << " 64 hukum kekekalan massa " << endl;
            cout << " 65 efisiensi daya " << endl;
            cout << " 66 debit air " << endl;
            cout << " 67 Usaha " << endl;
            cout << " 68 Angka / desimal ke biner" << endl;
            cout << " 69 Searching and Sorting" << endl;
            cout << " 70 Relativitas Einstein"<<endl;
            cout <<" 71 SPLTV"<<endl;
            cout << " Pilih Nomor Konversi :";
            cin >> z;
            cout << endl;
        }

        int proses;
        {
            switch (z)
            {
            case 0:
                sistem_periodik();
                break;
            case 1:
                cout << " Konversi Milimeter ke Centimeter " << endl;
                cout << " Masukkan satuan panjang : ";
                cin >> ukur;
                cout << " => " << ukur << " Mm = " << (ukur / 10) << " Cm " << endl;
                break;

            case 2:
                cout << " Konversi Milimeter ke Meter " << endl;
                cout << " Masukkan satuan panjang : ";
                cin >> ukur;
                cout << " => " << ukur << " Mm = " << (ukur / 1000) << " M " << endl;
                break;

            case 3:
                cout << " Konversi Milimeter ke Kilometer " << endl;
                cout << " Masukkan satuan panjang : ";
                cin >> ukur;
                cout << " => " << ukur << " Mm = " << (ukur / 1000000) << " Km " << endl;
                break;

            case 4:
                cout << " Konversi Centimeter ke Milimeter " << endl;
                cout << " Masukkan satuan panjang : ";
                cin >> ukur;
                cout << " => " << ukur << " Cm = " << (ukur * 10) << " Mm " << endl;
                break;

            case 5:
                cout << " Konversi Centimeter ke Meter " << endl;
                cout << " Masukkan satuan panjang : ";
                cin >> ukur;
                cout << " => " << ukur << " Cm = " << (ukur / 100) << " M " << endl;
                break;

            case 6:
                cout << " Konversi Centimeter ke Kilometer " << endl;
                cout << " Masukkan satuan panjang : ";
                cin >> ukur;
                cout << " => " << ukur << " Cm = " << (ukur / 100000) << " Km " << endl;
                break;

            case 7:
                cout << " Konversi Meter ke Milimeter " << endl;
                cout << " Masukkan satuan panjang : ";
                cin >> ukur;
                cout << " => " << ukur << " M = " << (ukur * 1000) << " Mm " << endl;
                break;

            case 8:
                cout << " Konversi Meter ke Centimeter " << endl;
                cout << " Masukkan satuan panjang : ";
                cin >> ukur;
                cout << " => " << ukur << " M = " << (ukur * 100) << " Cm " << endl;
                break;

            case 9:
                cout << " Konversi Meter ke Kilometer " << endl;
                cout << " Masukkan satuan panjang : ";
                cin >> ukur;
                cout << " => " << ukur << " M = " << (ukur / 1000) << " Km " << endl;
                break;

            case 10:
                cout << " Konversi Kilometer ke Milimeter " << endl;
                cout << " Masukkan satuan panjang : ";
                cin >> ukur;
                cout << " => " << ukur << " Km = " << (ukur * 1000000) << " Mm " << endl;
                break;

            case 11:
                cout << " Konversi Kilometer ke Centimeter " << endl;
                cout << " Masukkan satuan panjang : ";
                cin >> ukur;
                cout << " => " << ukur << " Km = " << (ukur * 100000) << " Cm " << endl;
                break;

            case 12:
                cout << " Konversi Kilometer ke Meter " << endl;
                cout << " Masukkan satuan panjang : ";
                cin >> ukur;
                cout << " => " << ukur << " Km = " << (ukur * 1000) << " M " << endl;
                break;

            case 13:
                cout << " Konversi Kilometer ke Hektometer " << endl;
                cout << " Masukkan satuan panjang : ";
                cin >> ukur;
                cout << " => " << ukur << " Km = " << (ukur * 10) << " HM " << endl;
                break;

            case 14:
                cout << " Konversi Kilometer ke Dekameter " << endl;
                cout << " Masukkan satuan panjang : ";
                cin >> ukur;
                cout << " => " << ukur << " Km = " << (ukur * 100) << " DAM " << endl;
                break;

            case 15:
                cout << " Konversi Kilometer ke Decimeter " << endl;
                cout << " Masukkan satuan panjang : ";
                cin >> ukur;
                cout << " => " << ukur << " Km = " << (ukur * 10000) << " DM " << endl;
                break;

            case 16:
                cout << " Konversi meter ke hektometer  " << endl;
                cout << " Masukkan satuan panjang : ";
                cin >> ukur;
                cout << " => " << ukur << " m = " << (ukur / 100) << " HM " << endl;
                break;

            case 17:
                sincostan();
                break;

            case 18:
                kalkulator();
                break;

            case 19:
                statistik();
                break;

            case 20:
                bangundatar();
                break;

            case 21:
                bilprima();
                break;

            case 22:
                limas();
                break;

            case 23:
                pangkat();
                break;

            case 24:
                fpbkpk();
                break;

            case 25:
                kpk();
                break;

            case 26:
                faktorial();
                break;

            case 27:
                suhu();
                break;

            case 28:
                kubus();
                break;

            case 29:
                balok();
                break;

            case 30:
                tabung();
                break;

            case 31:
                bola();
                break;

            case 32:
                kerucut();
                break;

            case 33:
                piramiga();
                break;

            case 34:
                lope();
                break;

            case 35:
                gaya();
                break;

            case 36:
                kec();
                break;

            case 37:
                per();
                break;

            case 38:
                energi();
                break;

            case 39:
                tegangan();
                break;

            case 40:
                arus();
                break;

            case 41:
                hambatan();
                break;

            case 42:
                akar();
                break;

            case 43:
                pytha();
                break;

            case 44:
                log();
                break;

            case 45:
                tagihan();
                break;

            case 46:
                volume_prisma();
                break;

            case 47:
                luas_prisma();
                break;

            case 48:
                layang();
                break;

            case 49:
                ketupat();
                break;

            case 50:
                trapesium();
                break;

            case 51:
                skala();
                break;

            case 52:
                int s, v, hasil1;
                cout << "MENENTUKAN WAKTU TEMPUH KENDARAAN" << endl;
                cout << "Masukkan nilai jarak : ";
                cin >> s;
                cout << "Masukkan nilai kecepatan : ";
                cin >> v;
                hasil1 = waktu1(s, v);
                cout << "Hasil waktu tempuh = " << hasil1 << endl;
                cout << " " << endl;
                cout << "----------Selamat Menggunakan Program Ini-------------" << endl;
                cout << "----------------Semoga bermanfaat-------------";
                break;

            case 53:
                float vo, vt, a, hasil2;
                cout << "MENENTUKAN WAKTU TEMPUH KENDARAAN" << endl;
                cout << "Masukkan kecepatan awal : ";
                cin >> vo;
                cout << "Masukkan kecepatan akhir : ";
                cin >> vt;
                cout << "Masukkan percepatan : ";
                cin >> a;

                hasil2 = waktu2(vo, vt, a);
                cout << "Hasil waktu tempuh = " << hasil2 << endl;
                cout << " " << endl;
                cout << "----------Selamat Mencoba Program Ini-------------" << endl;
                cout << "---------------Semoga bermanfaat-------------";
                break;

            case 54:
                kalor();
                break;

            case 55:
                aritmatika();
                break;

            case 56:
                geometri();
                break;

            case 57:
                gelombang();
                break;

            case 58:
                pantul();
                break;

            case 59:
                daya();
                break;

            case 60:
                resultan();
                break;

            case 61:
                tuas();
                break;

            case 62:
                tekanan();
                break;

            case 63:
                segilima();
                break;

            case 64:
                lavoisier();
                break;

            case 65:
                efisiensi();
                break;

            case 66:
                debit();
                break;

            case 67:
                usaha();
                break;

            case 68:
                biner();
                break;

             case 69:
                search();
                break;

             case 70:
                relativitas();
                break;

             case 71:
                spltv();
                break;
            default:
                cout << " Maaf.. Inputan salah " << endl;
            }
        }
        cout << " Kembali Ke Menu Utama (Y/T): ";
        cin >> ulangi;
    }

    while (ulangi == 'Y', ulangi == 'y');
    cout << "TERIMA KASIH" << endl;
    return 0;
}

