vector<int> gradingStudents(vector<int> grades) {
    for(int& i:grades){
        int nxt = i;
        while(nxt%5) nxt++;
        i = nxt - i < 3 and i >= 38? nxt : i;
    }
    
    return grades;
}
