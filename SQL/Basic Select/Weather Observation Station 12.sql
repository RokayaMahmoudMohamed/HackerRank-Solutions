SELECT DISTINCT CITY FROM STATION WHERE NOT ( CITY LIKE 'E%'
                                             OR CITY LIKE 'A%'
                                             OR CITY LIKE 'O%'
                                             OR CITY LIKE 'I%'
                                             OR CITY LIKE 'U%'
                                             OR CITY LIKE '%i'
                                             OR CITY LIKE '%o'
                                             OR CITY LIKE '%e'
                                             OR CITY LIKE '%a'
                                             OR CITY LIKE '%u');
