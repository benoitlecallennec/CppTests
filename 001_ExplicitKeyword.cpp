//! [ExplicitKeyword ExplicitKeyword]
class Real3
{
	double x, y ,z;
};

class EulerAngles : public Real3
{
public:
	explicit EulerAngles(double x=0, double y=0, double z=0){}; 
	explicit EulerAngles(const Real3 &r){};

	void EulerOnlyMethod(const EulerAngles &ea){};
};

int main()
{
	EulerAngles ea;
	
	// error C2679: binary '=' : no operator found which takes a right-hand operand of type 'double'
	// ea = 12.3; 
	ea = static_cast<EulerAngles>(12.3); // OK

	Real3 r;
	// error C2664: 'EulerAngles::EulerOnlyMethod' : cannot convert parameter 1 from 'Real3' to 'const EulerAngles &'
	// ea.EulerOnlyMethod(r); 
	ea.EulerOnlyMethod(static_cast<EulerAngles>(r)); // OK

	return 0;
}
//! [ExplicitKeyword ExplicitKeyword]