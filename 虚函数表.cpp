#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;


/*
class Base
{
public :
     virtual void func1()
	 {
		 cout<<"Base::func1" <<endl;
	 }
     virtual void func2()
	 {
		 cout<<"Base::func2" <<endl;
	 } 
private :
     int a ;
};
 
class Derive :public Base
 { 
 public :
	virtual void func1()
    {
		cout<<"Derive::func1" <<endl;
	}
     virtual void func3()
	{ 
	cout<<"Derive::func3" <<endl;
	}
    virtual void func4()
	{
		 cout<<"Derive::func4" <<endl;
	}
private :
     int b ;
};
 
typedef void (* FUNC) ();
void PrintVTable (int* VTable)
 {
     cout<<" 虚表地址>"<< VTable<<endl ;
	 
     for (int i = 0; VTable[i ] != 0; ++i)
		{
			 printf(" 第%d个虚函数地址 :0X%x,->", i , VTable[i ]);
			 FUNC f = (FUNC) VTable[i ];
			 f();
		}
     cout<<endl ;
}
 
void Test1 ()
 {
     Base b1 ;
     Derive d2 ;
     int* VTableb1 = (int*)(*( int*)&b1 );
     int* VTabled2 = (int*)(*( int*)&d2 );
     PrintVTable(VTableb1 );
     PrintVTable(VTabled2 );
}

*/





class Base1
 {
 public :
     virtual void func1()
    {
          cout<<"Base1::func1" <<endl;
    }
     virtual void func2()
    { 
         cout<<"Base1::func2" <<endl;
    }
private :
     int b1 ;
 };
class Base2
 { 
public :
     virtual void func1()
    {
          cout<<"Base2::func1" <<endl;
    }
     virtual void func2()
    {
         cout<<"Base2::func2" <<endl;
   }
private :
     int b2 ;
 };
class Derive : public Base1, public Base2
 { 
public :
virtual void func1()
    { 
         cout<<"Derive::func1" <<endl;
    }
     virtual void func3()
   { 
         cout<<"Derive::func3" <<endl;
    }
private :
     int d1 ; 
};
 
typedef void (* FUNC) ();
void PrintVTable (int* VTable)
 {
     cout<<" 虚表地址>"<< VTable<<endl ;
 
     for (int i = 0; VTable[i ] != 0; ++i)
    { 
         printf(" 第%d个虚函数地址 :0X%x,->", i , VTable[i ]); 
         FUNC f = (FUNC) VTable[i ];
          f();
    }
    cout<<endl ;
 }
 
void Test1 ()
 { 
 	Base1 b1;
 
    Derive d1 ;
    int* VTableb1 = (int*)(*( int*)&b1 );
    cout<<(int*)(*(int*)&b1);
    
    PrintVTable(VTableb1 );
    
    int* VTabled1 = (int*)(*( int*)&d1 );
    PrintVTable(VTabled1 );
 }



int main(void)
{
	Test1();
	

    return 0;
}


