USE BaseballData;


-- Q) 2004�⵵�� ���� ���� Ȩ���� ���� ����?
SELECT TOP 1 teamID, SUM(HR) AS homeRuns
FROM batting
WHERE yearID = 2004
GROUP BY teamID
ORDER BY homeRuns DESC;

-- Q) 2004�⵵�� 200Ȩ�� �̻��� ���� ���� ���?
SELECT teamID, SUM(HR) AS homeRuns
FROM batting
WHERE yearID = 2004
GROUP BY teamID
HAVING SUM(HR) >= 200
ORDER BY homeRuns DESC;

-- Q) ���� �⵵�� ���� ���� Ȩ���� ���� ����?
SELECT teamID, yearID, SUM(HR) AS homeRuns
FROM batting
GROUP BY teamID, yearID
ORDER BY homeRuns DESC;

-- FROM			å�󿡼�
-- WHERE		����
-- GROUP BY		���󺰷� �з��ؼ�
-- HAVING		�з��� ������ �������� �����ϰ�
-- SELECT		���� �ͼ�
-- ORDER BY		ũ�� ���� �������ּ���