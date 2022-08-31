// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVREye
  struct EVREye;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::IVRSystem::_GetProjectionRaw);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRSystem::_GetProjectionRaw*, "OVR.OpenVR", "IVRSystem/_GetProjectionRaw");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.IVRSystem/OVR.OpenVR._GetProjectionRaw
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: 1099E88
  class IVRSystem::_GetProjectionRaw : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x275A290
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetProjectionRaw* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::IVRSystem::_GetProjectionRaw::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetProjectionRaw*, creationType>(object, method)));
    }
    // public System.Void Invoke(OVR.OpenVR.EVREye eEye, ref System.Single pfLeft, ref System.Single pfRight, ref System.Single pfTop, ref System.Single pfBottom)
    // Offset: 0x275A2A0
    void Invoke(::OVR::OpenVR::EVREye eEye, ByRef<float> pfLeft, ByRef<float> pfRight, ByRef<float> pfTop, ByRef<float> pfBottom);
    // public System.IAsyncResult BeginInvoke(OVR.OpenVR.EVREye eEye, ref System.Single pfLeft, ref System.Single pfRight, ref System.Single pfTop, ref System.Single pfBottom, System.AsyncCallback callback, System.Object object)
    // Offset: 0x275A590
    ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ByRef<float> pfLeft, ByRef<float> pfRight, ByRef<float> pfTop, ByRef<float> pfBottom, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(ref System.Single pfLeft, ref System.Single pfRight, ref System.Single pfTop, ref System.Single pfBottom, System.IAsyncResult result)
    // Offset: 0x275A694
    void EndInvoke(ByRef<float> pfLeft, ByRef<float> pfRight, ByRef<float> pfTop, ByRef<float> pfBottom, ::System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/OVR.OpenVR._GetProjectionRaw
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetProjectionRaw::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetProjectionRaw::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRSystem::_GetProjectionRaw::*)(::OVR::OpenVR::EVREye, ByRef<float>, ByRef<float>, ByRef<float>, ByRef<float>)>(&OVR::OpenVR::IVRSystem::_GetProjectionRaw::Invoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVREye")->byval_arg;
    static auto* pfLeft = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfRight = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfTop = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfBottom = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetProjectionRaw*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, pfLeft, pfRight, pfTop, pfBottom});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetProjectionRaw::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (OVR::OpenVR::IVRSystem::_GetProjectionRaw::*)(::OVR::OpenVR::EVREye, ByRef<float>, ByRef<float>, ByRef<float>, ByRef<float>, ::System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_GetProjectionRaw::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVREye")->byval_arg;
    static auto* pfLeft = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfRight = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfTop = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfBottom = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetProjectionRaw*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, pfLeft, pfRight, pfTop, pfBottom, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_GetProjectionRaw::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVRSystem::_GetProjectionRaw::*)(ByRef<float>, ByRef<float>, ByRef<float>, ByRef<float>, ::System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_GetProjectionRaw::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pfLeft = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfRight = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfTop = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* pfBottom = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_GetProjectionRaw*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pfLeft, pfRight, pfTop, pfBottom, result});
  }
};
