
long aVeryBigSum(int ar_count, long* ar) {
    long double sum = 0;
    for(int i = 0; i< ar_count; i++)
    {    
        sum = sum + ar[i];
    }

    return sum;


}





In C ++ :


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin>>n;
    unsigned long long int sum=0,in;
    for(int i=0;i<n;i++)
        {cin>>in;
        sum+=in;}
    cout<<sum;
    return 0;
}




In Python : 

input()
print(sum(map(int, input().split())))



In Java : 

import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int t = s.nextInt();
        long sum = 0;
        while(t-- > 0){
            sum += s.nextInt();
        }
        System.out.println(sum);
    }
}
                        