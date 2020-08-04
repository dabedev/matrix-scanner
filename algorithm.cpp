#include "iostream"
#include "stdio.h"
#include "string"

#define Max 3

using namespace std;

int main()
{
    int arr[Max][Max];
    int arr2[Max][Max];
    char superior;
    char inferior;
    int insertnum;
    for(int i = 0; i < Max; i++)
    {
            for(int x = 0; x < Max; x++)
    {
        cout<<"Matriz["<<i<<"]"<<"["<<x<<"] = ";
        cin>>insertnum;
        arr[i][x] = insertnum;
    }
    }
    cout<<"Resultado de la matriz:"<<endl;
    for(int i = 0; i < Max; i++)
    {
            for(int x = 0; x < Max; x++)
    {
        if (x == Max - 1) {
            cout<<arr[i][x]<<endl;
        } else {
        cout<<arr[i][x]<<" ";
        }
    }
    }
    cout<<"Elementos en la diagonal:"<<endl;
        for(int i = 0; i < Max; i++)
    {
        cout<<arr[i][i]<<" ";
        if (i == Max - 1) cout<<"\n";
    }
    printf("\n");
   cout<<"Elementos en la parte superior de la diagonal:"<<endl;
    for(int i = 0; i < Max; i++)
    {
            for(int x = 0; x < Max; x++)
    {
        if (x <= i) continue;
        cout<<arr[i][x];
        superior=superior + (char)arr[i][x];
    }
    }
    printf("\n");
   cout<<"Elementos en la parte inferior de la diagonal:"<<endl;
        for(int i = 0; i < Max; i++)
    {
            for(int x = 0; x < Max; x++)
    {
        if (x >= i) continue;
        cout<<arr[i][x];
        inferior=inferior + (char)arr[i][x];
    }
    }

    return 0;
}
