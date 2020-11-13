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

  class Calc
  {
  public:
    Calc();
    int sum(int x, int y);
    int multiply(int x, int y);
  };

#ifdef __cplusplus
}
#endif

#endif // H_CALC