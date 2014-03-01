// MathFuncsDll.h

namespace ArrayClassNS
{
    class ArrayClass
    {
    public:
        // Returns index of key found
        static __declspec(dllexport) int binary_search(int *array_data, int key, int min, int max);
    };
}
