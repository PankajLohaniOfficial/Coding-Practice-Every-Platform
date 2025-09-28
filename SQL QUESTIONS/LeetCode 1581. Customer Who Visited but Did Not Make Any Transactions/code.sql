/* Write your PL/SQL query statement below */

-- Select the customer_id and count of visits with no transactions
SELECT
  V.customer_id,               -- Select the customer_id from the Visits table (aliased as V)
  COUNT(*) AS count_no_trans   -- Count how many times this customer visited without making a transaction

FROM
  Visits V                     -- Use the Visits table, and give it the alias 'V' for easier reference

  LEFT JOIN Transactions T     -- Perform a LEFT JOIN with the Transactions table (aliased as 'T')
  ON V.visit_id = T.visit_id   -- Join condition: match records where the visit_id is the same in both tables

WHERE
  T.transaction_id IS NULL     -- Filter only those visits that have no matching transaction (i.e., no transaction made)

GROUP BY
  V.customer_id;               -- Group the results by customer_id to get the count per customer
