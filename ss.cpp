// Best - Apni Kaksha
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

// End 


// int select(int arr[], int i)
// {
//     // code here such that selecionSort() sorts arr[]
       // No need to write anything here
// }
void selectionSort(int arr[], int n)
{
  int i,j,min,temp;
  for(i=0;i<n-1;i++)
  {
      min=i;
      for(j=i+1;j<n;j++)
      {
          if(arr[j]<arr[min])
          {
              min=j;
          }
      }
      if(min!=i)
      {
          temp=arr[min];
          arr[min]=arr[i];
          arr[i]=temp;
      }
  }
}
