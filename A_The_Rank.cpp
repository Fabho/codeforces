// Fabho
// A_The_Rank

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    int id;
    int note;
};

vector<Student> vec;

bool cmp(Student x, Student y){

    if(x.note > y.note) return true;
    else if(x.note < y.note) return false;
    else if(x.note == y.note) return x.id < y.id;
}

int main(){
    int students, a,b,c,d;
    int answer;
    scanf("%d", &students);

    for(int i=0; i<students; i++){
        scanf("%d %d %d %d", &a, &b, &c, &d);

        Student current;
        current.id = i+1;
        current.note = a+b+c+d;
        vec.push_back(current);
    }

    sort(vec.begin(), vec.end(), cmp);

    for(int x=0; x<vec.size(); x++){
        if(vec[x].id == 1){
            answer = x;
            break;
        }
    }

    printf("%d\n", answer+1);

return 0;
}
