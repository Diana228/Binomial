# include <iostream>
# include <string>
# include <stdlib.h>
using namespace std;


int main(){

    int n;
    cout << "Ingrese n: ";
    cin >> n;
    int n2=n+1;
    int kk;
    cout << "Ingrese k: ";
    cin >> kk;    


    
    int Mat_Reduc[(n2*n2)-((n2*(n2-1))/2)];    
    int *Punt_Reduc = &Mat_Reduc[0];

    cout << endl << endl;
    int k = 0;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            if(j==0 || j==i){
                Punt_Reduc[k] = 1;
                cout << "\t" <<  Punt_Reduc[k];
            }
            else{
                Punt_Reduc[k] = Punt_Reduc[k-i] + Punt_Reduc[k-i-1];
                //cout<<"Punt_Reduc[k] = es: "<<Punt_Reduc[k] <<endl;
                cout << "\t" <<  Punt_Reduc[k];

            }
                   if(i==n && j==kk){
                    kk=k;

                }
            k++;
        }
        cout << endl;
    }
 cout<<"la comb es: "<<Punt_Reduc[kk] <<endl;
    return 1;
}




