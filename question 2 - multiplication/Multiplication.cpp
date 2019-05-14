#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1.size()==0||num2.size()==0) return "";
        string ret(num1.size()+num2.size()+1,'0');
        reverse(num1.begin(),num1.end());
        reverse(num2.begin(),num2.end());
        for(int i=0;i<num2.size();i++){
            int dig2=num2[i];
            int carry=0;
            for(int j=0;j<num1.size();j++){
                int dig1=num1[j];
                int temp=ret[i+j];
                int cur=dig1*dig2+temp+carry;
            }
            ret[i+num1.size()]=carry;
        }
        reverse(ret.begin(),ret.end());
        int pos=ret.find_first_not_of('0',0);
        if(pos<0||pos>=ret.size())
            pos=ret.size()-1;
        return ret.substr(pos,ret.size()-pos);
    }
};
int main(){
 Solution s1;
 cout<<s1.multiply("293942349234902340230402394234023","40023924023040230");

}
