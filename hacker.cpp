#include <iostream>
using namespace std; 
 int main(){ 
 /*int th; 
 cin>>th; 
 if( th % 4 ==0 || th % 400 ==0 && th % 100 !=0 ){ 
cout<< "Tahun Kabisat"; 
}else{
	cout<<"Bukan Tahun Kabisat";
}*/


    int j;
    int e;
    int hasil;
    string h;
    cin >> j;
    cin >> e;
    cin >> h;
    if (h=="+"){
        hasil = j + e;
    }
    if (h=="-"){
        hasil = j - e;
    }
    if (h=="*"){
    	hasil = j * e;
	}
	if(h=="/"){
		hasil = j / e;
	}
    cout << hasil;

    return 0;
}

                                
