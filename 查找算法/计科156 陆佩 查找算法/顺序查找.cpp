//��1��˳������㷨ʵ�֣�
/*#include<iostream>
using namespace std;
class Stu
{
public:
void set();
void Find(){find(a,n,k);}
private:
int a[100];
int n,k;
void find(int r[],int n,int k);
};
void Stu::set()
{
int i;
cout << "����������Ҫ��������ĸ���:\n";
cin >> n;
cout <<"������"<<n<<"������:\n";
for(i=0;i<n;i++)
cin >> a[i];
cout << "(�±��0��ʼ)����������Ҫ���ҵ���:\n";
cin >>k;
}
void Stu::find(int r[],int n,int k)
{	int i;
r[0]=k; i=n;
while(r[i]!=k)
i--;
cout << i<<endl;
}
int main()
{
Stu p;
p.set();p.Find();
return 0;
}