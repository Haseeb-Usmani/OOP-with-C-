//#include<iostream>
//
//using namespace std;
//
//class Polynomial
//{
//protected:
//	int coefficient;
//	int exponent;
//public:
//	Polynomial()
//	{
//		coefficient = 0;
//		exponent = 0;
//	}
//	Polynomial(int co, int ex)
//	{
//		coefficient = co;
//		exponent = ex;
//	}
//	void setco(int co)
//	{
//		coefficient = co;
//	}
//	int getco()
//	{
//		return coefficient;
//	}
//	void setex(int ex)
//	{
//		exponent = ex;
//	}
//	int getex()
//	{
//		return exponent;
//	}
//	Polynomial operator =(Polynomial p)
//	{
//		Polynomial temp;
//		temp.coefficient = p.coefficient;
//		temp.exponent = p.exponent;
//		cout << "After = : " << temp.coefficient << "^" << temp.exponent << endl;
//		return p;
//	}
//	Polynomial operator *(Polynomial p)
//	{
//		Polynomial temp;
//		temp.coefficient = coefficient * p.coefficient;
//		temp.exponent = exponent + p.exponent;
//		cout << "After * : " << temp.coefficient << "^" << temp.exponent << endl;
//		return temp;
//	}
//	Polynomial operator +=(Polynomial p)
//	{
//		if (exponent == p.exponent)
//		{
//			coefficient = coefficient + p.coefficient;
//			exponent = p.exponent;
//			cout << "After += : " << coefficient << "^" << exponent << endl;
//		}
//		else
//		{
//			cout << "Both Exponents are not equal\n";
//		}
//		return p;
//	}
//	Polynomial operator -=(Polynomial p)
//	{
//		if (exponent == p.exponent)
//		{
//			coefficient = coefficient - p.coefficient;
//			exponent = p.exponent;
//			cout << "After -= : " << coefficient << "^" << exponent << endl;
//		}
//		else
//		{
//			cout << "Both Exponents are not equal\n";
//		}
//		return p;
//	}
//	Polynomial operator *=(Polynomial p)
//	{
//		coefficient = coefficient * p.coefficient;
//		exponent = exponent + p.exponent;
//		cout << "After *= : " << coefficient << "^" << exponent << endl;
//		return p;
//	}
//};
//int main()
//{
//	int ex = 0, co = 0;
//
//	cout << "Enter coefficient of a polynomial: ";
//	cin >> co;
//	cout << "Enter exponent of a polynomial: ";
//	cin >> ex;
//
//	Polynomial p1(co, ex);
//
//	cout << "Enter coefficient of a polynomial: ";
//	cin >> co;
//	cout << "Enter exponent of a polynomial: ";
//	cin >> ex;
//
//	Polynomial p2(co, ex);
//
//	p1 = p2;
//	p1 * p2;
//	p1 += p2;
//	p1 -= p2;
//	p1 *= p2;
//
//	return 0;
//	system("pause");
//}

//#include<iostream>
//using namespace std;
//
//class ComplexNumber
//{
//protected:
//	int real;
//	int imaginary;
//public:
//	ComplexNumber() //default constructor
//	{
//		real = 0;
//		imaginary = 0;
//	}
//	ComplexNumber(int R, int I) //parameterized constructor
//	{
//		real = R;
//		imaginary = I;
//	}
//	ComplexNumber operator +(ComplexNumber c) // + overload 
//	{
//		ComplexNumber temp;
//		temp.real = real + c.real;
//		temp.imaginary = imaginary + c.imaginary;
//		return temp;
//	}
//	ComplexNumber operator -(ComplexNumber c)  // - overload 
//	{
//		ComplexNumber temp;
//		temp.real = real - c.real;
//		temp.imaginary = imaginary - c.imaginary;
//		return temp;
//
//	}
//	ComplexNumber operator *(ComplexNumber c)  // * overload 
//	{
//		ComplexNumber temp;
//		temp.real = real * c.real;
//		temp.imaginary = imaginary * c.imaginary;
//		return temp;
//	}
//	ComplexNumber operator /(ComplexNumber c)  // (/) overload 
//	{
//		ComplexNumber temp;
//		if (c.real != 0 && c.imaginary != 0) //check for math error
//		{
//			temp.real = real / c.real;
//			temp.imaginary = imaginary / c.imaginary;
//		}
//		else
//		{
//			cout << "Real must be greater than zero otherwise it will generates math error\n";
//		}
//		return temp;
//	}
//	ComplexNumber operator ==(ComplexNumber c)  // == overload 
//	{
//		if (real == c.real && imaginary == c.imaginary) //check for equal values
//		{
//			cout << "Both Complex Number are equal\n";
//		}
//		return c;
//	}
//	ComplexNumber operator !=(ComplexNumber c)  // != overload 
//	{
//		if (real != c.real && imaginary != c.imaginary) //check for not equal values
//		{
//			cout << "Both Complex Number are not equal\n";
//		}
//		return c;
//	}
//	void display() //display function
//	{
//		cout << real << "+" << imaginary << "i\n";
//	}
//};
//
//int main()
//{
//	ComplexNumber c1(10, 6), c2(5, 2), c3, c4, c5, c6;
//
//	cout << "1st Complex Number: ";
//	c1.display();
//	cout << "2nd Complex Number: ";
//	c2.display();
//
//	c3 = c1 + c2; //Add
//
//	cout << "After Addition: ";
//	c3.display();
//
//	c4 = c1 - c2; //subtract
//
//	cout << "After Subraction: ";
//	c4.display();
//
//	c5 = c1 * c2; //multiply
//
//	cout << "After Multiplication: ";
//	c5.display();
//
//	c1 == c2; //equal to
//	c1 != c2; //not equal to
//
//	return 0;
//	system("pause");
//}


