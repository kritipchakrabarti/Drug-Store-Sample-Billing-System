#include<iostream>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include<cmath>
using namespace std;

string name[101]={"","Anees Gandhi","Chirag Menon","Lakshmi Vohra","Bijoy Sabharwal","Nutan Virk","Dinesh Badami","Akhila Baria","Aastha Din","Qadim Dora","Rupal Subramanian","Ajinkya Toor","Chand Chaudhuri","Nagma Rajagopal","Harbhajan Seth","Charandeep Gandhi","Deepesh Koshy","Naseer Nori","Monica Nayar","Maya Koshy","Smriti Srinivas","Yogesh Palla",
"Padama Edwin","Gajendra Din","Nalini Naik","Somnath Chad","Darpan Bhat","Ajay Rajan","Feroz Ramroop","Neha Mand","Bijoy Mitter","Ibrahim Pal","Fardeen Mathur","Zaad Chakraborty","Hrishikesh Kant","Indrani Mand","Meghana Patla","Chand Mehrotra","Binoya Balakrishnan","Subhash Dube","Gulab Mangal","Nazir Vala","Poonam Anthony","Kushal Talwar","Pirzada Sahni","Kartik Sem","Ibrahim Mohan","Sapna Narang","Roma Divan","Richa Sani","Ghanshyam Ben","Prasoon Keer","Tanay Ratta","Geetanjali Arya","Niyati Trivedi","Binoya Mand","Ghalib Ramakrishnan","Hira Jaggi","Preshita Mishra","Vaishali Dutt","Runjhun Tak","Yasmin Rana","Nagma Bhandari","Nagma Sem","Rachel Bhagat","Albert Jayaraman","Uday Brahmbhatt","Baalkrishan Bala","Maya Mane","Wafiq Kaul","Bimla Chaudhari","Narmada Banerjee","Sameera Narayanan","Wahid Minhas","Habib Bera","Richa Sengupta","Koushtubh Bhagat","Jack Kar","Heena Kumer","Hemendra Minhas","Samir Karnik","Tanay Sant","Neha Gopal","Aadil Hayer","Subhash Chaudhary","Kalpana Pillai","Kasturba Borah","Tejaswani Kumer","Vineeta Nigam","Divya Chauhan","Amrit Mall","Rashid Choudhry","Sweta Kade","Deepesh Bhatia","Yadu Doctor","Prasoon Sibal","Heer Chhabra","Neerendra Kumar","Ananya Sathe","Nilam Munshi","Srinivasan Balasubramanian"};
string phone_number[101]={"","+91-855-587-1402","+91-855-577-5732","+91-855-507-9788","+91-755-592-4739",
"+91-755-578-8067","+91-855-502-6478","+91-755-520-5327","+91-855-521-3614","+91-855-532-8895","+91-755-516-9587",
"+91-855-520-1523","+91-855-598-2204","+91-755-547-2245","+91-755-534-7047","+91-945-556-2243","+91-935-557-5034",
"+91-965-552-4834","+91-855-521-4937","+91-855-544-6705","+91-755-543-6825","+91-755-527-1456","+91-985-558-8639",
"+91-755-503-5089","+91-755-579-7728","+91-955-550-0985","+91-855-556-9308","+91-855-581-9203","+91-855-521-2215",
"+91-935-559-4040","+91-855-597-2907","+91-755-554-2261","+91-755-561-7267","+91-755-504-9893","+91-755-561-8847",
"+91-985-550-7762","+91-855-528-0446","+91-855-567-6059","+91-985-551-8084","+91-755-559-2978","+91-975-551-8498",
"+91-755-587-3752","+91-855-596-8218","+91-755-588-8322","+91-755-535-9833","+91-855-570-7436","+91-855-529-9221",
"+91-935-551-8981","+91-945-559-4263","+91-965-551-3368","+91-925-558-3134","+91-855-571-8376","+91-905-552-5649",
"+91-755-536-7677","+91-925-555-0156","+91-855-566-3733","+91-755-578-7727","+91-935-556-1769","+91-755-522-8527",
"+91-925-559-5514","+91-755-532-3861","+91-755-532-9543","+91-755-592-1220","+91-755-518-1933","+91-855-530-0699",
"+91-755-587-7016","+91-855-544-2543","+91-855-512-0222","+91-755-528-0123","+91-955-554-3905","+91-855-543-8093",
"+91-905-554-5274","+91-855-543-1109","+91-975-550-0432","+91-755-562-2761","+91-995-557-4604","+91-855-524-8731",
"+91-955-550-4536","+91-755-571-1641","+91-855-529-1255","+91-975-557-3611","+91-755-577-7527","+91-755-531-8899",
"+91-755-509-1363","+91-945-557-3961","+91-855-577-0924","+91-855-598-6634","+91-855-516-5287","+91-915-556-4921",
"+91-995-553-8347","+91-855-551-2873","+91-905-557-5176","+91-905-558-2517","+91-755-522-1621","+91-855-513-0614",
"+91-755-563-9509","+91-755-575-0111","+91-755-556-3467","+91-975-551-2938","+91-855-597-6403","+91-755-516-4782"};

