#include<iostream>
using namespace std;

int main()
{       char playagain;
        int finalresult=0;
        int playquiz(void);
        finalresult=playquiz(); 
        cout <<"your score is "<<finalresult<<endl;
        if(finalresult>=6)
        {
            cout << "You are quite familiar with Google"<<endl;
            cout<<"Do you want to play Quiz again Y or N?" <<endl;
            cin >>playagain;
            if(playagain=='Y' ||playagain=='y')
            {
                playquiz();
            }
        }
        else
        {
            cout <<"Better luck for next time" <<endl;
            cout <<"Want to play again Y or N?" <<endl;
            cin >> playagain;
            if(playagain=='Y' ||playagain=='y')
            {
                playquiz();
            }
            else
            cout <<"Thank You to play this game" <<endl;

        }

    
        
}

int playquiz()
{
    char c;
    char option;
    int score=0;
    cout << "---------Welcome to Quiz game---------" <<endl;
    cout << "Please follow the instructions" <<endl ;
    cout <<"Step-1:Quiz contains total 10 question"<<endl;
    cout <<"Step-2:You will given 1 marks for each right ans"<<endl;
    cout <<"Step-1:There will be no negetive marking"<<endl;
    cout <<"Step-4:Please press s to start the quiz"<<endl;
    cin >> c;
    if(c=='s' ||c=='S')
    {   cout <<"select the any one option a,b,c,d"<<endl;


        cout <<"Q1.Google Inc. was founded by ____"<<endl;
        cout <<"A:Sergey Page and Larry Brin"<<endl;
        cout <<"B:Eric Schimidt and Larry Page"<<endl;
        cout <<"C:Larry Page and Sergey Brin"<<endl;
        cout <<"D:Lary Page and Sergey Brin"<<endl;

        cin >> option;
        if(option=='C' || option=='c')
            score+=1;
        else
            cout<<"Wrong ans.Better luck for next question."<<endl;


        cout <<"Q2.What is the Googleplex?" <<endl;
        cout <<"A:It's where Google employees work"<<endl;
        cout <<"B:It's a solar system which shares only the name with Google.com"<<endl;
        cout <<"C:It's the sever farm Google built up to deliver search results to you"<<endl;
        cout <<"D:none of the above"<<endl;

        cin >> option;
        if(option=='A' || option=='a')
            score+=1;
        else
            cout<<"Wrong ans.Better luck for next question."<<endl;


    cout <<"Q3.Which artificial intelligence chatbot is Goole's latest challenger to Chargpt?"<<endl;
        cout <<"A:Drift"<<endl;
        cout <<"B:Hubspot"<<endl;
        cout <<"C:Watson Assistant"<<endl;
        cout <<"D:Bard"<<endl;

        cin >> option;
        if(option=='D' || option=='d')
            score+=1;
        else
            cout<<"Wrong ans.Better luck for next question."<<endl;

    cout <<"Q4.Which of the following is not a Google product?"<<endl;
        cout <<"A:Gmail"<<endl;
        cout <<"B:YouTube"<<endl;
        cout <<"C:Microsoft Office"<<endl;
        cout <<"D:Google maps"<<endl;

        cin >> option;
        if(option=='C' || option=='c')
            score+=1;
        else
            cout<<"Wrong ans.Better luck for next question."<<endl;


    cout <<"Q5.Which of the following is Google's parent company"<<endl;
        cout <<"A:Meta platforms,Inc"<<endl;
        cout <<"B:Alphabet Inc."<<endl;
        cout <<"C:Amazon,Inc"<<endl;
        cout <<"D:Microsoft Corporation"<<endl;

        cin >> option;
        if(option=='B'|| option=='b')
            score+=1;
        else
            cout<<"Wrong ans.Better luck for next question."<<endl;

    cout <<"Q6.Google's firt name was"<<endl;
        cout <<"A:Seasearch"<<endl;
        cout <<"B:BackRub"<<endl;
        cout <<"C:Backline"<<endl;
        cout <<"D:Engine-S"<<endl;

        cin >> option;
        if(option=='B' || option=='b')
            score+=1;
        else
            cout<<"Wrong ans.Better luck for next question."<<endl;


    cout <<"Q7.What is the name of Google's corporate mascot?"<<endl;
        cout <<"A:Android"<<endl;
        cout <<"B:Chrome"<<endl;
        cout <<"C:Google Doodle"<<endl;
        cout <<"D:noneof the above"<<endl;

        cin >> option;
        if(option=='D' || option=='d')
            score+=1;
        else
            cout<<"Wrong ans.Better luck for next question."<<endl;


    cout <<"Q8.Where is Google's headquaters located?"<<endl;
        cout <<"A:Mountain View,California"<<endl;
        cout <<"B:Seattle,Washington"<<endl;
        cout <<"C:New York City"<<endl;
        cout <<"D:Austin,Texas"<<endl;

        cin >> option;
        if(option=='A' || option=='a')
            score+=1;
        else
            cout<<"Wrong ans.Better luck for next question."<<endl;


     cout <<"Q9.What is the name of the Google's annual developer conference"<<endl;
        cout <<"A:Google I/O"<<endl;
        cout <<"B:Google Cloud next"<<endl;
        cout <<"B:Google Marketing Live"<<endl;
        cout <<"D:Google Think"<<endl;

        cin >> option;
        if(option=='A' || option=='a')
            score+=1;
        else
            cout<<"Wrong ans.Better luck for next question."<<endl;


    cout <<"Q10.What is the Google's Mission statement"<<endl;
        cout <<"A:To connect people with the information they need, when they need it"<<endl;
        cout <<"B:To organize the world's information and make it universally accessible and useful"<<endl;
        cout <<"B:To make the World a better place"<<endl;
        cout <<"D:All of the above"<<endl;

        cin >> option;
        if(option=='B' || option=='b')
            score+=1;
        else
            cout<<"Wrong ans.Better luck for next question."<<endl;

    }
    return score;
}