#include "OrderRepo.h"

OrderRepo::OrderRepo()
{
    //ctor
}

/*Order OrderRepo::readin_vector(string line){
    string str = "";
    vector<string> orders;
    for (unsigned int i = 0; i < line.length(); i++) {
        if (line[i] == ','){
             orders.push_back(str);
            str = "";
        }
        else {
            str += line[i];
        }
    }
    //for(size_t i = 0; i < orders.size(); i++){
      //  cout << orders[i] << endl;
    Order o(atoi(orders[0].c_str()), atoi(orders[1].c_str()), atoi(orders[2].c_str()), atoi(orders[3].c_str()), atoi(orders[4].c_str()));
    return o;
}*/

/*void OrderRepo::read(){

    vector<Order> order_from_file;
    ifstream fin;
    string str;
    fin.open("activeorders.txt");

    if (fin.is_open()){
            while (getline(fin, str)){
                   Order or = readin_vector(str);
                   order_from_file.push_back(or)

            }

        fin.close();
    }
    else{

        cout << "can not write in file, file is closed" << endl;
    }
    for(size_t i = 0; i < or  .size(); i++){
        cout << order_from_file[i] << endl;
}



//void read(vector<Order>& order_vector)
//{
    /*ifstream fin;
    string str;
    fin.open("activeorders.txt");


    if (fin.is_open()){
            while (!fin.eof()){
                getline(fin,str, ',');
                Order order();
                order_vector.push_back(order);
            }

        fin.close();
        toppingVector.pop_back();
    }
    else{

        cout << "can not write in file, file is closed" << endl;
    }*/
//}*/

void OrderRepo::write(Order& order)
{
    ofstream fout;
    fout.open("activeorders.txt", ios::app);
    if(fout.is_open()){
        fout << order;
    }
    fout.close();
}
