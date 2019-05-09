#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){

  double delta_x = 0.01;
  double delta_t = 0.01;
  double t_max = 2.0; 
  int t = t_max/delta_t;
  double c = 1.0;
  double beta = c*delta_t/delta_x;
  int x = 100;
  double u[x];
  double u_new[x];
  int i;
  int j;
  ofstream outfile;
    
  for(i=0;i<x;i++){
      u[i]=sin(4*M_PI*i*delta_x)/20;
  }
    
  outfile.open("datos.dat");
    
  for(j=0;j<t;j++){
      for(i=1;i<x-1;i++){
          u_new[x]=u[i]-(beta/4)*(pow(u[i+1],2)-pow(u[i-1],2))+pow(beta,2)/8*((u[i+1]+u[i])*(pow(u[i+1],2)-pow(u[i],2))-(u[i]+u[i-1])*(pow(u[i],2)-pow(u[i-1],2)));
      }
     for(i=0;i<x;i++){
         outfile << u[i] << " ";
  }
      outfile <<"\n";
      
      for(i=1;i<x-1;i++){
          u[i]=u_new[i];
        } 
    
    }
    outfile.close();

  return 0;
}
    
