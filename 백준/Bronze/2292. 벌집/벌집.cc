#include <iostream>

int main() {
   int N;
   std::cin >> N;

   int count = 1;
   int max = 1;
   if (N == 1) {
       count = 1;
   }
   else
   {
       while (N > max) {
           max +=  (6 * count);
           count++;
       }
   }
   std::cout << count;
   return 0;
}