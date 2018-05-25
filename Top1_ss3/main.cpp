#include<bits/stdc++.h>
using namespace std;
int abs(int x){
    if(x<0) return -x;
    else return x;
}
struct sample {
    int pp, qq;
};

int exact(int a, int b){
   if(a%b==0) return b;
   int n=a%b;
   if(b%n==0) return n;
   else return exact(b,n);
}

void simplify(sample& r1) {
    int s1 = exact(abs(r1.pp), r1.qq);
    r1.pp = r1.pp/s1;
    r1.qq = r1.qq/s1;
    if(r1.qq < 0) {
         r1.pp= -r1.pp;
         r1.qq= -r1.qq;
    }
}

sample operation1(sample a1, sample b1) {
    sample c1;
    c1.pp = a1.pp*b1.qq + b1.pp*a1.qq;
    c1.qq = a1.qq*b1.qq;
    simplify(c1);
    return c1;
}

sample operation2(sample a1, sample b1) {
    sample c1;
    c1.pp = a1.pp*b1.pp;
    c1.qq = a1.qq*b1.qq;
    simplify(c1);
    return c1;
}

int main(){
    sample num1, num2;
    num1.pp=8;
    num1.qq=12;
    num2.pp=6;
    num2.qq=14;
    simplify(num1);
    simplify(num2);
    int output1=operation2(num1,num2).pp;
    int output2=operation2(num1,num2).qq;
    int output3=operation1(num1,num2).pp;
    int output4=operation1(num1,num2).qq;
    cout<<output3+output4;
    return 0;
}
