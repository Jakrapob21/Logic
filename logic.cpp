#include<bits/stdc++.h>
using namespace std;
int ans[200];
int n,k;
string input1,input2,mark,btmp;
string mark2[200];
bool bool1,bool2,print,err;
int tmp =-1;
int tmp1,tmp2,bbtmp;
bool solve(string ip) {
    if(ip == "true")return true;
    else return false;
}
bool yon(string btmp){
    bool booltmp;
    if(btmp == "yes"){
        booltmp=true;
    }else{
        booltmp=false;
    }
}
void chk(bool bool1,bool bool2 ,string mark)
{
    if(mark ==">"){// และ
        if(bool1==true && bool2==true)
        {
           tmp=1;
        }
        else {
            tmp=0;
        }
    }
    else if(mark =="<"){ // หรือ
        if(bool1==false && bool2==false){
            tmp=0;
        }
        else{
            tmp=1;
        }
    }
    else if(mark =="->"){ // ถ้า ... แล้ว
        if(bool1==true && bool2==false){
            tmp=0;
        }
        else{
            tmp=1;
        }
    }
    else if(mark =="<->"){ // ...ก็ต่อเมื่อ...
        if(bool1==bool2){
            tmp=1;
        }
        else {
            tmp=0;
        }
    }
    else {
        tmp=-2;
        return;
    }
}
void table( int now )
{
    if(now == k)
    {
        for(int i=0;i<k;i++)
        ans[i] ? cout << "     True             " : cout << "     False            ";
        tmp=ans[0];
        for(int i=1;i<k;i++){
            chk(tmp,ans[i],mark2[i]);
        }
        tmp ? cout << "True" : cout << "False";
        cout << "\n\n";
        return;
    }
    for(int i=1;i>=0;i--){
        ans[now]=i;
        table(now+1);
    }
}
int main ()
{
        while(1){
        cout << "----------------------------------------------\n";
        cout << "[1] Programming Logic (1 parentheses)\n";
        cout << "[2] Use previous Truth value \n";
        cout << "[3] Logic Table \n";
        cout << "[4] 2 parentheses \n";
        cout << "[5] Exit\n";
        cout << "----------------------------------------------\n";
        cin >> n;
        err=false;
        if(n>5){
            cout << "Will have new function soon !!\n";
            continue;
        }
        if(n==5)return 0;


        cout << "conjunction = > , disjunction = < , implication = -> , biconditional = <->\n";

        if(n==4){
        cout << "First parentheses\n";
        cout << "Enter first value is (True/False): " ;
        cin >> input1;
        for(int i=0;i<input1.size();i++){
                input1[i]=tolower(input1[i]);
            }
        if(input1 == "true" || input1 =="false"){}
        else {
            cout << "Enter Wrong Answer !! \n";
            continue;
        }
        bool1=solve(input1);
        cout << "Is value negation ? (Yes/No) : ";
            cin >> btmp;
            for(int i=0;i<btmp.size();i++){
                btmp[i]=tolower(btmp[i]);
            }
            if(btmp =="yes" || btmp=="no"){}
            else{
                cout << "Enter Wrong Answer !!\n";
                continue;
            }
            if(yon(btmp)){
                bool1=!bool1;
            }
        cout << "Enter second value is (True/False): " ;
        cin >> input2;
        for(int i=0;i<input2.size();i++){
                input2[i]=tolower(input2[i]);
            }
        if(input2 == "true" || input2 =="false"){}
        else {
            cout << "Enter Wrong Answer !! \n";
            continue;
        }
        bool2=solve(input2);
        cout << "Is value negation ? (Yes/No) : ";
            cin >> btmp;
            for(int i=0;i<btmp.size();i++){
                btmp[i]=tolower(btmp[i]);
            }
            if(btmp =="yes" || btmp=="no"){}
            else{
                cout << "Enter Wrong Answer !!\n";
                continue;
            }
            if(yon(btmp)){
                bool2=!bool2;
            }

        cout << "Mark is : " ;
        cin >> mark;
        chk(bool1,bool2,mark);
         if(tmp == -2){
                cout << "Wrong mark \n";
                continue;
        }
        tmp1=tmp;



        cout << "\n\n";
        cout << "Second parentheses\n";
        cout << "Enter first value is (True/False): " ;
        cin >> input1;
        for(int i=0;i<input1.size();i++){
                input1[i]=tolower(input1[i]);
            }
        if(input1 == "true" || input1 =="false"){}
        else {
            cout << "Enter Wrong Answer !! \n";
            continue;
        }
        bool1=solve(input1);
        cout << "Is value negation ? (Yes/No) : ";
            cin >> btmp;
            for(int i=0;i<btmp.size();i++){
                btmp[i]=tolower(btmp[i]);
            }
            if(btmp =="yes" || btmp=="no"){}
            else{
                cout << "Enter Wrong Answer !!\n";
                continue;
            }
            if(yon(btmp)){
                bool1=!bool1;
            }


        cout << "Enter second value is (True/False): " ;
        cin >> input2;
        for(int i=0;i<input2.size();i++){
                input2[i]=tolower(input2[i]);
            }
        if(input2 == "true" || input2 =="false"){}
        else {
            cout << "Enter Wrong Answer !! \n";
            continue;
        }
        bool2=solve(input2);
        cout << "Is value negation ? (Yes/No) : ";
            cin >> btmp;
            for(int i=0;i<btmp.size();i++){
                btmp[i]=tolower(btmp[i]);
            }
            if(btmp =="yes" || btmp=="no"){}
            else{
                cout << "Enter Wrong Answer !!\n";
                continue;
            }
            if(yon(btmp)){
                bool2=!bool2;
            }

        cout << "Mark is : " ;
        cin >> mark;
        chk(bool1,bool2,mark);
         if(tmp == -2){
                cout << "Wrong mark \n";
                continue;
        }
        tmp2=tmp;
        cout << "Mark is : " ;
        cin >> mark;
        chk(tmp1,tmp2,mark);
        if(tmp == -2){
                cout << "Wrong mark \n";
                continue;
        }
        tmp ? cout << "Answer is True \n " : cout << "Answer is False \n";
        continue;
        }


        if(n==2){
            if(tmp==-1){
                cout << "Don't have previous Truth value \n";
                continue;
            }
        }


        if(n==3){
            cout << "input amount of proposition (Integer) : ";
            cin >> k;
            if(cin.fail()){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout << "Input is not an integer.\n";
                continue;
            }
            for(int i=1;i<k;i++){
                cout << "Mark " << i << " is : ";
                cin >> mark2[i];
                if(mark2[i] ==">" ||mark2[i]=="<" || mark2[i]== "<->" || mark2[i]== "->"){
                }
                else {
                    err=true;
                    cout << "Wrong mark \n";
                    break;
                }
            }
            if(err)continue;
            for(int i= 1; i<=k;i++){
                cout << "Truth Value : " << i << "       ";
            }
            cout << "Ans : \n\n";
            table(0);
            continue;
        }



        if( n==1 || n==2 ){
        if(n==1){
            cout << "Enter first value is (True/False): " ;
            cin >> input1;
            for(int i=0;i<input1.size();i++){
                input1[i]=tolower(input1[i]);
            }
            if(input1 == "true" || input1 =="false"){}
        else {
            cout << "Enter Wrong Answer !! \n";
            continue;
        }
            bool1=solve(input1);
            cout << "Is value negation ? (Yes/No) : ";
            cin >> btmp;
            for(int i=0;i<btmp.size();i++){
                btmp[i]=tolower(btmp[i]);
            }
            if(btmp =="yes" || btmp=="no"){}
            else{
                cout << "Enter Wrong Answer !!\n";
                continue;
            }
            if(yon(btmp)){
                bool1=!bool1;
            }
        }



        else if (n==2){
            bool1=tmp;
        }


        cout << "Enter second value is (True/False): " ;
        cin >> input2;
        for(int i=0;i<input2.size();i++){
                input2[i]=tolower(input2[i]);
            }
        if(input2 == "true" || input2 =="false"){}
        else {
            cout << "Enter Wrong Answer !! \n";
            continue;
        }
        bool2=solve(input2);
        cout << "Is value negation ? (Yes/No) : ";
            cin >> btmp;
            for(int i=0;i<btmp.size();i++){
                btmp[i]=tolower(btmp[i]);
            }
            if(btmp =="yes" || btmp=="no"){}
            else{
                cout << "Enter Wrong Answer !!\n";
                continue;
            }
            if(yon(btmp)){
                bool2=!bool2;
            }
        cout << "Mark is : " ;
        cin >> mark;
        chk(bool1,bool2,mark);
        if(tmp == -2){
                cout << "Enter Wrong Mark !!\n";
                continue;
        }
        tmp ? cout << "Answer is True \n " : cout << "Answer is False \n";
        }



    }
    return 0;
}
