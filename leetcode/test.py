from collections import deque


# 迭代函数，用于反转完美二叉树的交替级别
# 使用水平顺序遍历
def invertBinaryTree(root):

    # 基本情况：如果树为空
    if root is None:
        return

    # 维护一个Queue并将根节点入队
    q = deque()
    q.append(root)

    # 存储当前电平信息
    level = False

    # 维护另一个Queue来存储奇数级别的节点
    level_nodes = deque()

    # 维护一个Stack栈来存储节点的奇数级数据
    level_val = deque()

    # 循环直到Queue为空
    while q:

        # 获取当前级别的大小
        size = len(q)

        # 处理当前级别存在的所有节点
        for n in reversed(range(size)):

            # 出列前端节点
            curr = q.popleft()

            # 如果电平是奇数
            if level:
                # 入队当前节点
                level_nodes.append(curr)

                # 将当前节点数据压入Stack中
                level_val.append(curr.val)

            # 如果当前节点是关卡的最后一个节点
            if n == 0:
                # 翻转水平仪
                level = not level

                # 将 `level_val` 中存在的元素放入正确的
                # 使用 `level_nodes` 的 # 位置
                while level_nodes:
                    front = level_nodes.popleft()        # 使用 `popleft()` 进行Queue
                    front.val = level_val.pop()        # 使用 `pop()` 进行Stack栈

            # 入队当前节点的左子节点
            if curr.left:
                q.append(curr.left)

            # 入队当前节点的右孩子
            if curr.right:
                q.append(curr.right)
