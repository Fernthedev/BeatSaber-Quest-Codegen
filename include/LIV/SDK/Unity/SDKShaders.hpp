// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Forward declaring type: SDKShaders
  class SDKShaders;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LIV::SDK::Unity::SDKShaders);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKShaders*, "LIV.SDK.Unity", "SDKShaders");
// Type namespace: LIV.SDK.Unity
namespace LIV::SDK::Unity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LIV.SDK.Unity.SDKShaders
  // [TokenAttribute] Offset: FFFFFFFF
  class SDKShaders : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Int32 LIV_COLOR_MASK
    static int _get_LIV_COLOR_MASK();
    // Set static field: static public readonly System.Int32 LIV_COLOR_MASK
    static void _set_LIV_COLOR_MASK(int value);
    // Get static field: static public readonly System.Int32 LIV_TESSELLATION_PROPERTY
    static int _get_LIV_TESSELLATION_PROPERTY();
    // Set static field: static public readonly System.Int32 LIV_TESSELLATION_PROPERTY
    static void _set_LIV_TESSELLATION_PROPERTY(int value);
    // Get static field: static public readonly System.Int32 LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY
    static int _get_LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY();
    // Set static field: static public readonly System.Int32 LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY
    static void _set_LIV_CLIP_PLANE_HEIGHT_MAP_PROPERTY(int value);
    // static field const value: static public System.String LIV_MR_FOREGROUND_KEYWORD
    static constexpr const char* LIV_MR_FOREGROUND_KEYWORD = "LIV_MR_FOREGROUND";
    // Get static field: static public System.String LIV_MR_FOREGROUND_KEYWORD
    static ::StringW _get_LIV_MR_FOREGROUND_KEYWORD();
    // Set static field: static public System.String LIV_MR_FOREGROUND_KEYWORD
    static void _set_LIV_MR_FOREGROUND_KEYWORD(::StringW value);
    // static field const value: static public System.String LIV_MR_BACKGROUND_KEYWORD
    static constexpr const char* LIV_MR_BACKGROUND_KEYWORD = "LIV_MR_BACKGROUND";
    // Get static field: static public System.String LIV_MR_BACKGROUND_KEYWORD
    static ::StringW _get_LIV_MR_BACKGROUND_KEYWORD();
    // Set static field: static public System.String LIV_MR_BACKGROUND_KEYWORD
    static void _set_LIV_MR_BACKGROUND_KEYWORD(::StringW value);
    // static field const value: static public System.String LIV_MR_KEYWORD
    static constexpr const char* LIV_MR_KEYWORD = "LIV_MR";
    // Get static field: static public System.String LIV_MR_KEYWORD
    static ::StringW _get_LIV_MR_KEYWORD();
    // Set static field: static public System.String LIV_MR_KEYWORD
    static void _set_LIV_MR_KEYWORD(::StringW value);
    // static field const value: static public System.String LIV_CLIP_PLANE_SIMPLE_SHADER
    static constexpr const char* LIV_CLIP_PLANE_SIMPLE_SHADER = "Hidden/LIV_ClipPlaneSimple";
    // Get static field: static public System.String LIV_CLIP_PLANE_SIMPLE_SHADER
    static ::StringW _get_LIV_CLIP_PLANE_SIMPLE_SHADER();
    // Set static field: static public System.String LIV_CLIP_PLANE_SIMPLE_SHADER
    static void _set_LIV_CLIP_PLANE_SIMPLE_SHADER(::StringW value);
    // static field const value: static public System.String LIV_CLIP_PLANE_SIMPLE_DEBUG_SHADER
    static constexpr const char* LIV_CLIP_PLANE_SIMPLE_DEBUG_SHADER = "Hidden/LIV_ClipPlaneSimpleDebug";
    // Get static field: static public System.String LIV_CLIP_PLANE_SIMPLE_DEBUG_SHADER
    static ::StringW _get_LIV_CLIP_PLANE_SIMPLE_DEBUG_SHADER();
    // Set static field: static public System.String LIV_CLIP_PLANE_SIMPLE_DEBUG_SHADER
    static void _set_LIV_CLIP_PLANE_SIMPLE_DEBUG_SHADER(::StringW value);
    // static field const value: static public System.String LIV_CLIP_PLANE_COMPLEX_SHADER
    static constexpr const char* LIV_CLIP_PLANE_COMPLEX_SHADER = "Hidden/LIV_ClipPlaneComplex";
    // Get static field: static public System.String LIV_CLIP_PLANE_COMPLEX_SHADER
    static ::StringW _get_LIV_CLIP_PLANE_COMPLEX_SHADER();
    // Set static field: static public System.String LIV_CLIP_PLANE_COMPLEX_SHADER
    static void _set_LIV_CLIP_PLANE_COMPLEX_SHADER(::StringW value);
    // static field const value: static public System.String LIV_CLIP_PLANE_COMPLEX_DEBUG_SHADER
    static constexpr const char* LIV_CLIP_PLANE_COMPLEX_DEBUG_SHADER = "Hidden/LIV_ClipPlaneComplexDebug";
    // Get static field: static public System.String LIV_CLIP_PLANE_COMPLEX_DEBUG_SHADER
    static ::StringW _get_LIV_CLIP_PLANE_COMPLEX_DEBUG_SHADER();
    // Set static field: static public System.String LIV_CLIP_PLANE_COMPLEX_DEBUG_SHADER
    static void _set_LIV_CLIP_PLANE_COMPLEX_DEBUG_SHADER(::StringW value);
    // static field const value: static public System.String LIV_WRITE_OPAQUE_TO_ALPHA_SHADER
    static constexpr const char* LIV_WRITE_OPAQUE_TO_ALPHA_SHADER = "Hidden/LIV_WriteOpaqueToAlpha";
    // Get static field: static public System.String LIV_WRITE_OPAQUE_TO_ALPHA_SHADER
    static ::StringW _get_LIV_WRITE_OPAQUE_TO_ALPHA_SHADER();
    // Set static field: static public System.String LIV_WRITE_OPAQUE_TO_ALPHA_SHADER
    static void _set_LIV_WRITE_OPAQUE_TO_ALPHA_SHADER(::StringW value);
    // static field const value: static public System.String LIV_COMBINE_ALPHA_SHADER
    static constexpr const char* LIV_COMBINE_ALPHA_SHADER = "Hidden/LIV_CombineAlpha";
    // Get static field: static public System.String LIV_COMBINE_ALPHA_SHADER
    static ::StringW _get_LIV_COMBINE_ALPHA_SHADER();
    // Set static field: static public System.String LIV_COMBINE_ALPHA_SHADER
    static void _set_LIV_COMBINE_ALPHA_SHADER(::StringW value);
    // static field const value: static public System.String LIV_WRITE_SHADER
    static constexpr const char* LIV_WRITE_SHADER = "Hidden/LIV_Write";
    // Get static field: static public System.String LIV_WRITE_SHADER
    static ::StringW _get_LIV_WRITE_SHADER();
    // Set static field: static public System.String LIV_WRITE_SHADER
    static void _set_LIV_WRITE_SHADER(::StringW value);
    // static field const value: static public System.String LIV_FORCE_FORWARD_RENDERING_SHADER
    static constexpr const char* LIV_FORCE_FORWARD_RENDERING_SHADER = "Hidden/LIV_ForceForwardRendering";
    // Get static field: static public System.String LIV_FORCE_FORWARD_RENDERING_SHADER
    static ::StringW _get_LIV_FORCE_FORWARD_RENDERING_SHADER();
    // Set static field: static public System.String LIV_FORCE_FORWARD_RENDERING_SHADER
    static void _set_LIV_FORCE_FORWARD_RENDERING_SHADER(::StringW value);
    // static private System.Void .cctor()
    // Offset: 0x2A8F980
    static void _cctor();
    // static public System.Void StartRendering()
    // Offset: 0x2A8D72C
    static void StartRendering();
    // static public System.Void StopRendering()
    // Offset: 0x2A8D9F4
    static void StopRendering();
    // static public System.Void StartForegroundRendering()
    // Offset: 0x2A8DBC4
    static void StartForegroundRendering();
    // static public System.Void StopForegroundRendering()
    // Offset: 0x2A8DCF0
    static void StopForegroundRendering();
    // static public System.Void StartBackgroundRendering()
    // Offset: 0x2A8D778
    static void StartBackgroundRendering();
    // static public System.Void StopBackgroundRendering()
    // Offset: 0x2A8D9A8
    static void StopBackgroundRendering();
  }; // LIV.SDK.Unity.SDKShaders
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKShaders::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LIV::SDK::Unity::SDKShaders::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKShaders*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKShaders::StartRendering
// Il2CppName: StartRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LIV::SDK::Unity::SDKShaders::StartRendering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKShaders*), "StartRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKShaders::StopRendering
// Il2CppName: StopRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LIV::SDK::Unity::SDKShaders::StopRendering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKShaders*), "StopRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKShaders::StartForegroundRendering
// Il2CppName: StartForegroundRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LIV::SDK::Unity::SDKShaders::StartForegroundRendering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKShaders*), "StartForegroundRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKShaders::StopForegroundRendering
// Il2CppName: StopForegroundRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LIV::SDK::Unity::SDKShaders::StopForegroundRendering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKShaders*), "StopForegroundRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKShaders::StartBackgroundRendering
// Il2CppName: StartBackgroundRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LIV::SDK::Unity::SDKShaders::StartBackgroundRendering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKShaders*), "StartBackgroundRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LIV::SDK::Unity::SDKShaders::StopBackgroundRendering
// Il2CppName: StopBackgroundRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LIV::SDK::Unity::SDKShaders::StopBackgroundRendering)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LIV::SDK::Unity::SDKShaders*), "StopBackgroundRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
