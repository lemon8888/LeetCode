class Solution:
    def countStudents(self, students: List[int], sandwiches: List[int]) -> int:
        for i in sandwiches:
            if i in students:
                students.pop(students.index(i))
            else:
                return (len(students))
        return 0
