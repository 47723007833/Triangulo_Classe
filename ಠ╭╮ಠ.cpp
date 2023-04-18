#include <iostream>
#include <math.h>
using namespace std;


// (☞ﾟヮﾟ)☞ função ☜(ﾟヮﾟ☜) 
double calcularAreaTriangulo(double a, double b, double c){
    double p = ( a + b + c ) / 2;
    return sqrt( p * (p - a) * ( p - b ) * ( p - c));
}
//variaves 
int main(){
    double xa, xb, xc, ya, yb, yc;
    
    //coleta de informaçoes
    cout << "Digite as medidas dos lados do triangulo X (separados por espaço):";
    cin >> xa >> xb >> xc;
    //coleta de informaçoes
    cout << "Digite as medidas dos lados do triangulo Y (separados por espaço):";
    cin >> ya >> yb >> yc;
    //instancia¯\_(ツ)_/¯ ???
    double areaX = calcularAreaTriangulo(xa,xb,xc);
    double areaY = calcularAreaTriangulo(ya,yb,yc);
    
    //Resultado ??? ಠ_ಠ
    if (areaX > areaY) {
        cout << "Triangulo X tem a maior área." << endl;
    } else if (areaY > areaX) {
        cout << "Triangulo Y tem a maior área."  << endl;
    } else {
        cout << "Os triangulos tem a mesma área" << endl;
    }
    
    
    return 0;
}