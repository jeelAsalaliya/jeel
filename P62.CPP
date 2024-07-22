#include<iostream.h>
#include<conio.h>

class time
{
 private:
 int hour;
 int minute;
 int second;
 public:
 void gettime(void);
 void puttime(void);
 void addtime(time t1,time t2);
};
 void time::gettime(void)
 {
  cout<<"\n enter time:"<<endl;
  cout<<"enter hour:";
  cin>>hour;
  cout<<"enter minute:";
  cin>>minute;
  cout<<"enter second:";
  cin>>second;
 }
  void time::puttime(void)
  {
   cout<<endl;
   cout<<"addition of time is:\n";
   cout<<hour<<":"<<minute<<":"<<second<<" "<<endl;
  }
   void time::addtime(time t1,time t2)
   {
    second=t1.second+t2.second;
    minute=t1.minute+t2.minute+(second/60);
    hour=t1.hour+t2.hour+(minute/60);
    minute%=60;
    second%=60;
   }
    void main()
    {
     time t1,t2,t3;
     clrscr();
     t1.gettime();
     t2.gettime();
     t3.addtime(t1,t2);
     t3.puttime();
     getch();
    }