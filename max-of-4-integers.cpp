/*
https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true


Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
Print the greatest of the four integers. 
PS: I/O will be automatically handled.

Input Format
Input will contain four integers -  , one in each line.
Sample Input
3
4
6
5
Sample Output
6 
*/


#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int a, int b, int c, int d)
    {
   int biggest = a;
    if(biggest<b)
        {
        biggest= b;
    }
    if(biggest<c){
        biggest= c;
    }
    if(biggest<d){
        biggest=d;
    }
    return biggest;
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
