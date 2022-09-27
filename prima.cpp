#include <iostream>
using namespace std;
int main(){
	int nomor;
	cin>>nomor;
	int lihat=0;
	for(int i=2;i<nomor;i++){
		if(nomor % i==0){
			lihat=1;
		}
		
	}
	if(lihat==1){
		
    cout<<"Bukan Bilangan Prima";
	}else{ cout<<"Bilangan Prima";
}
}
