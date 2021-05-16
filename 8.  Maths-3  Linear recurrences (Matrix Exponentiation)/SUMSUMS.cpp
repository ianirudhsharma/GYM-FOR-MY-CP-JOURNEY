#include <iostream>
#include <cassert>

using namespace std;

const int MAX = 50001;
const int MODULO = 98765431;

struct matrix{
    int rowSize ;
    int columnSize ;
    int** data;
    matrix (int N) {
        rowSize=N;
        columnSize=N;
        data=new int*[N+1];
        for(int i=1;i<=N;i++){
            data[i]=new int[N+1];
        }
        for (int i = 1; i <= rowSize; i ++) {
            for (int j = 1; j <= columnSize; j ++) {
                data[i][j] = 1;
            }
        }
    }
    matrix operator * (const matrix other) const{
        assert(columnSize == other.rowSize);
        matrix result = matrix(rowSize);
        for(int i=1;i<=rowSize;i++){
            for(int j=1;j<=rowSize;j++){
                result.data[i][j]=0;
            }
        }
        for (int i = 1; i <= rowSize; i ++) {
            for (int j = 1; j <= other.columnSize; j ++) {
                for (int k = 1; k <= columnSize; k ++) {
                    result.data[i][j] = (result.data[i][j] + 1LL * data[i][k] * other.data[k][j] % MODULO) % MODULO;
                }
            }
        }
        result.rowSize = rowSize;
        result.columnSize = other.columnSize;
        return result;
    }
    matrix power(int e) {
        if (e == 1) {
            return *this;
        }
        if (e & 1) {
            return (*this) * power(e - 1);
        }
        matrix half = power(e >> 1);
        return half * half;
    }
};




int main() {
    int N;
    int T;
    cin >> N;
    cin>> T;
    int b[N+1];
    
        
    for (int i = 1; i <= N; i ++) {
        cin >> b[i];
    }
    
       
    
    if (T == 0) {
        for(int i=1;i<=N;i++){
        cout << b[i] << endl;
        }
        return 0;
        
    }
    
    
        
    matrix t(N), I(N);
    t.rowSize = N;
    t.columnSize = N;
    for (int i = 1; i <= N; i ++) {
        t.data[i][i] = 0;
    }
    
    
        
    I.rowSize = N;
    I.columnSize = 1;
    for (int i = 1; i <= N; i ++) {
        I.data[i][1] = b[i];
    }
    
    
    matrix result = t.power(T) * I;
    
    for(int i=1;i<=N;i++){
        
        cout<<result.data[i][1];
        
        cout<<endl;
        
    }
    
    
        
    
    
    return 0;
}