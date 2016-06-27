#include <iostream>

using namespace std;

//软件工程师网试题
class Graph
{
public:
	Graph() { s_gCount++; }
	~Graph() { /*s_gCount--;*/ }
	virtual int drawOut() = 0;
	static int getTotalCount() { return s_gCount; }


protected:
	int m_x;
	int m_y;
	static int s_gCount;
};

int Graph::s_gCount = 10;


class Rectangle : public Graph
{
public:
	void print() { cout << s_gCount << endl; }
	int drawOut() { return 0; }
};



//////////////////////////////////////////////////////////////////////////





void ATest()
{
	cout << "ATest" << endl;
}

void BTest()
{
	cout << "BTest" << endl;
}
void CTest()
{
	cout << "CTest" << endl;
}void DTest()
{
	cout << "DTest" << endl;
}
void ETest()
{
	cout << "ETest" << endl;
}






//单向链表（key - FunName, value - Function )

typedef struct MapFunName
{
	string FunctionName;
	void *FunctionAddress;
};

typedef struct Node
{
	MapFunName data;
	Node *Next;
};

class List
{
private:

public:
	List();
	~List();
	void Init();
	void insert(MapFunName &data);
	void del(const string &FunName);

	Node* CreateNode();
private:
	Node *Head;
	int	crt;
};

List::List()
{
	Init();
}

List::~List()
{

}

void List::Init()
{
// 	if (!Head)
// 	{
// 		throw;
// 	}

	Head = new Node();
	crt = 1;
}

Node* CreateNode()
{

}

void List::insert(MapFunName &data)
{
	if (Head == nullptr)
	{
		Init();
		Head->data = data;
		Head->Next = nullptr;
		return;
	}

	Node *CurNode = Head;
	while (true)
	{
		//key函数名字相同
		if (CurNode->data.FunctionName == data.FunctionName)
		{
			cout << "This Function is already exists！" << endl;
			return;
		}

		//key value都为空情况下创建一个新的节点
		if (CurNode->data.FunctionName.empty() && CurNode->data.FunctionAddress == nullptr)
		{
			CurNode->data.FunctionName = data.FunctionName;
			CurNode->data.FunctionAddress = data.FunctionAddress;
			CurNode->Next = nullptr;
			return;
		}
		else
		{
			if (CurNode->Next != nullptr)
			{
				CurNode = CurNode->Next;
				cout << "This data is not mapping！" << endl;
				continue;
			}
			else
			{
				return;
			}
		}
	}
}

void List::del(const string &FunName)
{

}

int main()
{
	List *MapList = new List();
	MapFunName funName;
	funName.FunctionAddress = &ATest;
	funName.FunctionName =  "ATest";
	MapList->insert(funName);

	funName.FunctionAddress = &BTest;
	funName.FunctionName = "BTest";
	MapList->insert(funName);

	funName.FunctionAddress = &CTest;
	funName.FunctionName = "CTest";
	MapList->insert(funName);
	system("pause");
	return 0;
}





void testRect()
{
	Graph *a = new Rectangle();
	cout << a->getTotalCount() << endl;
	//Rectangle b;
	//b.print();

	delete a;
	cout << Graph::getTotalCount() << endl;
}