--In 9.sql, write a SQL query to list the names of all people who starred in a movie released in 2004, ordered by birth year.

SELECT DISTINCT name FROM people
JOIN stars on stars.person_id = people.id
JOIN movies ON movies.id = stars.movie_id
WHERE movie.year = 2004
ORDER BY people.birth ASC;