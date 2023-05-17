//judul tabung adt
//Bayu Dewanto A11.2022.14722

#include<iostream>
using namespace std;

//kamus
struct lingkaran{
    float phi;
    float r;
    float luas;
};

struct tube{
    struct lingkaran circle;
    float t;
    float vol;
};

lingkaran bunder;
struct tube tabung[3];

//deskripsi

int main(){
    int i = 0;

    while (i<3){

    float a = 314/100;
    tabung[i].circle.phi = a;
    cout << "jari2  : ";
    cin >> tabung[i].circle.r; //jari2
    bunder.r = tabung[i].circle.r;
    cout << "tinggi  : ";
    cin >> tabung[i].t;

    tabung[i].vol = tabung[i].circle.phi * tabung[i].circle.r * tabung[i].circle.r * tabung[i].t;

    cout << tabung[i].vol << endl;

    bunder.luas = tabung[i].circle.phi * bunder.r * bunder.r;
    tabung[i].vol = bunder.luas * tabung[i].t;

    cout << tabung[i].vol << endl;
    cout << bunder.luas << endl;

    i++;
    }

    int j = 0;
    int k = 0;
    float temp;
    while(j<3){
        k = j + 1;
        while(k<3){
            if (tabung[j].vol > tabung[k].vol){
               temp = tabung[j].vol;
               tabung[j].vol = tabung[k].vol;
               tabung[k].vol = temp; 
            }
            k++;
        }
        j++;
    }

    i = 0;
    while(i<3){
        cout << tabung[i].vol << endl;
        i++;
    }

    return 0;
}
