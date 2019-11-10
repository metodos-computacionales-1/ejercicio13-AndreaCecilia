#include <iostream>
#include <cmath>

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

void multiplicacion(float a){



}

int main(){
	//int argc, char **argv
  //int N=atoi(argv[1]);
  //double array[N];
int N=4;
float **Matriz=new float *[N];

for (int i =0; i <N; ++i){Matriz[i] = new float[N];} // creo la matriz cuadrada

rellenoNilpotent(N,Matriz);

return 0;
}

