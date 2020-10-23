using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ABC180.Abc
{
    public class QuestionA
    {
        public static void Main(string[] args)
        {
            var sw = new System.IO.StreamWriter(Console.OpenStandardOutput()) { AutoFlush = false };
            Console.SetOut(sw);
            
            // 整数配列の入力
            var NAB = Console.ReadLine().Split(' ').Select(i => long.Parse(i)).ToArray();
            long ans = NAB[0] - NAB[1] + NAB[2];

            Console.WriteLine(ans);

            Console.Out.Flush();
        }
    }
}
