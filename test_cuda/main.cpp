#include "main.h"
#include <iostream>
#include "cuda_runtime.h"
#include "device_launch_parameters.h"
//#include "kernel.cu"

using std::cout;
using std::endl;
using std::string;


int main()
{
	cudaError_t cudaStatus;
	int nGPUNum = 0;
	cudaStatus = cudaGetDeviceCount(&nGPUNum);
	if (cudaStatus != cudaSuccess || nGPUNum ==0)
	{
		cout << "cudaGetDeviceCount Fail " << cudaStatus << endl;
		return 0;
	}

	cudaDeviceProp* cudaDeviceList = new cudaDeviceProp[nGPUNum];
	for (int i = 0; i < nGPUNum; ++i)
	{
		cudaStatus = cudaGetDeviceProperties(&cudaDeviceList[i], i);
		if (cudaStatus != cudaSuccess)
		{
			cout << "cudaGetDeviceProperties Fail " << cudaStatus << endl;
		}
		cout << cudaDeviceList[0].maxThreadsPerMultiProcessor
	}
	delete[] cudaDeviceList;

	return 0;
}