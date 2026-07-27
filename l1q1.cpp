//iteration
#include<iostream>
using namespace std;
int factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
        return fact;   
}

int main(){
    int x;
    cout<<"enter the number";
    cin>>x;
    cout<<"factorial-"<<factorial(x);
    return 0;
}*/
 
//factorial- 6!-6*5*4*3*2*1

//recursion
#include<iostream>
using namespace std;
int factorial(int n)
{
    if(n==0||n==1)
return 1;

return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"enter value of n";
    cin>>n;
    cout<<"factorial-"<<factorial(n);
    return 0;
}


