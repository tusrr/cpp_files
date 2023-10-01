
// CODING NINJAS
// https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTab=1

// int getPivot(vector<int>& arr, int n){
//     int s= 0;
//     int e=n-1;
//     int mid = s+(e-s)/2;

//   while(s<e)
// {
//       if(arr[mid]>= arr[0]){
//           s= mid+1;
//       } else {
//           e = mid;
//       }
//       mid = s + (e - s) / 2;
//   }
//   return s;
// }

// int binarySearch(vector<int>& arr, int start,int end, int key)
// {

//     int s = start;
//     int e =end;

//     int mid = s + (e - s) / 2;

//     while (s <= e)
//     {
//         if (arr[mid] == key)
//         {
//             return mid;
//         }

//         if (arr[mid] < key)
//         {
//             s = mid + 1;
//             // go right wala part
//         }
//         else
//         {
//             e = mid - 1;
//             // go left wala part
//         }
//         mid = s + (e - s) / 2;
//     }
//     return -1;
// }

// int search(vector<int>& arr, int n, int k)
// {
//      int pivot = getPivot(arr,n);
//      if(k>=arr[pivot] && k<=arr[n-1]){
//          return binarySearch(arr,pivot,n-1,k);
//      }else{
//          return binarySearch(arr,0,pivot-1,k);

//      }

// }
