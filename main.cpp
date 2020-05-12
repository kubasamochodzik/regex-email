#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <math.h>
#include <regex>

using namespace std;
int main(int argc, char** argv) {
string input;
 regex regularne("[a-z]+@[a-z]+\.pl"); 
    ofstream plik1;
   ifstream plik;  
   plik.open("1.txt"); 
   plik1.open("2.txt");  
   if(plik.good())  
        while(!plik.eof())  
        {
    plik>>input;
cout<<input;
cout<<endl;
if(!cin) break;
if(input=="koniec")
break;
if(regex_match(input,regularne)) 
    {
    cout<<"email poprawny"<<endl;
    plik1<<input<<"<-email poprawny"<<endl;
    }
    else
    {
    cout<<"email niepoprawny"<<endl;
    }  
        }
plik.close(); 
plik1.close();  
 
cout<<endl;
 return 0;
}

