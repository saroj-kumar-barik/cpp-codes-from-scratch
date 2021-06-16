#include<iostream>
#include<string.h>

using namespace std;

class ABC{
    char* name;
    int len;

    public:
        ABC(){
            *name = '\0';
            len = 0;
        }
        ABC(char*);
        void join(ABC &, ABC &);
        void display(){
            cout<<" Name = "<<*name<<" length = "<<len<<endl;
        }
};

ABC::ABC(char* s){
    len = strlen(s);
    cout<<len<<endl;
    name  = new char[len+1];
    strcpy(name,s);
}

void ABC::join(ABC &X, ABC &Y){
    cout<<"join method()"<<endl;
    len = X.len+Y.len;
    name = new char[len+1];
    strcpy(name,X.name);
    strcat(name,Y.name);
}

int main(){
    char *str = "bablu";

    ABC X(str),Y("Saroj"),Z("Kumar");

    ABC P,Q;

    X.display();
    Y.display();
    Z.display();

    P.join(X,Y);
    Q.join(P,Z);

    X.display();
    Y.display();
    Z.display();
    P.display();
    Q.display();


    
}

	/*#include<iostream>
	// #include<conio.h>
	#include<string.h>
    
using namespace std;

//      Dynamic Constructor

	class  ABC
	{
	     char *name;
	     int  len;

	   public:
	     ABC();
	     ABC( char *);

	     void join( ABC &,ABC &);
	     void display();
	};

	ABC::ABC()
	{
	    *name = '\0';
	    len = 0;
	}                   //    *s
			    //
	ABC::ABC( char  *s) //   80 81
	{
	    len = strlen( s );

	    name = new char[ len + 1];

	    strcpy( name,   s);
	}

	void ABC::join(ABC  &M,ABC  &N)
	{
	      len = M.len + N.len;

	      name = new char[len + 1];

	      strcpy( name, M.name);
	      strcat( name, N.name);
	}

	void ABC::display()
	{
	   cout<<"\n\t Name = "<<name<<" & Length = "<<len;
	}
		    //      X         Y         Z         P       Q
		    //   n     l   n     l   n     l   n    l   n    l
		    //
	int main() //  100   102 200   202 300   302 400  402 500  502
	{
	     char *str = "Pradeep";
//		  1000
//                50 51

//		     1000      2000         3000
	     ABC  X( str ),Y(" Kumar"),Z(" Sahoo"),P,Q;
	    //  clrscr();

//     Pradeep0       |Kumar0         |Sahoo0
//  10001234567    2000123456      3000123456789

//      Pradeep0     |Kumar0     |Sahoo0
//   40001234567  5000123456  6000123456

//     Pradeep|Kumar0
//  70001234567890123

//              1
//    Pradeep|Kumar|Sahoo0
// 80001234567890123456789

	     P.join( X, Y);

	     Q.join( P, Z);

	     cout<<"\n\n\t Data of Object X :-";
	     X.display();

	     cout<<"\n\n\t Data of Object Y :-";
	     Y.display();

	     cout<<"\n\n\t Data of Object Z :-";
	     Z.display();

	     cout<<"\n\n\t Data of Object P :-";
	     P.display();

	     cout<<"\n\n\t Data of Object Q :-";
	     Q.display();

	//  getch();
	}*/