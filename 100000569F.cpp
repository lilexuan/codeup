#include <cstdio>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;
    int tmp;
    for(int i=0;i<10;i++){
        scanf("%d",&tmp);
        s.push(tmp);
    }
    for(int i=0;i<10;i++){
        printf("%d\n",s.top());
        s.pop();
    }
    return 0;
}
