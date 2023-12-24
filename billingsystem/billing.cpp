#include<iostream>
using namespace std;

int main()
{
    int totalbill(void);
    int amount=totalbill();
    cout <<"your amount=" <<amount <<endl;;
    cout <<"gst=15 %" <<endl;
    amount+=(amount*15/100);
    cout <<"your total bill="<<amount<<endl;
}

int totalbill()
{
    char c,vegitem,nonvegitem;
    int billamount=0;
    cout << "----------------Welcome to Online Food order-----------------" <<endl;
    cout <<"-----------------please follow below instruction----------------"<<endl;
    cout << "Step 1 :Please press s to start your order" <<endl;
    cout <<"Step 2 :You can order both veg and non veg item"<<endl;
    cout << "Step 3 :Please press v to select veg item" <<endl;
    cout <<"Step 4 :Please press n to select nonveg item" <<endl;
    cout <<"You will get your fanal bill after your order"<<endl;
    cin >>c;
    if(c=='s' || c=='S')
     {
        items:
        cout <<"Please select your choice"<<endl;
        cout <<"(v)Veg item               (n)=Non-veg" <<endl;
        
        cin >>c;
        if(c=='v' || c=='V')
        {   vegitem:
            cout <<"Please select 1,2,3,4,5 as per your choice"<<endl;
            cout <<"1.Paneer :: Price : Rs-249"<<endl;
            cout <<"2.Veg-Burger :: Price : Rs-99"<<endl;
            cout <<"3.Veg Pizza :: Price : Rs-99"<<endl;
            cout <<"4.Chowmin :: Price : Rs-49"<<endl;
            cout <<"5.Veg-Roll :: Price : Rs-35"<<endl;
            cin>>vegitem;
            if(vegitem=='1')
                billamount+=249;
            else if(vegitem=='2')
                billamount+=99;
            else if(vegitem=='3')
                billamount+=99;
            else if(vegitem=='4')
                billamount+=49;
            else if(vegitem=='5')
                billamount+=35;
            else
            {
               cout <<"please press the correct value"<<endl;
               goto vegitem;
            }
            cout <<"Do u want to add more items y or n?"<<endl;
            cin >> c;
            if(c=='y' ||c=='Y')
                goto items;
            else
            return billamount;
           
        }


        else if(c=='n' || c=='N')
        {
            nonvegitem:
            cout <<"Please select 1,2,3,4,5 as per your choice"<<endl;
            cout <<"1.Chicken & fried rice combo :: Price : Rs-249"<<endl;
            cout <<"2.Burger :: Price : Rs-199"<<endl;
            cout <<"3.Barbeque chicken Pizza :: Price : Rs-199"<<endl;
            cout <<"4.Mix Chowmin :: Price : Rs-149"<<endl;
            cout <<"5.chicken Roll :: Price : Rs-99"<<endl;
            cin>>nonvegitem;
            if(nonvegitem=='1')
                billamount+=249;
            else if(nonvegitem=='2')
                billamount+=199;
            else if(nonvegitem=='3')
                billamount+=199;
            else if(nonvegitem=='4')
                billamount+=149;
            else if(nonvegitem=='5')
                billamount+=99;
            else
            {
                goto nonvegitem;
            }
            again:
            cout <<"Do u want to add more items y or n?"<<endl;
            cin >> c;
            if(c=='y' ||c=='Y')
                goto items;
            
            else if(c=='n' || c=='N')
            return billamount;

            else 
            {
                cout <<"please press the correct value"<<endl;
                goto again;
            }

        }
        else
         {
            cout <<"please press the correct value"<<endl;
             goto items;
         }
     }

     else
     {
        cout <<"please press s to order food"<<endl;
     }

     return billamount;
}