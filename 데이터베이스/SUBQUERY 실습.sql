USE BaseballData;

-- SubQuery (��������/��������)
-- SQL ��ɹ� �ȿ� �����ϴ� �Ϻ� SELCET

SELECT TOP 1 playerID
FROM salaries
ORDER BY salary DESC;

SELECT *
FROM players
WHERE playerID = 'rodrial01'

-- �̰��� �� ���� �Ϸ���?
-- ������ ��������
SELECT *
FROM players
WHERE playerID = (SELECT TOP 1 playerID FROM salaries ORDER BY salary DESC)

-- ������ -> IN ���
SELECT *
FROM players
WHERE playerID IN (SELECT TOP 20 playerID FROM salaries ORDER BY salary DESC)

-- ���������� WHERE���� ���� ���� ��������, ������ ���������� ��� ����
SELECT (SELECT COUNT(*) FROM players) AS playerCount, (SELECT COUNT(*) FROM batting) AS battingCount;

-- INSERT������ ��� ����
SELECT *
FROM salaries
ORDER BY yearID DESC

-- INSERT INTO
INSERT INTO salaries
VALUES (2024, 'KOR', 'NL', 'MIN', (SELECT MAX(salary) FROM salaries))

-- INSERT SELECT
INSERT INTO salaries
SELECT 2024, 'KOR', 'NL', 'MINSE', (SELECT MAX(salary) FROM salaries);

INSERT INTO salaries_temp
SELECT yearID, playerID, salary FROM salaries;

SELECT *
FROM salaries_temp

----------------------------------------------------------

-- ��� ���� ��������
-- EXISTS, NOT EXISTS

SELECT *
FROM players
WHERE playerID IN (SELECT playerID FROM battingpost);

SELECT *
FROM players
WHERE EXISTS (SELECT playerID FROM battingpost WHERE battingpost.playerID = players.playerID)

