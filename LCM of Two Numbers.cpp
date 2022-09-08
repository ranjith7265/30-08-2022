#include <iostream>
using namespace std;


void vline(){
    int i;
    for(i=0;i<=60;i++)
    {
        cout<<"*";
    }
    cout<<"\n";
}
int Findlcm(int a, int b){
    int lcm;
    if(a>b)
   lcm = a;
   else
   lcm = b;
   while(1) {
      if( lcm%a==0 && lcm%b==0 ) {
         cout<<"The LCM of "<<a<<" and "<<b<<" is "<<lcm<<"\n";
         break;
      }
      lcm++;
   }
   return 0;
}
int main() {
   int a,b;
   vline();
   cout<<"Enter Two numbers to find LCM ::\n";
   cout<<"Num1 = ";cin>>a;
   cout<<"Num2 = ";cin>>b;
   Findlcm(a,b);
   vline();
   return 0;
}