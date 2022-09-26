#include <iostream>
#include <iomanip>
using namespace std;

struct customer{				
   	string c_name;
   	int food[100];
   	int qty[100];
   	int meat[100];
   	int payment;
   	float subtotal;
   	float totaleach;
	int countquantity;
	};
customer cus[100];

void information();
void page();
void admin();
void manager();
void foodname(int x);
void menu();
void showorder();
void showprice(int x,int y,int z);
void foodtype(int x, int y, int z);
void price(float x,int y);
void finish();
int option, adminpass, manapass;
int i,n;
int countcust=1;
float totalsales;

int main(int argc, char** argv) {
information();					//Home page: logo, address, phone no.
page();							//Home page: login option


return 0;
}

void information(){
	
	cout<<endl<<"\t\t\t\tWelcome to CINCAI LAHHHH Restaurant!"<<endl<<endl;
	cout<<"\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
	cout<<"\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
	cout<<"\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&                             &&&&&&&&&"<<endl;
	cout<<"\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&  &&&&&&&&&&&&&&&&&&&&&&&&&&&  &&&&&&&&"<<endl;
	cout<<"\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&  &&&  &&&&&&&&&&  &&&&&&&   &&  &&&&&&&"<<endl;
	cout<<"\t&&&&&&&&&&&&&&&&&&&&&&&&  &&&&&&&&&&&  &&&&&&&&&&&&&&&&  &&&&  &&&&&&&&&&  &&&&&&&   &&&  &&&&&&"<<endl;
	cout<<"\t&&&&&&&&&&&&&&&&&&&&&&&&&   &&&&&&&&&&   &&&&&&&&&&&&&  &&&&&  &&&&&&&&&&  &&&&&&&   &&&&  &&&&&"<<endl;
	cout<<"\t&&&&&&&&&&&&&&&&&&&&&&&&&&&  &&&&&&&&&&&  &&&&&&&&&&&  &&&&&&  &&      &&       &&   &&&&&  &&&&"<<endl;
	cout<<"\t&&&&&&&&&&&&&&&&&&&&&&&&&   &&&&&&&&&&&  &&&&&&&&&&&&&  &&&&&  &&  &&  &&  &&&  &&   &&&&  &&&&&"<<endl;
	cout<<"\t&&&&&&&&&&&&&&&&&&&&&&&&  &&&&&&&&&&&  &&&&&&&&&&&&&&&&  &&&&  &&      &&  &&&  &&&&&&&&  &&&&&&"<<endl;
	cout<<"\t&&&&&&&&&&&&&&&&&&&&&&&  &&&&&&&&&&&  &&&&&&&&&&&&&&&&&&  &&&  &&&&&&  &&  &&&  &&   &&  &&&&&&&"<<endl;
	cout<<"\t&&&&&&          &&&&&&&&   &&&&&&&&&&   &&&&&&&&&&&&&&&&&  &&&&&&&&&&&&&&&&&&&&&&&&&&&  &&&&&&&&"<<endl;
	cout<<"\t&&&&&&  &&&&&&&&&&&&&&&&&&  &&&&&&&&&&&  &&&&&&&&&&&&&&&&&                             &&&&&&&&&"<<endl;
	cout<<"\t&&&&&&  &&&&&&&&&&  &&  &&&&&&&&&&&&&&&&&&&&&&&&&  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
	cout<<"\t&&&&&&  &&&&&&&&&&&&&&        &&      &&       &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
	cout<<"\t&&&&&&  &&&&&&&&&&  &&  &&&&  &&  &&&&&&  &&&  &&  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
	cout<<"\t&&&&&&  &&&&&&&&&&  &&  &&&&  &&  &&&&&&  &&&  &&  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
	cout<<"\t&&&&&&  &&&&&&&&&&  &&  &&&&  &&  &&&&&&       &&  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
	cout<<"\t&&&&&&          &&  &&  &&&&  &&      &&&&&&&  &&  &&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
	cout<<"\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl;
	cout<<"\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&"<<endl<<endl;
	cout<<"\tRestaurant Name: CINCAI LAHHHH Restaurant"<<endl;
	cout<<"\tAddress        : No.1, Jalan Cincai, 47500 Subang Jaya, Selangor."<<endl;
	cout<<"\tPhone number   : 03-1111 2222, 016-2228888 (Manager)"<<endl;
	return;
};

