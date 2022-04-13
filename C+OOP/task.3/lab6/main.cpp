//#include <iostream>
//#include <queue>
//using namespace std;



#include <iostream>
using namespace std;

class Queue {
private:
int queue[100],
 n = 100,
 front = - 1,
  rear = - 1;
public:


void Insert() {
   int val;
   if (rear == n - 1)
   cout<<"Queue Overflow"<<endl;
   else {
      if (front == - 1)
      front = 0;
      cout<<"Insert the element in queue : "<<endl;
      cin>>val;
      rear++;
      queue[rear] = val;
   }
}
void Delete() {
   if (front == - 1 || front > rear) {
      cout<<"Queue Underflow ";
      return ;
   } else {
      cout<<"Element deleted from queue is : "<< queue[front] <<endl;
      front++;;
   }
}
void Display() {
   if (front == - 1)
   cout<<"Queue is empty"<<endl;
   else {
      cout<<"Queue elements are : ";
      for (int i = front; i <= rear; i++)
      cout<<queue[i]<<" ";
         cout<<endl;
   }
}
};

int main() {
   Queue c;
   c.Insert();
   c.Insert();
   c.Insert();

   c.Delete();
   c.Display();
   return 0;
}
