
class Solution {
#include<iostream>
#include <stdio.h>
public:
void removeOCCRE(string &s, string &part) {
int found = s. find (part);
if (found != string::npos) {
//part string has been located.
//Please remove it
string left_part = s.substr(0, found);
string right_part = s.substr( found+part.size () , s.size ()) ;
s = left_part + right_part;
removeOCCRE(s, part) ;
}
else{
//base case
//all the occurences of part has been removed from s.
return;
}
}
string removeOccurrences (string s, string part) {
removeOCCRE (s, part) ;
return s;
}
};