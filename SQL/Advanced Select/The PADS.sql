SELECT CONCAT(Name,
        CASE
WHEN Occupation='Actor' THEN '(A)'  
WHEN Occupation='Doctor' THEN '(D)'
WHEN Occupation='Professor' THEN '(P)'
ELSE '(S)'
END)
FROM OCCUPATIONS  ORDER BY Name ASC;
SELECT 'There are a total of ',COUNT(Occupation),CASE
WHEN Occupation='Actor' THEN ' actors.'  
WHEN Occupation='Doctor' THEN ' doctors.'
WHEN Occupation='Professor' THEN ' professors.'
ELSE ' singers.'
END
FROM OCCUPATIONS  group by Occupation ORDER BY COUNT(Occupation), Occupation ASC;
