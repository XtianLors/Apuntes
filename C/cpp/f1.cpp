
#include <bits/stdc++.h>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
   
   int result[2] = {0,0};
   vector<int> score;
   string output = "  ";
   
   // Compare for clarity
   if(a[0] < b[0]){
       result[0] = result[0] +1;
   }
   else if (b[0] < a[0]){
       result[1] = result[1] +1;
   }
   
   //Compare for originality
  if(a[1] < b[1]){
       result[0] = result[0] +1;
   }
   else if (b[1] < a[1]){
       result[1] = result[1] +1;
   }
   
   //Compare for difficulty
  if(a[2] < b[2]){
       result[0] = result[0] +1;
   }
   else if (b[2] < a[2]){
       result[1] = result[1] +1;
   }
   
   score[0] = result[0];
   score[1] = result[1];
   
   output[0] = string score[0];
   output[1] = string score[1];
   
   return( cout << output << endl );
    
}
