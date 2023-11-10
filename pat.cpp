#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Pattern{
    public:
    void pat1(int n){
        for(int row=1;row<=n;row++){
            for(int col=1;col<=n;col++)cout<<"*";
            cout<<endl;
        }
    }
    void pat2(int n){
        for(int row=1;row<=n;row++){
            for(int col=1;col<=n;col++)cout<<row;
            cout<<endl;
        }
    }
    void pat3(int n){
         for(int row=1;row<=n;row++){
            int cnt=1;
            for(int col=1;col<=n;col++)cout<<cnt++;
            cout<<endl;
        }
    }
    void pat4(int n){
         for(int row=1;row<=n;row++){
            for(int col=1;col<=n;col++)cout<<(n-col+1);
            cout<<endl;
        }
    }
    void pat5(int n){
        int cnt=1;
         for(int row=1;row<=n;row++){
            for(int col=1;col<=n;col++)cout<<cnt++;
            cout<<endl;
        }
    }
    void pat6(int n){
         for(int row=1;row<=n;row++){
            for(int col=1;col<=row;col++)cout<<"*";
            cout<<endl;
        }
    }
    void pat7(int n){
         for(int row=1;row<=n;row++){
            for(int col=1;col<=row;col++)cout<<row;
            cout<<endl;
        }
    }
    void pat8(int n){
        int cnt=1;
         for(int row=1;row<=n;row++){
            for(int col=1;col<=row;col++)cout<<cnt++;
            cout<<endl;
        }
    }
    void pat9(int n){
         for(int row=1;row<=n;row++){
            int cnt=row;
            for(int col=1;col<=row;col++)cout<<cnt++;
            cout<<endl;
        }
    }
    void pat10(int n){
         for(int row=1;row<=n;row++){
            int cnt=row;
            for(int col=1;col<=row;col++)cout<<cnt--;
            cout<<endl;
        }
    }
    void pat11(int n){
         for(int row=1;row<=n;row++){
            for(int col=1;col<=n;col++)cout<<char('A'+row-1);
            cout<<endl;
        }
    }
    void pat12(int n){
         for(int row=1;row<=n;row++){
            char ch='A';
            for(int col=1;col<=n;col++)cout<<ch++;
            cout<<endl;
        }
    }
    void pat13(int n){
        char ch='A';
         for(int row=1;row<=n;row++){
            for(int col=1;col<=n;col++)cout<<ch++;
            cout<<endl;
        }
    }
    void pat14(int n){
         for(int row=1;row<=n;row++){
            char ch='A'+row-1;
            for(int col=1;col<=row;col++)cout<<ch;
            cout<<endl;
        }
    }
    void pat15(int n){
         for(int row=1;row<=n;row++){
            char ch='A'+row-1;
            for(int col=1;col<=n;col++)cout<<ch;
            cout<<endl;
        }
    }
    void pat16(int n){
        char ch='A';
         for(int row=1;row<=n;row++){
            for(int col=1;col<=row;col++)cout<<ch++;
            cout<<endl;
        }
    }
    void pat17(int n){
         for(int row=1;row<=n;row++){
            char ch='A'+row-1;
            for(int col=1;col<=row;col++)cout<<ch++;
            cout<<endl;
        }
    }
    void pat18(int n){
         for(int row=1;row<=n;row++){
            char ch='A'+n-row;
            for(int col=1;col<=row;col++)cout<<ch++;
            cout<<endl;
        }
    }
    void pat19(int n){
         for(int row=1;row<=n;row++){
            for(int space=1;space<=n-row;space++)cout<<" ";
            for(int col=1;col<=row;col++)cout<<"*";
            cout<<endl;
        }
    }
    void pat20(int n){
         for(int row=1;row<=n;row++){
            for(int space=1;space<=row-1;space++)cout<<" ";
            for(int col=1;col<=n-row+1;col++)cout<<"*";
            cout<<endl;
        }
    }
     void pat21(int n){
         for(int row=1;row<=n;row++){
            for(int space=1;space<=row-1;space++)cout<<" ";
            for(int col=1;col<=n-row+1;col++)cout<<row;
            cout<<endl;
        }
    }
    void pat22(int n){
        int cnt=1;
         for(int row=1;row<=n;row++){
            for(int space=1;space<=n-row;space++)cout<<" ";
            for(int col=1;col<=row;col++)cout<<cnt++;
            cout<<endl;
        }
    }
    void pat23(int n){
         for(int row=1;row<=n;row++){
            for(int space=1;space<=n-row;space++)cout<<" ";
            for(int col=1;col<=row;col++)cout<<row;
            cout<<endl;
        }
    }
    void pat24(int n){
         for(int row=1;row<=n;row++){
            for(int space=1;space<=n-row;space++)cout<<" ";
            for(int col=1;col<=row;col++)cout<<"*";
            cout<<endl;
        }
    }
    void pat25(int n){
        for(int row=1;row<=n;row++){
            for(int space=1;space<=row-1;space++)cout<<" ";
            for(int col=1;col<=n-row+1;col++)cout<<(row+col-1);
            cout<<endl;
        }
    }
    void pat26(int n){
        int cnt=1;
        for(int row=1;row<=n;row++){
            for(int space=1;space<=n-row;space++)cout<<" ";
            for(int col=1;col<=row;col++)cout<<cnt++<<" ";
            cout<<endl;
        }
    }
    void pat27(int n){
        for(int row=1;row<=n;row++){
            int cnt1=1;
            int cnt2=row-1;
            for(int space=1;space<=n-row;space++)cout<<" ";
            for(int col=1;col<=row;col++)cout<<cnt1++;
            for(int col=1;col<=row-1;col++)cout<<cnt2--;
            cout<<endl;
        }
    }

    void pat28(int n){
        for(int row=1;row<=n;row++){
            int cnt1=1;
            for(int col=1;col<=n-row+1;col++)cout<<cnt1++;
            for(int star=1;star<=row-1;star++)cout<<"**";
            int cnt2=n-row+1;
            for(int col=1;col<=n-row+1;col++)cout<<cnt2--;
            cout<<endl;
        }
    }
    
};
int main(){
    int n=4;
    Pattern p;
    p.pat1(n);
    cout<<endl;
    p.pat2(n);
    cout<<endl;
    p.pat3(n);
    cout<<endl;
    p.pat4(n);
    cout<<endl;
    p.pat5(n);
    cout<<endl;
    p.pat6(n);
    cout<<endl;
    p.pat7(n);
    cout<<endl;
    p.pat8(n);
    cout<<endl;
    p.pat9(n);
    cout<<endl;
    p.pat10(n);
    cout<<endl;
    p.pat11(n);
    cout<<endl;
    p.pat12(n);
    cout<<endl;
    p.pat13(n);
    cout<<endl;
    p.pat14(n);
    cout<<endl;
    p.pat15(n);
    cout<<endl;
    p.pat16(n);
    cout<<endl;
    p.pat17(n);
    cout<<endl;
    p.pat18(n);
    cout<<endl;
    p.pat19(n);
    cout<<endl;
    p.pat20(n);
    cout<<endl;
    p.pat21(n);
    cout<<endl;
    p.pat22(n);
    cout<<endl;
    p.pat23(n);
    cout<<endl;
    p.pat24(n);
    cout<<endl;
    p.pat25(n);
    cout<<endl;
    p.pat26(n);
    cout<<endl;
    p.pat27(n);
    cout<<endl;
    p.pat28(n);
    cout<<endl;


}
