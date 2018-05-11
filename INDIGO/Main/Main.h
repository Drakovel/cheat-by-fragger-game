#pragma once

#pragma warning(disable:4996)

#include <Windows.h>
#include <iostream>
#include <memory>
#include <fstream>
#include <string>
#include <map>
#include <vector>
#include <TlHelp32.h>
#include <WinInet.h>

using namespace std;

#pragma comment(lib, "wininet.lib")

#include "../config.h"
#include "../CSX/CSX.h"
#include "../SDK/SDK.h"

using namespace SDK;

#include "../Settings/Settings.h"
#include "../Engine/Engine.h"
#include "../Cheat/Client.h"
