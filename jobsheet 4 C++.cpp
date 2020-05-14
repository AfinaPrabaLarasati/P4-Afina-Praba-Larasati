#include <iostream>
#include <conio.h>
using namespace std;

int main(){
	
cout<<"Nama     : Afina Praba Larasati"<<endl;
cout<<"Nim      : F1B019008"<<endl;
cout<<"Kelompok : 1"<<endl;
//pengurangan matriks dengan 2 nim mahasiswa (08 & 09)	
int i,x;
int nim1[2][2];
int nim2[2][2];
int jml [2][2];
	
	cout<<"PENGURANGAN MATRIX :\n";
	for (i=0; i<2; i++){
	for (x=0; x<2; x++){
	cout<<"Masukkan Index "<<"["<<i<<"]["<<x<<"]"<<" = ";
	cin>>nim1[i][x];
	}
}
	cout<<endl;
	for(i=0; i<2; i++){
	for(x=0; x<2; x++){
	cout<<"Masukan Index "<<"["<<i<<"]["<<x<<"]"<<" = ";
	cin>>nim2[i][x];
	}
}
	cout <<endl;
	for (i=0; i<2; i++){
	for (x=0; x<2; x++){
	jml [i][x]=nim1[i][x]-nim2[i][x];
	cout<<jml[i][x]<<" ";
	}
	cout<<endl;
	}
}

