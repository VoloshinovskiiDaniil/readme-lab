#include "fibonacci.h"

int main() {
   int x, i=0;
   cout << "Enter the number of terms of series: ";
   cin >> x;
   cout << "\nOutput: ";
   while(i < x) {
      cout << " " << fib(i);
      i++;
   }
   return 0;
}