//#include<iostream>
//using namespace std;
//
//class Calendar
//{
//	int days;
//	int cal;
//public:
//	Calendar()
//	{
//		days = 0;
//		cal = 0;
//	}
//	Calendar(int d, int c)
//	{
//		days = d;
//		cal = c;
//	}
//	Calendar operator +=(Calendar C)
//	{
//		cal = days + C.cal;
//		return C;
//	}
//	Calendar operator -=(Calendar C)
//	{
//		cal = C.cal - days;
//		return C;
//	}
//	void print()
//	{
//		cout << "Calender: " << cal << endl;
//	}
//};
//
//int main()
//{
//	int d = 0, c = 0;
//
//	cout << "Enter Calender: ";
//	cin >> c;
//	cout << "Enter Days: ";
//	cin >> d;
//
//	Calendar c1(d, c);
//
//	c1 += c1;
//	cout << "\n---After Increment---\n";
//	c1.print();
//
//	cout << "\n---After Decrement---\n";
//	c1 -= c1;
//	c1.print();
//
//	return 0;
//	system("pause");
//}


//#include<iostream>
//using namespace std;
//
//class Arrays
//{
//private:
//	int* ptr;
//	int size;
//public:
//	Arrays() {} //default constructor
//
//	Arrays(int S) //parameterized constructor
//	{
//		ptr = new int[S]; //dynamically allocating size of array 
//		size = S; 
//	}
//
//	//prototype
//	friend istream& operator >>(istream& i, Arrays& e);     //taking input using operator overloading (>>)
//	friend ostream& operator <<(ostream& o, Arrays& e);     //Displaying data using operator overloading (<<)
//	friend void Range(Arrays);
//};
//
//void Range(Arrays a1)
//{
//	int min = 0, max = 0, range = 0;
//
//	min = a1.ptr[0];
//	for (int i = 1; i < a1.size; i++) //finding Minimum element
//	{
//		if (min > a1.ptr[i])
//		{
//			min = a1.ptr[i];
//		}
//	}
//	
//	max = a1.ptr[0];
//	for (int i = 1; i < a1.size; i++) //finding maximum element
//	{
//		if (max < a1.ptr[i])
//		{
//			max = a1.ptr[i];
//		}
//	}
//
//	range = max - min;
//	cout << "Range of Given Array is: " << range << endl;
//}
//
//
//ostream& operator <<(ostream& o, Arrays& e) //Displaying data using operator overloading (<<)
//{
//	for (int i = 0; i < e.size; i++)
//	{
//		o << "Array Element " << i + 1 << ": " << e.ptr[i] << endl;
//	}
//
//	return o;
//}
//
//istream& operator >>(istream& i, Arrays& e) //taking input using operator overloading (>>)
//{
//	for (int i = 0; i < e.size; i++)
//	{
//		cin >> e.ptr[i];
//	}
//
//	return i;
//}
//
//int main()
//{
//	int size = 0;
//
//	cout << "Enter size of array: ";
//	cin >> size;
//
//	Arrays a1(size); //passing size of array
//
//	cin >> a1; //taking input
//	cout << a1; //displaying output
//
//	Range(a1);
//
//	return 0;
//	system("pause");
//}