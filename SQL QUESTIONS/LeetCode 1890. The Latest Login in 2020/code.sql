SELECT user_id, MAX(time_stamp) AS last_stamp 
-- here max is used to find the latest one
FROM Logins
WHERE YEAR(time_stamp) = 2020
GROUP BY user_id;
