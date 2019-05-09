#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main(){
    double dx=0.01;
    double dt=0.01;
    double eps=1;
    double val;
    
    for(int i=0;i<2.0;i+dx){
        val=(cos(i)/dt)+eps*sin(i)*(cos(i)/dx);
        cout<<i<<" "<<val<<endl;
    }
}