#include<iostream>
using namespace std;

class addition{
    int n,sum,sum1,i,j;
    public:
    void getdata(){
        cout<<"Enter the nos. you want to add:"<<endl;
        cin>>n;
    }
    void showdata(){
        for( i=0;i<=n;i++){
            sum+=i;
        }
        for( j=0;j<=n;j+=2){
            sum1+=j;
        }
        cout<<"odd addition is "<<sum1<<endl;
        cout<<"Total addition is "<<sum<<endl;
    }
};

class substraction{
    int a,b,sub;
    public:
    void getdata(){
        cout<<"Enter the first number:"<<endl;
        cin>>a;
        cout<<"Enter the second number:"<<endl;
        cin>>b;
    }
    
    void showdata(){
        sub=b-a;
        cout<<"The difference between these two number is: "<<sub<<endl;
    }
};

class multiplication{
    
    int n,mul,mul1;

    public:

    void getdata(){
        cout<<"Enter the nos. u want to multiply:"<<endl;
        cin>>n;
    }

    void showdata(){
        for(int i=0;i<=n;i++){
            mul*=i;
        }

        for(int j=0;j<=n;j+=2){
            mul1*=j;
        }

        cout<<"multiplication of the odd number: "<<mul1<<endl;

        cout<<"total multiplication is: "<<mul<<endl;
    }
};

class division{
    int a,b,div;

    public:
    void getdata(){
        cout<<"Enter the first number:"<<endl;
        cin>>a;
        cout<<"Enter the second number:"<<endl;
        cin>>b;
    }

    void showdata(){
        div=b/a;
        cout<<"The division between these two numbers:"<<endl;
        cout<<div;
    }
};

class square{
    int a,sqr;
    public:

    void getdata(){
        cout<<"Enter the value of a:"<<endl;
        cin>>a;
    }

    void showdata(){
        sqr=a*a;
        cout<<"square of the number is:"<<endl;
        cout<<sqr;
    }
};

class module{

    int a,b,mod;

    public:

    void getdata(){
        cout<<"Enter the first number:"<<endl;
        cin>>a;
        cout<<"Enter the second number:"<<endl;
        cin>>b;

    }

    void showdata(){
        mod=a%b;
        cout<<"module of these numbers are:"<<endl;
        cin>>mod;
    }
};

class even{
    int n;

    public:
    void getdata(){
        cout<<"Enter the value to check:"<<endl;
        cin>>n;
    }

    void showdata(){
        if(n%2==0){
            
            cout<<"The number is even,congrats"<<endl;

        }
        else{
            
            cout<<"The number is odd,test cases failed"<<endl;

        }
    }
};

class rev{
    int n,r=0,d;
    public:
    void getdata(){

        cout<<"Enter the number which u want to reverse:";
        cin>>n;

    }

    void showdata(){
        while(n!=0){
            d=n%10;
            r=(r*10)+d;
            d/=10;
            n++;
        }
        cout<<"by reversing the number is "<<r<<endl;
    }
};

class cube{
    int a,c;

    public:
    
    void getdata(){
        cout<<"Enter a value:"<<endl;
        cin>>a;
    }

    void showdata(){
        c=a*a*a;
        cout<<"The cube of this number is:"<<endl;
        cin>>c;
    }
};

class local{

    private:

    addition add;
    substraction sub;
    multiplication mul;
    division div;
    square sus;
    module mod;
    even e;
    rev r;
    cube cub;

    public:

    void getdata(){
        cout<<"balle balle sawa sawa"<<endl;
        add.getdata();
        sub.getdata();
        mul.getdata();
        div.getdata();
        sus.getdata();
        mod.getdata();
        e.getdata();
        r.getdata();
        cub.getdata();
    }

    void showdata(){
        add.showdata();
        sub.showdata();
        mul.showdata();
        div.showdata();
        sus.showdata();
        mod.showdata();
        e.showdata();
        r.showdata();
        cub.showdata();
        cout<<"Dragon ballz and hayeyaaa"<<endl;
    }
};

int main(){
    local l;
    cout<<"getting started"<<endl;
    l.getdata();
    cout<<"processing"<<endl;
    l.showdata();
    
    return 0;
}