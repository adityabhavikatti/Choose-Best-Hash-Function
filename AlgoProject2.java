package test;

import java.io.BufferedReader;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.util.HashMap;
import java.util.List;
import java.util.Map;


public class AlgoProject2 {
  private static void fun(int [][]a) {
	  /*
	   * I created seven hash tables and initialised them
	   */
	  Map<Integer, Integer> map1 = new HashMap<Integer, Integer>(10);
	  Map<Integer, Integer> map2 = new HashMap<Integer, Integer>(10);
	  Map<Integer, Integer> map3 = new HashMap<Integer, Integer>(10);
	  Map<Integer, Integer> map4 = new HashMap<Integer, Integer>(10);
	  Map<Integer, Integer> map5 = new HashMap<Integer, Integer>(10);
	  Map<Integer, Integer> map6 = new HashMap<Integer, Integer>(10);
	  Map<Integer, Integer> map7 = new HashMap<Integer, Integer>(10);
	  
	    for(int i=0;i<10;i++) {
	    	 map1.put(i,0);
	    }
	    for(int i=0;i<10;i++) {
	    	 map2.put(i,0);
	    }
	    for(int i=0;i<10;i++) {
	    	 map3.put(i,0);
	    }
	    for(int i=0;i<10;i++) {
	    	 map4.put(i,0);
	    }
	    for(int i=0;i<10;i++) {
	    	 map5.put(i,0);
	    }
	    for(int i=0;i<10;i++) {
	    	 map6.put(i,0);
	    }
	    for(int i=0;i<10;i++) {
	    	 map7.put(i,0);
	    }
	    int temp=0;
	  int m=a.length;
	  int n=a[0].length;
	  /*
	   * here I am checking for the first digit of barcode to store in the hashtable
	   */
	  for(int i=0;i<m;i++) {
		   for(int j=0;j<10;j++) {
			   if(a[i][0]==j) {
				   temp=map1.get(j);
				   temp++;
				   map1.put(j, temp);
			   }
		   }
	  }
	  /*
	   * here I am checking for the second digit of barcode to store in the hashtable
	   */
	  for(int i=0;i<m;i++) {
		   for(int j=0;j<10;j++) {
			   if(a[i][1]==j) {
				   temp=map2.get(j);
				   temp++;
				   map2.put(j, temp);
			   }
		   }
	  }
	  /*
	   * here I am checking for the third digit of barcode to store in the hashtable
	   */
	  for(int i=0;i<m;i++) {
		   for(int j=0;j<10;j++) {
			   if(a[i][2]==j) {
				   temp=map3.get(j);
				   temp++;
				   map3.put(j, temp);
			   }
		   }
	  }
	  /*
	   * here I am checking for the fourth digit of barcode to store in the hashtable
	   */
	  for(int i=0;i<m;i++) {
		   for(int j=0;j<10;j++) {
			   if(a[i][3]==j) {
				   temp=map4.get(j);
				   temp++;
				   map4.put(j, temp);
			   }
		   }
	  }
	  /*
	   * here I am checking for the fifth digit of barcode to store in the hashtable
	   */
	  for(int i=0;i<m;i++) {
		   for(int j=0;j<10;j++) {
			   if(a[i][4]==j) {
				   temp=map5.get(j);
				   temp++;
				   map5.put(j, temp);
			   }
		   }
	  }
	  /*
	   * here I am checking for the sixth digit of barcode to store in the hashtable
	   */
	  for(int i=0;i<m;i++) {
		   for(int j=0;j<10;j++) {
			   if(a[i][5]==j) {
				   temp=map6.get(j);
				   temp++;
				   map6.put(j, temp);
			   }
		   }
	  }
	  /*
	   * here I am checking for the seventh digit of barcode to store in the hashtable
	   */
	  for(int i=0;i<m;i++) {
		   for(int j=0;j<10;j++) {
			   if(a[i][6]==j) {
				   temp=map7.get(j);
				   temp++;
				   map7.put(j, temp);
			   }
		   }
	  }
	  /*
	   * here I am storing the frequency of barcodes in an 2-d check array
	   */
	  int check[][]= new int[7][10];
	    for(int i=0;i<10;i++) {
	    	  temp=map1.get(i);
	    	  check[0][i]=temp;
	    }
	    for(int i=0;i<10;i++) {
	    	  temp=map2.get(i);
	    	  check[1][i]=temp;
	    }
	    for(int i=0;i<10;i++) {
	    	  temp=map3.get(i);
	    	  check[2][i]=temp;
	    }
	    for(int i=0;i<10;i++) {
	    	  temp=map4.get(i);
	    	  check[3][i]=temp;
	    }
	    for(int i=0;i<10;i++) {
	    	  temp=map5.get(i);
	    	  check[4][i]=temp;
	    }
	    for(int i=0;i<10;i++) {
	    	  temp=map6.get(i);
	    	  check[5][i]=temp;
	    }
	    for(int i=0;i<10;i++) {
	    	  temp=map7.get(i);
	    	  check[6][i]=temp;
	    }
	  
	  
	     /*
	      * here I am calculating maximum and minimum values of each hash table and storing the best hash table found in bestsofar variable
	      */
	    int min,max,bestcur=Integer.MAX_VALUE,bestsofar=Integer.MAX_VALUE,index=0;
	        for(int i=0;i<7;i++) {
	        	min=Integer.MAX_VALUE;
	        	max=Integer.MIN_VALUE;
	        	for(int j=0;j<10;j++) {
	        		 if(check[i][j]>max) {	 
	        			 max=check[i][j];
	        		 }
	        		  if(check[i][j]<min) { 
	        			 min=check[i][j];
	        		 }
	        			 
	        	}
	        	
	        	bestcur=max-min;
	        	if(bestcur<bestsofar) {
	        		bestsofar=bestcur;
	        		index=i;
	        	}
	        		  
	        }
	        index++;
	        System.out.println("Best Hash Value   "+bestsofar+"  Hash Table "+index);
  }
	public static void main(String[] args) throws IOException {
		//the file path is taken as command line argument
		String fname =args[0];
	      /*
	       * the file path should be similar to this
	       * "/home/manikanta/Desktop/JavaPrograms/AlgoProject/src/test/in2.txt"
	       */
	      
		  File file = new File(fname); 
		  
		  BufferedReader br=null;
		try {
			br = new BufferedReader(new FileReader(file));
		} catch (FileNotFoundException e) {
			
			e.printStackTrace();
		} 
		//here the loop checks for how many lines does the file contains
		String a;
		int n=0;
		 while ((a = br.readLine()) != null) {   
			    n++;
			  }
		
		  BufferedReader br1=null;
			try {
				br1 = new BufferedReader(new FileReader(file));
			} catch (FileNotFoundException e) {
				
				e.printStackTrace();
			}
		  String st; 
		  int row=0,col;
		  char [][]ar=new char[n][7];
		  while ((st = br1.readLine()) != null) {
		   
		    /*
		     * here the loop takes the barcodes from the file
		     */
		    int m=st.length();
		      col=0;
		      for(int i=m-7-1;i<m;i++) {
		    	  if(st.charAt(i)>=48 && st.charAt(i)<=57) {
		    	  ar[row][col]=st.charAt(i);
		    	  col++;
		    	  }
		      }
		  
		   row++;
		  }
		  System.out.println();
		  /*
		   * the barcodes that are stored as characters converted to integers and stored in the integer array arr
		   */
		  int arr[][]=new int[ar.length][ar[0].length];
		  for(int i=0;i<ar.length;i++) {
			  for(int j=0;j<ar[0].length;j++) {
				 arr[i][j]=ar[i][j]-'0';
			  }		 
		  }
		  
		  //the integer 2-d  array is passed as argument to function fun
		  fun(arr);
	      }
	       

	}


