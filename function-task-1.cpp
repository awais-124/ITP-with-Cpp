#include <iostream>

using namespace std;
double saleprice(double &price, double &tax)
{
	
	double sale_price,amount;
	amount=price*(tax/100);

	sale_price =price+amount;
	
	return sale_price;
}
int main() 
{
    double purchase_price,tax_amount;
    
    cout<<"Enter price and tax:  "<<endl;
    cin>>purchase_price>>tax_amount;
    
    double a=saleprice(purchase_price, tax_amount);
    
    cout<<"Sale Price is : "<<a;
}

