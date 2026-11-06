class Solution:
    def calPoints(self, operations: List[str]) -> int:
        record = []
        stack_size = 0
        for i in range(len(operations)):
            if operations[i]=="+":
                record.append(record[stack_size-1]+record[stack_size-2])
                stack_size+=1
            elif operations[i]=="D":
                record.append(record[stack_size-1]*2)
                stack_size+=1
            elif operations[i]=="C":
                stack_size-=1
                record.pop()
            else:
                record.append(int(operations[i]))
                stack_size+=1

        i = 0
        sum1 = 0
        while i<stack_size:
            sum1+=record[i]
            i+=1
        return sum1



        