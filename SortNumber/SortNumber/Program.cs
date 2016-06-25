using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SortNumber
{
    class SortAlogrithm
    {
        
        void BigSort(ref Object First, ref Object Second)
        {

        }



        static void Main(string[] args)
        {
            int Size = int.Parse( Console.ReadLine() );
            int[] array = new int[Size];
            String tempNum;
            for(int i = 0;i < array.Length; ++i)
            {
                tempNum = Console.ReadLine();
                if (tempNum != null)
                {
                    array[i] = int.Parse( tempNum );
                }
            }

            foreach(int num in array)
                Console.WriteLine("NUM:" + num);
            Console.ReadKey();

        }
    }
}
