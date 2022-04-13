#include<iostream>
using namespace std;

class IntArray
{
    int size;
    int *arr;

    public:
    IntArray()
    {
        size=10;
        arr=new int[size];
    }
    IntArray(int _size)
    {
        size=_size;
        arr=new int[size];
    }

    ~IntArray()
    {
        delete [] arr;
    }

    IntArray(const IntArray &old)
    {
        this->size=old.size;
        arr=new int[size];
        for(int i=0;i<size;i++)
        {
            arr[i]=old.arr[i];
        }
    }

    IntArray operator=(const IntArray &right)
    {
        delete [] this->arr;
        size=right.size;
        arr=new int[size];
        for(int i=0;i<size;i++)
        {
            arr[i]=right.arr[i];
        }
    }

    void setValue(int value,int index)
    {
        if(index>=0&&index<size)
        {
            this->arr[index]=value;
        }
    }

    int getValue(int index)
    {
        int retVal=-12121;

        if(index>=0&&index<size)
        {
            retVal=this->arr[index];
        }
        return retVal;
    }

    int& operator[](int  index)
    {
        if(index>=0&&index<size)
        {
            return this->arr[index];
        }
    }

};
int main()
{
    IntArray obj(10);

    obj.setValue(10,0);
    obj.setValue(11,1);
    obj.setValue(12,2);
    obj.setValue(13,3);
    obj.setValue(14,4);
    obj.setValue(15,5);
    obj.setValue(16,6);
    obj.setValue(17,77);
    obj.setValue(18,8);
    obj.setValue(19,9);
    obj.setValue(20,10);

    cout<<obj.getValue(2)<<endl;

    int ind=2;
    cout<< obj[2]<<endl;

    obj[2]=44;
    cout<< obj[2]<<endl ;


    return 0;
}
