#include<iostream>
#include<fstream>
using namespace std;
struct node
{
	int num;
};
struct node2
{
	int gedian;
	int xiabiao;
};
class Stu
{
public:
	void set();
	void chazao();
private:
	struct node a[100];
	struct node2 b[4]; 
	int n,m,L;
};
void Stu::chazao()
{
	int k;
	cout << "请输入要查找的数:\n";
	cin >> k;
	int low=0;int high=m;int mid; int i=0;
	while(low<=high&&i<m)
	{  
		mid=(low+high)/2;
		if(k>b[mid].gedian) low=mid+1;
		else { high=mid-1;break;}
		i++;
	}
	for(int j=b[high].xiabiao;j<b[high].xiabiao+L;j++)
	{
		if(a[j].num==k)
		{    cout << k << "的下标为:\n" ;
		cout << j << endl;;break;}
	}
}
void Stu::set()
{
	int i,j;
	cout << "请输入记录的个数:\n";
	cin >> n;
	cout << "请按分块查找方式输入记录:\n";
	ifstream infer("1.txt",ios::in);
   ofstream onfer("1.txt",ios::in);
	for(i=0;i<n;i++)
	{
    cin >>a[i].num;
     infer >>  a[i].num;
	 onfer  << a[i].num << " ";
	}
	for(i=0;i<n;i++)
	{
	infer >> a[i].num;
	}
	cout << "请输入分块段的个数和每块的记录个数:\n";
	cin >> m >> L;
	for(j=0;j<m;j++)
	{
		cout <<"请输入"<< "第" << j+1 << "个" <<"分段数的最大值和初始下标:\n";
		cin >>  b[j].gedian >> b[j].xiabiao;
	}
}
int main()
{
	Stu p;
	p.set();
	p.chazao();
	return 0;
}