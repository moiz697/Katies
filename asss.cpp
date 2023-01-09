include<iostream>
using namespace std;
 void compare_strings(const string &string1,const string &string2)
 {
    cout<<"string 1: "<<string1<<endl;
    cout<<"string 2: "<<string2<<endl;

   for(inti=0;i<string1.size();i++)
   {
    if(string1[i]==string2[i]) 
    {
        cout<<".";
    }
    else
    {
        cout<<"*";
    }
 }
 cout<<endl<<endl;
 }
 int main()
 {    int num_test;
     cout<<"How many test case: ";
    cin>>num_test;
    for(int i=0;i<num_test;i++)
    {   string str1,str2;
        cin>>str1>>str2;
        compare_string(str1,str2);
    }
    return 0;
 }