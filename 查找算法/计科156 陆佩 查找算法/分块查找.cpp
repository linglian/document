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
	cout << "������Ҫ���ҵ���:\n";
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
		{    cout << k << "���±�Ϊ:\n" ;
		cout << j << endl;;break;}
	}
}
void Stu::set()
{
	int i,j;
	cout << "�������¼�ĸ���:\n";
	cin >> n;
	cout << "�밴�ֿ���ҷ�ʽ�����¼:\n";
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
	cout << "������ֿ�εĸ�����ÿ��ļ�¼����:\n";
	cin >> m >> L;
	for(j=0;j<m;j++)
	{
		cout <<"������"<< "��" << j+1 << "��" <<"�ֶ��������ֵ�ͳ�ʼ�±�:\n";
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