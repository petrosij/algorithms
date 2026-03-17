#include <iostream>

/*
    Реализован алгоритм быстрого поиска (quick-find) для задачи динамической связности
        -Операция find (проверка связности) — O(1), просто сравнение значений
        -Операция union (объединение) — O(N), так как проходит по всему массиву
        id[p] означает - Идентификатор компонента (принадлежность к связанной группе)
 */

static const int N = 6;
int main(){
    int i,p,q,id[N];
    for (i = 0; i < N; i ++) id[i] = i;
    while (std::cin >> p >> q){
        //FIND
        int t = id[p];
        if (t == id[q]) continue;
        //UNION
        for (i = 0; i < N; i++){
            if (id[i] == t){
                id[i] = id[q];
            }
        }
        //Array id[N]
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