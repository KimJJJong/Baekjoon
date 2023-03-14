using System;

namespace If
{
    class Program
    {
        static void Main(string[] args)
        {
        	// 숫자를 입력 받아서 공백을 기준으로 잘라서 배열에 담는다.
            string[] n = Console.ReadLine().Split();
            
            //  변환해서 저장
            int a = int.Parse(n[0]);
            int b = int.Parse(n[1]);
            if (a > b)
            {
                Console.WriteLine(">");
            }
            else if (a < b)
            {
                Console.WriteLine("<");
            }
            else
            {
                Console.WriteLine("==");
            }
        }
    }
}