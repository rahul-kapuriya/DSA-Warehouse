#include <iostream>
#include <string>

using namespace std;

void reversee(string &str)
{
    int st = 0;
    int end = str.length()-1;

    while(st<end)
    {
        swap(str[st],str[end]);
        st++;
        end--;
    }

    cout<<str<<endl;

}

int main ()
{
    cout<<"this is it ..."<<endl;
    string str = "Rahul V. Kapuriya";
    reversee(str);

    return 0;
}