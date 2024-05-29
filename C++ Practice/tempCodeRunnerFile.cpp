int a=10;
    int *p=&a;
    //*p=&a;    //It will give error. should: p=&a;
    cout<<(int)p<<" "<<*p<<" "<<a<<" "<<(int)&a;