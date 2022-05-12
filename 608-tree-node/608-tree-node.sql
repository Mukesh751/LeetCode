# Write your MySQL query statement below
SELECT id,
IF(ISNULL(p_id), 'Root',
IF(id IN (SELECT DISTINCT p_id FROM Tree), 'Inner', 'Leaf')) as 'type'
FROM Tree