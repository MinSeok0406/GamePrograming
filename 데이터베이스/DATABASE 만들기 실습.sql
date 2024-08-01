
-- �����ͺ��̽� = Schema

CREATE DATABASE GameDB

USE GameDB

-- ���̺� ����(CREATE)/����(DROP)/����(ALTER)
-- CREATE TABLE ���̺��(���̸� �ڷ��� [DEFAULT �⺻��] [NULL | NOT NULL], ...)

CREATE TABLE accounts(
	accountId INTEGER NOT NULL,
	accountName VARCHAR(10) NOT NULL,
	coins INTEGER DEFAULT 0,
	createdTime DATETIME
);

SELECT *
FROM accounts

-- ���̺� ����
DROP TABLE accounts

-- ���̺� ����(ALTER)
-- �� �߰�(ADD)/����(DROP)/����(ALTER)
ALTER TABLE accounts
ADD lastEnterTime DATETIME

ALTER TABLE accounts
DROP COLUMN lastEnterTime

ALTER TABLE accounts
ALTER COLUMN accountName VARCHAR(20) NOT NULL

-- ����(CONSTRAINT) �߰�/����
-- NOT NULL
-- UNIQUE
-- PRIMARY KEY
-- FOREIGN KEY

ALTER TABLE accounts
ADD CONSTRAINT PK_Account PRIMARY KEY (accountId);

ALTER TABLE accounts
DROP CONSTRAINT PK_Account;