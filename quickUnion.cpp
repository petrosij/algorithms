
#include<iostream>
/*
    Реализация алгоритма объединения-поиска (union-find) для задачи
    динамической связности. Здесь используется быстрое объединение
    (quick-union) в его классическом виде.
    id[p] означает - Ссылка на родителя
    Идея - дойти до корня q и p b и сравнить их корни. Если они одиноковые
    значит обьекты связаны. Если нет, присоединяем корень первого обьекта ко второму.
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