class Solution:
    def flowerGame(self, n: int, m: int) -> int:
        n_even = n//2
        n_odd  = n//2
        m_even = m//2
        m_odd  = m//2

        if n%2: n_odd+=1
        if m%2: m_odd+=1

        return (n_even*m_odd) + (n_odd*m_even)
        