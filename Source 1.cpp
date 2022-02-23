//#include<iostream>
//#include<string>
//using namespace std;
//class Employee //defining class
//{
//private:
//	int ID;
//	string name;
//	string depart;
//	const string Bank_Account = "654321";
//	string Grade;
//public:
//	Employee() //default constructor
//	{
//		ID = 0;
//		name = "";
//		depart = "";
//		Grade = "";
//	}
//	Employee(int id, string n, string d, string g) //overload constructor
//	{
//		ID = id;
//		name = n;
//		depart = d;
//		Grade = g;
//	}
//	void inputData(int id, string n, string d, string g) //input Data function
//	{
//		ID = id;
//		name = n;
//		depart = d;
//		Grade = g;
//	}
//
//	//Display data constant fucntion
//	void displayData()const {
//
//		cout << "ID: " << ID << endl;
//		cout << "Name: " << name << endl;
//		cout << "Department: " << depart << endl;
//		cout << "Bank Account Number: " << Bank_Account << endl;
//		cout << "Grade (1-8): " << Grade << endl;
//	}
//	//destructor 
//	~Employee()
//	{
//		cout << "I am Destructor\n";
//	}
//
//};
//int main()
//{
//	Employee *e1 = new Employee, *e2 = new Employee, *e3 = new Employee;  //dyanmically creating 3 objects
//	int id = 0;
//	string n, d, g;
//
//	//taking data from user for object 1
//	cout << "\n\tEmployee 1\n";
//	cout << "Enter ID: ";
//	cin >> id;
//	cout << "Enter Name: ";
//	cin >> n;
//	cout << "Enter Department: ";
//	cin >> d;
//	cout << "Enter Grade (1-8): ";
//	cin >> g;
//	
//	e1->inputData(id, n, d, g); //assigning data to object 1
//
//	//taking data from user for object 1
//	cout << "\n\tEmployee 2\n";
//	cout << "Enter ID: ";
//	cin >> id;
//	cout << "Enter Name: ";
//	cin >> n;
//	cout << "Enter Department: ";
//	cin >> d;
//	cout << "Enter Grade (1-8): ";
//	cin >> g;
//
//	e2->inputData(id, n, d, g); //assigning data to object 2
//
//	//taking data from user for object 1
//	cout << "\n\tEmployee 3\n";
//	cout << "Enter ID: ";
//	cin >> id;
//	cout << "Enter Name: ";
//	cin >> n;
//	cout << "Enter Department: ";
//	cin >> d;
//	cout << "Enter Grade (1-8): ";
//	cin >> g;
//
//	e3->inputData(id, n, d, g); //assigning data to object 3
//
//	//displaying function
//	cout << "\n\tEmployee 1\n";
//	e1->displayData();
//	cout << "\n\tEmployee 2\n";
//	e2->displayData();
//	cout << "\n\tEmployee 3\n";
//	e3->displayData();
//
//	//explicitly calling destructor
//	e1->~Employee();
//	e2->~Employee();
//	e3->~Employee();
//
//
//	return 0;
//	system("pause");
//} //end main

//Question: 2

//#include<iostream>
//#include<string>
//using namespace std;
//class person
//{
//private:
//	string Name;
//	const string DOB;
//	const string CNIC;
//	static int count;
//
//public:
//
//	person(string name, string dob, string cnic) :DOB(dob), CNIC(cnic) //Member initializing list  
//	{
//		Name = name;
//		count++; //counter 
//	}
//	void getDOB()const //get dob
//	{
//	}
//	void getCNIC()const //get cnic
//	{
//	}
//	void displayData()const //displaying function
//	{
//		cout << Name << " with DoB " << DOB << " having CNIC " << CNIC << endl;
//	}
//	void displayCount() //displaying count
//	{
//		cout << "\nCount: " << count << endl;
//	}
//	~person() //destructor
//	{
//	}
//};
//int person::count = 0;
//int main()
//{
//	string na;
//	cout << "Enter Name for person 1: ";
//	cin >> na;//taking name from user
//	person p1(na, "1st January 2001", "11111-1234567-8"); //assigning values to object 1
//	cout << "Enter Name for person 2: ";
//	cin >> na;//taking name from user
//	person p2(na, "2nd March 2000", "22222-7654321-9"); //assigning values to object 2
//	cout << "Enter Name for person 3: ";
//	cin >> na; //taking name from user
//	person p3(na, "23rd July 2008", "88766-1234567-2"); //assigning values to object 3
//	cout << "\n\t----Person Record----\n";
//
//	cout << "Person 1\n";
//	p1.displayData(); //displaying data for person 1
//	cout << "\nPerson 2\n";
//	p2.displayData(); //displaying data for person 2
//	cout << "\nPerson 3\n";
//	p3.displayData(); //displaying data for person 3
//
//	p1.displayCount(); //displaying count of object
//
//
//	return 0;
//	system("pause");
//}//end main

