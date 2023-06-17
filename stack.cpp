#include<iostream>
using namespace std;
#include<stack>

// Reverse a string using Stack. How are you? = you? are How

void reverseString(string str)
{
    stack<string> st;

    string word;
    for(int i=0; i<str.length(); i++)
    {
        string word = "";

        while(str[i] != ' ' && i<str.length())
        {
            word += str[i];
            i++;
        }

        st.push(word);
    }

    cout<<endl;
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();  
    }
    cout<<endl;    
}

int main()
{
    reverseString("How are you?");
}