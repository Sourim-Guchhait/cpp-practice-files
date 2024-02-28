#include <iostream>
#include <string>
using namespace std;

class employee{
public:
  string  name;
  int salary; 

  void details(){
    cout<<"the name of the employee "<<name<<endl;
    cout<<"the salary of the employee "<<salary<<" dollars"<<endl;
  }




};


int sum(int a, int b);
int mul(int a,int b);
float div(float a,float b);
int sub(int a,int b);
{
  int c;
  c= a+b;
  return c;
}

int main()
{

    cout<<"hello world"<<endl;
    cout<<"entre the value of termimnal";
    return 0;*/
    cout<<"sourim guchhait"<<endl;*/
    int a,b,c;
    short sa=8;
    cout<<sa;*/
    int marksinmath=98;
    cout<<"the number i got in math subject="<<marksinmath;*/
    short a;
    int b;
    long c;
    long long d;
    float constant score=100;
    double  score2=84;
    long double score3=54;
    score =64;
    cout<<"my math subject  score is ="<<score;*/
    int a,b;

    cout<<"enter the value of first number "<<endl;
    cin>>a;

    cout<<"enter the value of the second number"<<endl;
    cin>>b;

    cout<<"a+b is = "<<a+b<<endl;
    cout<<"a-b is = "<<a-b<<endl;
    cout<<"a*b is = "<<a*b<<endl;
    cout<<"a/b is = "<<(float)a/b<<endl;
    }

    int age;
    cout<<"enter the age"<<endl;
    cin>>age;

    if(age>150)
    {
     cout<<"age is invalid";

    }
    else if(age>=18)
    {
     cout<<"you can vote";

    }
    else
    {
     coutN<<"you cannot vote";
    }
    return =0;
    }

    int(age);
    cout << "enter your age " << endl;
    cin >> age;

    switch (age)

    {
    case 12:
      cout << "you are 12 years old ";
      break;

      case 18:

      cout << "you are 18 years old ";
      break;

    default:
      cout << "you are neither 12 and nor 18 years old ";
      break;

    }

    int index = 0;
    while (index >34)
    {
      cout<<"we are at the index number"<<index<<endl;
      index=index + 1;

    }
    int index = 0;

    do{
      cout<<"we are at the index number"<<index<<endl;
      index=index + 1;

    }
    while(index>0);
     return 0;

    int i;
    for (i = 0; i < 45; i++)
    {
      cout << "i " << i << endl;
    }
    int add(int a,int b)

  int a,b;
  cout << "enter the number = ";
  cin >> a;
  cout << "enter the number = ";
  cin >> b;
  cout<<"the sum is ="<<sum(a,b)<<endl;
  cout<<"the mul is ="<<mul(a,b)<<endl;
  cout<<"the sub is ="<<sub(a,b)<<endl;
  cout<<"the div is ="<<div((float)a,(float)b)<<endl;
  int arr[]={2,8,4,3,9};
  arrindex 1 2 3 4 5
  cout<<arr[4];
  int marks[6];
  for (int i = 0; i < 6; i++)
  {
    cout<<"enter the marks of the"<<i<<"th student is "<<endl;
    cin>>marks[i];

  }
  for (int i = 0; i < 6; i++)
  {
    cout<<"marks of "<<i<<"th student"<<marks[i]<<endl;

  }
  int arr2d[2][3] = {
      {1, 2, 3},
      {4, 5, 6}};
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << "the value at " <<"["<<i<<" , "<<j<<"]"<< " is " << arr2d[i][j] << endl;
    }
  }
  const int a=283;
  float b=456;

  cout<<(float) a/54<<endl;
  cout<<(int) b/43<<endl;

  cout<<"a= "<<a<<endl;
  string name ="sourim";

  cout<<"the name is "<<name<<endl;
  cout<<"the length is "<<name.length()<<endl;
  cout<<"the substr is "<<name.substr(0,3)<<endl;
  cout<<"the substr is "<<name.substr(2,3)<<endl;


  return 0;
}

int sum(int a, int b)
{
  int c;
  c = a + b;
  return c;

}
int mul(int a, int b)
{
  int c;
  c = a * b;
  return c;

}

int sub(int a, int b)
{
  int c;
  c = a - b;
  return c ;
}

float div(float a, float b)
{
  float c;
  c = a / b;
  return c ;
}
int a=34;
int * ptra;
ptra = &a;
cout<<"the value of a is "<<a<<endl;
cout<<"the value of a is "<<*ptra<<endl;
cout<<"the address of a is "<<&a<<endl;
cout<<"the address of a is "<<ptra<<endl;


employee sou;
sou.name="sourim";
sou.salary=100;
// cout<<"the name of the employee "<<sou.name<<endl;
// cout<<"the salary of the employee "<<sou.salary <<" dollars"<<endl;


  sou.details();


  return 0;
}








