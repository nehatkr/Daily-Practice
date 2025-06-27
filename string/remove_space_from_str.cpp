// Problem Statement: Given a string, write a program to remove all the whitespaces from the string.

#include<iostream>
using namespace std;

string removeSpace(char str[]){
    int count = 0;
    for (int i = 0; i < str[i]; i++)
    
        if (str[i] != ' ') //if whitespace is present
        {
           str[count] = str[i]; //remove whitespace
           count++;
        }
        str[count] = '\0';
        return str;
    
}

int main(){
    char str[] = " Take You forward";
   cout<< removeSpace(str);
   return 0;
}
