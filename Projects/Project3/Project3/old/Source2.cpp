// string::find_first_of
#include <iostream>       // cout
#include <string>         // string
#include <cstddef>        // size_t

using namespace std;

int main (){
    string str ("Please, replace the vowels in this sentence by asterisks.");
    size_t found = str.find_first_of("a");
    
    
    cout << found << " " << str[found] << endl;
    
    int i = 0;
    while (i < 10/*found != string::npos*/){
        
        i++;
        str[found] = '*';
        found = str.find_first_of("a",found+1);
    }
    cout << found << " " << str[found] << endl;
    cout << str << '\n';
    
    return 0;
}