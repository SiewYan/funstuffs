#include <iostream>
#include <string>

using namespace std;
int main () {

   std::string thestring="HLT_Ele15_CaloIdVT_CaloIsoT_TrkIdT_TrkIsoT_LooseIsoPFTau20_v8";

   cout << "the string is : ";
   cout << thestring << endl;

   thestring.erase(thestring.length()-3, 3);

   cout << "the string is : ";
   cout <<  thestring << endl;

   return 0;
}
