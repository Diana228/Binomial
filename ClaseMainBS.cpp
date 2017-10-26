# include <iostream>
# include <string>
# include <stdlib.h>
using namespace std;


class Binomial {
    //Atributos
private: 
    int n;
    int n2;
    int kk;
    int k;
    int Mat_Reduc[(n2*n2)-((n2*(n2-1))/2)];    
    int *Punt_Reduc = &Mat_Reduc[0];
    
    //Métodos
public: 
    Binomial (int* Mat int int );
    void Combi(int int );
    ~Binomial ();
    
};

Binomial:: Binomial(int* p int n int k1){
n=n;
n2=n+1;
kk=k1;
}

Binomial:: ~Binomial() {
   delete[] dato;        // Libera la memoria reservada para dato
}

void Binimial:: combi(int* p int n int k){
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


void main()
{    
    cout << "Ingrese n: ";
    cin >> n;
    int n2=n+1;
    int kk;
    cout << "Ingrese k: ";
    cin >> kk; 
    Binomial E1(*p,12, 3);
	E1.Combi();
	E1.~Binomial();
    
}



/*
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
/*
