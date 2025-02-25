// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Valve.VR.IVRSystem
#include "Valve/VR/IVRSystem.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Valve::VR
namespace Valve::VR {
  // Forward declaring type: HmdMatrix44_t
  struct HmdMatrix44_t;
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
// Type namespace: Valve.VR
namespace Valve::VR {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Valve.VR.IVRSystem/Valve.VR._GetProjectionMatrix
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF7B3C
  class IVRSystem::_GetProjectionMatrix : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetProjectionMatrix
    _GetProjectionMatrix() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1D506B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetProjectionMatrix* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetProjectionMatrix::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetProjectionMatrix*, creationType>(object, method)));
    }
    // public Valve.VR.HmdMatrix44_t Invoke(Valve.VR.EVREye eEye, System.Single fNearZ, System.Single fFarZ)
    // Offset: 0x1D506C8
    Valve::VR::HmdMatrix44_t Invoke(Valve::VR::EVREye eEye, float fNearZ, float fFarZ);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, System.Single fNearZ, System.Single fFarZ, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1D509D4
    System::IAsyncResult* BeginInvoke(Valve::VR::EVREye eEye, float fNearZ, float fFarZ, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.HmdMatrix44_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x1D50A94
    Valve::VR::HmdMatrix44_t EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/Valve.VR._GetProjectionMatrix
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetProjectionMatrix*, "Valve.VR", "IVRSystem/_GetProjectionMatrix");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetProjectionMatrix::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetProjectionMatrix::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::HmdMatrix44_t (Valve::VR::IVRSystem::_GetProjectionMatrix::*)(Valve::VR::EVREye, float, float)>(&Valve::VR::IVRSystem::_GetProjectionMatrix::Invoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* fNearZ = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fFarZ = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetProjectionMatrix*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, fNearZ, fFarZ});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetProjectionMatrix::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_GetProjectionMatrix::*)(Valve::VR::EVREye, float, float, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetProjectionMatrix::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* fNearZ = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fFarZ = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetProjectionMatrix*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, fNearZ, fFarZ, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetProjectionMatrix::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::HmdMatrix44_t (Valve::VR::IVRSystem::_GetProjectionMatrix::*)(System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetProjectionMatrix::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetProjectionMatrix*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
