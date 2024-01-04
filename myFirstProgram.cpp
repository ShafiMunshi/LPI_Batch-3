#include <iostream> // header file
using namespace std; // namespace declaration


// this is a main function- where compiler start code excutingg
int main(){
    int my_First_Number100 = 30; // 4 byte = 32 bit

    int mySecondNumber100 = 30; // 4 byte = 32 bit

    cout<<"hello world"<<endl;

    cout<< my_First_Number100 <<endl;// printing the value


    float f = 189.234232342; // 4 byte


    // this function is used for get how much memory consume each data
     cout<< sizeof(float) << endl;  
     cout<< sizeof(int) << endl;  


    cout << f << endl;

    int maxx=2147483647; // 10^9 is the max limit

    cout<<maxx<<endl;

    int min = -2147483648; // it is the minimum limit
    cout<< min<< endl;
}


/*
This is the docs file: 

 Text
String = "My country name is Bangladesh"
Character = 'f'
Number: 
	int ( integer ) = 100,32,242,235,234,2344,-200,-234,0
	float( floating ) = 10.23, -234.223
	double = 120.234423423423423

*/