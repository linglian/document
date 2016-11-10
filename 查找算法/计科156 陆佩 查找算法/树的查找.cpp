#include<iostream>

using namespace std;
struct Node
{
	char num;
	struct Node *lchila,*rchila;
};
class Bitree
{
public:Bitree(){root=NULL;a=0;b=0;c=0;}
	   void set(){root=creat(root);}
	   ~Bitree(){release(root);}
	   void serch(Node*bt ,char k);
	   void Serch(){char k;cout << "请输入要查找的数:\n"; cin >> k; serch(root,k);}
private:
	Node *root;
	int a,b,c;
	Node *creat(Node *bt);
	void release(Node*bt);
	
};
void Bitree::serch(Node * bt,char k)
{
	if(bt==NULL){ cout << "树为空:\n";return;}
    if(bt->num==k){cout << k << "在树中:\n";return ;}
	if(bt->lchila!=NULL) serch(bt->lchila,k);
    if(bt->rchila!=NULL)serch(bt->rchila,k);
}
Node* Bitree::creat(Node *bt)
{
	char ch;cin>>ch;
	if(ch=='#') { bt=NULL;}
	else
	{
		bt=new Node;bt->num=ch;bt->lchila=creat(bt->lchila);bt->rchila=creat(bt->rchila);}
return bt;}
void Bitree::release(Node*bt)

{
	if(bt!=NULL)
	{release(bt->lchila);release(bt->rchila);delete bt;}
}
int main()
{
	Bitree p;

		p.set();
		p.Serch();

	return 0;
}