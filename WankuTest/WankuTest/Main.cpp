#include <iostream>
using namespace std;


class Graph
{
public:
	Graph() { s_gCount = 0; s_gCount++; }
	~Graph() { s_gCount--; }
	virtual int drawOut() = 0;
	static int getTotalCount() { return s_gCount; }


protected:
	int m_x;
	int m_y;
	static int s_gCount;
};


class Rectangle : public Graph
{
public:
	void print() { cout << s_gCount << endl; }
	int drawOut() { return 0; }
};



int main()
{
	//Graph *a = new Rectangle();
	cout << a->getTotalCount() << endl;
	//Rectangle b;
	//b.print();
	system("pause");
	return 0;
}