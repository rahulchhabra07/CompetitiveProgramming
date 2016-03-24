#include<iostream>
#include<string>
using namespace std;
std::string abacaba(int K) {
		std::string s,t;
		for(int i=0;i<26;i++)		
		s=s+char('a'+i)+s;		
		
		return std::string (s[K-1]);
}

