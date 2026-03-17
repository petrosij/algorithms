#include<iostream>
/*
    Реализация алгоритма взвешенного быстрого обьединения (weighted quick union) для задачи
    динамической связности. 
    id[i] означает - Ссылка на родителя
    sz[N] хранит "веса" - количество узлов дерева 
    Идея - дойти до корня q и p b и сравнить их корни. Если они одиноковые
    значит обьекты связаны. Если нет, присоединяем корень меньшего древа к большему
        -Операция find (проверка связности) — O(глубина древа), O(log(N)) в худшем случае
        -Операция union (объединение) — O(1)
 */

static const int N = 6;
int main(){
    int i,j,p,q,id[N],sz[N];
    for (i = 0; i < N; i ++){
        id[i] = i; // Array of pointers to root
        sz[i] = 1; // Array of weigts of tree
    }
    while (std::cin >> p >> q){
        //FIND
        for (i = p; i != id[i]; i = id[i]);
        for (j = q; j != id[j]; j = id[j]);
        if (i == j) continue;
        //UNION
        if (sz[i] >= sz [j]){
            id[i] = j;
            sz[j] += sz[i];
        }else{
            id[j] = i;
            sz[i] += sz[j];
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
        //Array sz[N]
        std::cout << "sz[N]: ["; 
        for (i = 0; i < N; i++){
            if (i == N-1) {
                std::cout << sz[i] << "]"<< std::endl;
            }else{
                std::cout << sz[i] << ", ";
            }
            
        }
    }
}