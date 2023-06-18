#include<iostream>
#include<stack>
using namespace std;

// Leetcode Question: Balanced paranthesis '{([])}'

bool isValidString(string str)
{
    stack<char> st;

    for(int i=0; i<str.size(); i++)
    {
        if(str[i] == '{' || str[i] == '[' || str[i] == '(')
        {
            st.push(str[i]);
        }else if(str[i] == '}')
        {
            if(st.top() == '{')
                st.pop();
        }else if(str[i] == ')')
        {
            if(st.top() == '(')
                st.pop();
        }else if(str[i] == ']')
        {
            if(st.top() == '[')
                st.pop();
        }
    }

    if(st.empty())
    {
        return true;
    }else
    {
        return false;
    }
    
}

int main()
{
    string str = "{([])}";

    bool validString = isValidString(str);

    if(validString)
    {
        cout<<"\n Balanced Paranthesis \n";
    }else
    {
        cout<<"\n Un-Balanced Paranthesis \n";
    }

}