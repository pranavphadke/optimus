// Adaptive control response(ACR) for adjusting AIS controlled velocity effectiveness.
// lmvUc= nth state left motor velocity from AIS; rmvUc= nth state right motor velocity from AIS.
// lmvCp= n-1 state left motor velocity from ACR; rmvCp= n-1 state right motor velocity from ACR.
// mF= multiplying factor from zFunction with distance to closest obstacle as the variable.
// cr[0]=delta for left motor; cr[1]= delta for right motor;

double *acr(ArRobot *thisRobot,double cr[2],double lmvUc,double rmvUc,double mF, double lmvCp,double rmvCp)
{
	cr[0]=lmvCp+(mF*(lmvUc-lmvCp));
	cr[1]=rmvCp+(mF*(rmvUc-rmvCp));
	return cr;
}