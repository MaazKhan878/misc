int recursive(int n){
    if(n == 1){
        return 1;
    }
    return (3 * n) * recursive(n - 1); 
    

}