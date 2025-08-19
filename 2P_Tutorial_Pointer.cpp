#include<iostream>
using namespace std ;

void InInt(int* numberPtr)
{
    cout << *numberPtr << endl ;
}

void InLetter(char* LetterPtr)
{
    cout << *LetterPtr << endl ;
} 

int main()
{
    int number = 5 ;
    InInt(&number) ;

    char letter = 'a' ;
    InLetter(&letter) ;
}
