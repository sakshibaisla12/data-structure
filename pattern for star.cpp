/*#include <stdio.h>
int main()
{
    int  j,i;
    for(i=1; i<=3; i++)
    {
        for(j=1; j<=5; j++)
        {
            printf("*");

        }
        printf("\n");

    }

    return 0;
}
*/


/*#include<iostream>
using namespace std;

int main() {
    int n,i=1,j;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<j;
            j++;

        }
            cout<<endl;
            i++;

        }

}*/
/*#include<iostream>
using namespace std;

int main() {
    int n,i=1,j;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<n-j+1;;
            j++;

        }
            cout<<endl;
            i++;

}
  }
*/
/*#include<iostream>
using namespace std;

int main() {
    int n,i,j,cot=1;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<cot;
            cot++;
            j++;


        }
            cout<<endl;
            i++;
    }
    }
    */
/* output
enter the value of n
3
123
456
789*/
/*#include<iostream>
using namespace std;
int main() {
    int n,i,j,cot=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            cout<<(n*n)-cot<<" ";
            cot++;
            j++;


        }
            cout<<endl;
            i++;
    }
    }
*/
/*#include<iostream>
using namespace std;
int main() {
    int n,i,j,cot=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<"*"<<" ";
            j++;


        }
            cout<<endl;
            i++;
    }
    }
*/
/*#include<iostream>
using namespace std;
int main() {
    int n,i,j,cot=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
            cout<<i<<" ";
            j++;


        }
            cout<<endl;
            i++;
    }
    }
*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,i,j,cot=1;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    i=1;
    while(i<=n)
    {
        j=1;
        while(j<=i)
        {
          cout<<cot<<" ";
          cot++;
          j++;
        }
        cout<<endl;
        i++;
    }


}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,row,column,cot=1,value;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    row=1;
    while(row<=n)
    {
        column=1,value=row;
        while(column<=row)
        {
          cout<<value<<" ";
          value++;
          column++;
        }
        cout<<endl;
        row++;
    }


}
*/// HOME WORK QUESTION COMPLETE
/*#include<iostream>
using namespace std;
int main()
{
    int n,row,column,cot=1,value;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    row=1;
    while(row<=n)
    {
        column=1,value=row;
        while(column<=row)
        {
          cout<<row+column-1<<" ";

          column++;
        }
        cout<<endl;
        row++;
    }


}*/

/*#include<iostream>
using namespace std;
int main()
{
    int n,row,column,cot=1,value;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    row=1;
    while(row<=n)
    {
        column=1,value=row;
        while(column<=row)
        {
          cout<<row-column+1<<" ";

          column++;
        }
        cout<<endl;
        row++;
    }


}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,row,column,cot=1,value;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    row=1;
    while(row<=n)
    {
        column=1,value=row;
        while(column<=row)
        {
          cout<<row-column+1<<" ";

          column++;
        }
        cout<<endl;
        row++;
    }


}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,row,column,cot=1,value;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    row=1;
    while(row<=n)
    {
        column=1,value=row;
        while(column<=n)
        {
          char ch='A'+row-1;
          cout<<ch<<" ";

          column++;
        }
        cout<<endl;
        row++;
    }


}*/
/*#include<iostream>
using namespace std;
int main()
{
    int n,row,column;

    cout<<"enter the value of n"<<endl;
    cin>>n;
    row=1;
    while(row<=n)
    {
        column=1;
        while(column<=n)
        {
            char ch='A'+row+column-2;
            cout<<ch<<" ";



            column++;
        }
        cout<<endl;
        row++;
    }


}
*/
/*#include<iostream>
using namespace std;
int main (){
    int i,j,n;

    cout<<"enter the value of n"<<endl;
    cin>>n;
    i=i;
    while(i<=n){
        j=1;
        while(j<=i){
          char ch=('A'+i-1);
           cout<<ch<<" ";
           j++;
        }
        cout<<endl;
        i++;
    }
}
*/


////////////////////////////// ---------------HOLLOW SQUARE------------//////////////////////////////////
/*#include<iostream>
using namespace std;
int main (){
    int row,column,n,i;
    cout<<"enter the number"<<endl;
    cin>>n;
    for(row=0;row<n;row++){
        if(row==0||row==(n-1)){
        for(column=0;column<n;column++){
            cout<<"*";
        }
        }
        else{
            cout<<"*";
            for(i=0;i<n-2;i++){
                 cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
}
}
*/

