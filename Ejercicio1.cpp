// Exercise 1.
//En el último código, imprima la dirección de memoria de cada variable para verificar que estén en diferentes ubicaciones de memoria. (use the operator &)

#include <iostream>
int subtraction(int a, int b)
{
    int r;
    r=a-b;
    return r;
}

int main(void)
{
    int x=5,y=3,z;
    z=subtraction(7,2);
    std::cout<< "The first result is " << & z<<"\n";
    std::cout<< "The second result is " << & subtraction(7,2)<<"\n";
    std::cout<< "The third result is " << & subtraction(x,y)<<"\n";
    z=4+subtraction(x,y);
    std::cout<< "The fourth result is " << & z<<"\n";
    return 0;
}