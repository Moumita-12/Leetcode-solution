class Solution {
public:
    string addBinary(string a, string b) {

        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        
        if(a.length()<b.length()){
            int diff = b.length() - a.length();
            a.append(string(diff,'0'));
        }
        else if(a.length()>b.length()){
            int diff = a.length() - b.length();
            b.append(string(diff,'0'));
        }

        string result;
        int sum=0,carry=0;

        for(int i =0; i<a.length();i++){
            sum = (a[i]-'0' + b[i]-'0' + carry)%2;
            carry = (a[i]-'0' + b[i]-'0' + carry)/2;
            result.push_back(sum + '0');
        }

      //  cout<<result<<endl;

        if(carry)  result.push_back('1');

        reverse(result.begin(), result.end());

        return result;
        
    }
};
