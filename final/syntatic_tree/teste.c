int x;
float y[1];
int a, b, c[2];

if (x < 3) {
    x = 1;
} else {
    x = 0;
}

void func1(int x){
    x = 10;
}

void func2(int x, int y){
    x = y;
    y = 10;
}
