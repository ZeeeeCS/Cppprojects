#include <iostream>

using namespace std;

int main()
{
    string choices[5]={"","1)Add new employee","2)Print all employees","3)Delete by age","4)update salary by name"};
     int choice;

  int Age[150],salary[100000];
  string gender[100],name[100];
  int frequ[1000]={0};
  int from_age,to_age;
string Name;
   for(int i=0;i>=0;i++){
cout<<"1)Add new employee"<<"\n"<<"2)Print all employees"<<"\n"<<"3)Delete by age"<<"\n"<<"4)update salary by name"<<endl;
 cin>>choice;
 if(!(choice>=1&&choice<=4)){
     cout<<"Not vaild, Try again";
       continue;
 }


  if(choice==1){
    cout<<"Enter name:"<<endl;
    cin>>name[i];
    cout<<"Enter Age"<<endl;
    cin>>Age[i];

    cout<<"Enter salary"<<endl;
    cin>>salary[i];

    cout<<"gender(M/F):"<<endl;
    cin>>gender[i];

  }
   else if(choice==2){
        for(int j=0;j<i-1;j++){
            if(Age[j]!=-1){

cout<<"Name:"<<name[j]<<"\n"<<"Age:"<<Age[j]<<"\n"<<"salary:"<<salary[j]<<"\n"<<"Gender:."<<gender[j]<<endl;
cout << "****************************\n";}}
  }

  else if(choice==3){
        cout<<"Enter Age";
cin>>from_age;
cout<<"to";
cin>>to_age;
for(int j=0;j<i;j++){
if(from_age<=Age[j]&&Age[j]<=to_age){

Age[j]=-1;
}}
  }

  else if(choice==4){
         cout<<"Enter name:";
      cin>>Name;
      for(int j=0;j<i;j++){
  if(Name==name[j]){
    cout<<"enter salary:";
        cin>>salary[j];}}

  }


  }







    return 0;
}