//question 3

//#include<iostream>
//using namespace std;
//int main()
//{
//	int choice = 0; 
//	//MENU
//	cout << "Press 1 Const Variables\nPress 2 Constant Function Parameters\nPress 3 Constant Return type\n"
//		 <<"Press 4 Const Pointer\nPress 5 Pointer to Const Variable\nPress 6 Constant Data Members of Class\n"
//		 <<"Press 7 Constant Member Function of Class\nChoice: ";
//	cin >> choice; //taking choice
//
//	switch (choice) //choice filter
//	{
//	case 1:
//		cout << "Const Variables:\nWhen you do not want others (or yourself) to override existing variable values, use the const keyword (this will declare the variable as 'constant', which means unchangeable and read-only).You should always declare the variable as constant when you have values that are unlikely to change\n";
//		cout << "Example:\nconst int myNum = 15;  // myNum will always be 15\n";
//		cout << "myNum = 10; //It will throw an error\n";
//		break;
//	case 2:
//		cout << "Constant Function Parameters:\nThe constant parameter received by the function can not be changed in the body of the function. This means you can not use an assignment operation in which a constant parameter receives a value. However, the value of constant parameter can be used at the right hand of assignment statement.";
//		cout << "\nExample:\nvoid data(const int num, const float num1)\n{	\n\tint a=0;\n\ta=num;\t//assigning to right side of assignment operator\n}";
//		break;
//	case 3:
//		cout<<"Constant Return type:\nConstant Return type is to make a function who have return type constant.\nExample:\nconst int h()\n{\n\treturn 1;\n}\nint main()\n{\n\tconst int j = h();\n\tint k = h();\n}\n";
//		break;
//	case 4:
//		cout << "Const Pointer:\nIf we make a pointer const, we cannot change the pointer. This means that the pointer will always point to the same address but we can change the value of that address.\n";
//		cout << "Example:\nint a = 4;\nint* const p = &a; // const pointer p pointing to the variable a\n";
//		break;
//	case 5:
//		cout << "Pointer to Const Variable:\nThis means that the pointer is pointing to a const variable.\nExample:\nconst int* u;\nHere, u is a pointer that can point to a const int type variable.\nWe can also write it like,\nchar const* v;\nstill it has the same meaning.In this case also, v is a pointer to an char which is of const type.\n";
//		break;
//	case 6:
//		cout<<"Constant Data Members of Class:\nThese are data variables in class which are defined using const keyword. They are not initialized during declaration. Their initialization is done in the constructor.\nExample:\nclass Test\n{\n\tconst int i;\npublic:\n\tTest(int x) :i(x)\n\t{\n\t\tcout << 'i value set: ' << i;\n\t}\n};\nint main()\n{\n\tTest t(10);\n\tTest s(20);\n}\n";
//		break;
//	case 7:
//		cout << "Constant Member Function of Class:\nA const member functions never modifies data members in an object.\n";
//		cout << "int data() const  // constant function\n{\n/*\n\tcan do anything but will not\n\tmodify any data members\n*/\n\tcout << 'Falcon has left the Base';\n}";
//		break;
//	default:
//		break;
//	}
//
//	return 0;
//	system("pause");
//}

//question: 4

