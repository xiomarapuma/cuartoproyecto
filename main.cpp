#include <iostream>

using namespace std;
//funciones

void imprimirDigitos(int num){

    int a,b,c,d,e;
    a=num/10000;
    b=(num-a*10000)/1000;
    c=(num-(a*10000+b*1000))/100;
    d=(num-(a*10000+b*1000+c*100))/10;
    e=num%10;
    cout << a << '\t'<< b << '\t'<< c << '\t'<< d << '\t' << e ;
}
int contarDigitos(int num){
    int cont=0;

    while (num!=0){
        num=num/10;
        cont++;
    }
    return cont;

}
bool esPalindrome(int num){
    int a,b,c,d,e;
    a=num/10000;
    b=(num-a*10000)/1000;
    c=(num-(a*10000+b*1000))/100;
    d=(num-(a*10000+b*1000+c*100))/10;
    e=num%10;
    if(a==e and b==d){
        return true;
    }
    else {
        return false;
    }
}
int fibonacci(int num){
    int a=0,b,c =1,d=1,p;
    while(a<num){
        if(a==0 || a==1 ){
            cout << "1" << '\t' ;
        }
        if (a>1){
            p=c+d;
            c=d;
            d=p;
            cout << p << '\t';

        }
        a=a+1;
    }
}
bool esNumero(char a){
    a=static_cast<char>(a);
    if(a>=48 && a<=57){
        return true;
    }
    else {
        return false;
    }
}

char esLetra(char a){

    int n=static_cast<int>(a);

    if(n>=65 && n<=90){
        return  static_cast<char>(n+32);
    }
    if(n>=97 && n<=122){
        return static_cast<char>(n-32);
    }

}


int main()
{
    char n;
    cin >> n;
    //imprimirDigitos(n);
    //cout <<"El numero de digitos es : " << contarDigitos(n)<< endl ;
    //cout << esPalindrome(n);
    //cout << fibonacci(n);
    //cout << esNumero(n);
    cout << esLetra(n);
    return 0;
}
