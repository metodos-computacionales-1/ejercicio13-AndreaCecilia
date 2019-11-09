//Exercise 3
//Implement a function that computes the Fibonacci numbers (with a for and with a recursive function).
#include <iostream>


long fibonaccir(long n)
{
    if (n>1)
    {return (fibonaccir(n-2)+fibonaccir(n-1));}
    else if(n==1)
        {return 1;}
    else{return 0;}
}
long fibonaccif(long n)
{
long f0=0;
long f1=1;
long rta=0;
if(n==0){return f0;}
else if(n==1){return f1;}
else{
for(int i=0; i<(n-1); i++){
rta = f0+f1;
f0=f1;
f1=rta;
}
return rta;
}

}


int main(void)
{  
    long number=30;
   
    std::cout<<"fibonacci de "<<number<< " es " <<fibonaccir(number)<<" en la función recursiva"<<"\n";

    std::cout<<"fibonacci de "<<number<< " es " <<fibonaccif(number)<<" en la función con for"<<"\n";
    return 0;
}