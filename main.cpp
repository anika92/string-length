#include <iostream>
#include<string.h>
class anika{
public:
char *p;
void print(void){
cout<<"\t"<<p<<"\tlenth is"<<strlen(p)<<'\n';
}
anika(){
p=new char[50];
}
};
int main()
{
    anika an1,an2;
    strcpy(an1.p,"nstu nstu");
    strcpy(an2.p,"noakhali science");
    cout<<"before assigning";
    an1.print();
    an2.print();
    an2=an1;
    strcpy(an1.p,"my name is");
    strcpy(an2.p,"her name is" );
    cout<<"after assighning";
    an1.print();
    an2.print();

}


