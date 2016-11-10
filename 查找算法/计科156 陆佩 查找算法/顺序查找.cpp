//（1）顺序查找算法实现；
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
cout << "请输入您所要输入的数的个数:\n";
cin >> n;
cout <<"请输入"<<n<<"个整数:\n";
for(i=0;i<n;i++)
cin >> a[i];
cout << "(下标从0开始)请输入您所要查找的数:\n";
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