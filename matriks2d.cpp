#include <iostream>
using namespace std;
int main (){
int i,j;
cin >> i>>j;
int matriks1[i][j],matriks2[i][j],hasiltambah[i][j],hasilkurang[i][j];
cout <<"matriks1 : "<<endl;
for (int a=0;a<i;a++){
	for (int b=0;b<j;b++){
		cin>>matriks1[a][b];
	}
}
cout<<"matriks2 : "<<endl;
for (int a=0;a<i;a++){
	for (int b=0;b<j;b++){
		cin>>matriks2[a][b];
	}
}
for (int a=0;a<i;a++){
	for (int b=0;b<j;b++){
		hasiltambah[a][b]=matriks1[a][b]+matriks2[a][b];
		hasilkurang[a][b]=matriks1[a][b]-matriks2[a][b];
	}
}
	cout <<"penjumlahan"<<endl;
for (int a=0;a<i;a++){
	for (int b=0;b<j;b++){
		cout<<hasiltambah[a][b];
	}
	cout<<endl;
}
	cout <<"pengurangan"<<endl;
for (int a=0;a<i;a++){
	for (int b=0;b<j;b++){
		cout<<hasilkurang[a][b];
	}
	cout<<endl;
}

return 0;
}
