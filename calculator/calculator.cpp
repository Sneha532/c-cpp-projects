#include<iostream>
using namespace std;

int main()
{
    char c;
    int billamount=0;
    start:
    cout << "----------------Welcome to Calculator Aplication-----------------" <<endl;
    cout <<"*****************please follow below instruction*****************"<<endl;
    cout << "Step 1 :Please press a for addition" <<endl;
    cout <<"Step 2 :Please press s for substraction"<<endl;
    cout << "Step 3 :Please press m for multiplication" <<endl;
    cout <<"Step 4 :Please press d for division" <<endl;
  
    cin >>c;
    if(c=='a' ||c=='A')
    {
        float addition(void);
        int result=addition();
        cout << "Addition is "<<result<<endl;
        againadd:
        cout<<"Do you want to use this application again Y or n? "<<endl;
        cin >>c;
        if(c=='y'|| c=='Y')
        {
            goto start;
        }
        else if(c=='n' || c=='N')
        {
           cout <<"Thank u for using our application" <<endl;
        }
        else
        {
            goto againadd;
        }
    }
    else if(c=='s' || c=='s')
    {
        float sub(void);
        int result=sub();
        cout << "substraction is" <<result <<endl;
        againsub:
        cout<<"Do you want to use this application again Y or n? "<<endl;
        cin >>c;
        if(c=='y'|| c=='Y')
        {
            goto start;
        }
        else if(c=='n' || c=='N')
        {
            cout <<"Thank u for using our application" <<endl;
        }
        else
        {
            goto againsub;
        }
    }

    else if(c=='m' || c=='M')
    {
        float mul(void);
        int result=mul();
        cout << "multiplication is" <<result <<endl;
        againmul:
        cout<<"Do you want to use this application again Y or n? "<<endl;
        cin >>c;
        if(c=='y'|| c=='Y')
        {
            goto start;
        }
        else if(c=='n' || c=='N')
        {
            cout <<"Thank u for using our application" <<endl;
        }
        else
        {
            goto againmul;
        }
    }

    else if(c=='D' || c=='d')
    {
        float div(void);
        int result=div();
        cout << "division is" <<result <<endl;
        againdiv:
        cout<<"Do you want to use this application again Y or n? "<<endl;
        cin >>c;
        if(c=='y'|| c=='Y')
        {
            goto start;
        }
        else if(c=='n' || c=='N')
        {
              cout <<"Thank u for using our application" <<endl;
        }
        
        else
        {
            goto againdiv;
        }
    }
    else{
        goto start;
    }
}

float addition()
{
    float a ;
    char c;
    float total=0.0;
    add:
    cout <<"Enter a number"<<endl;
    
    cin >>a;
    total=total+a;
    again:
    cout <<"Do you want add more numbers y or n?"<<endl;
    cin>>c;
    if(c=='y' || c=='Y')
    {
        goto add;
    }
    else if(c=='n' || c=='N')
    {
        return total;
    }
    else
    {
        goto again;
    }

}


float sub()
{
    float a ;
    char c;
    float total=0.0;
    add:
    cout <<"Enter a number"<<endl;
    
    cin >>a;
    total=a-total;
    again:
    cout <<"Do you want add more numbers y or n?"<<endl;
    cin>>c;

    if(c=='y' || c=='Y')
    {
        goto add;
    }
    else if(c=='n' || c=='N')
    {
        return total;
    }
    else{
        cout <<"Please press the correct value" <<endl;
        goto again;
    }

}


float mul()
{
    float a ;
    char c;
    float total=1.0;
    add:
    cout <<"Enter a number"<<endl;
    cin >>a;
    total=total*a;
    again:
    cout <<"Do you want add more numbers y or n?"<<endl;
    cin>>c;

    if(c=='y' || c=='Y')
    {
        goto add;
    }
    else if(c=='n' || c=='N')
    {
        return total;
    }
    else{
        cout <<"Please press the correct value" <<endl;
        goto again;
    }

}


float div()
{
    float a ,b;
    char c;
    float total=1.0;
    add:
    cout <<"Enter two number"<<endl;
    cin >>a >>b;
    total=a/b;
    again:
    cout <<"Do you want add more numbers y or n?"<<endl;
    cin>>c;

    if(c=='y' || c=='Y')
    {
        goto add;
    }
    else if(c=='n' || c=='N')
    {
        return total;
    }
    else{
        cout <<"Please press the correct value" <<endl;
        goto again;
    }

}