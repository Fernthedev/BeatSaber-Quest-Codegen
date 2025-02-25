// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.GraphicsDeviceType
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: DB7000
  struct GraphicsDeviceType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: GraphicsDeviceType
    constexpr GraphicsDeviceType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // [ObsoleteAttribute] Offset: 0xDB9A64
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType OpenGL2
    static constexpr const int OpenGL2 = 0;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType OpenGL2
    static UnityEngine::Rendering::GraphicsDeviceType _get_OpenGL2();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType OpenGL2
    static void _set_OpenGL2(UnityEngine::Rendering::GraphicsDeviceType value);
    // [ObsoleteAttribute] Offset: 0xDB9A9C
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType Direct3D9
    static constexpr const int Direct3D9 = 1;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType Direct3D9
    static UnityEngine::Rendering::GraphicsDeviceType _get_Direct3D9();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType Direct3D9
    static void _set_Direct3D9(UnityEngine::Rendering::GraphicsDeviceType value);
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType Direct3D11
    static constexpr const int Direct3D11 = 2;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType Direct3D11
    static UnityEngine::Rendering::GraphicsDeviceType _get_Direct3D11();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType Direct3D11
    static void _set_Direct3D11(UnityEngine::Rendering::GraphicsDeviceType value);
    // [ObsoleteAttribute] Offset: 0xDB9AD4
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType PlayStation3
    static constexpr const int PlayStation3 = 3;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType PlayStation3
    static UnityEngine::Rendering::GraphicsDeviceType _get_PlayStation3();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType PlayStation3
    static void _set_PlayStation3(UnityEngine::Rendering::GraphicsDeviceType value);
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType Null
    static constexpr const int Null = 4;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType Null
    static UnityEngine::Rendering::GraphicsDeviceType _get_Null();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType Null
    static void _set_Null(UnityEngine::Rendering::GraphicsDeviceType value);
    // [ObsoleteAttribute] Offset: 0xDB9B0C
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType Xbox360
    static constexpr const int Xbox360 = 6;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType Xbox360
    static UnityEngine::Rendering::GraphicsDeviceType _get_Xbox360();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType Xbox360
    static void _set_Xbox360(UnityEngine::Rendering::GraphicsDeviceType value);
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType OpenGLES2
    static constexpr const int OpenGLES2 = 8;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType OpenGLES2
    static UnityEngine::Rendering::GraphicsDeviceType _get_OpenGLES2();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType OpenGLES2
    static void _set_OpenGLES2(UnityEngine::Rendering::GraphicsDeviceType value);
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType OpenGLES3
    static constexpr const int OpenGLES3 = 11;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType OpenGLES3
    static UnityEngine::Rendering::GraphicsDeviceType _get_OpenGLES3();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType OpenGLES3
    static void _set_OpenGLES3(UnityEngine::Rendering::GraphicsDeviceType value);
    // [ObsoleteAttribute] Offset: 0xDB9B44
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType PlayStationVita
    static constexpr const int PlayStationVita = 12;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType PlayStationVita
    static UnityEngine::Rendering::GraphicsDeviceType _get_PlayStationVita();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType PlayStationVita
    static void _set_PlayStationVita(UnityEngine::Rendering::GraphicsDeviceType value);
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType PlayStation4
    static constexpr const int PlayStation4 = 13;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType PlayStation4
    static UnityEngine::Rendering::GraphicsDeviceType _get_PlayStation4();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType PlayStation4
    static void _set_PlayStation4(UnityEngine::Rendering::GraphicsDeviceType value);
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType XboxOne
    static constexpr const int XboxOne = 14;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType XboxOne
    static UnityEngine::Rendering::GraphicsDeviceType _get_XboxOne();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType XboxOne
    static void _set_XboxOne(UnityEngine::Rendering::GraphicsDeviceType value);
    // [ObsoleteAttribute] Offset: 0xDB9B7C
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType PlayStationMobile
    static constexpr const int PlayStationMobile = 15;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType PlayStationMobile
    static UnityEngine::Rendering::GraphicsDeviceType _get_PlayStationMobile();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType PlayStationMobile
    static void _set_PlayStationMobile(UnityEngine::Rendering::GraphicsDeviceType value);
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType Metal
    static constexpr const int Metal = 16;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType Metal
    static UnityEngine::Rendering::GraphicsDeviceType _get_Metal();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType Metal
    static void _set_Metal(UnityEngine::Rendering::GraphicsDeviceType value);
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType OpenGLCore
    static constexpr const int OpenGLCore = 17;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType OpenGLCore
    static UnityEngine::Rendering::GraphicsDeviceType _get_OpenGLCore();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType OpenGLCore
    static void _set_OpenGLCore(UnityEngine::Rendering::GraphicsDeviceType value);
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType Direct3D12
    static constexpr const int Direct3D12 = 18;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType Direct3D12
    static UnityEngine::Rendering::GraphicsDeviceType _get_Direct3D12();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType Direct3D12
    static void _set_Direct3D12(UnityEngine::Rendering::GraphicsDeviceType value);
    // [ObsoleteAttribute] Offset: 0xDB9BB4
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType N3DS
    static constexpr const int N3DS = 19;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType N3DS
    static UnityEngine::Rendering::GraphicsDeviceType _get_N3DS();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType N3DS
    static void _set_N3DS(UnityEngine::Rendering::GraphicsDeviceType value);
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType Vulkan
    static constexpr const int Vulkan = 21;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType Vulkan
    static UnityEngine::Rendering::GraphicsDeviceType _get_Vulkan();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType Vulkan
    static void _set_Vulkan(UnityEngine::Rendering::GraphicsDeviceType value);
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType Switch
    static constexpr const int Switch = 22;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType Switch
    static UnityEngine::Rendering::GraphicsDeviceType _get_Switch();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType Switch
    static void _set_Switch(UnityEngine::Rendering::GraphicsDeviceType value);
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType XboxOneD3D12
    static constexpr const int XboxOneD3D12 = 23;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType XboxOneD3D12
    static UnityEngine::Rendering::GraphicsDeviceType _get_XboxOneD3D12();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType XboxOneD3D12
    static void _set_XboxOneD3D12(UnityEngine::Rendering::GraphicsDeviceType value);
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType GameCoreXboxOne
    static constexpr const int GameCoreXboxOne = 24;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType GameCoreXboxOne
    static UnityEngine::Rendering::GraphicsDeviceType _get_GameCoreXboxOne();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType GameCoreXboxOne
    static void _set_GameCoreXboxOne(UnityEngine::Rendering::GraphicsDeviceType value);
    // [ObsoleteAttribute] Offset: 0xDB9BEC
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType GameCoreScarlett
    static constexpr const int GameCoreScarlett = 25;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType GameCoreScarlett
    static UnityEngine::Rendering::GraphicsDeviceType _get_GameCoreScarlett();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType GameCoreScarlett
    static void _set_GameCoreScarlett(UnityEngine::Rendering::GraphicsDeviceType value);
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType GameCoreXboxSeries
    static constexpr const int GameCoreXboxSeries = 25;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType GameCoreXboxSeries
    static UnityEngine::Rendering::GraphicsDeviceType _get_GameCoreXboxSeries();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType GameCoreXboxSeries
    static void _set_GameCoreXboxSeries(UnityEngine::Rendering::GraphicsDeviceType value);
    // static field const value: static public UnityEngine.Rendering.GraphicsDeviceType PlayStation5
    static constexpr const int PlayStation5 = 26;
    // Get static field: static public UnityEngine.Rendering.GraphicsDeviceType PlayStation5
    static UnityEngine::Rendering::GraphicsDeviceType _get_PlayStation5();
    // Set static field: static public UnityEngine.Rendering.GraphicsDeviceType PlayStation5
    static void _set_PlayStation5(UnityEngine::Rendering::GraphicsDeviceType value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // UnityEngine.Rendering.GraphicsDeviceType
  #pragma pack(pop)
  static check_size<sizeof(GraphicsDeviceType), 0 + sizeof(int)> __UnityEngine_Rendering_GraphicsDeviceTypeSizeCheck;
  static_assert(sizeof(GraphicsDeviceType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::GraphicsDeviceType, "UnityEngine.Rendering", "GraphicsDeviceType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
