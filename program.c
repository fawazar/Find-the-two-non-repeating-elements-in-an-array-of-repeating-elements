#include<stdio.h>

void oddnums(int arr[],int n)
{
  int res = 0;
  int i;
  int arr1[n],arr2[n];

  int k1,k2 = 0;
  int bit_pos = 0;

  for(i=0;i<n;i++)
  {
    res = res^arr[i]; //XOR operation on input array

  }
  printf("res is: %d\n",res);

  for(i = 0;i<n;i++)
  {
  printf("%dth element of input is: %d\n",i,arr[i]); //printing input array
  }



  for(i=0;i<32;i++)
  {
      if(res & (1 << i))
      {
        bit_pos = i;
        printf("Hit at: %d \n",i); //Finding first non zero bit position in res
        break;
      }
  }


  //printf("bit_pos is: %d\n",bit_pos);



  int shiftnum = (1 << (bit_pos));

  printf("shiftnum is: %d\n",shiftnum);


  for(i=0;i<n;i++) // For loop to classify elements of array into two sets.
  {
    if ((arr[i]) & (shiftnum))
    {
      arr1[k1] = arr[i];
      printf("arr1 of %d is: %d\n",k1,arr1[k1]);
      k1 = k1+1;
    }
    else
    {
      arr2[k2] = arr[i];
      printf("arr2 of %d is: %d\n",k2,arr2[k2]);
      k2 = k2+1;
    }

  }

  //printf("The value of K1 and K2 are: %d,%d\n",k1,k2);
  // for(i = 0;i<n;i++)
  // {
  //   printf("%dth element of arr is: %d\n",i,arr[i]);
  // }

  int odd1=0,odd2 = 0;


  for(i = 0;i<k1;i++)
  {
    odd1 = odd1^arr1[i];
  }
  printf("odd1 is: %d\n",odd1);
  for(i = 0;i<k2;i++)
  {
    odd2 = odd2^arr2[i];
  }
  printf("odd2 is: %d\n",odd2);
  printf("The numbers are: %d, %d\n",odd1,odd2);

}


int main(void)

{
  int arr[] = {1,1,2,2,3,4,4,5};
  oddnums(arr,8);

}
