/* #include <iostream>

using namespace std;

class test
{
	int i;
	
	public:
		
	void ata(int n)
	{
		i=n;
	}
	
	int goster()
	{
		return i;
	}
	
}nesne1,nesne2;

   test kitap()
   {
   	  nesne1.ata(15);
   	  
   	  return nesne1;
   }
   
   int main ()
   {
        nesne2=kitap();
		
		cout<<nesne2.goster()<<endl;     	
   	
   	return 0;
   }   */
   
                               //hatali koddur 
							    
#include<iostream>

using namespace std;

class deneme
{
	char s[20];
	
	public:
		
	void ata(char*str)
	{
		strcpy(s,str);
	}
	
	int goster()
	{
		cout<<s;
	}
}ob;

deneme fonk()
{
	char s[20];
	
	deneme str;
	
	cout<<"bir karakter giriniz:";
	
	cin>>s;
	
	str.ata(s);
	
	return str;
	
	
}

int main()
{
	ob=fonk();
	
	ob.goster();
	
	return 0;
}












