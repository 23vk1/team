/*
Assessment
Food billing system
*/


#include<iostream>
using namespace std;
void food_items();		// declare function to display food items 
int qty_sel();			// declare function to get quantity of item from user

int main(){
	int item_selection,amount=0,qty,total=0;
	char more_order;	
	top:		// initialize (top:) for goto statement
	food_items();	// calling function to display food items
	
	// take input from user (which item user have to order)
	cout<<"\n please enter your choise : ";		
	cin>>item_selection;
	
	// take quantity from user and calculate the amount of that order 
	switch(item_selection){
		case 1:{
			cout<<"\n You selected Pizza ";
			qty=qty_sel();		
			amount = qty*180;
			break;
		}
		case 2:{
			cout<<"\n You selected Burger ";
			qty=qty_sel();	
			amount = qty*100;
			break;
		}
		case 3:{
			cout<<"\n You selected Dosa ";
			qty=qty_sel();	
			amount = qty*120;
			break;
		}
		case 4:{
			cout<<"\n You selected Idli ";
			qty=qty_sel();	
			amount = qty*50;
			break;
		}
	}
	
	
	total = total + amount;				// make total of all orders 
	cout<<"\n Amount = "<<amount;		// print last order's amount
	cout<<"\n total amount = "<<total;	// print total amount 
	
	// ask user to make another order if he/she want to make order or not
	cout<<"\n Do you wan to place more orders ? y & n : ";		
	cin>>more_order;
	// if he/she wants to make an order than make all process again by using goto statement
	if(more_order=='y'){
		goto top;
	}
	
}


// function initialization

// function to print items
void food_items(){
	cout<<"\n 1). Pizza 	180(Rs./pcs)\n 2). Burger 	100(Rs./pcs)\n 3). Dosa 	120(Rs./pcs)\n 4). Idli 	50(Rs./pcs)\n";
}


// function to get quantity of item from user
int qty_sel(){
	int b;
	cout<<"\n Enter the Quantity :";
	cin>>b;
	return b;
}


