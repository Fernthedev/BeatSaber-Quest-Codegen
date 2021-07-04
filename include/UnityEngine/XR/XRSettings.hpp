// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.XRSettings
  // [NativeConditionalAttribute] Offset: DC8DC4
  // [NativeHeaderAttribute] Offset: DC8DC4
  // [NativeHeaderAttribute] Offset: DC8DC4
  // [NativeHeaderAttribute] Offset: DC8DC4
  // [NativeHeaderAttribute] Offset: DC8DC4
  class XRSettings : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: XRSettings
    XRSettings() noexcept {}
    // static public System.Boolean get_enabled()
    // Offset: 0x23F0F74
    static bool get_enabled();
    // static public System.Boolean get_showDeviceView()
    // Offset: 0x23F0FA8
    static bool get_showDeviceView();
    // static public System.Void set_showDeviceView(System.Boolean value)
    // Offset: 0x23F0FDC
    static void set_showDeviceView(bool value);
    // static public System.Single get_eyeTextureResolutionScale()
    // Offset: 0x23F101C
    static float get_eyeTextureResolutionScale();
    // static public System.Void set_eyeTextureResolutionScale(System.Single value)
    // Offset: 0x23F1050
    static void set_eyeTextureResolutionScale(float value);
    // static public System.Int32 get_eyeTextureWidth()
    // Offset: 0x23F1094
    static int get_eyeTextureWidth();
    // static public System.Int32 get_eyeTextureHeight()
    // Offset: 0x23F10C8
    static int get_eyeTextureHeight();
    // static public System.Single get_renderViewportScale()
    // Offset: 0x23F10FC
    static float get_renderViewportScale();
    // static public System.Void set_renderViewportScale(System.Single value)
    // Offset: 0x23F1164
    static void set_renderViewportScale(float value);
    // static System.Single get_renderViewportScaleInternal()
    // Offset: 0x23F1130
    static float get_renderViewportScaleInternal();
    // static System.Void set_renderViewportScaleInternal(System.Single value)
    // Offset: 0x23F1228
    static void set_renderViewportScaleInternal(float value);
    // static public System.String get_loadedDeviceName()
    // Offset: 0x23F126C
    static ::Il2CppString* get_loadedDeviceName();
  }; // UnityEngine.XR.XRSettings
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRSettings*, "UnityEngine.XR", "XRSettings");
// Writing includes for template specializations
// Writing MetadataGetter for method: UnityEngine::XR::XRSettings::get_enabled
// Il2CppName: get_enabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::XR::XRSettings::get_enabled)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRSettings*), "get_enabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRSettings::get_showDeviceView
// Il2CppName: get_showDeviceView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::XR::XRSettings::get_showDeviceView)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRSettings*), "get_showDeviceView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRSettings::set_showDeviceView
// Il2CppName: set_showDeviceView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&UnityEngine::XR::XRSettings::set_showDeviceView)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRSettings*), "set_showDeviceView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<bool>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRSettings::get_eyeTextureResolutionScale
// Il2CppName: get_eyeTextureResolutionScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::XR::XRSettings::get_eyeTextureResolutionScale)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRSettings*), "get_eyeTextureResolutionScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRSettings::set_eyeTextureResolutionScale
// Il2CppName: set_eyeTextureResolutionScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&UnityEngine::XR::XRSettings::set_eyeTextureResolutionScale)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRSettings*), "set_eyeTextureResolutionScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRSettings::get_eyeTextureWidth
// Il2CppName: get_eyeTextureWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::XR::XRSettings::get_eyeTextureWidth)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRSettings*), "get_eyeTextureWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRSettings::get_eyeTextureHeight
// Il2CppName: get_eyeTextureHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&UnityEngine::XR::XRSettings::get_eyeTextureHeight)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRSettings*), "get_eyeTextureHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRSettings::get_renderViewportScale
// Il2CppName: get_renderViewportScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::XR::XRSettings::get_renderViewportScale)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRSettings*), "get_renderViewportScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRSettings::set_renderViewportScale
// Il2CppName: set_renderViewportScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&UnityEngine::XR::XRSettings::set_renderViewportScale)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRSettings*), "set_renderViewportScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRSettings::get_renderViewportScaleInternal
// Il2CppName: get_renderViewportScaleInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)()>(&UnityEngine::XR::XRSettings::get_renderViewportScaleInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRSettings*), "get_renderViewportScaleInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRSettings::set_renderViewportScaleInternal
// Il2CppName: set_renderViewportScaleInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float)>(&UnityEngine::XR::XRSettings::set_renderViewportScaleInternal)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRSettings*), "set_renderViewportScaleInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<float>()});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRSettings::get_loadedDeviceName
// Il2CppName: get_loadedDeviceName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (*)()>(&UnityEngine::XR::XRSettings::get_loadedDeviceName)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRSettings*), "get_loadedDeviceName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
