USE BaseballData;

SELECT *
FROM dbo.players
WHERE birthYear IS NOT NULL
ORDER BY birthYear DESC, birthMonth DESC, birthDay DESC
OFFSET 100 ROWS FETCH NEXT 100 ROWS ONLY;	-- 100 ~ 200�� ȣ���� �� ����ϴ� ����