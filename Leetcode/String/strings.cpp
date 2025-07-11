#include <iostream>
#include <string>

using namespace std;

int main ()
{
    cout<<"this is it ..."<<endl;
    

    /* this are the character Array in c++ also called C-String but it has many limitations ..
        such as fixed size
        static 
        manual memory allocation
        can not resize dynamically
    */
    // char str[100];

    // cin.getline(str,13);

    // cout<<str<<endl;

    /* because of these issues we use String in c++
        which is advance version of character Array 
        String is a class like iostream
        we uses its objects to declare its variable 
        library for string is #include <string> */


    string str1 = "Rahul ";
    string str2 = "V. ";
    string str5 = "V. ";
    string str3 = "Kapuriya";
    
    string str4 = str1+str2+str3;
    cout<<str4<<endl;

    cout<<(str2 == str5 ? "Yes string are equal" : "No its different");

    return 0;
}