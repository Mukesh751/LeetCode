# Write your MySQL query statement below
SELECT sell_date,Count(DISTINCT( product ))        AS num_sold,Group_concat(DISTINCT( product )) AS products FROM  activities GROUP  BY sell_date; 