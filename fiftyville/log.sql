-- Keep a log of any SQL queries you execute as you solve the mystery.

SELECT description FROM crime_scene_reports
WHERE year = 2021 AND month = 7 AND day = 28;

SELECT transcript FROM interviews
WHERE year = 2021 AND month = 7 AND day = 28 AND transcript LIKE
"%bakery%";

SELECT bakery_security_logs.activity, bakery_security_logs.
license_plate, people.name FROM people
JOIN bakery_security_logs ON bakery_security_logs.license_plate =
people.license_plate
WHERE bakery_security_logs.year = 2021
AND bakery_security_logs.month = 7
AND bakery_security_logs.day = 28
AND bakery_security_logs.hour = 10
AND bakery_security_logs.minute >= 15
AND bakery_security_logs.minute <= 25;

SELECT people.name, atm_transactions.transaction_type FROM people
JOIN bank_accounts ON bank_accounts.person_id = people.id
JOIN atm_transactions ON atm_transactions.account_number =
bank_accounts.account_number
WHERE atm_transactions.year = 2021
AND atm_transactions.month = 7
AND atm_transactions.day = 28
AND atm_location = "Leggett Street"
AND atm_transactions.transaction_type = "withdraw";

UPDATE phone_calls
SET caller_name = people.name
FROM people
WHERE phone_calls.caller = people.phone_number;

UPDATE phone_calls
SET caller_name = people.name
FROM people
WHERE phone_calls.receiver = people.phone_number;

SELECT caller, caller_name, receiver, receiver_name FROM phone_calls
WHERE year = 2021
AND month = 7
AND day = 28
AND duration < 68;
