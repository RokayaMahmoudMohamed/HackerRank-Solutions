vector<int> gradingStudents(vector<int> grades) {
    int n=grades.size();
    for (int i = 0; i < n; i++)
    {
        cin >> grades[i];
        if (grades[i] >= 38 && grades[i] % 5 !=0)
        {
            int val = ceil(grades[i] / 5.0) * 5;
            if (val - grades[i] < 3)grades[i] = val;
        }
       
    }
    return grades;
}
