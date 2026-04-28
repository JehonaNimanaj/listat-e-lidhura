#include<iostream>
 using namespace std;
#include<list> 


  class MenaxheriDetyrave {
  public:
	  list<string> l1; 

		void shtoDetyre(const string& detyra)
		{ l1.push_back(detyra); }
		void hiqDetyre(const string& fjaleKyce) 
		{ for (auto it = l1.begin();it != l1.end();it++) 
		{ if (*it == fjaleKyce) 
		{ l1.erase(it); }
		} }
		void shfaqDetyrat()
		{ for (auto it = l1.begin();it != l1.end();it++) 
		{ cout << *it; }
		} };    


  int main() 
  { int n;
  MenaxheriDetyrave m;
  cout << "jep nr e detyrave";
  cin >> n;
  string detyra;
  for (int i = 0;i < n;i++)
  { m.shtoDetyre(detyra); } 
  string fjaleKyce; 
  cout << "shkruani fjalen per heqje";

   cin >> fjaleKyce;
   m.hiqDetyre(fjaleKyce);
  m.shfaqDetyrat();

   return 0; }