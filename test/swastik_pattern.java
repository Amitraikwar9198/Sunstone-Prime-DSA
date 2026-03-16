public class swastik_pattern {

    public static void main(String[] args) {
       int n=5;
       int m=6;
       for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                if(j==1 || j==m){
                    System.out.print(" *");
                }
                else{
                    System.out.print("  ");    
                }
            }
            for(int j=1; j<=n; j++){
                if(i==1){
                    System.out.print(" *");
                }
                else{
                    System.out.print("  ");    
                }
            }
            System.out.println();
       }
       for(int i=1; i<=m; i++){
            for(int j=1; j<=m; j++){
                if(i==1 || i==m || j==m ){
                    System.out.print(" *");
                }
                else{
                    System.out.print("  ");    
                }
            }
            for(int j=1; j<=m-1; j++){
                if(i==1 || j==n){
                    System.out.print(" *");
                }
                else{
                    System.out.print("  ");    
                }
            }
            System.out.println();
       }
    }
}