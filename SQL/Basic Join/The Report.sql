SELECT 
CASE 
    WHEN grades.grade>=8 THEN students.name
    ELSE NULL
END AS name, grades.grade,students.marks
From students join grades 
ON students.marks>=grades.min_mark and students.marks<=grades.max_mark 
ORDER BY grades.grade  DESC,students.name ASC,students.marks ASC    

