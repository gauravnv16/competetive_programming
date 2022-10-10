// I/p => "abc"
// o/p => "" , "a","b","ab","c","ac","bc","abc"


// below is the function to generate power set of the
// given string

void genPowSet(string s){
    int n = s.length();
    int lim = pow(2,n);

    for(int i = 0;i<lim;i++){
        int j = i;
        for(int k = 1;k<=n;k++){
            int d = j&1;
            if(d == 1) printf("%c",s[k-1]);
            j = j >> 1;
        }
        printf("\n");
    }
}