//#include<iostream>
//using namespace std;
//class bank_account //defining class 
//{
//private: //private member
//	double balance;
//	double interestRate;
//	double interest;
//	int transactions;
//	static int count;
//public:
//	bank_account(double b, double iR) //constructor to initializing balance & interest rate through passing arguments
//	{
//		balance = b;
//		interestRate = iR;
//		//initializing remaining values by 0 because they storing garbage value
//		transactions = 0;
//		interest = 0;
//	}
//	void setInterestRate(double iR) //setting interest rate
//	{
//		interestRate = iR;
//	}
//	void makeDeposit(double d) //deposit member function
//	{
//		balance += d;
//		transactions++;
//	}
//	void withdraw(double w) //withdraw member function
//	{
//		if (w <= balance) //check for withdraw amount 
//		{
//			balance -= w;
//			transactions++;
//		}
//		else
//		{
//			cout << "Error: Amount is Greater than Balance\n";
//		}
//	}
//	void calcInterest() //calculating Interest
//	{
//		interest = balance * interestRate; //Interest Formula
//		balance += interest;
//	}
//	void incCount() //incrementing the value of count
//	{
//		count++;
//	}
//	double getCount()const //Returning the value of count
//	{
//		return count;
//	}
//	double getInterestRate()const //Returning the current interest rate
//	{
//		return interestRate; 
//	}
//	double getBalance()const //Returning the current balance
//	{
//		return balance;
//	}
//	double getInterest()const //Returning the interest earned for the current period
//	{
//		return interest;
//	}
//	double getTransactions()const //Returning the number of transactions for the current period
//	{
//		return transactions;
//	}
//
//
//};
//int bank_account::count = 0; //initial count with 0
//int main()
//{
//	double ba = 0, iR = 0.045, dep, wi;
//	bank_account acc(ba, iR); //passing arguments to intialize balance & interest rate 
//	char choice;
//	//M E N U
//	while (true)
//	{
//		cout << "\nMENU\n-------------------------------------------\n";
//		cout << "A) Display the account balance\nB) Display the number of transactions\n";
//		cout << "C) Display interest earned for this period\nD) Make a deposit\n";
//		cout << "E) Make a withdrawal\nF) Add interest for this period\nG) Exit the program\n\n";
//		cout << "Number of time program has taken the choice: " << acc.getCount() << endl;
//		acc.incCount();
//		cout << "Enter the choice: ";
//		cin >> choice;
//
//		switch (choice)
//		{
//		case 'a': case 'A':
//			cout << "The current balance is: $" << acc.getBalance() << endl; //Displaying the account balance
//			break;
//		case 'b': case 'B':
//			cout << "Number of transactions: " << acc.getTransactions() << endl; //Displaying the number of transactions
//			break;
//		case 'c': case 'C':
//			cout << "Interest Earned for this period is: $" << acc.getInterest() << endl; //Displaying interest earned for this period
//			break;
//		case 'd': case 'D':
//			cout << "Enter the amount of the deposit: ";
//			cin >> dep;
//			acc.makeDeposit(dep); //Making a deposit
//			break;
//		case 'e': case 'E':
//			cout << "Enter the amount of the withdrawal: ";
//			cin >> wi;
//			acc.withdraw(wi); //Making a withdrawal
//			break;
//		case 'f': case 'F':
//			acc.calcInterest(); //Adding interest for this period
//			cout << "Interest Added!\n";
//			break;
//		case 'g': case 'G':
//			return 0; //Exiting the program
//			break;
//		}//end switch body
//	}//end while
//
//	return 0;
//	system("pause");
//}//end main

//Abdul wahab Assignemnt

