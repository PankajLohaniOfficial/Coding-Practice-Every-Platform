-- Select the id from the first instance of the Weather table (w1)
SELECT w1.id
-- Join the Weather table to itself and give the second instance an alias w2
FROM Weather w1
JOIN Weather w2
  -- Join condition: Match each record in w1 with the record from the previous day in w2
  ON DATEDIFF(w1.recordDate, w2.recordDate) = 1
-- Filter the results to include only those where today's temperature (w1) is higher than yesterday's (w2)
WHERE w1.temperature > w2.temperature;
