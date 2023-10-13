#include<iostream>
#include<ctime>
// #include<algorithms>
using namespace std;

int main(){

    char start;
    float shop(void);
    char choice;

    startL:
        cout<<"Please press H to strat shopping for Home appliances"<<endl;
        start:
            cin>>start;

            if(start=='h' || start=='H')
            {
                float total= shop();
                time_t t=time(NULL);
                tm* tPtr=localtime(&t);

                cout<<"Bill Date : ";
                cout<<tPtr->tm_mday<<"/";
                cout<<1+ tPtr->tm_mon<<"/";
                cout<<1900 + tPtr->tm_year<<endl;
                cout<<"Bill time: "<<(tPtr->tm_hour)<<":"<<(tPtr->tm_min)<<":"<<(tPtr->tm_sec)<<endl;
                cout<<"Total Bill Amount : "<< total<<endl;
                if(total >50000 && 100000)
                {
                    total=total-(0.05*total);
                    cout<<"Total discount : 5%"<<endl;
                }
                else if(total >100000 && 125000)
                {
                    total=total-(0.01*total);
                    cout<<"Total discount : 10%"<<endl;
                }
                 else if(total >125000 && 150000)
                {
                    total=total-(0.25*total);
                    cout<<"Total discount : 25%"<<endl;
                }
                 else if(total >125000 && 150000)
                {
                    total=total-(0.5*total);
                    cout<<"Total discount : 50%"<<endl;
                }

                cout<<"Total bill amount is : "<<total<<endl;
                Again:
                    cout<<"Do you want shopping again y or n"<< endl;
                    cin>>choice;
                    if(choice=='y' || choice=='Y')
                    {
                        goto startL;
                    }
                    else if(choice=='n' || choice=='N')
                    {
                        cout<<"Thanks for shopping"<<endl;
                    }
                    else{
                        cout<<"You have entered the wrong option, please press H"<<endl;
                        goto Again;
                    }


            }else{
                cout<<"You have entered wrong option, please press H to start again"<<endl;
                goto start;
            }
}

    float shop()
    {
        shop:
            char choice;
            Refrigerator:
            Washingmachine:
            Television:
            Microwave:
            Airconditioner:
            char product;
            int quantity;
            float bill=0;
            itemLevel:
                cout<<"**********************Welcome******************"<<endl;
                cout<<"________Please follow the instructions ________"<<endl;
                cout<<"| 1) Please enter r to order Refrigerator"<<endl;
                cout<<"| 2) Please enter w to order Washing machine"<<endl;
                cout<<"| 3) Please enter t to order Television"<<endl;
                cout<<"| 4) Please enter m to order Microwave"<<endl;
                cout<<"| 5) Please enter a to order Air conditioner"<<endl;
                cin>>choice;

                if(choice =='r' || choice =='R' || choice =='w' || choice =='W'||choice =='t' || choice =='T' || choice =='m' || choice =='M'|| choice =='a' || choice =='A')
                {//----------------1. refrigerator-------------------------
                    if(choice =='r' || choice =='R')
                    {
                     cout<<"_____Regrigerator Details____"<<endl;
                     cout<<"| 1) Whirlpool  => Price:  40000   |"<<endl;  
                     cout<<"| 2) Samsung    => Price:  37500   |"<<endl;   
                     cout<<"| 3) Panasonic  => Price:  34750   |"<<endl;  
                     cout<<"| 4) Godrage    => Price:  28900   |"<<endl;  
                     cout<<"| 5) LG         => Price:  22500   |"<<endl;  
                     cout<<"| 6) Philips    => Price:  16350   |"<<endl;  


                     cout<<"Please enter your choice"<<endl;
                     cin>>product;
                     if(product=='1')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*40000;
                     }
                       else if(product=='2')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*37500;
                     }
                      else if(product=='3')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*34750;
                     }
                       else if(product=='4')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*28900;
                     }
                        else if(product=='5')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*22500;
                     }
                         else if(product=='6')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*16350;
                     }
                     else{
                        cout<<"You have entered the wrong option, please try again"<<endl;
                        goto Refrigerator;
                     }
                    }
                    //------------2. -Washing machine------------------------
                      if(choice =='w' || choice =='W')
                    {
                     cout<<"_____Washing machine Details____"<<endl;
                     cout<<"| 1) Bosch      => Price:  50000   |"<<endl;  
                     cout<<"| 2) Samsung    => Price:  40500   |"<<endl;   
                     cout<<"| 3) Whirlpool  => Price:  35550   |"<<endl;  
                     cout<<"| 4) Maytag     => Price:  28000   |"<<endl;  
                     cout<<"| 5) Haier      => Price:  23500   |"<<endl;  
                     cout<<"| 6) LG         => Price:  18760   |"<<endl;  


                     cout<<"Please enter your choice"<<endl;
                     cin>>product;
                    if(product=='1')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*50000;
                     }
                       else if(product=='2')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*40500;
                     }
                      else if(product=='3')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*35550;
                     }
                       else if(product=='4')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*28000;
                     }
                        else if(product=='5')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*23500;
                     }
                         else if(product=='6')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*18760;
                     }
                     else{
                        cout<<"You have entered the wrong option, please try again"<<endl;
                        goto Washingmachine;
                     }
                }

           
            if(choice =='t' || choice =='T')
                    {// -------------3. Television----------------
                     cout<<"_________Television Details____"<<endl;
                     cout<<"| 1) Whirlpool  => Price:  70000   |"<<endl;  
                     cout<<"| 2) Samsung    => Price:  67500   |"<<endl;   
                     cout<<"| 3) Panasonic  => Price:  54750   |"<<endl;  
                     cout<<"| 4) Godrage    => Price:  48900   |"<<endl;  
                     cout<<"| 5) LG         => Price:  32500   |"<<endl;  
                     cout<<"| 6) Philips    => Price:  26350   |"<<endl;  


                     cout<<"Please enter your choice"<<endl;
                     cin>>product;
                     if(product=='1')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*70000;
                     }
                       else if(product=='2')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*67500;
                     }
                      else if(product=='3')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*54750;
                     }
                       else if(product=='4')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*48900;
                     }
                        else if(product=='5')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*32500;
                     }
                         else if(product=='6')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*26350;
                     }
                     else{
                        cout<<"You have entered the wrong option, please try again"<<endl;
                        goto Television;
                     }
                    }
                    //-------------4. Microwave------------------------
                      if(choice =='m' || choice =='M')
                    {
                     cout<<"_____Microwave Details____"<<endl;
                     cout<<"| 1) Bosch      => Price:  90000   |"<<endl;  
                     cout<<"| 2) Samsung    => Price:  80500   |"<<endl;   
                     cout<<"| 3) Whirlpool  => Price:  75550   |"<<endl;  
                     cout<<"| 4) Maytag     => Price:  58000   |"<<endl;  
                     cout<<"| 5) Haier      => Price:  43500   |"<<endl;  
                     cout<<"| 6) LG         => Price:  38760   |"<<endl;  


                     cout<<"Please enter your choice"<<endl;
                     cin>>product;
                    if(product=='1')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*90000;
                     }
                       else if(product=='2')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*80500;
                     }
                      else if(product=='3')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*75550;
                     }
                       else if(product=='4')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*58000;
                     }
                        else if(product=='5')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*43500;
                     }
                         else if(product=='6')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*38760;
                     }
                     else{
                        cout<<"You have entered the wrong option, please try again"<<endl;
                        goto Microwave;
                     }
                }
                       //-------------4. Air conditioner------------------------
                      if(choice =='a' || choice =='A')
                    {
                     cout<<"_____Air conditioner Details____"<<endl;
                     cout<<"| 1) Bosch      => Price:  120000   |"<<endl;  
                     cout<<"| 2) Samsung    => Price:  110500   |"<<endl;   
                     cout<<"| 3) Whirlpool  => Price:  85550   |"<<endl;  
                     cout<<"| 4) Maytag     => Price:  78000   |"<<endl;  
                     cout<<"| 5) Haier      => Price:  63500   |"<<endl;  
                     cout<<"| 6) LG         => Price:  58760   |"<<endl;  


                     cout<<"Please enter your choice"<<endl;
                     cin>>product;
                    if(product=='1')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*120000;
                     }
                       else if(product=='2')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*110500;
                     }
                      else if(product=='3')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*85550;
                     }
                       else if(product=='4')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*78000;
                     }
                        else if(product=='5')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*63500;
                     }
                         else if(product=='6')
                     {
                        cout<<"Please enter the quantity of the product"<<endl;
                        cin>>quantity;
                        bill=bill+quantity*58760;
                     }
                     else{
                        cout<<"You have entered the wrong option, please try again"<<endl;
                        goto Airconditioner;
                     }
                } 
    }
    else{
        cout<<"You have entered the wrong option, please try again"<<endl;
        goto shop;
    }
    return bill;
    }