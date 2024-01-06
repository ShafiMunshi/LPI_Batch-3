#include <bits/stdc++.h>
using namespace std;




/*
    1 byte = 8 bit
    4 byte = 32 bit



*/

int main(){
    
   // long long int data consume memory about 8 byte 
   // it can store about 2^63 – 1
    
   long long int a = 12; // 10^9

    // long long int a = 23; 

    
    int g; // variable declare

    // when we declare a variable compiler automatic assign to varible to 0
    int f;

    cout<<"declaring value : " << f <<endl;

    f = 100; // variable define

    cout<<"after defining value : " << f <<endl;

    // initialize

    int t = 200;


    // cout<<sizeof(a)<<endl;

    float r = 100.234224234;

    cout<<r<<endl;

    double d = 100.234224234;

    cout<<d<<endl;

    
    char ch = 'a'; // 1 byte = 8 bit // 97
    
    // research on ASCII table

    cout<<sizeof(char)<<endl;

    cout<<ch<<endl;


    char j = 98 ; // b


    cout<< j << endl;



    // boolen data type 

    /*
        in programming 

        1 means true
        0 means false

    */

    bool bo = true; 

    cout<<bo<<endl;// 1


    double dd = 123.4567890123456789;

    // we can use setprecision function to get more number after the decimal values

    cout<< setprecision(10) << dd <<endl;


    //
    // int a =120 , b=200 , c=300 , d=320 ;
    // int x,y,z;

    int aa = 100, bb=200 , cc= 300;

    int ddd = aa + bb + cc; 

    int n = 100;

    // total sum of 1 to 100 -->

    int dhara = ( n * (n+1) ) / 2; // 5050

    cout<< "total sum of 1-100 = "<< dhara <<endl;

    //type convention

    float height = 5.01; // ceil(), floor()



    int tall = ceil(height);//6

    int tall2 = floor(height);//5

    cout<<"tall: "<<tall<<endl;
    cout<<"tall2 : "<<tall2<<endl;

    char chh = 123; // {

    int ihh = (int) '{';

    cout<<ihh<<endl;
    

    return 0;
}