//generic hollow rectangle
/*#include<iostream>
using namespace std;
int main (){
    int row,column,rw,cw,n,i;
    cout<<"enter the raw"<<endl;
    cin>>rw;
    cout<<"enter the col"<<endl;
    cin>>cw;
    for(row=0;row<rw;row++){
        if(row==0||row==(rw-1)){
        for(column=0;column<cw;column++){
            cout<<"*";
        }
        }
        else{
            cout<<"*";
            for(i=0;i<cw-2;i++){
                 cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
}
}
*/
/*#include<iostream>
using namespace std;
int main (){
    int row,column,rw,cw,n,i;
    cout<<"enter the raw"<<endl;
    cin>>rw;
    cout<<"enter the col"<<endl;
    cin>>cw;
for(row=1;row<=rw;row++){

  for(column=1;column<=row;column++){
        cout<<"*";
   }
  cout<<endl;
}
}
*/
/*#include<iostream>
using namespace std;
int main (){
    int row,column,rw,cw,n,i;
    cout<<"enter the raw"<<endl;
    cin>>rw;
    cout<<"enter the col"<<endl;
    cin>>cw;
for(row=1;row<=rw;row++){

  for(column=rw;column>=row;column--){
        cout<<"*";
   }
  cout<<endl;
}
}*/

/*#include<iostream>
using namespace std;
int main (){
    int row,column,rw,cw,n,i;
    cout<<"enter the raw"<<endl;
    cin>>rw;
    cout<<"enter the col"<<endl;
    cin>>cw;
for(row=1;row<=rw;row++){

  for(column=1;column<=row;column++){
        cout<<column;
   }
  cout<<endl;
}
}
*/
/*#include<iostream>
using namespace std;
int main (){
    int row,column,rw,cw,n,i;
    cout<<"enter the raw"<<endl;
    cin>>rw;
    cout<<"enter the col"<<endl;
    cin>>cw;
for(row=1;row<=rw;row++){

  for(column=rw;column>=row;column--){
        cout<<column;
   }+
  cout<<endl;
}
}

*/


/*#include<iostream>
using namespace std;
int main (){
    int row,column,rw,cw,n,i;
    cout<<"enter the raw"<<endl;
    cin>>rw;
    cout<<"enter the col"<<endl;
    cin>>cw;
for(row=1;row<=rw;row++){

  for(column=1;column<=cw-row;column++){
        cout<<column;
   }
  cout<<endl;
}
}
*/
/*#include<iostream>
using namespace std;
int main ()
{
    int row,column,rw,cw,z,n,i,j,s;
    cout<<"enter the raw"<<endl;
    cin>>n;
    for(row=0; row<n; row++)
    {
        for(column=0; column<n+row; column++)
        {
            if(column<n-row-1)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }

        }
        cout<<endl;
    }
    for(i=0; i<n; i++)
    {
        for(s=0;s<i;s++){
            cout<<" ";
        }
        for(j=0; j<2*(n-i)-1; j++)
        {
          cout<<"*";
        }
         cout<<endl;
    }
}
*/
// output
/*
     *
   * * *
 * * * * *
   * * *
     *
*/


/*#include<iostream>
using namespace std;
int main ()
{
    int row,column,rw,cw,z,n,i,j,s;
    cout<<"enter the raw"<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(s=0;s<i;s++){
            cout<<" ";
        }
        for(j=0; j<2*(n-i)-1; j++)
        {
          cout<<"*";
        }
         cout<<endl;
    }
 for(row=0; row<n; row++)
    {
        for(column=0; column<n+row; column++)
        {
            if(column<n-row-1)
            {
                cout<<" ";
            }
            else
            {
                cout<<"*";
            }

        }
        cout<<endl;
    }}
*/

 //------------output
 /*
 * * * * *
   * * *
     *
     *
   * * *
 * * * * *
*/

/*#include<iostream>
using namespace std;
int main ()
{
    int row,column,rw,cw,z,n,i,j,s;
    cout<<"enter the raw"<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {


        for(j=0; j<n-i-1; j++)
        {
          cout<<" ";
        }
        for(j=0; j<i+1; j++)
        {
          cout<<"* ";
        }
         cout<<endl;
    }
}
*/
#include<iostream>
using namespace std;
int main ()
{
    int row,column,rw,cw,z,n,i,j,s;
    cout<<"enter the raw"<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
       for(j=0; j<i; j++)
        {
          cout<<" ";
        }
        for(j=0; j<n-i; j++)
        {
          cout<<"* ";
        }
        cout<<endl;
    }
}