string med[101]={"","ADCO-CONTROMET","CLOPAMON","CYCLIVEX","BETACIN","MEDIFLEX","DIFEN SR","VELTEXCR",    "VOLTAREN","PANAMOR","DICLOHEXAL","LENAFEN","NUROFEN","PAINIL","BREN","INZA","GENPAYNE","MYBULEN","CLOMAX","PONAC","FENAMIN","LONOL","ACTAMOLRED",
"LENAFEN","PAINIL","NFAPAIN","SUPRAGESIC","VARIPAN","ROCODIN","PAINAGON","KIDEEZE","STILPANE","ANLAC","BETAPAM","DOVAL","PAX","PURATA","ATIVAN",
"TRANQIPA","LEXOTAN","AZOR","ZOPIVANE","ETHIPRAMINE","TOFRANIL","CLOMIDEP","EQUINORM","PROTHIADEN","THADEN","LORIEN","REZAK","RITALIN","SANDOZ CINNARIZINE","GASTRON","IMODIUM","LOPEDIUM","FLAGYL","MEDAMET","NAROBIC","AMZOLE","ANAEROBYL","DWORM","SINUMED","DIAMIN","FORMINAL","GLUCONORM",
"ROMIDAB","ASTHAVENT","NUZAK","STUGERON","GASTRON","CIPEX","FORMINAL","OCCUMOL","DIABINESE","HYPOMIDE","FIZZICAL","SANDOZ","DISPRIN","MYOPRIN",
"SOLUSPRIN","CIMLOK","LENAMET","HEXAMET","SECADINE","DEZRETIC","SIMAYLA","ZINTAC","AUSTAC","RANIT","CAPACE","ENAP","CIPLATEC","LIZRO","RAMIWIN",
"CO-RENITEC","TRITACE","SIMAYLA LISINOPRIL","LENADOL","PROPAIN","ADVIL CS","NUROFEN COLD AND FLU" };

double price[101]={0.0,27.37,28.37,69.15,29.98,27.89,132.46,132.46,68.27,8.54,8.44,306.05,308.05,341.58,358.71,360.02,56.30,56.30,74.74,
                 131.33,595.59,9.60,266.13,268.55,13.33,17.96,304.95,12.44,207.44,13.76,45.76,98.68,115.64,101.68,129.58,54.46,59.46,149.02, 458.48,82.09,115.62,56.57,545.15,366.58,318.22,674.90,165.58,143.86,47.31,207.21,139.29,15.93,9.37,8.15,31.59,50.68,44.07,50.68,143.11,111.11,10.34,16.40,199.48,299.88,399.49,99.48,20.59,107.21,8.15,9.37,17.28,229.40,68.33,57.08,95.29,31.96,29.01,             48.14,33.71,38.82,11.17,22.22,14.41,12.00,44.75,400.00,11.70,65.71,67.14,71.65,20.26,33.98,99.09,22.65,90.00,121.37,188.92,39.88,114.22,14.14,51.99};

string search_x(string a[],string b[],string k)
{
int flag=0;
for(int i=1;i<101;i++)
{
if(k==a[i])
{
flag=1;
return b[i];
}
}
if(flag==0)
{
        cout<< "Not Found!!!";
        exit(0);
}
}