void page(){						//login option

	do{
		cout<<endl<<"Login Option: Admin (1)/ Manager (2) / View Menu (3)/ Exit (4): ";
		cin>>option;
		if (option==1)
			{cout << "Enter password: ";
			cin>>adminpass;
			if (adminpass==123456) admin();
			else {cout<<"Wrong password!";page();}}
		else if (option==2)
           {cout << "Enter password: ";
			cin>>manapass;
			if (manapass==123456) manager();
			else {cout<<"Wrong password!";page();}}
		else if (option==3)
			{menu();}
		else if (option==4)
			{cout<<"\tThank you!";}
		else{
			cout<<"\tInvalid Option. Please enter <1/2/3/4>";}

	}while(option!=1&&option!=2&&option!=3&&option!=4);
};

void menu(){

	cout<<"\n\t   Welcome to Cincailah Restaurant!"<<endl;
    cout<<"\t            Food Menu"<<endl;
	cout<<"*****************************************************"<<endl;
	cout<<"A. MAIN DISHES "<<endl;
	cout<<"---------------"<<endl;
	cout<<"1. Chicken Chop                             RM10.90"<<endl;
	cout<<"2. Spaghetti                                RM10.90"<<endl;
	cout<<"3. Cheese Baked Rice (Chicken / Pork)       RM12.90/13.90"<<endl;
	cout<<"4. Carbonara                                RM11.90"<<endl;
	cout<<"5. Pizza (Chicken / Beef)                   RM12.90/13.90"<<endl<<endl;
	cout<<"B.  DRINK "<<endl;
	cout<<"--------------"<<endl;
	cout<<"6. Cola                                     RM3.90"<<endl;
	cout<<"7. 100plus                                  RM3.90"<<endl;
	cout<<"8. Apple Juice                              RM5.90"<<endl;
	cout<<"9. Honey Lemon                              RM5.90"<<endl;
	cout<<"10. Orange Juice                            RM5.90"<<endl<<endl;
	cout<<"C.  DESSERT"<<endl;
	cout<<"--------------"<<endl;
	cout<<"11. Mixed Berries Ice Cream                  RM12.90"<<endl;
	cout<<"12. Banana's Boat                            RM13.90"<<endl;
	cout<<"13. Chocolate Lava Cake                      RM8.90"<<endl;
	cout<<"14. Cheese Cake                              RM9.90"<<endl;
	cout<<"15. Macarons (3 pieces)                      RM10.90"<<endl<<endl;
	cout<<"16. Bill"<<endl;

	if (option==2||option==3)
	page();																	//ask user login option
};

