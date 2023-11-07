#include <iostream>

void BCDConversionPrint(int n)
{
     vbdHex(4, (n/1000)%10);
     vbdHex(3, (n/100)%10);
     vbdHex(2, (n/10)%10);
     vbdHex(1, (n)%10);
}

int main(){

int n = 999;
BCDConversionPrint(n);
//std::cout << n;



}