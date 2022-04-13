#include <iostream>
 
#include <string>
 
using namespace std;
 
&nbsp;
 
class Bilangan{
 
private:
 
int x,y;
 
public:
 
Bilangan(){x=1;y=100;}
 
int rekursif(int x,int y);
 
void rekursif();
 
};
 
&nbsp;
 
int Bilangan::rekursif(int x,int y){
 
&nbsp;
 
if (x<=100){
 
if (x%5==0 && x%7==0){
 
cout<<"hasil :"<<x<<endl;
 
}
 
return rekursif(x+1,y);
 
}
 
}
 
int main()
 
&nbsp;
 
{   Bilangan z;
 
z.rekursif(1,100);
 
&nbsp;
 
system("PAUSE");
 
return EXIT_SUCCESS;
 
}