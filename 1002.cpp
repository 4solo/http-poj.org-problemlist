#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
	int n;
	cin >> n;
	string *str;
	int yes = 0;
	str = new string[n];
	string *str2;
	str2 = new string[n];
	for (int i = 0; i < n; i++)
		cin >> str[i];
	map<string, int> mymap;
	map<string, int>::iterator it;
	map<char, char> ha;
	ha['A'] = '2';
	ha['B'] = '2';
	ha['C'] = '2';
	ha['D'] = '3';
	ha['F'] = '3';
	ha['E'] = '3';
	ha['G'] = '4';
	ha['H'] = '4';
	ha['I'] = '4';
	ha['J'] = '5';
	ha['K'] = '5';
	ha['L'] = '5';
	ha['M'] = '6';
	ha['N'] = '6';
	ha['O'] = '6';
	ha['P'] = '7';
	ha['R'] = '7';
	ha['S'] = '7';
	ha['T'] = '8';
	ha['U'] = '8';
	ha['V'] = '8';
	ha['W'] = '9';
	ha['X'] = '9';
	ha['Y'] = '9';
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < str[i].size(); j++)
		{
			if (str[i][j] >= 'A' && str[i][j] <= 'Y'|| str[i][j]>='0' && str[i][j]<='9')
			{
				if (str[i][j] >= 'A' && str[i][j] <= 'Y')
					str2[i].push_back(ha[str[i][j]]);
				else
				{
					str2[i].push_back(str[i][j]);
				}
				if (str2[i].size()==3)
					str2[i].push_back('-');
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		it=mymap.find(str2[i]);
		if (it == mymap.end())
		{
			mymap.insert(pair<string, int>(str2[i], 1));
		}
		else
		{
			it->second = it->second + 1;
		}
	}
	for (it = mymap.begin(); it != mymap.end(); it++)
	{
		if (it->second > 1)
		{
			cout << it->first << " " << it->second << endl;
			yes = 1;
		}
	}
	if (yes == 0)
	{
		cout << "No duplicates." << endl;
	}
	free(str);
	free(str2);
	return 0;
}