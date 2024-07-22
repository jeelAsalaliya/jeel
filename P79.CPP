#include<iostream.h>
#include<conio.h>
#include<string.h>

class shopping_cart
{
 private:
 struct item
 {
  int item_code;
  double item_price;
 };
  public:
  void additem(int code,double price)
  {
   items.push_back({code,price});
   cout<<"item added to cart"<<endl;
  }
   void displaytotalprice(){
   double total=0;
   for(const auto&i::items)
   {
    total+=i.item-price;
   }
   cout<<"total price of all items:"<<total<<endl;
  }
   void removeitem(int code)
   {
    auto_it=remove_if(items.begin(),items.end(),[code](const item&i)
    {
     return i.item_code==code;
    });
    if(it!=items.end())
    {
     items.erase(it,items.end());
     cout<<"item removed from cart"<<end;
    }
    else
    {
     cout<<"item not fonud in cart"<<endl;
    }
   }
    void displayallitems()
    {
     cout<<"items in the cart"<<endl;
     for(const auto&i:items)
     {
      cout<<"item code:"<<i.item_code<<",price:"<<i.item_price<<endl;
     }
    }
   }
    int main()
    {
     shopping_cart cart;
     int choice,code;
     double price;
     do{
     cout<<"menu"<<endl;
     cout<<"1.add item"<<endl;
     cout<<"2.display total price"<<endl;
     cout<<"3.remove item"<<endl;
     cout<<"4.display all items"<<endl;
     cout<<"5.exit"<<endl;
     cout<<"enter your choice:";
     cin>>choice;

     switch(choice)
     {
      case 1:
      cout<<"enter item code";
      cin>>code;
      cout<<"enter item price";
      cin>>price;
      cart.additem(code,price);
      break;

      case 2:
      cart.displaytotalprice();
      break;

      case 3:
      cout<<"enter item code to remove:";
      cin>>code;
      cart.removeitem(code);
      break;

      case 4:
      cart.displayallitems();
      break;

      case 5:
      cout<<"existing"<<endl;
      break;

      default:
      cout<<"invalid choice,please try again"<<endl;
    }
   }while(choice!=5);
   return 0;
  }