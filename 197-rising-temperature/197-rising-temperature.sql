# Write your MySQL query statement below
SELECT t1.id FROM weather t1, weather t2  WHERE  DATEDIFF(t1.recordDate,t2.recordDate)=1 AND 
t1.temperature>t2.temperature