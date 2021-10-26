void decentNumber(int n) {
    int numofThree = 0;
    while(n >= 3){
        if(n%3 == 0)
            break;
        
        n -= 5;
        numofThree += 5;
    }
    
    if(n%3 != 0)
        cout << -1 << endl;
    else {
        string ans = "";
        while(n--)
            ans += '5;
       
        while(numofThree--)
            ans += '3;
    }
}

