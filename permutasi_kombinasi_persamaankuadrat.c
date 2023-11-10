#include <stdio.h> //Library
#include <math.h> //Library

 int bil, r, n, x, hasil; //Variabel Global dengan nilai integer
 float a, b, c, d, x1, x2, sq; //Variabel Global dengan nilai float
 char ulang; //Variabel Global dengan nilai character

 int faktorial(int i) //Program rekursi faktorial.
{
    if(i <= 1) //Jika nilai <= 1
    {
        return 1; //Akan menghasilkan nilai 1
    }
    return i * faktorial(i-1); //i akan dikalikan dengan i dikurangi 1, dan berhenti ketika i tersebut bernilai 1
}
int pangkat (int x,int n) //Program rekursi pangkat.
{
    if(n==0) //Jika nilai n sama dengan 0
    {
        return 1; //Akan menghasilkan nilai 1
    }
    return x*pangkat(x,n-1); // x akan dikali dengan x sesuai jumlah n dan berhenti ketika n sama dengan 0
}


 int main() //Fungsi utama pada program
 {
     int menu; //Fungsi menu pada program
     do //Perintah  Looping dengan do-while
     {
         printf("\t\t\tProgram Permutasi, Kombinasi, dan Persamaan Kuadrat\n"); //Penulisan identitas program
         printf("\n======================================");
         printf("\nNama:  Muhammad Ilman Salamun");
         printf("\nNIM:   43322018");
         printf("\nKelas: TI-1A");
         printf("\n======================================\n");
         printf("\n----Menu----");
         printf("\n1. Faktorial");
         printf("\n2. Permutasi");
         printf("\n3. Kombinasi");
         printf("\n4. Perpangkatan");
         printf("\n5. Persamaan kuadrat");
         printf("\nSilakan pilih menu: "); //Pengimputan angka desimal sesuai menu yang ada
         scanf("%d", &menu); //Menyimpan inputan desimal ke variabel menu

         switch (menu) //Percabangan kode program dengan mengambil angka dari variabel menu
         {
             case 1: //Jika menginput niai 1
                 printf("\nMenu Faktorial"); //Penulisan identitas program 1
                 printf("\nRumus n!= n x n x n x n!"); //Rumus program 1
                 printf("\nMasukkan angka: "); //Mengimput nilai
                 scanf("%d", &bil); //Menyimpan nilai bertipe desimal di variabel bil
                 hasil = faktorial(bil); //Menghitung program dan disimpan di variabel hasil
                 printf("Hasil dari %d! adalah: %d\n",bil, hasil); //output program
                 printf("\nApakah ingin lanjut program (y/t)?"); //Penentuan looping program
                 printf("\nJawab: "); //Menginput jawaban
                 scanf( " %c", &ulang); //Menyimpan inputan dengan nilai char di variabel ulang
                 break; //Pembatas program
             case 2: //Jika menginput niai 2
                printf("\nMenu Permutasi"); //Penulisan identitas program 2
                printf("\nRumus = n!/(n-r)!"); //Rumus program 2
                printf("\nMasukkan Angka n: "); //Mengimput nilai n
                scanf("%d", &n); //Menyimpan nilai bertipe desimal di variabel n
                printf("Masukkan Angka r: "); //Mengimput nilai r
                scanf("%d", &r); //Menyimpan nilai bertipe desimal di variabel r
                if (n<=r) //Pendefinisian kondisi 1
                {
                    printf("Angka r harus lebih kecil daripada n!"); //Penulisan kondisi 1
                }
                else //Pendefinisian kondisi 2
                {
                    x=n-r; //mengurangi variabel n dengan variabel r dan disimpan di variabel x
                    hasil = faktorial(n)/faktorial(x); //menghitung program dan disimpan di variabel hasil
                    printf("Hasil permutasi adalah %d\n", hasil); //output program
                }
                printf("\nApakah ingin lanjut program (y/t)?"); //Penentuan looping program
                printf("\nJawab: "); //Menginput jawaban
                scanf( " %c", &ulang); //Menyimpan inputan dengan nilai char di variabel ulang
                break; //Pembatas program
             case 3: //Jika menginput niai 3
                printf("\nMenu Kombinasi"); //Penulisan identitas program 3
                printf("\nRumus = n!/r!(n-r)!"); //Rumus program 3
                printf("\nMasukkan Angka n: "); //Mengimput nilai n
                scanf("%d", &n); //Menyimpan nilai bertipe desimal di variabel n
                printf("Masukkan Angka r: "); //Mengimput nilai r
                scanf("%d", &r); //Menyimpan nilai bertipe desimal di variabel r
                if (n<=r) //Pendefinisian kondisi 1
                {
                    printf("Angka r harus lebih kecil daripada n!"); //Penulisan kondisi 1
                }
                else //Pendefinisian kondisi 2
                {
                    x=n-r; //mengurangi variabel n dengan variabel r dan disimpan di variabel x
                    hasil = faktorial(n)/(faktorial(r)*faktorial(x)); //menghitung program dan disimpan di variabel hasil
                    printf("Hasil kombinasi adalah %d\n", hasil); //output program
                }
                printf("\nApakah ingin lanjut program (y/t)?"); //Penentuan looping program
                printf("\nJawab: "); //Menginput jawaban
                scanf( " %c", &ulang); //Menyimpan inputan dengan nilai char di variabel ulang
                break; //Pembatas program
             case 4: //Jika menginput niai 4
                printf("\nMenu perpangkatan"); //Penulisan identitas program 4
                printf("\nRumus = x^n"); //Rumus program 4
                printf("\nMasukkan angka x: "); //Mengimput nilai x
                scanf("%d", &x); //Menyimpan nilai bertipe desimal di variabel r
                printf("Masukkan angka n: "); //Mengimput nilai n
                scanf("%d", &n); //Menyimpan nilai bertipe desimal di variabel r
                hasil = pangkat(x,n); //Memanggil fungsi pangkat dengan nilai dari x, n dan disimpan di variabel hasil
                printf("Hasil %d pangkat %d adalah %d", x, n, hasil); //output program
                printf("\nApakah ingin lanjut program (y/t)?"); //Penentuan looping program
                printf("\nJawab: "); //Menginput jawaban
                scanf( " %c", &ulang); //Menyimpan inputan dengan nilai char di variabel ulang
                break; //Pembatas program
             case 5: //Jika menginput niai 5
                printf("\nMenu persamaan kuadrat"); //Penulisan identitas program
                printf("\nBentuk umum = ax^2+bx+c"); //Bentuk umum program 5
                printf("\nRumus Deskriminan = b^2-4ac\n"); //Rumus Deskriminan
                printf("\nMasukkan nilai a : "); //Mengimput nilai a
                scanf("%f", &a); //Menyimpan nilai bertipe desimal di variabel a
                printf("Masukkan nilai b : "); //Mengimput nilai b
                scanf("%f", &b); //Menyimpan nilai bertipe desimal di variabel b
                printf("Masukkan nilai c : "); //Mengimput nilai c
                scanf("%f", &c); //Menyimpan nilai bertipe desimal di variabel c
                d =((b*b)-4*(a*c)); //Penghitungan program diskriminan
                printf("\njadi nilai dari D adalah %.1f \n",d); //Hasil program diskriminan
                if(d==0) //Pendefinisian kondisi  1
                {
                    printf("akar-akar dari persamaan kuadrat ax^2+bx+c adalah kembar \n"); //Penulisan kondisi 1
                    x2 = -b/(2*a); //Menghitung program dan disimpan ke variabel x2
                    x1 = x2; //Variabel x2 sama dengan x1
                    printf("yaitu, x1 = x2 = -b / 2(a)"); //output program
                    printf("\nyaitu, x1 = x2 = -%.1f / 2(%.1f) \n",b,a ); //output program
                    printf("sehingga nilai dari x1 = %.1f dan x2 = %.1f\n", x1,x2); //output program
                }
                else if(d>0) //Pendefinisian kondisi 2
                {
                    printf("akar-akar dari persamaan kuadrat ax^2+bx+c adalah berbeda \n"); //Penulisan kondisi 2
                    sq = sqrt(d); //Menghitung akar kuadrat pada variabel d
                    x1 = (-b+sq)/(2*a); //Menghitung program dan disimpan ke variabel x1
                    x2 = (-b-sq)/(2*a); //Menghitung program dan disimpan ke variabel x2
                    printf("yaitu, x1 = -b + akar(D) / 2(a) \n"); //output program
                    printf("       x1 = -%.1f + akar(%.1f) / 2(%.1f) \n",b,d,a); //output program
                    printf("yaitu, x1 = -b - akar(D) / 2(a) \n"); //output program
                    printf("       x2 = -%.1f - akar(%.1f) / 2(%.1f) \n",b,d,a ); //output program
                    printf("sehingga nilai dari x1 = %.1f dan x2 = %.1f \n", x1,x2); //output program
                }
                else if (d<0)//Pendefinisian kondisi 3
                {
                    printf("Tidak ada penyelesaian riil karena diskriminannya negatif\n"); //output program
                }
                printf("\nApakah ingin lanjut program (y/t)?"); //Penentuan looping program
                printf("\nJawab: "); //Menginput jawaban
                scanf( " %c", &ulang); //Menyimpan inputan dengan nilai char di variabel ulang
                break; //Pembatas program
             default: //Jika mengimput nilai >5
                printf("Menu tidak ada"); //Jika memasukkan angka menu >5
                printf("\nApakah ingin lanjut program (y/t)?"); //Penentuan looping program
                printf("\nJawab: "); //Menginput jawaban
                scanf( " %c", &ulang); //Menyimpan inputan dengan nilai char di variabel ulang
                break; //Pembatas program
         }
     }
     while (ulang != 't'); //Program akan berhenti ketika mengimput t
     return 0; //Pengembalian nilai = 0
 }