//#include<iostream>
//using namespace std;
//void area(int lenght, int width, int ch)
//{
//	int A = 0;
//	if (ch == 1)
//	{
//		A = lenght * 2;
//		cout << "Area of Square is: " << A << endl;
//	}
//	else
//	{
//		A = lenght * width;
//		cout << "Area of Rectangle is: " << A << endl;
//	}
//}
//void area(float height, int base, int base_1, int ch)
//{
//	int A = 0;
//	if (ch == 3)
//	{
//		A = base * height;
//		cout << "Area of Parallelogram is: " << A << endl;
//	}
//	else
//	{
//		A = (height / 2) * (base + base_1);
//		cout << "Area of Trapezoid is: " << A << endl;
//
//	}
//}
//void area(float radius, float radius_1, int ch)
//{
//	int A = 0;
//	if (ch == 5)
//	{
//		A = 3.14 * radius;
//		cout << "Area of a circle is: " << A << endl;
//	}
//	else
//	{
//		A = 3.14 * radius * radius_1;
//		cout << "Area of Ellipse is: " << A << endl;
//	}
//
//}
//
//
//int main()
//{
//	int choice = 0;
//	int l = 0, w = 0, p = 0, b = 0, b1 = 0;
//	float r=0, r1=0, h=0;
//	cout << "Press 1 Square\nPress 2 Rectangle\nPress 3 Parallelogram\nPress 4 Trapezoid\nPress 5 Circle\nPress 6 Ellipse\n";
//	cout << "Enter choice: ";
//	cin >> choice;
//	switch (choice)
//	{
//	case 1:
//		cout << "Enter Lenght: ";
//		cin >> l;
//		area(l, w, choice);
//		break;
//	case 2:
//		cout << "Enter Lenght: ";
//		cin >> l;
//		cout << "Enter Width: ";
//		cin >> w;
//		area(l, w, choice);
//		break;
//	case 3:
//		cout << "Enter Base: ";
//		cin >> b;
//		cout << "Enter Height: ";
//		cin >> h;
//		area(h, b, b1, choice);
//		break;
//	case 4:
//		cout << "Enter Base 1: ";
//		cin >> b;
//		cout << "Enter Base 2: ";
//		cin >> b1;
//		cout << "Enter Height: ";
//		cin >> h;
//		area(h, b, b1, choice);
//		break;
//	case 5:
//		cout << "Enter Radius of a circle: ";
//		cin >> r;
//		area(r, r1, choice);
//		break;
//	case 6:
//		cout << "Enter Radius 1 of a ELLIPSE: ";
//		cin >> r;
//		cout << "Enter Radius 2 of a ELLIPSE: ";
//		cin >> r1;
//		area(r, r1, choice);
//		break;
//	}
//	return 0;
//}

//Question: 5
//
//#include<iostream>
//using namespace std;
//class className
//{
//private:
//	int var1, var2;
//	int* ptr;
//public:
//	className() //default constructor
//	{
//		ptr = new int;
//	}
//	className(className& d) //deep copying 
//	{
//		var1 = d.var1;
//	    var2 = d.var2;
//		ptr = new int;
//		*ptr = *(d.ptr);
//	}
//	void getData(int a, int b, int p) //assigning data
//	{
//		var1 = a;
//		var2 = b;
//		*ptr = p;
//	} 
//	void displayData() //displaying data
//	{
//		cout << "Var 1: " << var1 << "\nVar 2: " << var2 << endl;
//	}
//};
//int main()
//{
//	className obj;
//	obj.getData(2, 3, 4);
//	className obj1 = obj; //deep coyping using copy constructor because without copy constructor it would be called shallow copy
//	cout << "If we remove copy constructor so it would become shallow copy\n";
//	cout << "Both data are same so it means deep copying is successfull\n";
//	cout << "Object 1:\n"; //both data are same so it mean deep copy is successfull
//	obj.displayData();
//	cout << "Object 2:\n";
//	obj1.displayData();
//	cout << "In given both statement in question are same\nIn first statement both objects are declare seperately and then object 1 is copy to object 2 using assignment operator (=)\nIn second statement both objects are declare seperately but while declaring object 2 object 1 is copy to object 2 using assignment operator (=) \n\n";
//
//	return 0;
//	system("pause");
//}

