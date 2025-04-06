#include <iostream>

using namespace std;

int main()
{
    char c;
    cin >> c;

    //The vowels are(a,e,i,o,u), the rest are consonants.
    if(c == 'A' || c == 'E' || c == 'I' ||  c == 'O' || c == 'U'){
        cout << "Alphabet Upper Vowel";
    }else if(c == 'a' ||  c == 'e' || c == 'i' || c == 'o' || c == 'u' ){
        cout << "Alphabet Lower Vowel";
    }else if(int(c) > 64 && int(c) < 91){
        cout << "Alphabet Upper Consonant";
    }else if(int(c) > 96 && int(c) < 123){
        cout << "Alphabet Lower Consonant";
    }else if(int(c) > 47 && int(c) < 58){
        cout << "Number";
    }else{
        cout << "Special";
    }
    return 0;
}


