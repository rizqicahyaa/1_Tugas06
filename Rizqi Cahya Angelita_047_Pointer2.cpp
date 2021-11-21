#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int nilai_matakuliah,matakuliah;
	char nama[30],nim[30],prodi[30],nama_matakuliah[30],grade[30]=" Grade Nilai Mata Kuliah";
	char *Pmatakuliah,*Pgrade,*Pnama,*Pnim,*Pprodi,yn;
	Pmatakuliah=nama_matakuliah;
	Pgrade=grade;
	Pnama=nama;
	Pnim=nim;
	Pprodi=prodi;
	string grd;
	
	awal:
	cout<<"------------------------------------------------------------\n";
	cout<<"                PROGRAM NILAI MATA KULIAH                  \n";
	cout<<"------------------------------------------------------------\n";
	cout<<"\n";
	
	cout<<" Masukkan Nama                    : "; cin.getline (Pnama,30);
	cout<<" Masukkan NIM                     : "; cin.getline (Pnim,30);
	cout<<" Masukkan Progam Studi            : "; cin.getline (Pprodi,30);
	cout<<" Masukkan Jumlah Data Mata Kuliah : "; cin>>matakuliah;
	
	cout<<"------------------------------------------------------------\n";
	cout<<"\n";
	
	cout<<"\n";
	cout<<"========================================\n";
	cout<<"              TABEL NILAI                \n";
	cout<<"========================================\n";
	cout<<"|     NILAI MATA KULIAH      GRADE      |\n";
	cout<<"|      >= 90-100               A        |\n";
	cout<<"|      >= 80-<90               B        |\n";
	cout<<"|      >= 70-<80               C        |\n";
	cout<<"|      >= 60-<70               D        |\n";
	cout<<"|      >= 50-<60               E        |\n";
	cout<<"|          <50            Tidak Lulus   |\n";
	cout<<"========================================\n";
	cout<<"\n";
	
	for (int i=1;i<=matakuliah;i++)
	{
		cout<<"================================================\n";
		cout<<"             DATA MATA KULIAH KE-"<<i<<"              "<<"\n";
		cout<<"================================================\n";
		cout<<" Masukkan Nama Mata Kuliah  : "; cin>>Pmatakuliah;
		cout<<" Masukkan Nilai Mata Kuliah : "; cin>>nilai_matakuliah;
		
		if ((nilai_matakuliah>=90)&&(nilai_matakuliah<=100))
		{
			grd="A";
		}
		else if ((nilai_matakuliah>=80)&&(nilai_matakuliah<90))
		{
			grd="B";
		}
		else if ((nilai_matakuliah>=70)&&(nilai_matakuliah<80))
		{
			grd="C";
		}
		else if ((nilai_matakuliah>=60)&&(nilai_matakuliah<70))
		{
			grd="D";
		}
		else if ((nilai_matakuliah>=50)&&(nilai_matakuliah<60))
		{
			grd="E";
		}
		else
		{
			grd="Tidak Lulus";
		}
		cout<<Pgrade<<"    : "<<grd;
	}
	
	cout<<"\n";
	cout<<"\n Kembali? Ya [Y] / Tidak [N] :  "; cin>>yn;
	if (yn=='Y' || yn=='y'){
		goto awal;
	} else {
		cout<<"\n ---------------- TERIMA KASIH ---------------- "<<endl<<endl;
	}
	
	getch();
	
}

