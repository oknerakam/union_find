#pragma once
class forest
{
private:
    int p[100000];//???????? ???????? ???????
    int rk[100000];//???????? ???? ??? ???????
public:
    void Make_Set();//??????? 100000 ??????, ??? ? ?????? ??????? ???????? - ??? ??? ????, ???? ????? ?????????? 1
    int Find_x(int);//????????? ????????????? ?????????, ? ??????? ????????? ??????? ?
    bool Union(int, int);//??????????? ???? ?????? ? ???? ?????????, ??? ????????????? ????????? - ???? ?? ??????
};
