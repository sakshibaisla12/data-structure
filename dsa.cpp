//////////////////////////////////////////----3 sem ---///////////////////////////////////////////////////
//------------------------1find the largest number among the three numbers entered by the user.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the number"<<endl;
    cin>>a>>b>>c;
    //cout<<"largest among three is"<<biggest(biggest(a,b),c));
    /*if(a>b&&a>c){
        cout<<"a is greater"<<endl;
    }
    else if(b>a&&b>c){
        cout<<"b is greater"<<endl;
    }
    else{
        cout<<"c is greater"<<endl;
    }*/

//-------------------------------------m2---------------------------------------------------------
  if(a>b){
        if(a>c){
            cout<<"a is greater"<<endl;
        }
        else{
            cout<<"c is greater"<<endl;
        }
    }
    else if (b>c){
        cout<<"b is greater"<<endl;
    }
    else{
        cout<<"c is grater"<<endl;

    }
}
}

int biggest(int a,int b){
if(a>b){
    return a;
}
return b;
}
*/

/////////-------------check whether an alphabet entered by the user is a vowel or a consonant.
#include<iostream>
using namespace std;
int main(){
    char ch, lowercase,uppercase;
cout<<"enter the character"<<endl;
cin>>ch;
lowercase= (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
uppercase= (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
if(!isalpha(ch)){
    cout<<"enter number is not alphabetic character"<<endl;
}
else if(lowercase||uppercase){
    cout<<"enter number is vowel"<<endl;
}
else{
      cout<<"enter number is consonant"<<endl;
}
}

//MM2

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"enter the character"<<endl;
    cin>>ch;
if(!isalpha(ch)){
    cout<<"enter number is not alphabetic character"<<endl;
}
else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
    cout<<"enter number is vowel"<<endl;
}
else{
    cout<<"enter number is consonant"<<endl;
}
}

//-----------check whether the year entered by the user is a leap year or not.
#include<iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year"<<endl;
    cin>>year;
    if(year%400==0 || year%4==0){
        cout<<"enter year is leap"<<endl;
    }
    else{
        cout<<"enter year is not leap year"<<endl;
    }
}

//QUES---7----Write a C program to read temperature in centigrade and display a suitable message according to temperature state below : Go to the editor
#include<iostream>
using namespace std;
int main(){
    int Temp;
    cout<<"enter the temp"<<endl;
    cin>>Temp;
    if(Temp<=0){
         cout<<"then Freezing weather"<<endl;
    }
 else if(Temp>=0&&Temp<=10 ){
    cout<<"then Very Cold weather"<<endl;
   }
 else if(Temp>=10&&Temp<=20){
    cout<<"then Cold weather"<<endl;
   }
 else if(Temp>=20&&Temp<=30){
    cout<<"then Normal in Temp"<<endl;
   }
  else if(Temp>=30&&Temp<=40){
    cout<<"then Its Hot	"<<endl;
   }
   else{
    cout<<"then Its Very Hot"<<endl;
   }
   }
