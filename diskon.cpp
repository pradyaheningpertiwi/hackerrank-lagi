#include <iostream>
using namespace std;
int main(){
	
	int shoping;
	float diskon=0;
	int total=0;

    cin >> shoping;

    if ( shoping < 149000 ) {
        diskon = 0;
    }
  
    if  (shoping >= 149000 && shoping < 249000)  {
        diskon = (10.0/100)*shoping;
    }

    if  (shoping >= 249000 && shoping < 349000)  {
        diskon = 20.0/100*shoping;
    }

    if (shoping >= 349000 && shoping < 449000)  {
        diskon = 30.0/100*shoping;
    }

    if  (shoping >= 449000 && shoping <= 549000)  {
        diskon = 40.0/100*shoping;
    }

    if ( shoping > 549000  ) {
        diskon = 50.0/100*shoping;
    }

    total = shoping - diskon;

    cout << total;
}

