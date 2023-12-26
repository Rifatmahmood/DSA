int n;
 printf("Enter a number: "); 
 scanf("%d", &n);
 int A[n];

 int index;
 printf("Enter index: ");
 scanf("%d", &index); 


 int value;
 printf("Enter value: ");
 scanf("%d", &value);

 for (int i = 0; i < n; i++)
 {
  // reading array elements
  printf("Enter array element %d: ", i + 1);
  scanf("%d", &A[i]);
  // value changing 
  if(i == index){
   A[i] = value; 
  }
 }

 for (int i = n - 1; i >= 0; i--)
 {
  printf("%d ", A[i]); 
 }