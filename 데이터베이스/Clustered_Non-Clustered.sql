USE BaseballData;

-- Clustered(���� ����) vs Non-Clustered(����)

-- Clustered
	-- Leaf Page = Data Page
	-- �����ʹ� Clustered Index Ű ������ ����

-- Non-Clustered (Clustered Index ������ ���� �ٸ��� ����)
-- 1) Clustered Index�� ���� ���
	-- Clustered Index�� ������ �����ʹ� Heap Table�̶�� ���� ����
	-- Heap RID -> Heap Table�� ���� ������ ����

-- 2) Clustered Index�� �ִ� ���
	-- Heap Table�� ���� -> Heap RID�� ����. Leaf Table�� ���� ������ �ִ�.
	-- Clustered Index�� ���� Ű ���� ��� �ִ´�.

