#include <iostream>

using namespace std;
int max (int a ,int b ){
if (a>b) {
    cout << a << endl; //output bisa diganti
    return a;

}else {
    cout << b << endl;
    return b;
}

}
int main()
{
   /*nt x;

    cout<< "Masukan Jumlah looping: ";

    cin>> x;

    for (int i =0;i < x;i++){

        cout << "halo dunia" << endl;



    }
        t y;
        y=5;

        if (x>y) {
            cout << "X lebih dari y" << endl;
        }else if (x < y) {

        cout << "X kurang dari Y" << endl;
        } else if (x==y) {
        cout << "X sama dengan Y" << endl;
        }
/*/
/*int x =5;
int y=20;
if (x > y) {
    cout << x << "lebih dari" << y<<endl;
}else if ( x < y) {
    cout << x <<"kurang dari " << y << endl;
}else{
    cout << x<< "sama dengan" << y << endl;
}
/*/

int x =5;
int y =20;

for (int i =0; i < 10;i++) {
     x++;
       y++;
       max (x,y);

}
        return 0;
    }
