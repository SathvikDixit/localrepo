#include<iostream>
using namespace std;
double power(double baseNum , double powNum ){  //  Function for Squaring or Cubing numbers
    double result = 1;

    for (int i=0;i<powNum;i++){
        result=result*baseNum;
    }
    return result;
}
int main()
{
   cout << power (2,9);
}