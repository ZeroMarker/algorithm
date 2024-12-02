def hare_quota(total_votes, seats, vote_distribution):
    """
    实现比例代表黑尔数额算法。
    
    :param total_votes: 总有效票数
    :param seats: 议席数目
    :param vote_distribution: 各名单获得的票数分布，字典形式，键为名单名称，值为票数
    :return: 分配结果，字典形式，键为名单名称，值为获得的议席数
    """
    # 计算黑尔数额
    hare_quota = total_votes / seats
    
    # 计算每个名单的基础议席数和余数
    seat_distribution = {}
    remainders = []
    for party, votes in vote_distribution.items():
        base_seats = int(votes / hare_quota)
        remainder = votes % hare_quota
        seat_distribution[party] = base_seats
        remainders.append((remainder, party))
    
    # 按余数排序，分配剩余议席
    remainders.sort(reverse=True)
    for _ in range(seats - len(seat_distribution)):
        remainder, party = remainders.pop(0)
        seat_distribution[party] += 1
    
    return seat_distribution

# 示例数据
total_votes = 10000
seats = 10
vote_distribution = {
    '甲': 3100,
    '乙': 6100,
    '丙': 1230,
    '丁': 1530,
    '戊': 1650,
    '己': 4670
}

# 执行算法
result = hare_quota(total_votes, seats, vote_distribution)

# 打印结果
for party, seats in result.items():
    print(f"{party}: {seats}席")

