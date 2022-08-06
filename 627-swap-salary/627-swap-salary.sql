# Write your MySQL query statement
UPDATE SALARY SET SEX= CASE WHEN SEX='f' THEN 'm' WHEN SEX='m' THEN 'f' END;

/*

UPDATE SALARY SET SEX=IF(SEX='f','m','f');

*/