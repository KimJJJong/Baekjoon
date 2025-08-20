using System;

public class Solution {
    public int solution(int k, int m, int[] score) {
        int answer = 0;
        Array.Sort(score);
        int tmpBoxCnt =0;
        
        for(int i=score.Length; i>=0;i--)
        {
            if(tmpBoxCnt == m)
            {
                tmpBoxCnt =0;
                answer +=score[i]*m;
            }
            tmpBoxCnt++;
        }
        return answer;
    }
}