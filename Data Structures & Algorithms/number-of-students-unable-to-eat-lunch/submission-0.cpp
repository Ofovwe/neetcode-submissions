class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) 
    {
        std::queue<int> student;
        for (int i ; i < students.size();i++)
        {
            student.push(students[i]);
        }
        int skips = 0; 
        int i = 0;
        while(!student.empty()&& skips<student.size())
        {
            if(student.front()==sandwiches[i])
            {
                student.pop();
                i++;
                skips = 0;
            }
            else
            {
                int p = student.front();
                student.pop();
                student.push(p);
                skips++;
            }
        }
        return skips;
    }
};