﻿#include <iostream>
#include <cmath>

// Se crea la funcion multiplicación

void multiplicacion(int N,float **m, float **n){
float **rta=new float *[N];
for (int i =0; i <N; ++i){rta[i] = new float[N];} 
float z=0;
for(int j=0;j<N;j++){
for(int ja=0; ja<N; ja++){
for(int ii=0; ii<N; ii++){
  //

   float z=z+m[j][ii]*n[ii][ja];}

rta[j][ja]=z;
std::cout<<" "<<rta[j][ja]<<" ";}
std::cout<<std::endl;  }
delete [] rta;
}

// Se crea la función para crear la matriz de Cauchy

void rellenoCauchy(int N,float **m){
for(int ii=0;ii<N; ii++){
for(int ij=0;ij<N; ij++){
  
m[ii][ij]=1/(ij+ii);   
std::cout<<" "<<m[ii][ij]<<" ";
}
std::cout<<std::endl;  
}
  
}
// Se crea la función para crear la matriz de Nilpotent

void rellenoNilpotent(int N,float **m){
for(int ii=0;ii<N; ii++){
for(int ij=0;ij<N; ij++){
  if(ii==0){
    if(ij==(N-1)){m[ii][ij]=1-N;}
    else{m[ii][ij]=2.0;}
    }
  else{
    if(ij==(N-1)){m[ii][ij]=-N;}
    else{
      if(ii-ij==1){m[ii][ij]=N+2;}
      else{m[ii][ij]=1;}
    }
    }
std::cout<<" "<<m[ii][ij]<<" ";
}
std::cout<<std::endl;  
}
  
}

// Se crea el main

int main(int argc, char **argv){
std::cout.precision(16);
std::cout.setf(std::ios::scientific);
int N=atoi(argv[1]);

float **Matriz=new float *[N];

for (int i =0; i <N; ++i){Matriz[i] = new float[N];} // creo la matriz cuadrada

rellenoNilpotent(N,Matriz);
std::cout<<"Se comprueba que la matriz sea  de Nilpotent multiplicandola por ella misma, ya que resulta una matriz de zeros: "<<std::endl;
multiplicacion(N, Matriz,Matriz);

delete [] Matriz;

return 0;
}

