#include <iostream>
#include <queue>
#include <stack>
 
using namespace std;
stack <int> ss; 
// Print the queue
void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
	ss.push(g.front());
        g.pop();
    }
    cout << '\n';
    while(!ss.empty())
    {
	    cout<<ss.top()<<" ";
	    ss.pop();
    }
    cout<<endl;
}
int main()
{
    queue<int> gquiz;
    gquiz.push(10);
    gquiz.push(20);
    gquiz.push(30);
 
    cout << "The queue gquiz is : ";
    showq(gquiz);
 
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.front() : " << gquiz.front();
    cout << "\ngquiz.back() : " << gquiz.back();
 
    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showq(gquiz);
 
    return 0;
}
