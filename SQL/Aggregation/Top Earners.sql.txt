
SELECT MAX(salary*months),COUNT(salary*months) FROM Employee WHERE (salary*months)=(SELECT MAX(salary*months) FROM Employee);

