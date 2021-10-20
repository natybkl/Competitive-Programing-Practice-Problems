int stepPerms(int n) {
    if(n < 2)
        return 1;
    
    if(n == 2)
        return 2;
        
    int ppp = 1,pp = 1,p = 2;
    int ans = 0;
    while(n-- > 2){
        ans = p + pp + ppp;
        ppp = pp;
        pp = p;
        p = ans;
    }
    
    return ans;
    
}
