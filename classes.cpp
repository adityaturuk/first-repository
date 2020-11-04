#include<iostream>
#include<string>
using namespace std;

class Cars
{
    private:
            string company_name;
            string model_name;
            string fuel_type;
            float milege;
            double price;
    
    public:
            void setdata(string cname,string mname,string ftype,float m,double p)
            {
                company_name=cname;
                model_name=mname;
                fuel_type=ftype;
                milege=m;
                price=p;
            }
            
            void displaydata()
            {
                cout<<"----------CAR'S DETAILS:-------------------"<<endl<<endl;
                cout<<"COMPANY NAME :- "<<company_name<<endl;
                cout<<"MODEL NAME :- "<<model_name<<endl;
                cout<<"FUEL TYPE :- "<<fuel_type<<endl;
                cout<<"MILEGE :- "<<milege<<endl;
                cout<<"PRICE :- "<<price<<endl;
            }
            
};

int main()
{
    Cars c1,c2;
    c1.setdata("TATA","NANO","PETROL",40.12,150000);
    c1.displaydata();
    
    c2.setdata("RENAULT","KWID","DIESEL",35.54,300000);
    c2.displaydata();
    return 0;
}
/*
----------CAR'S DETAILS:-------------------

COMPANY NAME :- TATA
MODEL NAME :- NANO
FUEL TYPE :- PETROL
MILEGE :- 40.12
PRICE :- 150000
----------CAR'S DETAILS:-------------------

COMPANY NAME :- RENAULT
MODEL NAME :- KWID
FUEL TYPE :- DIESEL
MILEGE :- 35.54
PRICE :- 300000

*/
