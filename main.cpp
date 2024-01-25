#include <iostream>
using namespace std;

int main() {
  cout << "Нет времени объяснять, ты попал в кузнецу и перед тобой выбор: \n 1 - Сделать меч. \n 2 - Сделать кольчугу. \n 3 - Сделать топор. \n 4 - сделать кирку. \n 5 - Выйти отсюда поджав хвост.";
  int a;
  cin >> a;
  switch(a){
    case 1:
      cout << "Выбери материал: \n 1 - Железо \n 2 - Бронза \n 3 - Свиносталь";
      int one;
      cin >> one;
      if (one == 1 || one == 2){
        cout << "Ты слабак.";
        break;
      } else {
        cout << "Ты молодец.";
        break;
      }
      break;
    case 2:
      cout << "Выбери материал: \n 1 - Слизь \n 2 - Латунь \n 3 - Львина";
      int two;
      cin >> two;
      if (two == 1 || two == 3){
        cout << "Ты настоящий кузнец.";
      } else {
        cout << "Ты слабак.";
      }
      break;
    case 3:
      cout << "Уверен? Ты дровосек? \n 1 - Да \n 2 - Нет";
      int Yes;
      cin >> Yes;
      if (Yes == 1 ){
        cout << "Уйди отсюда разбийник";
      } else {
        cout << "Уйди отсюда разбийник";
      }
      break;
    case 4:
      cout << "Уверен? Ты шахтер? \n 1 - Да \n 2 - Нет";
      int y;
      cin >> y;
      if (y == 1){
        cout << "Шахтеров мы уважаем";
      } else {
        cout << "Уйди отсюда разбийник";
      }
      break;
    case 5:
      for (int i = 0; i < 10; i++){
        cout << "Ты уверен? \n 1 - Да \n 2 - Нет";
        int da;
        cin >> da;
        if (da == 2){
          cout << "Кузнечное дело будет тебя приследовать.";
        } else {
          cout << "У, зря,";
        }
      }
      break;
    default:
      cout << "Ты не понял что ты должен сделать?";
      break;
  }
}







