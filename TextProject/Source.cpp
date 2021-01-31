#include<iostream>
#include<fstream>
#include<string>
#include <cstring>
#include "string.h"
#include<functional>
#include <windows.h>
#include<vector>
#include <algorithm>

using namespace std;

bool comp(pair<string, string> a, pair<string, string> b){
	return stoi(a.second) < stoi(b.second);
}
int main(){
	vector<string>M1, M2;
	vector<int>t;

	M1.push_back("Voronezh +17 C");
	M1.push_back("Moscow -29 C");
	M1.push_back("Peterburger +10 C");
	M1.push_back("Kursk +25 C");

	M2.push_back("+17");
	M2.push_back("-29");
	M2.push_back("+10");
	M2.push_back("+25");

	int n = 4;
	vector<pair<string, string>> arr(n);
	for (int i = 0; i < n; i++)
	{
		arr[i].first = M1[i];
		arr[i].second = M2[i];
	}

	sort(arr.begin(), arr.end(), comp);
 
	for (int i = 0; i < n; i++)
	{
		cout << arr[i].first << endl ;
 	}
 }
