#include <iostream>
#include <string>
 
using namespace std;
 
class Array{
      public :
             void buble (int bil[100], int N);
             void pindah (int bil[100]);
      };
 
 void Array::buble (int bil[100], int N)
{
   int n;
   int temp;
   int i;
   int j;
   //int[] bil = new int[int+1];
 
   i =1;
   while (!(i>N))
   {
      j =i+1;
      while (!(j>N))
      {
         if (bil[i]>bil[j])
         {
            temp =bil[i];
            bil[i] = bil[j];
            bil[j] = temp;
         }
         else
         {
         }
         j =j+1;
      }
      i =i+1;
   }
   cout << "Sorting " << endl;   i =1;
   while (!(i>N))
   {
      cout << bil[i] << endl;      i =i+1;
   }
}
void Array::pindah (int bil[100]){
   string raptor_prompt_variable_zzyz;
   int m;
   int n;
   int i;
   int j;
   int k;
   int y[100][100];
 
   j =1;
   i =1;
   raptor_prompt_variable_zzyz ="Banyak baris : ";
   cout << raptor_prompt_variable_zzyz;
   cin >> n;
   raptor_prompt_variable_zzyz ="Banyak kolom : ";
   cout << raptor_prompt_variable_zzyz;
   cin >> m;
   y[i][j] = 0;
   k =1;
   while (1)
   {
      j =1;
      if ((i>n)) break;
      while (!(j>m))
      {
         y[i][j] = bil[k];
         k =k+1;
         j =j+1;
      }
      i =i+1;
   }
   cout << "Data 2 Dimensi " << endl;   i =1;
   while (1)
   {
      j =1;
      if ((i>n)) break;
      while (!(j>m))
      {
         cout << y[i][j];         j =j+1;
 
      }
      cout << endl;
      i =i+1;
   }
}
int main()
{
    Array x;
   string raptor_prompt_variable_zzyz;
   int N;
   int i;
   int bil[100];
 
   raptor_prompt_variable_zzyz ="Banyak array : ";
   cout << raptor_prompt_variable_zzyz;
   cin >> N;
   i =1;
   while (!(i>N))
   {
      raptor_prompt_variable_zzyz ="input data :  ";
      cout << raptor_prompt_variable_zzyz;
      cin >> bil[i];
      i =i+1;
   }
   x.buble(bil,N);
   x.pindah(bil);
 
   cout<<endl;
   system("PAUSE");
   return 0;
}