int CreateMassive1(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=i;
    }
    return 0;
}
void PrintMassiv1(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}
void arrayRotateRight(int array[], int size) {
register int temp = array[--size];
while ( size > 0 ) array[size--] = array[size-1];
array[0] = temp;
}
void arrayRotateLeft(int array[], int size) {
    register int i, temp = array[0];
    for (i = 0, size--; i < size; i++) array[i] = array[i+1];
    array[size] = temp;
 }
