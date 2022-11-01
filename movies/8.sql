--In 8.sql, write a SQL query to list the names of all people who starred in Toy Story.

SELECT name FROM people
JOIN stars ON movie_id = movies.title