#pragma once
#include <windows.h>
#include <wrl.h>
#include <dxgi1_4.h>
#include <d3d12.h>
#include <D3Dcompiler.h>
#include <DirectXMath.h>
#include <DirectXPackedVector.h>
#include <DirectXColors.h>
#include <DirectXCollision.h>
#include <string>
#include <memory>
#include <algorithm>
#include <vector>
#include <array>
#include <unordered_map>
#include <cstdint>
#include <fstream>
#include <sstream>
#include <cassert>
#include <assert.h>
#include <winerror.h>
#include <float.h>
#include <cmath>
#include <d3d11_1.h>
#include "d3dx12.h"
#include "d3dUtil.h"
#include <comdef.h>
#include <fstream>
#include <WindowsX.h>
#include <random>
#include <chrono>

#include "Camera.h"
#include "DDSTextureLoader.h"
#include "Textures.h"
#include "Materials.h"
#include "FbxLoader.h"
#include "FBXGenerator.h"
#include "FrameResource.h"
#include "vertexHash.h"
#include "GameTimer.h"
#include "GeometryGenerator.h"
#include "PlayerCamera.h"
#include "RenderNode.h"
#include "Renderer.h"
#include "TextureLoader.h"
#include "Utility.h"
#include "FBXRenderer.h"

#pragma warning (disable : 4244)

typedef LRESULT(*MsgProc_Callback)(HWND, UINT, WPARAM, LPARAM);