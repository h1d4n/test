#include <iostream>
#include <cmath>

using namespace std;

const double PI= 3.14;


void expression1()
{
    double qpol, qp;
    cout<<"Input Qpol: ";
    cin>>qpol;
    cout<<"Input Qp: ";
    cin>>qp;
    cout<<"Qk= "<<(qpol-qp)<<endl;
}

void expression2()
{
    double qk, gs, lt1;
    cout<<"Input Qk: ";
    cin>>qk;
    cout<<"Input Gs: ";
    cin>>gs;
    cout<<"Input lt1: ";
    cin>>lt1;
    cout<<"I= "<<(qk/gs)+lt1<<endl;
}

void expression3()
{
    double t, t1, t2, tyx;
    cout<<"Input t: ";
    cin>>t;
    cout<<"Input T1: ";
    cin>>t1;
    cout<<"Input T2: ";
    cin>>t2;
    cout<<"Input tyx: ";
    cin>>tyx;
    cout<<"deltaTSR= "<<((t-t2-273)-(tyx-t1-273))/2.31*log((t-t2-273)/(tyx-t1-273))<<endl;
}

void expression4()
{
    double t1, t2, delta;
    cout<<"Input T1: ";
    cin>>t1;
    cout<<"Input T2: ";
    cin>>t2;
    cout<<"Input delta: ";
    cin>>delta;
    cout<<"tst= "<<((t1-273+t2-273)/2)+delta<<endl;
}
void expression5(){
    double si, n, d;
    cout<<"Input Si: ";
    cin>>si;
    cout<<"Input n: ";;
    cin>>n;
    cout<<"Input d: ";
    cin>>d;
    cout<<"ak= "<<((si/1000)*(n-1))+(d/1000)+0.05<<endl;

}
void expression6(){
    double ak, n, d, lp;
    cout<<"Input ak: ";
    cin>>ak;
    cout<<"Input n: ";;
    cin>>n;
    cout<<"Input d: ";
    cin>>d;
    cout<<"Input lp: ";
    cin>>lp;
    cout<<"fk= "<<(ak-(n*d/1000))*lp<<endl;
}
void expression7(){
    double gps, b;
    cout<<"Input Gps: ";
    cin>>gps;
    cout<<"Input B: ";;
    cin>>b;
    cout<<"Gdgs= "<<gps*b/1000<<endl;
}
void expression8(){
    double t, tyx;
    cout<<"Input t: ";
    cin>>t;
    cout<<"Input tyx: ";;
    cin>>tyx;
    cout<<"tsr= "<<(t-tyx)/2.31*log(t/tyx) <<endl;
}
void expression9(){
    double e, u, d;
    cout<<"Input E: ";
    cin>>e;
    cout<<"Input U: ";;
    cin>>u;
    cout<<"Input d: ";
    cin>>d;
    cout<<"ak= "<<0.35*e*pow(u,0.6)/pow(d/1000,0.4)<<endl;
}
void expression10(){
    double tsr;
    cout<<"Input tsr: ";
    cin>>tsr;
    cout<<"a1= "<<0.0256*tsr-2.33<<endl;
}
void expression11(){
    double ak, a1;
    cout<<"Input ak: ";
    cin>>ak;
    cout<<"Input a1: ";;
    cin>>a1;
    cout<<"K= "<<1.1*(ak+a1)<<endl;
}
void expression12(){
    double qk, k, deltaTsr;
    cout<<"Input Qk: ";
    cin>>qk;
    cout<<"Input K: ";;
    cin>>k;
    cout<<"Input deltaTsr: ";;
    cin>>deltaTsr;
    cout<<"Hk= "<<qk/k*deltaTsr<<endl;
}
void expression13(){
    double hk, d, lp;
    cout<<"Input Hk: ";
    cin>>hk;
    cout<<"Input d: ";;
    cin>>d;
    cout<<"Input lp: ";;
    cin>>lp;
    cout<<"nk= "<<hk/(PI*d*lp/1000)<<endl;
}

int main() {
    while(true){
        int expression_number;
        cout<<"Input expression number: ";
        cin>>expression_number;

        switch(expression_number)
        {
            case 1:
                expression1();
                break;
            case 2:
                expression2();
                break;
            case 3:
                expression3();
                break;
            case 4:
                expression4();
                break;
            case 5:
                expression5();
                break;
            case 6:
                expression6();
                break;
            case 7:
                expression7();
                break;
            case 8:
                expression8();
                break;
            case 9:
                expression9();
                break;
            case 10:
                expression10();
                break;
            case 11:
                expression11();
                break;
            case 12:
                expression12();
                break;
            case 13:
                expression13();
                break;
        }
    }


}


