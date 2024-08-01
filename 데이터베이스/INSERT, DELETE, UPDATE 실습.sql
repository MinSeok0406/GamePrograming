USE BaseballData;


-- INSERT DELETE UPDATE
SELECT *
FROM salaries
ORDER BY yearID DESC;

-- INSERT INTO [���̺��] VALUES (��, ...) -> �� �ϳ��� �������� Error
INSERT INTO salaries
VALUES (2024, 'KOR', 'NL', 'MINSEOK', 1525124758)

-- INSERT INTO [���̺��](��, ...) VALUES (��, ...)
INSERT INTO salaries(yearID, teamID, playerID, lgID, salary)
VALUES (2024, 'KOR', 'MINSEOK2', 'NL', 2154245)

-- DELETE FROM [���̺��] WHERE [����]
DELETE FROM salaries
WHERE yearID >= 2024

-- UPDATE [���̺��] SET [�� = ��, ...] WHERE [����]
UPDATE salaries
SET salary *= 0.5
WHERE yearID = 2024


