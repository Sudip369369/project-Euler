/*Multiples of 3 or 5 
problem 1 :-
if we list all the natural numbers below 10 that are Multiples of 3 or 5.
we get 3,5,6 and 9.The sum of these Multiples is 23.
find the sum of all the Multiples of 3 or 5 below 1000.
*/

#include <iostream> 
using namespace std;

int main(){
    int n = 1000;
    int sum = 0;
    for (int i = 1;i<n;i++){
       if(i%3==0||i%5==0){
        sum = sum + i;
       }
    }
    cout << "\n The sum of all the Multiples of 3 or 5 below 1000 is: " << sum;
    return 0;
}