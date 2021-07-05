// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
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
  // Autogenerated type: Valve.VR.IVRSystem/_GetEyeToHeadTransform
  // [UnmanagedFunctionPointerAttribute] Offset: DD3258
  class IVRSystem::_GetEyeToHeadTransform : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetEyeToHeadTransform
    _GetEyeToHeadTransform() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1C9750C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_GetEyeToHeadTransform* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVRSystem::_GetEyeToHeadTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_GetEyeToHeadTransform*, creationType>(object, method)));
    }
    // public Valve.VR.HmdMatrix34_t Invoke(Valve.VR.EVREye eEye)
    // Offset: 0x1C9751C
    Valve::VR::HmdMatrix34_t Invoke(Valve::VR::EVREye eEye);
    // public System.IAsyncResult BeginInvoke(Valve.VR.EVREye eEye, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1C977E4
    System::IAsyncResult* BeginInvoke(Valve::VR::EVREye eEye, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.HmdMatrix34_t EndInvoke(System.IAsyncResult result)
    // Offset: 0x1C97870
    Valve::VR::HmdMatrix34_t EndInvoke(System::IAsyncResult* result);
  }; // Valve.VR.IVRSystem/_GetEyeToHeadTransform
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVRSystem::_GetEyeToHeadTransform*, "Valve.VR", "IVRSystem/_GetEyeToHeadTransform");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetEyeToHeadTransform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetEyeToHeadTransform::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::HmdMatrix34_t (Valve::VR::IVRSystem::_GetEyeToHeadTransform::*)(Valve::VR::EVREye)>(&Valve::VR::IVRSystem::_GetEyeToHeadTransform::Invoke)> {
  const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetEyeToHeadTransform*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetEyeToHeadTransform::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVRSystem::_GetEyeToHeadTransform::*)(Valve::VR::EVREye, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVRSystem::_GetEyeToHeadTransform::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* eEye = &::il2cpp_utils::GetClassFromName("Valve.VR", "EVREye")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetEyeToHeadTransform*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eEye, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVRSystem::_GetEyeToHeadTransform::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::HmdMatrix34_t (Valve::VR::IVRSystem::_GetEyeToHeadTransform::*)(System::IAsyncResult*)>(&Valve::VR::IVRSystem::_GetEyeToHeadTransform::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVRSystem::_GetEyeToHeadTransform*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
