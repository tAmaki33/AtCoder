using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ABC180.Abc
{
    class QuestionC
    {
        public static void Main(string[] args)
        {
            var sw = new System.IO.StreamWriter(Console.OpenStandardOutput()) { AutoFlush = false };
            Console.SetOut(sw);

            long N = long.Parse(Console.ReadLine());
            List<long> divisor = new List<long>();
            for(long i=1;i*i<=N;i++){
              
              if(N%i==0){
                divisor.Add(i);
                if(i*i != N) {
                  divisor.Add(N/i);
                }
              }
            }

            divisor.Sort();
            for(int i=0;i<divisor.Count;i++){
              Console.WriteLine(divisor[i]);
            }

            Console.Out.Flush();
        }
    }
}
