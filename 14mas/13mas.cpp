cout << "Введите данные о себе ФИ и дату рождения! ";
int n = 29;
string mas[n],fio,birt;
for(int i = 0; i < n; i++){
    cin >> mas[i];
    birt.append(mas[i], 23,6);
    fio.append(mas[i], 0,17);
    int biday = stoi(birt);
    int day;
    cout<< "Введите сегодняшнию дату! " << endl;
    cin >> day;
    if(biday < day)cout<< "Для " << fio << " день рождения прошел!";
    else cout << "Для " << fio << " день рождения будет позже!";
}
