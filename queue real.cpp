#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){

    queue<int> myQueue;

    myQueue.push(419);
    myQueue.push(420);
    myQueue.push(421);
    myQueue.push(422);
    myQueue.push(423);
    myQueue.push(424);
    for(int i=0;!myQueue.empty();i++){
            cout<<myQueue.front()<<endl;
            int frontValue = myQueue.front(); //return front value
            myQueue.pop(); //remove front value from Queue

    }
        //cout<<myQueue.size()<<endl;
        //cout<<myQueue.front()<<endl;
}