int found(string* a,string k)
{
    int flag=0;
for(int i=1;i<101;i++)
{
if(k==a[i])
{
    flag=1;
    return i;
}
}
if(flag==0)
    return 0;
}


class medicine
{
    public:
        string nm;
        double tpr;
        int qty;
        medicine()
        {
            tpr=0;
            qty=0;
        }

    void input()
    {
        cout<<"Enter the medicine you want to take:- \n";
        cin>>nm;
        if(found(med,nm))
        {
            cout<<"Enter quantity: \n";
            cin>> qty;
            tpr=qty*price[found(med,nm)];
        }
        else
        {
            cout<<"\nNot Found";
        }
    }

    void display()
    {

       if(tpr!=0)
       {
        cout<<endl;
       cout << med[found(med,nm)] <<"\t\t"<< price[found(med,nm)] <<"\t\t"<<  qty  <<"\t\t"<< tpr;
       cout<< endl;
       }
    }

};


class customer
{
    public:
    string phn;
	string name;
	string add;
	string emailid;
public:
void get_data()
{
    cin.ignore();
    cout<<"enter phone number:"<<endl;
	getline(cin,phn);
	cout<<"enter name :"<<endl;
	getline(cin,name);
	cout<<"enter address :"<<endl;
	getline(cin,add);
	cout<<"enter valid email id :"<<endl;
	getline(cin,emailid);
}
void disp_naph()
{
    cout<<"\nCustomer's name:"<<name<<"\nCustomer's phone number:"<<phn;
}
void disp_addmail()
{
cout<<"\nAddress of customer:"<<add<<"\nCustomer's ID:"<<emailid<<endl;
}
};

void dis_old_new()
{
    	int n=30;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
        {
			if(i==0  || i==n-1)
			cout<<"*";
			else if(i==10)
			{
				if(j==n/4)
				{
					cout<<"*        1.new user"<<"\n";}}
			else if(i==12)
					{
						if(j==n/4)
						{
							cout<<"*        2.old user";}

		    }




	else if(j==0 || j==n-1)
	{
	cout<<"*";}
	else
	{cout<<" ";
    }
}
	cout<<endl;
}
}




int main()
{
dis_old_new();
int choice;
cout<<"\nEnter Your Choice:-"<<endl;
cin>>choice;

switch(choice)
{
case 1:
    {
    system("CLS");
    customer ob1;
    cout<<endl;
    ob1.get_data();
    system("CLS");
    ob1.disp_naph();
    ob1.disp_addmail();

    medicine m[101];
    double total=0;
    int i=1,j=1;
    for(i=1;i<101;i++)
    {
        cout<<"\n\nPress Y to buy more\nOr else press any other key\n";
        char ch;
        cin>>ch;
        if (ch=='y'||ch=='Y')
        {
            (m[i]).input();
            total+=m[i].tpr;
        }
        else
        {
            break;
        }

    }

    system("CLS");
    ob1.disp_naph();
    cout << "\nMedicine Name\t\tPrice \t Quantity \t Total Price " ;
    for(j=1;j<i;j++)
        m[j].display();
    cout << "\n\nAmount to be paid = "<< total;
    break;

    break;
    }

case 2:
    {
    system("CLS");
        customer ob1;
    cout<<"Enter the phone number: ";
    cin>> ob1.phn;
    ob1.name=search_x(phone_number,name,ob1.phn);
    ob1.disp_naph();

    medicine m[101];
    double total=0;
    int i=1,j=1;
    for(i=1;i<101;i++)
    {
        cout<<"\n\nPress Y to buy more\nOr else press any other key:-\n";
        char ch;
        cin>>ch;
        if (ch=='y'||ch=='Y')
        {
            m[i].input();
            total+=(m[i]).tpr;
        }
        else
        {
            break;
        }

    }

    system("CLS");
    ob1.disp_naph();
    cout << "\n\nMedicine Name\t\t Price \t Quantity \t Total Price " ;
    for(j=1;j<i;j++)
        (m[j]).display();
    cout << "\n\nAmount to be paid = "<< total;
    break;
    }
default:
    {
        system("CLS");
        cout<<"You have given a wrong input"<<endl;
    }
}
}
