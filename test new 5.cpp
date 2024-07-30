//Reverse the string
#include <bits/stdc++.h> 
string reverseString(string str)
{
	// Write your code here.
	   int left = 0, right = str.length() - 1;
           while (left < right) {
             swap(str[left], str[right]);
             left++;
             right--;
           }
           return str;
}
