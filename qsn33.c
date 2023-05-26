#include<stdio.h>
//int y=0;
void func(){
    int x=0;
    static int y=0;
    x++;
    y++;
    printf("%d - %d\n",x,y);

}
// void ram()
// {
//     printf("%d",y);
// }
void main()
{
    func();
    // printf("%d\n",y); // you  cant acess when its static declaration
    func();
    //printf("%d\n",y); // you can acess when its globly acessed
    func();
    //ram();
}