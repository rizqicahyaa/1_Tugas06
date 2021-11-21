#include <iostream>
using namespace std;
 
int main () {
int a = 0; 
int i; 
int sum = 0, max = 0, min = 0;
 
cout<< "Masukkan banyak data nilai :";
cin>> a;
 
int data[a];
 
for(i=0; i<a; i++) {
cout<< "Nilai ke ";
cout<< i+1;
cout<< " : ";
cin>> data[i];
}

sum = 0;
int *ptr;
ptr = data;
 
cout<< "\n Pake Pointer :";
cout<< "\n Data nilai yang anda masukan adalah ";
max = min = *ptr;
for(i=0; i<a; i++) {
cout<< *(ptr + i) << ",";
 
sum = sum + *(ptr + i);
if (max < *(ptr + i)) {
max = *(ptr + i);
}
if (min > *(ptr + i)) {
min = *(ptr + i);
}
}
cout<< "\n Jumlah data nilai   : " << sum;
cout<< "\n Rata-rata nilai     : " << sum/a;
cout<< "\n Nilai Minimal       : " << min;
cout<< "\n Nilai Maksimal      : " << max;
return 0;
}
