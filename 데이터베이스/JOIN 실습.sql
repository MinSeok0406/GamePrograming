
-- JOIN(결합)

USE GameDB;

CREATE TABLE testA
(
	a INTEGER
)
CREATE TABLE testB
(
	b VARCHAR(10)
)

-- A(1, 2, 3)
INSERT INTO testA VALUES(1);
INSERT INTO testA VALUES(2);
INSERT INTO testA VALUES(3);
-- B('A', 'B', 'C')
INSERT INTO testB VALUES('A');
INSERT INTO testB VALUES('B');
INSERT INTO testB VALUES('C');

-- CROSS JOIN (교차 결합)
SELECT *
FROM testA
	CROSS JOIN testB;

SELECT *
FROM testA, testB;

-----------------------------

USE BaseballData;

SELECT *
FROM players
ORDER BY playerID
SELECT *
FROM salaries
ORDER BY playerID

-- INNER JOIN (두 개의 테이블을 가로로 결합 + 결합 기준을 ON으로)
-- playerID가 players, salaries 양쪽에 다 있고 일치하는 애들을 결합

SELECT *
FROM players AS p
	INNER JOIN salaries AS s
	ON p.playerID = s.playerID

-- OUTER JOIN (외부 결합)
	-- LEFT / RIGHT
	-- 어느 한쪽에만 존재하는 데이터


-- LEFT JOIN (두 개의 테이블을 가로로 결합 + 결합 기준을 ON으로)
-- playerID가 왼쪽(Left)에 있으면 무조건 표시. 오른쪽(salaries)에 없으면 오른쪽 정보는 NULL로 채움
SELECT *
FROM players AS p
	LEFT JOIN salaries AS s
	ON p.playerID = s.playerID

-- RIGHT JOIN (두 개의 테이블을 가로로 결합 + 결합 기준을 ON으로)
-- playerID가 오른쪽(Right)에 있으면 무조건 표시. 왼쪽(players)에 없으면 왼쪽 정보는 NULL로 채움
SELECT *
FROM players AS p
	RIGHT JOIN salaries AS s
	ON p.playerID = s.playerID