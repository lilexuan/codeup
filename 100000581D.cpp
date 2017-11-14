#include <cstdio>
#include <algorithm>
#include <cstring>

using namespace std;

int main()
{
	char s[201] = {0};
	while (gets(s) != NULL) {
		sort(s, s + strlen(s));
		puts(s);
	} 
	return 0;	
} 
