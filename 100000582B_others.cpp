#include<iostream>  
#include<map>  
#include<vector>  
#include<set>  
#include<algorithm>  
using namespace std;  
  
int main()
{
    int m, n,temp;  
    pair<int, int> p; vector<int> v,v1,v2;  
    set<int> s, ss; int count;  
    vector<pair<int, int> > vv;  
    cin >> m;//��������������Ŀ�е��˵Ҫ���m�У���ʵ���ǵģ��������m��  
    while (m--)  
    {  
        cin >> n;//���������Ҫ��������ĸ���  
        for (int i = 0; i < n; i++)  
        {  
            cin >> temp;  
            v.push_back(temp);//�������v������Ϊ�˱������һ�е�n����  
            s.insert(temp);//�������s������Ϊ��ʵ��ȥ�غ��Զ�����,666
        }  
        for (set<int>::iterator it = s.begin(); it != s.end(); it++)  
        {  
            v1.push_back(*(it));//���ڼ����������ܰ��±���ʣ�����������һ��������������s������  
        }  
        for (int i = 0; i < n; i++)  
        {  
            cin >> temp;  
            p.first = temp;  
            p.second = v[i];  
            vv.push_back(p);//����vv������Ϊ�˽�����ϵ����һ���ĸ�����Ӧ�ڶ����ĸ���  
            ss.insert(temp);//�������ss������Ϊ��ʵ��ȥ�غ��Զ�����  
              
        }  
        for (set<int>::iterator it = ss.begin(); it != ss.end(); it++)  
        {  
            v2.push_back(*(it));//���ڼ����������ܰ��±���ʣ�����������һ��������������ss������  
        }  
        count = 0;  
        for (int i = 0; i < v2.size(); i++)//�������forѭ������Ϊ�˽��з���ͳ��  
        {//v2�洢�������ص����  
            cout << v2[i] << "={";  
            for (int j = 0; j < v1.size(); j++)  
            {//v1�洢�������صĵ�һ���������ţ�  
                cout << v1[j] << "=";  
                for (int k = 0;k<vv.size();k++)  
                {//vv�洢�˵�һ����ڶ��еĶ�Ӧ��ϵ  
                    if (vv[k].first == v2[i] && vv[k].second == v1[j])//����ź�����ƥ��  
                        count++;  
                }  
                cout << count;  
                count = 0;//��������  
                if (j != v1.size() - 1)  
                    cout << ",";  
            }  
            cout << "}" << endl;  
        }  
        v.clear(); v1.clear(); v2.clear(); vv.clear();  
        s.clear(); ss.clear();//�������  
          
    }  
}  