void admin(){

	menu();			//Show Menu
	cout<<endl<<"Customer name: ";
	cin>>cus[n].c_name;
	cus[n].countquantity=0;

	do{
		for(int i=0; i<cus[n].countquantity+1; i++){
			cus[n].meat[i]=1;
  			cout<<"Food choice: ";								//Choose food
			cin>>cus[n].food[i];
		
			if (cus[n].food[i]>=1 && cus[n].food[i]<=15){		// if food choice is 1-15
				
				if (cus[n].food[i]==3){ 											//choose meat for food choice 3
					cout<<"Cheese Baked Rice (Chicken (1) / Pork (2)): ";
					cin>>cus[n].meat[i];}
				else if (cus[n].food[i]==5){ 										//choose meat for food choice 5
					cout<<"Pizza (Chicken (1) / Beef (2)): ";
					cin>>cus[n].meat[i];}

				if (cus[n].meat[i]==1||cus[n].meat[i]==2){
					cout<<"Enter the quantity: ";
					cin>>cus[n].qty[i];
					cus[n].countquantity++;							//count how many entries of foods for the specific customer
  					foodtype(cus[n].food[i], cus[n].qty[i], cus[n].meat[i]); }
				else{
					cout<<"Invalid option"<<endl;
					i--;}			//to delete the invalid food choice value in the array of customer's food choice									
			}
	
			else if (cus[n].food[i]==16){			// if food choice is 16.bill
				
					while (cus[n].payment!=1&&cus[n].payment!=2){					
					cout<<fixed<<setprecision(2);
					cout<<"[1] Cash (5% service charge) "<<endl;
					cout<<"[2] Credit Card (8% service charge) "<<endl;
                    cout<<"Please select a payment method = ";
					cin>>cus[n].payment;
					if (cus[n].payment==1){
			 			cus[n].totaleach=cus[n].subtotal*1.11;
						cout<<"\n\t\t\t\t\t   Receipt"<<endl;
						cout<<"----------------------------------------------------------------------------------------"<<endl;
	                    cout<<"  Name\t\t\tFood/Drink\t\t       Quantity\t\t\tAmount"<<endl;
						cout<<"----------------------------------------------------------------------------------------"<<endl;
						showorder();
						cout<<"\nSubtotal            = RM "<<setw(6)<<cus[n].subtotal*1.00<<endl;
						cout<<"Service charge (5%) = RM "<<setw(6)<<cus[n].subtotal*0.05<<endl;
						cout<<"GST (6%)            = RM "<<setw(6)<<cus[n].subtotal*0.06<<endl;
						cout<<"Total               = RM "<<setw(6)<<cus[n].totaleach<<endl<<endl;
			  	 		finish();
			   			exit(0);						
					}
			 		else if  (cus[n].payment==2){
			 			cus[n].totaleach=cus[n].subtotal*1.14;
						cout<<"\n\t\t\t\t\t   Receipt"<<endl;
						cout<<"---------------------------------------------------------------------------------------"<<endl;
						cout<<"  Name\t\t\tFood/Drink\t\t       Quantity\t\t\tAmount "<<endl;
						cout<<"---------------------------------------------------------------------------------------"<<endl;
						showorder();
						cout<<"\nSubtotal            = RM "<<setw(6)<<cus[n].subtotal*1.00<<endl;
						cout<<"Service charge (8%) = RM "<<setw(6)<<cus[n].subtotal*0.08<<endl;
						cout<<"GST (6%)            = RM "<<setw(6)<<cus[n].subtotal*0.06<<endl;
						cout<<"Total               = RM "<<setw(6)<<cus[n].totaleach<<endl<<endl;
						finish();
						exit(0);
					}
					else
						cout<<"Invalid payment method.";
					}
				
			}
			
			else{																			//only allow food choice 1-16
				cout<<"Invalid option. Please enter 1 to 16."<<endl;
  				i--; }										//to delete the invalid food choice value in the array of customer's food choice
  		}
	}while(cus[n].food[i]!=16);							//keep looping until foodchoice is 16(bill)
	return;
};

void foodtype(int x, int y, int z){				//x = food choice, y = quantity, z = type of meat

	switch(x){
		case 1:
		    price(10.90,y);
		    break;
		case 2:
		    price(10.90,y);
		    break;
		case 3:
			if (z==1)
				price(12.90, y);
			else if (z==2)
				price (13.90, y);
			break;
		case 4:
			price(11.90,y);
			break;
		case 5:
			if (z==1)
				price(12.90, y);
			else if (z==2)
				price (13.90, y);
			break;
		case 6:
		case 7:
			price(3.90, y);
			break;
		case 8:
		case 9:
		case 10:
			price(5.90, y);
			break;
		case 11:
			price(12.90, y);
			break;
		case 12:
			price(13.90, y);
			break;
		case 13:
			price(8.90, y);
			break;
		case 14:
			price(9.90, y);
			break;
		case 15:
			price(10.90,y);
			break;
		default:
			cout<<"\nInvalid number. \nPlease insert number from 1 to 16." <<endl;
	}
	return;
};

void price(float x, int y){	
				
	float cost=0;
	cost = x*y;			//x = food price, y = quantity
	cus[n].subtotal+=cost;
};

void foodname (int x){

	switch (x){
		case 1:
			cout<<"Chicken Chop";
			break;
		case 2:
			cout<<"Spaghetti";
			break;
		case 15:
			cout<<"Macarons (3pieces)";
			break;
		case 3:
			if (cus[n].meat[i]==1||cus[n].meat[0]==1)							//if customer's first or other food choice is 3, and meat is 1
				cout<<"Cheese Baked Rice (Chicken)";
			else if (cus[n].meat[i]==2||cus[n].meat[0]==2)						//if customer's first or other food choice is 3, and meat is 2
				cout<<"Cheese Baked Rice (Pork)";
			break;
		case 4:
			cout<<"Carbonara";
			break;
		case 5:
			if (cus[n].meat[i]==1||cus[n].meat[0]==1)					 	//if customer's first or other food choice is 5, and meat is 1
				cout<<"Pizza (Chicken)";
			else if (cus[n].meat[i]==2||cus[n].meat[0]==2)					//if customer's first or other food choice is 5, and meat is 2
				cout<<"Pizza (Beef)";
			break;
		case 6:
			cout<<"Cola";
			break;
		case 7:
			cout<<"100plus";
			break;
		case 8:
			cout<<"Apple Juice";
			break;
		case 9:
			cout<<"Honey Lemon";
			break;
		case 10:
			cout<<"Orange Juice";
			break;
		case 11:
			cout<<"Mixed Berries Ice Cream";
			break;
		case 12:
			cout<<"Banana's Boat";
			break;
		case 13:
			cout<<"Chocolate Lava Cake";
			break;
		case 14:
			cout<<"Cheese Cake";
			break;
	};
	return;
};

