# include<bits/stdc++.h>
using namespace std;
int main()
{
    float Unit,Bill,New_Bill;
    cout<<"Enter unit consumed:";
    cin>>Unit;
    if (Unit<=100)
    Bill=Unit*5.20+120;
    else if (Unit>=100 && Unit<=200)
    Bill=Unit*7.30+230;
    else if (Unit>=200 && Unit<=300)
    Bill=Unit*8.10+310;
    else
    Bill=Unit*8.50+420;
    New_Bill=(Bill*18)/100+Bill;
    cout<<"Monthly bill without taxes:"<<Bill;
    cout<<"Monthly Bill including taxes:"<<New_Bill;
    return 0;
    
}