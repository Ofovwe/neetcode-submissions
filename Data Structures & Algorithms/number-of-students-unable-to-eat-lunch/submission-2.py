class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        last_index= len(sandwiches)-1
        i = 0

        while students[0:last_index+1]!=sandwiches[0:last_index+1]:
            if students[0]==sandwiches[0]:
                while  i < last_index:
                    students[i]=students[i+1]
                    sandwiches[i]=sandwiches[i+1]
                    i+=1
                last_index-=1
                i=0
            else:
                while i < last_index:
                    temp = students[i]
                    students[i]=students[i+1]
                    students[i+1]= temp
                    i+=1
                i=0

            
            if set(students[:last_index+1]) == {0} and sandwiches[0] == 1:
                break
            elif set(students[:last_index+1]) == {1} and sandwiches[0] == 0:

                break
        
        if students[0:last_index+1]==sandwiches[0:last_index+1]:
            return 0
        
        else:
            return last_index + 1

            
            

        