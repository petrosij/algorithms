#include <iostream>

/*
    Реализован алгоритм быстрого объединения (quick-union) для задачи динамической связности (union-find),
    но с особенностью — он использует поиск слиянием компонент путём затирания (quick-find).
        -Операция find (проверка связности) — O(1), просто сравнение значений
        -Операция union (объединение) — O(N), так как проходит по всему массиву
 */

static const int N = 6;
int main(){
    int i,p,q,id[N];
    for (i = 0; i < N; i ++) id[i] = i;
    while (std::cin >> p >> q){
        int t = id[p];
        if (t == id[q]) continue;
        for (i = 0; i < N; i++){
            if (id[i] == t){
                id[i] = id[q];
            }
        }
        std::cout << " " << p << " " << q << "; id[N]: ["; 
        for (i = 0; i < N; i++){
            if (i == N-1) {
                std::cout << id[i] << "]"<< std::endl;
            }else{
                std::cout << id[i] << ", ";
            }
            
        }
    }
}