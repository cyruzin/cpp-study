#ifndef H_CALC
#define H_CALC

#ifdef __cplusplus
extern "C"
{
#endif

#ifdef BUILD_DLL
#define CALC_LIB __declspec(dllexport)
#else
#define CALC_LIB __declspec(dllexport)
#endif

  namespace Calc
  {
    class Math
    {
    public:
      Math();
      int sum(int x, int y);
      int multiply(int x, int y);
    };
  } // namespace Calc

#ifdef __cplusplus
}
#endif

#endif // H_CALC