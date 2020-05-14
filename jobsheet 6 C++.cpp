#include <iostream>
using namespace std;

main (){
cout<<"Nama : Afina Praba Larasati\n";
cout<<"Nim : F1B019008\n";
cout<<"Kelompok: Kelompok 1\n\n";
int x,y, mtrx [5][5];
cout<< "TRANSPOSE MATRIX" <<endl;
cout<< "Masukkan jumlah baris = ";
cin>> x;
cout<< "Masukkan jumlah kolom = ";
cin>> y;
cout<<"MATRIX\n";
for (int i = 0; i< x; i++){
for (int j = 0; j < y; j++){
cout<< "Masukkan nilai index " <<i<< "," << j << " = ";
cin>>mtrx [i][j];
}
}
cout<<endl;
for (int i = 0; i< x; i++){
for (int j = 0; j < y; j++){
cout<<mtrx [i][j] <<"  ";
}
cout<<endl;
}
cout<<"TRANSPOSE MATRIX\n";
for (int i = 0; i< y; i++){
for (int j = 0; j < x; j++){
cout<<mtrx [j][i] <<"  ";
}
cout<<endl;
}
}
