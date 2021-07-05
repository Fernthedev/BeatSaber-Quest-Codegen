// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRChaperone
#include "OVR/OpenVR/IVRChaperone.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: HmdColor_t
  struct HmdColor_t;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRChaperone/_GetBoundsColor
  // [UnmanagedFunctionPointerAttribute] Offset: DCD8B4
  class IVRChaperone::_GetBoundsColor : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetBoundsColor
    _GetBoundsColor() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x15B5568
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRChaperone::_GetBoundsColor* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRChaperone::_GetBoundsColor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRChaperone::_GetBoundsColor*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref OVR.OpenVR.HmdColor_t pOutputColorArray, System.Int32 nNumOutputColors, System.Single flCollisionBoundsFadeDistance, ref OVR.OpenVR.HmdColor_t pOutputCameraColor)
    // Offset: 0x15AB400
    void Invoke(OVR::OpenVR::HmdColor_t& pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, OVR::OpenVR::HmdColor_t& pOutputCameraColor);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.HmdColor_t pOutputColorArray, System.Int32 nNumOutputColors, System.Single flCollisionBoundsFadeDistance, ref OVR.OpenVR.HmdColor_t pOutputCameraColor, System.AsyncCallback callback, System.Object object)
    // Offset: 0x15B5578
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::HmdColor_t& pOutputColorArray, int nNumOutputColors, float flCollisionBoundsFadeDistance, OVR::OpenVR::HmdColor_t& pOutputCameraColor, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref OVR.OpenVR.HmdColor_t pOutputColorArray, ref OVR.OpenVR.HmdColor_t pOutputCameraColor, System.IAsyncResult result)
    // Offset: 0x15B5664
    void EndInvoke(OVR::OpenVR::HmdColor_t& pOutputColorArray, OVR::OpenVR::HmdColor_t& pOutputCameraColor, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRChaperone/_GetBoundsColor
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRChaperone::_GetBoundsColor*, "OVR.OpenVR", "IVRChaperone/_GetBoundsColor");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetBoundsColor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetBoundsColor::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRChaperone::_GetBoundsColor::*)(OVR::OpenVR::HmdColor_t&, int, float, OVR::OpenVR::HmdColor_t&)>(&OVR::OpenVR::IVRChaperone::_GetBoundsColor::Invoke)> {
  const MethodInfo* get() {
    static auto* pOutputColorArray = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdColor_t")->this_arg;
    static auto* nNumOutputColors = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flCollisionBoundsFadeDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pOutputCameraColor = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdColor_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_GetBoundsColor*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutputColorArray, nNumOutputColors, flCollisionBoundsFadeDistance, pOutputCameraColor});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetBoundsColor::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRChaperone::_GetBoundsColor::*)(OVR::OpenVR::HmdColor_t&, int, float, OVR::OpenVR::HmdColor_t&, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRChaperone::_GetBoundsColor::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* pOutputColorArray = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdColor_t")->this_arg;
    static auto* nNumOutputColors = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* flCollisionBoundsFadeDistance = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pOutputCameraColor = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdColor_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_GetBoundsColor*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutputColorArray, nNumOutputColors, flCollisionBoundsFadeDistance, pOutputCameraColor, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRChaperone::_GetBoundsColor::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRChaperone::_GetBoundsColor::*)(OVR::OpenVR::HmdColor_t&, OVR::OpenVR::HmdColor_t&, System::IAsyncResult*)>(&OVR::OpenVR::IVRChaperone::_GetBoundsColor::EndInvoke)> {
  const MethodInfo* get() {
    static auto* pOutputColorArray = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdColor_t")->this_arg;
    static auto* pOutputCameraColor = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "HmdColor_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRChaperone::_GetBoundsColor*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pOutputColorArray, pOutputCameraColor, result});
  }
};
