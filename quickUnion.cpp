
#include<iostream>
/*
    Реализация алгоритма быстрого обьединения (quick-union) для задачи
    динамической связности.
    id[p] означает - Ссылка на родителя
    Идея - дойти до корня q и p b и сравнить их корни. Если они одиноковые
    значит обьекты связаны. Если нет, присоединяем корень первого обьекта ко второму.
        -Операция find (проверка связности) — O(глубина древа), O(N) в худшем случае
        -Операция union (объединение) — O(1)
 */

static const int N = 6;
int main(){
    int i,j,p,q,id[N];
    for (i = 0; i < N; i ++) id[i] = i;
    while (std::cin >> p >> q){
        //FIND
        for (i = p; i != id[i]; i = id[i]);
        for (j = q; j != id[j]; j = id[j]);
        if (i == j) continue;
        //UNION
        id[i] = j;
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