//Question: 7
//
//#include<iostream>
//#include<ctime>
//using namespace std;
//class g_2048
//{
//private:
//	int arr[4][4];
//public:
//	g_2048()
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			for (int j = 0; j < 4; j++)
//			{
//				if ((i == 0 && j == 2) || (i == 3 && j == 1))
//				{
//					arr[i][j] = 2;
//				}
//				else
//				{
//					arr[i][j] = 0;
//				}
//			}
//		}
//	}
//	void action(char opt)
//	{
//		switch (opt)
//		{
//		case 'W':case 'w':             //move upwards
//			for (int i = 0; i < 4; i++)
//			{
//				for (int j = 0; j < 4; j++)
//				{
//					if (arr[i][j] == 2)
//					{
//						if ((i == 0 && j == 0) || (i == 0 && j == 1) || (i == 0 && j == 2) || (i == 0 && j == 3))
//						{
//							arr[i][j] = 0;
//							arr[i + 3][j] = 2;
//						}
//						else
//						{
//							arr[i][j] = 0;
//							arr[i - 1][j] = 2;
//						}
//					}
//				}
//			}
//			break;
//		case 'S':case 's':    //move downwards
//			for (int i = 0; i < 4; i++)
//			{
//				for (int j = 0; j < 4; j++)
//				{
//					if (arr[i][j] == 2)
//					{
//						if ((i == 3 && j == 0) || (i == 3 && j == 1) || (i == 3 && j == 2) || (i == 3 && j == 3))
//						{
//							arr[i][j] = 0;
//							arr[i - 3][j] = 2;
//						}
//						else
//						{
//							arr[i][j] = 0;
//							arr[i + 1][j] = 2;
//						}
//					}
//				}
//			}
//			break;
//		case 'D':case 'd':   //move to the right
//			for (int i = 0; i < 4; i++)
//			{
//				for (int j = 0; j < 4; j++)
//				{
//					if (arr[i][j] == 2)
//					{
//						if ((i == 0 && j == 3) || (i == 1 && j == 3) || (i == 2 && j == 3) || (i == 3 && j == 3))
//						{
//							arr[i][j] = 0;
//							arr[i][j - 2] = 2;
//						}
//						else
//						{
//							arr[i][j] = 0;
//							arr[i][j + 1] = 2;
//						}
//					}
//				}
//			}
//			break;
//		case 'A':case 'a':  //move to the left
//			for (int i = 0; i < 4; i++)
//			{
//				for (int j = 0; j < 4; j++)
//				{
//					if (arr[i][j] == 2)
//					{
//						if ((i == 0 && j == 0) || (i == 1 && j == 0) || (i == 2 && j == 0) || (i == 3 && j == 0))
//						{
//							arr[i][j] = 0;
//							arr[i][j + 3] = 2;
//						}
//						else
//						{
//							arr[i][j] = 0;
//							arr[i][j - 1] = 2;
//						}
//					}
//				}
//			}
//			break;
//		}
//	}
//	void add(char opt)
//	{
//		switch (opt)
//		{
//		case 'W':case 'w':
//			for (int i = 0; i < 4; i++)
//			{
//				for (int j = 0; j < 4; j++)
//				{
//
//				}
//			}
//			break;
//		case 'S':case 's':
//			break;
//		case 'D':case 'd':
//			break;
//		case 'A':case 'a':
//			break;
//		default:
//			break;
//		}
//	}
//	void diplay() //display array
//	{
//		system("cls");
//		for (int i = 0; i < 4; i++)
//		{
//			for (int j = 0; j < 4; j++)
//			{
//				cout << arr[i][j] << " ";
//			}
//			cout << endl;
//		}
//	}
//
//};
//int main()
//{
//	g_2048 g1;
//	char ch;
//	g1.diplay();
//	cout << "\n-------------------------\nInstructions:\n";
//	cout << "Press W to move Upwards\nPress S to move Downwards\nPress A to move Left\nPress D to move Right\nPress E to End Game";
//	cout << "\n-------------------------\n\n";
//	while (true)
//	{
//		cout << endl << "choice: "; //Taking choice (W, S, D ,A, E)
//		cin >> ch; 
//		cout << endl;
//		if (ch == 'e' || ch == 'E') //check to end game
//		{
//			return 0;
//		}
//		g1.action(ch); //movement member function call
//		g1.add(ch);
//		g1.diplay(); //Display member
//	}
//	
//	return 0;
//	system("pause");
//}
#include<iostream>
using namespace std;
class ClassName {
private:
	int a;
	int b;
public:
	ClassName(int d, int e) {
		a = d;
		b = e;
	}
	ClassName(ClassName& f) {
		a = f.a;
		b = f.b;
	}
	//~ClassName();                     // destructor

	void output() {
		cout << a << endl << b;
	}

};
int main() 
{
	ClassName classObj1(45,76);
	ClassName classObj2 = classObj1; //deep copy
	classObj1.output();
	cout << "\nobject 2:\n";
	classObj2.output();


	cout << endl;
	system("pause");
	return 0;
}