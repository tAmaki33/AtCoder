using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ABC180.Abc
{
    class QuestionD
    {
        public static void Main(string[] args)
        {
            var sw = new System.IO.StreamWriter(Console.OpenStandardOutput()) { AutoFlush = false };
            Console.SetOut(sw);

            // 整数配列の入力
            var A = Console.ReadLine().Split(' ').Select(i => long.Parse(i)).ToArray();
            // Y > X * A + B

            // 経験値最大値
            ulong ans = 0;
            long X = A[0];
            long Y = A[1];
            while(true){
              if(X*A[2]<Y) {
                X *= A[2];
                ans++;
                if(X<Y) {
                  ans++;
                  X+=A[3];
                } else {
                  break;
                }
              } else {
                break;
              }
            }
            Console.WriteLine(ans);

            Console.Out.Flush();
        }
    }
}
