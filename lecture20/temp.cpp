// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
#include <sstream>
map<int, string> dmap = {
    {0, "zer"},
    {1, "one"},
    {2, "two"},
    {3, "thr"},
    {4, "fou"},
    {5, "fiv"},
    {6, "six"},
    {7, "sev"},
    {8, "eig"},
    {9, "nin"}
};
int solve(string& s){
     int coeffSum = 0;
        while(s.size()>1){
        for (char digit : s) {
            
                coeffSum += digit - '0';
            
            } cout<<coeffSum<<'\n';
            s = to_string(coeffSum); coeffSum=0;
            
        }
        // cout<<coefficient<<'\n';
        return stoi(s);
}
// Function to create the password based on the given rules
string createPassword(double number, const string& name) {
    try {
        // Transform the provided decimal number into scientific notation
        ostringstream scientificNotation;
        // scientificNotation << scientific << number;
    scientificNotation << scientific << setprecision(6) << number;
        string scientificStr = scientificNotation.str();
        cout<<scientificStr<<'\n';
        // Extract the coefficient and exponent from scientific notation
        size_t ePos = scientificStr.find('e');
        string coefficient = scientificStr.substr(0, ePos);
        int ex =stoi(scientificStr.substr(ePos + 1));
        if(ex <0 )ex *=(-1);
        string exponent = to_string(ex);

        // Simplify the digits after the decimal point to a single digit
        
        cout<<coefficient<<" "<<exponent<<'\n';
        string s1= dmap[coefficient[0]-'0'] ;
     
        // cout<<coefficient<<'\n';
        string decimal = coefficient.substr(2);
        int simplifiedCoefficient = solve(decimal)  ;

        // Apply the same rule to the exponent
        int simplifiedExponent = solve(exponent); 
        // cout<<simplifiedExponent;

        // Create string S1 by concatenating the first three letters of each digit
        s1 += dmap[simplifiedCoefficient]+'e' + dmap[simplifiedExponent];

        // If the exponent is odd, concatenate all letters at odd positions in the name
        string s2;
        if (simplifiedExponent % 2 == 1) {
            for (size_t i = 0; i < name.length(); i += 2) {
                s2 += name[i];
            }
        }

        // Form the password by combining S1 and S2, separated by "@"
        string password = s1 + "@" + s2;

        return password;

    } catch (const exception& e) {
        // Invalid input if there's an issue with the conversion
        return "Invalid input";
    }
}

int main() {
    // Example usage:
    // vector<pair<string, string>> testCases = {
    //     {"3", "John"},
    //     {"323", "Alice"},
    //     {"437", "Bob"},
    //     {"054785949", "rajarajeswari"},
    //     {"00.00000934749" ,"bhuvaneswari"}
    // };
    int t;
    while(t--){
        string number; cin>>number;int i=0;
        for(;i<number.size();i++){
           if(number[i]!='0')break; 
        } 
        number = number.substr(i); //cout<<number;
        double num= stod(number);
        string name; cin>>name;
        
        string password = createPassword(num, name);
        cout<<password<<endl;
    }
    

    return 0;
}
