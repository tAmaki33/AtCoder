using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ABC180.Abc
{
    class QuestionB
    {
        public static void Main(string[] args)
        {
            var sw = new System.IO.StreamWriter(Console.OpenStandardOutput()) { AutoFlush = false };
            Console.SetOut(sw);

            long N = long.Parse(Console.ReadLine());
            var X = Console.ReadLine().Split(' ').Select(i => long.Parse(i)).ToArray();

            long m=0;
            long y=0;
            long c=0;
            long absX;
            for(int i=0;i<N;++i){
              absX = Math.Abs(X[i]);
              m += absX;
              y +=  absX*absX;
              if(c < absX) c = absX;
            }
            
            string ans = m+"\n"+Math.Sqrt((double)y)+"\n"+c;

            Console.WriteLine(ans);

            Console.Out.Flush();
        }
    }
}
