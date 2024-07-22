#include<iostream.h>
#include<conio.h>


 void gfg();

 string inputlist()={"1","cool 123456789","y","2","cool","n"};
 int index=-1;

 string getindex(){
 index++;
 return inputlist[index];
}
 void deletecontact(){
 string name=getinput();
 cout<<"\n enter the contact name to be deleted:\n";
 cout<<name<<endl;

 if(phonebook.cout(name)>0){
 phonebook.erase(name);
 cout<<"\n contact deleted!"<<endl;
 }
  else{
  cout<<"contact not found!"<<endl;
 }
  cout<<"do you want to perform more operations(y/n)\n";
  char choice=getinput()[0];
  cout<<choice<<endl;

  if(choice=='y' || choice=='Y'){
  gfg();
  }
   void searchcontact(){
   cout<<"\n enter the name to be searched:";
   string name=getinput();
   cout<<name<<endl;

   if(phonebook.count(name)>0)
   {
    cout<<"contact not to found!"<<name<<" "<<phonebook[name]<<endl;
   }
   else{
   cout<<"contact not to found!"<<endl;
   cout<<"do you want to perform more operations(y/n)\n";
   char choice=getinput()[0];
   cout<<choice<<endl;

   if(choice='y' || choice='Y'){
   gfg();
  }
 }
  void store.contact(){
  cout<<"\n enter the name and phone number separated by space..\n";
  string namephone=getinput();
  cout<<namephone<<endl;
  int spacepos=namephone.find(' ');
  string name=namephone.substr(0,spacepos);
  string phone=namephone.substr(spacepos+1);

  if(phonebook.count(name)>0){
   cout<<"contact already exists!"<<endl;
  }
  else{
   phonebook[name]=phone;
   cout<<"contact stored!"<<endl;
  }
  cout<<"\n do you want to perform more operations!(y/n)\n";
  char choice=getinput()[0];
  cout<<choice<<endl;

  if(choice=='y' || choice=='Y'){
  gfg();
 }

 void gfg(){
 cout<<"please choose any choice from below"<<endl;
 cout<<"store contact number(1)"<<endl;
 cout<<"search contact number(2)"<<endl;
 cout<<"update contact number(3)"<<endl;
 cout<<"delete contact number(4)"<<endl;

 int choice=stoi(getinput());
 cout<<choice<<endl;

 switch(choice)
 {
  case 1:
  storecontact();
  break;

  case 2:
  searchcontact();
  break;

  case 3:
  updatecontact();
  break;

  case 4:
  deletecontact();
  break;

  default:
  cout<<"invalid choice!"<<endl;
 }
}
 int main()
 {
  cout<<"-----------welcome to geek...\n";
  gfg();
  return 0;
 }