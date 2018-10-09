#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
bool isodd(int n){
    return n%2==1;
}
bool isweird(int n){
    bool weird = true;
    bool notweird =! weird;
    if (isodd (n))
        return weird;
    if (n>=2 && n<=5)
        return notweird;
    if (n>=6 && n<= 20)
        return weird;
    return notweird;
}
int main (){
    int n;
    cout <<"Hay nhap vao mot so bat ky tu 1 den 100\n";
    cin >>n;
    isweird (n)  ? cout <<"Weird\n":cout <<"Not Weird\n";
    return 0;
}
    
