


#include <iostream>
#include <string>
#include <array>
#include <vector>


using namespace std;


void printArray(string items[], int size)
{
   for(int i = 0; i < size, i ++)
   {
      cout << items[i] << endl;
   }     
     
}

int main()
{
   string foods1[5] = {"jello", "orange", "carrots", "grapes"};
   printArray(foods1, 5); 
    
   vector<string> foods;
   
   foods = {"grape", "carrots", "lemons"}   
   foods.push_back("tortillas");
   
   getc();
   return 0;
}
