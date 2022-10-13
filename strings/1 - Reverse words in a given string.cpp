// Inverter a posição das palavras na string. O desafio pede para inverter as palavras de uma determinada string de entrada sem inverter a posição das letras de cada palavra. As palavras são separadas por um ponto ("."). Ex: entrada = "abcd.efg.hijk" deve retornar a saída="hijk.efg.abcd".
//
// 
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        char delimiter = '.';
        string output = "";
        int size = 0;
        for(int i=S.length()-1;i>=0;i-=1){
            size += 1;
            if(S[i]==delimiter){
                output += S.substr(i+1,size);
                output += ".";
                size = -1;
            }
            else{
                if(i==0){
                    output += S.substr(i,size+1);
                }
            }
        }
        return output;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends
