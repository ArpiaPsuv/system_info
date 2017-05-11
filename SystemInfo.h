#pragma once
#include <iostream>
#include <vector>
#include <string.h>
#include "appconst.h"
using namespace std;
class SystemInfo
{
private:

	SystemInfo()
	{
			this->OS = L"OS not detected";
			this->RAM = L"Motherboard not detected";
			this->audio = L"Sound card not detected";
			this->uptime = L"Uptime not set";
	}
	wstring OS;
	wstring CPU;
	wstring MB;
	wstring RAM;
	vector<wstring> GPUDevices;
	vector<wstring> storageMediums;
	vector<wstring> displayDevices;
	vector<wstring> CDROMDevices;
	wstring audio;
	wstring uptime;
public:
	static SystemInfo *getCurrentInstance()
	{
		static SystemInfo *currentInstance = new SystemInfo();
		return currentInstance;
	}
	vector<wstring> getCDROMDevices(void);
	wstring  getUptime(void);
	wstring  getCPU(void);
	wstring  getRAM(void);
	wstring  getMB(void);
	wstring  getAudio(void);
	vector<wstring> getGPUDevices(void);
	vector<wstring> getStorageMediums(void);
	vector<wstring> getDisplayDevices(void);
	wstring getOS(void);
	void setUptime(wstring uptime);
	void setCPU(wstring CPU);
	void setRAM(wstring RAM);
	void setMB(wstring MB);
	void addDisplayDevice(wstring device);
	void addStorageMedium(wstring medium);
	void addGPUDevice(wstring device);
	void setOS(wstring OS);
	void setAudio(wstring audio);
	void addCDROMDevice(wstring CDROM);
};

