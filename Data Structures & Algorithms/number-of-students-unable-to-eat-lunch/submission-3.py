from collections import deque
class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        students = deque(students)
        sandwiches = deque(sandwiches)
        while students:
            if students[0]==sandwiches[0]:
                sandwiches.popleft()
                students.popleft()
            else:
                temp = students[0]
                students.popleft()
                students.append(temp)
            if set(students)=={0} and sandwiches[0]==1:
                break
            elif set(students)=={1} and sandwiches[0]==0:
                break
        return len(students)