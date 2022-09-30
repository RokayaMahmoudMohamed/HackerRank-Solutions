SELECT CONCAT(NAME ,'(', CASE 
        WHEN OCCUPATION ='Doctor' THEN 'D'
        WHEN OCCUPATION ='Actor' THEN 'A'
        WHEN OCCUPATION ='Singer' THEN 'S'
        ELSE 'P'
        END,CONCAT(')')) AS OCUP
FROM OCCUPATIONS
ORDER BY OCUP;

SELECT CONCAT("There are a total of ",COUNT(OCCUPATION),
              ' ',LOWER(OCCUPATION),'s.') FROM OCCUPATIONS
GROUP BY OCCUPATION
ORDER BY COUNT(OCCUPATION),OCCUPATION;
