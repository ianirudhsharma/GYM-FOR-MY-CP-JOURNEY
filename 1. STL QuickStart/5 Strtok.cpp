#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
    char str[80]="This is - www.codingBlocks.com - website";
    const char s[2]="-";

    char * token;
    token=strtok(str,s);

    while(token){
      printf( " %s\n", token );
    
      token = strtok(NULL, s);


    }

    return 0;
}
