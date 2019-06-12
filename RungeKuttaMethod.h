#ifndef __RungeKuttaMethod__
#define __RungeKuttaMethod__
template <class T>

class MathFunction;
class RungeKuttaODEMethod {
public:
   RungeKuttaODEMethod(MathFunction<double> &f);
  RungeKuttaODEMethod(const RungeKuttaODEMethod &p);
  ~RungeKuttaODEMethod();
  RungeKuttaODEMethod &operator=(const RungeKuttaODEMethod &p);
  double solve(int n, double x0, double y0, double c);

private:
   MathFunction<double> &m_f;
};

#endif /* defined(__RungeKuttaMethod__) */
