public class Main
{   static void inserSort(int arr[]){
        for(int i =0;i<arr.length;i++){
            int key = arr[i];
            int j = i-1;
            while(j >= 0 && arr[j] > key){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
        
        for(int i:arr) System.out.print(i + " ");
    }
	public static void main(String[] args) {
		int arr[] = {20,5,40,60,10,30};
		inserSort(arr);
	}
}