void showorder(){
	
	if (n==countcust-1){

		cout<<" "<<left<<setw(20)<<cus[n].c_name;
    	cout<<left<<setw(35);
        foodname(cus[n].food[0]);
        cout<<right<<setw(4)<<cus[n].qty[0];
        cout<<" "<<setw(24);
        showprice(cus[n].food[0],cus[n].qty[0], cus[n].meat[0]);cout<<endl;
       
	    for (i=1; i<cus[n].countquantity; i++){
      		cout<<left<<setw(21)<<" ";
        	cout<<left<<setw(35);
        	foodname(cus[n].food[i]);
			cout<<right<<setw(4)<<cus[n].qty[i];
			cout<<" "<<setw(24);
			showprice(cus[n].food[i],cus[n].qty[i], cus[n].meat[i]);
        	cout<<endl; }
	}
};

void showprice(int x,int y,int z){
	
    switch(x){
		case 1:
		    cout<< 10.90*y;
		    break;
		case 2:
		    cout<<10.90*y;
		    break;
		case 3:
			if (z==1)
				cout<<12.90*y;
			else if (z==2)
				cout<<13.90*y;
			break;
		case 4:
			cout<<11.90*y;
			break;
		case 5:
			if (z==1)
				cout<<12.90* y;
			else if (z==2)
				cout<<13.90*y;
			break;
		case 6:
		case 7:
			cout<<3.90*y;
			break;
		case 8:
		case 9:
		case 10:
			cout<<5.90*y;
			break;
		case 11:
			cout<<12.90*y;
			break;
		case 12:
			cout<<13.90*y;
			break;
		case 13:
			cout<<8.90*y;
			break;
		case 14:
			cout<<9.90*y;
			break;
		case 15:
			cout<<10.90*y;
			break;
	}
};

void finish(){

	int nextstep=0;
	cout<<"Add customer (1) / Login option (2) / Exit (3)"<<endl;

	do{
		cin>>nextstep;
		if (nextstep == 1){
			n++;					//to increase the array size of customer (cus)
			countcust++;
			admin();}
		else if (nextstep == 2)
			page();
		else if (nextstep == 3){
			cout<<"Exiting...";
			exit(0);}
		else
			cout<<"Invalid option. Please enter <1/2/3>."<<endl;

	}while(nextstep != 1 && nextstep != 2 && nextstep != 3);		//keep looping until option 1(add customer), 2(login option) or 3(exit) is chosen

	return;
};

void manager(){

	cout<<"		                      Customer List"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;
	cout<<"  Name\t\t\tFood/Drink\t\t       Quantity\t\tTotal amount (RM)"<<endl;
	cout<<"------------------------------------------------------------------------------------------------------------------"<<endl;

	for (n=0; n<countcust; n++){
		cout<<" "<<left<<setw(20)<<cus[n].c_name;					//display name & align at left side
		cout<<left<<setw(35);
		foodname(cus[n].food[0]);									//diplay foodname for first food
		cout<<right<<setw(4)<<cus[n].qty[0];						//diplay quantity for first food & align at right side to make the digits look neat
		cout<<right<<setw(24)<<cus[n].totaleach<<endl;				//diplay total amount for customer & align at right side to make digits look neat

		//same as above, just to display all the following food & quantity
		for (i=1; i<cus[n].countquantity; i++){
			cout<<left<<setw(21)<<" ";
			cout<<left<<setw(35);
			foodname(cus[n].food[i]);
			cout<<right<<setw(4)<<cus[n].qty[i]<<endl;	}
	}
	cout<<endl<<"Total number of customers: "<<countcust<<endl;
	for (n=0; n<countcust; n++){
		totalsales+=cus[n].totaleach;								//sum up total amount for each customers to find total sales
	}
	cout<<"Total sales              : RM "<<totalsales;
	page();															//ask user login option
	return;
};
