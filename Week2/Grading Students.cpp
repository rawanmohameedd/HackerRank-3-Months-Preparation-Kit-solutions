#include <bits/stdc++.h>

using namespace std;


void gradingStudents(int x,int grades[]) {
    int result[x]={0};
    for(int i=0;i<x;i++ ){
        int ones=grades[i]%10;
        int round[4]={3,4,8,9};
         if(grades[i]<38||ones==0||ones==5){
            result[i]=grades[i];
         }

         else if(5-ones<=2&&5-ones>0){
            result[i]=grades[i]+(5-ones);
         }
         else if(10-ones<3&&10-ones>0){
            result[i]=grades[i]+(10-ones);

         }
        else{
            result[i]=grades[i];
        }
        cout<<result[i]<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int grades[n];
    for(int i=0;i<n;i++ ){
        cin>>grades[i];
    }
    gradingStudents(n,grades);
}
