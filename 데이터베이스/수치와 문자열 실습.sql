USE BaseballData;

SELECT 2021 - birthYear AS koreanAge
FROM players
WHERE deathYear IS NULL AND birthYear IS NOT NULL AND 2021 - birthYear <= 80
ORDER BY koreanAge;

-- FROM
-- WHERE
-- SELECT
-- ORDER BY
-- �� ������ �ý��� ����

SELECT SUBSTRING('20200425', 1, 4);

SELECT TRIM('            HelloWorld');