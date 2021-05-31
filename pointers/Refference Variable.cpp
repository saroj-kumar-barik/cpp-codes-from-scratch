	#include<iostream>
	using namespace std;
	#include<conio.h>

	/*int main()   //  Reference Variale Example....
	{
	     int   a = 10;    //       A B
	     int  &b = a;      //      10
//	     clrscr();        //   1000 1001


	     cout<<"\n\t A = "<<a<<" & B = "<<b;

	     a = 20;
	     cout<<"\n\t A = "<<a<<" & B = "<<b;

	     b = 30;
	     cout<<"\n\t A = "<<a<<" & B = "<<b;

	 getch();
	}*/
	/*int main()   //  Reference Variale Example....
	{
	     int   a = 10,b = 20,c = 30;
	     int  &d = a;     //    AD     B     C
//	     clrscr();        //    10     20    30
			      		//   1000   2000  3000

	     cout<<"\n\n\t A = "<<a<<" B = "<<b<<" C = "<<c<<" & D = "<<d;

	     d = b;
	     cout<<"\n\n\t A = "<<a<<" B = "<<b<<" C = "<<c<<" & D = "<<d;

	     d = c;
	     cout<<"\n\n\t A = "<<a<<" B = "<<b<<" C = "<<c<<" & D = "<<d;

	 getch();
	}   */   
	/*int  main()   //  Reference Variale Example....
	{
            //         0   1   2   3   4
	     int   a[5] = {11,22,33,44,55};
            //       1000   2   4   6   8
	     int  &b = a[2];
	     int   i;
//	     clrscr();

	     cout<<"\n\n\t The elements of Array A are :-\n";
	     for(i=0;  i<5;  i++)
		 cout<<"\t "<<a[i];

	     b = 77;

	     cout<<"\n\n\t The elements of Array A are :-\n";
	     for(i=0;  i<5;  i++)
		 cout<<"\t "<<a[i];

	 getch();
	} */     
	int main()   //  Reference Variale Example....
	{
	     int   a = 5;       //      A        B C
	     int*  b = &a;     //       5       1000
	     int  &c = *b;      //    1000     2000
	      
	     cout<<&a<<endl;    // 1000
	     cout<<&(*b)<<endl; // 1000 - VALUE OF *B IS 5 THEN ADDRESS OF *B I.E &(*B) = ADRESS OF 5 = 1000
	     cout<<b<<endl;     // 1000
	     
	     cout<<&b<<endl;    // 2000
	     
	     cout<<&c<<endl;    // 1000 - THE VALUE OF C = *B I.E 5 THEN ADRESS OF 5 IS 1000
//	     clrscr();

	     cout<<" A = "<<a<<" *B = "<<*b<<" & C = "<<c; // 5 5 5 

	     *b = 55;
	     cout<<" A = "<<a<<" *B = "<<*b<<" & C = "<<c; // 55 55 55 

	     c = 555;
	     cout<<" A = "<<a<<" *B = "<<*b<<" & C = "<<c; // 555 555 555 

	 getch();
	}      
