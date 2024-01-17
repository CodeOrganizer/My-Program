//************************************QUICK SORT****************************************
// #include<stdio.h>

// void swap(int *a,int *b){
//     int temp=*a;
//     *a=*b;
//     *b=temp;
// }

// int partition(int a[],int l,int h){
//     int pivot=a[l];
//     int i=l,j=h;
// while(i<j){
//     do{
//         i++;
//     }while(a[i]<=pivot);
//     do{
//         j--;
//     }while(a[j]>pivot);
//     if(i<j)
//     swap(&a[i],&a[j]);
// }

// swap(&a[l],&a[j]);
// return j;
// }

// void quick_sort(int a[],int l,int h){
//     int j;
//     if(l<h){
//     j=partition(a,l,h);
//     quick_sort(a,l,j);
//     quick_sort(a,j+1,h);
//     }
// }


// int main(){
//     int array[]={5,7,-5,9,4,26,-52,74,55,10,8};
//     int size= sizeof(array)/sizeof(array[0]);
//     quick_sort(array,0,size);
    
//     printf("\nSorted array: { ");
//     for(int i=0;i<size;i++)
//         printf("%d ",array[i]);
//     printf("}");
    
//     return 0;
// }

//*****************************MERGE SORT******************************************//

// #include<stdio.h>
// #include<stdlib.h>

// void merge(int array[], int l, int mid, int h){
//     int i = l, j = mid + 1, k = 0;
//     int *temp = (int *)malloc((h - l + 1) * sizeof(int)); // Dynamic allocation

//     while (i <= mid && j <= h) {
//         if (array[i] < array[j])
//             temp[k++] = array[i++];
//         else
//             temp[k++] = array[j++];
//     }

//         for(;i<=mid;i++)
//         temp[k++] = array[i++];
//         for(;j<=h;j++)
//         temp[k++] = array[j++];

//     for(int i=0;i<k;i++)
//             array[i]=temp[i];


//     free(temp); // Free the dynamically allocated memory
// }

// void merge_sort(int array[], int l, int h){
//     if (l < h) {
//         int mid = (l + h) / 2;
//         merge_sort(array, l, mid);
//         merge_sort(array, mid + 1, h);
//         merge(array, l, mid, h);
//     }
// }

// int main(){
//     int *array;
//     int n;
   
//         printf("Enter the number of elements in the array : ");
//         scanf("%d", &n);
        

//     array = (int *)malloc(n * sizeof(int)); // Dynamic allocation

//     printf("Enter the elements:\n");
//     for (int i = 0; i < n; i++)
//         scanf("%d", &array[i]);

//     printf("\nUnsorted array: { ");
//     for (int i = 0; i < n; i++)
//         printf("%d ", array[i]);
//     printf("}");

//     merge_sort(array, 0, n - 1);

//     printf("\nSorted array: { ");
//     for (int i = 0; i < n; i++)
//         printf("%d ", array[i]);
//     printf("}");

//     free(array); // Free the dynamically allocated memory

//     return 0;
// }


//*****************************SELECTION SORT***************************************************

// void swap(int *a,int *b){
// 	int temp;
// 	temp=*a;
// 	*a=*b;
// 	*b=temp;
// }
// void selection_sort (int arr[],int size){

// for(int i=0;i<size-1;i++){
// 	int min=i;
// 	for(int j=i+1;j<size;j++){
// 		if(arr[j]<arr[min])
// 		min=j;
// 	}
// 	swap(&arr[i],&arr[min]);
// }
// }

// int main()
// {
// int a[5];
// printf("provide 5 array datas:\n");

// for(int i=0;i<5;i++)
// scanf("%d",&a[i]);


// printf("The array is:\n");
// for(int j=0;j<5;j++)
// printf("%d ",a[j]);

// int size=sizeof(a)/sizeof(a[0]);

// selection_sort(a,size);

// printf("\nThe sorted array is:\n");
// for(int j=0;j<5;j++)
// printf("%d ",a[j]);}

//**************************************INSERTION SORT********************************************
// void insertion_sort(int array[],int size){
//     int x;
//     for(int i=1;i<size;i++){
//         x=array[i];
//         int j=i-1;
//                 while(j>-1 && array[j]>x){
//                     array[j+1]=array[j];
//                     j--;
//                 }
//         array[j+1]=x;
//         }
// }

//**************************************STACK*****************************************************
// #include<stdio.h>
// #define MAX 3
// int stack[MAX];
// int top=-1;

// void push(int stack[],int val){
//     if(top==MAX-1)
//     printf("\noverflow\n");
//     else
//     {
//         top++;
//         stack[top]=val;
//     }
// }

// int pop(int stack[]){
//     int x;
//     if(top==-1){
//     printf("\nunderflow\n");
//     return -1;
//     }
//     else{
//         x=stack[top];
//         top--;
//     return x;
//     }
// }

// void display(int stack[]){
//     if(top==-1)
//     printf("stack is empty");
    
//     for(int i=top;i>=0;i--){
//         printf("\n%d",stack[i]);
//     }
// }

// int main(){
// int option,val;

// do{

//     printf("\n*****MAIN MENU*****");
//     printf("\n1. PUSH");
//     printf("\n2. POP");
//     printf("\n3. DISPLAY");
//     printf("\n4. EXIT");
//     printf("\nEnter Your Option: ");
//     scanf("%d",&option);


// switch(option){

//     case 1: printf("\nEnter the element to be pushed:");
//             scanf("%d",&val);
//             push(stack,val);
//             break;
//     case 2: val=pop(stack);
//             if(val!=-1)
//             printf("The element removed: %d",val);
//             break;
//     case 3: display(stack);
//             break;
//     default: if(option!=4)
//                 printf("please enter valid option");
//             else
//                 printf("thank you");
//                 break;
// }



// }while(option!=4);
// }

//***************************************Circular Queue***************************************

void queue_insert(int queue[],int val){
    if(front==0&&rear==MAX_1)
    printf("overflow")
    else if(front==-1&&rear==-1){
        front=rear=0;
        queue(rear)=val
    }
    else if(front!=0&&rear==max-1){
    rear=0
    queue[rear]=val;}
    else{
        rear=++;
        queue[rear]=val;
    }
}

int queue_delete(int queue[]){
    int x;
    if(front==-1&&rear==-1){
    printf("Queue UNDERFLOW");
    return -1;
    }
    else{
        x=queue[front];
        front++;
        if(front>rear){
            front=rear=-1;
            return x;
        }
    }

}

//***************************************linear Queue*********************************************