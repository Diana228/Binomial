# include <iostream>
# include <string>
# include <stdlib.h>
using namespace std;



class MTriangular
{
    //Atributos
private: 
    int n;
    int n2;
    int c;
    int k;
    int size;
    int *Mat_Reduc;
       
    //Métodos
public: 
    ~MTriangular() {delete[] Mat_Reduc;}
    MTriangular(int x,int y){
        int k=y;
        int n=x;
        int n2=n+1;
        size=(n2*n2)-((n2*(n2-1))/2);
        Mat_Reduc = new int[size]; 
    }
    void Combi(int x,int y);   
};

void MTriangular::Combi(int n, int k){
    int c = 0;
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=i; j++){
            if(j==0 || j==i){
                Mat_Reduc[c] = 1;
                cout << "\t" <<  Mat_Reduc[c];
            }
            else{
                Mat_Reduc[c] = Mat_Reduc[c-i] + Mat_Reduc[c-i-1];
                //cout<<"Mat_Reduc[k] = es: "<<Mat_Reduc[k] <<endl;
                cout << "\t" <<  Mat_Reduc[c];
            }
                if(i==n && j==k){
                    k=c;
                }
            c++;
        }
        cout << endl;
    }
    cout<<"la comb es: "<<Mat_Reduc[k] <<endl;
}
    

int main(){
    int n;
    cout << "Ingrese n: ";
    cin >> n;
    int k;
    cout << "Ingrese k: ";
    cin >> k; 
    MTriangular E(n,k);
    E.Combi(n,k);
    
}

