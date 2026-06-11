#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <stack>
#include <algorithm>
#include <cmath>

using namespace std;

int precedence(char ch)
{
    if (ch == '^')
        return 3;
    else if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    return 0;
}

int main()
{
    string input;
    vector<char> infix;
    vector<char> postfix;
    stack<char> storage;
    vector<char> prefix;
    // getting the input equation
    cout << "Enter the equation: ";
    getline(cin, input);
    // putting the equation in infix vector
    for (int i = 0; i < input.size(); i++)
    {
        infix.push_back(input[i]);
    }
    // printing the original equation
    cout << "The infix notation: " << endl;
    for (int i = 0; i < infix.size(); i++)
    {
        cout << infix[i] << " ";
    }
    // reading the equation and putting that into the postfix notation
    for (int i = 0; i < infix.size(); i++)
    {
        char temp = infix[i];
        if (isalnum(temp))
        {
            postfix.push_back(temp);
        }
        else if (temp == '(')
        {
            storage.push(temp);
        }
        else if (temp == ')')
        {
            while (!storage.empty() && storage.top() != '(')
            {
                postfix.push_back(storage.top());
                storage.pop();
            }
            storage.pop();
        }
        else
        {
            while (!storage.empty() && ((precedence(temp) < precedence(storage.top())) || (precedence(temp) == precedence(storage.top()) && temp != '^')))
            {
                postfix.push_back(storage.top());
                storage.pop();
            }
            storage.push(temp);
        }
    }

    while (!storage.empty())
    {
        postfix.push_back(storage.top());
        storage.pop();
    }

    // printing the postfix notation
    cout << "The postfix notation: " << endl;
    for (int i = 0; i < postfix.size(); i++)
    {
        cout << postfix[i] << " ";
    }
    cout << endl;

    // now prefix
    vector<char> infixrev;
    for (int i = infix.size() - 1; i >= 0; i--)
    {
        if (infix[i] == '(')
        {
            infixrev.push_back(')');
        }
        else if (infix[i] == ')')
        {
            infixrev.push_back('(');
        }
        else
        {
            infixrev.push_back(infix[i]);
        }
    }

    // printing the reverse infix notation
    cout << "The reverse infix notation with reverse brackets: " << endl;
    for (int i = 0; i < infixrev.size(); i++)
    {
        cout << infixrev[i] << " ";
    }

    // reading the equation and putting that into the prefix notation
    for (int i = 0; i < infixrev.size(); i++)
    {
        char temp = infixrev[i];
        if (isalnum(temp))
        {
            prefix.push_back(temp);
        }
        else if (temp == '(')
        {
            storage.push(temp);
        }
        else if (temp == ')')
        {
            while (!storage.empty() && storage.top() != '(')
            {
                prefix.push_back(storage.top());
                storage.pop();
            }
            storage.pop();
        }
        else
        {
            while (!storage.empty() && ((precedence(temp) < precedence(storage.top())) || (precedence(temp) == precedence(storage.top()) && temp != '^')))
            {
                prefix.push_back(storage.top());
                storage.pop();
            }
            storage.push(temp);
        }
    }

    while (!storage.empty())
    {
        prefix.push_back(storage.top());
        storage.pop();
    }

    reverse(prefix.begin(), prefix.end());
    // printing the prefix notation
    cout << "The prefix notation: " << endl;
    for (int i = 0; i < prefix.size(); i++)
    {
        cout << prefix[i] << " ";
    }
    cout << endl;

    // now evaluation of postfix notation
    stack<int> result;
    for (int i = 0; i < postfix.size(); i++)
    {
        char num = postfix[i];
        if (isdigit(num))
        {
            result.push((int)num);
        }
        else
        {
            int num1 = (int)result.top();
            result.pop();
            int num2 = (int)result.top();
            result.pop();
            if (num == '^')
                num1 = pow(num2, num1);
            else if (num == '/')
                num1 = num2/num1;
            else if (num == '*')
                num1 = num2 * num1;
            else if (num == '+')
                num1 = num2 + num1;
            else if (num == '-')
                num1 = num2 - num1;
            result.push(num1);
        }
    }

    // posting the result
    cout << "The result is: " << result.top();
}
