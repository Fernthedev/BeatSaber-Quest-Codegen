// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVRSystem
#include "OVR/OpenVR/IVRSystem.hpp"
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
  // Forward declaring type: VREvent_t
  struct VREvent_t;
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
  // Autogenerated type: OVR.OpenVR.IVRSystem/_PollNextEvent
  // [UnmanagedFunctionPointerAttribute] Offset: DCD364
  class IVRSystem::_PollNextEvent : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _PollNextEvent
    _PollNextEvent() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x20B5968
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRSystem::_PollNextEvent* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRSystem::_PollNextEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRSystem::_PollNextEvent*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent)
    // Offset: 0x20B5978
    bool Invoke(OVR::OpenVR::VREvent_t& pEvent, uint uncbVREvent);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.VREvent_t pEvent, System.UInt32 uncbVREvent, System.AsyncCallback callback, System.Object object)
    // Offset: 0x20B5BF8
    System::IAsyncResult* BeginInvoke(OVR::OpenVR::VREvent_t& pEvent, uint uncbVREvent, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.VREvent_t pEvent, System.IAsyncResult result)
    // Offset: 0x20B5CAC
    bool EndInvoke(OVR::OpenVR::VREvent_t& pEvent, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRSystem/_PollNextEvent
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRSystem::_PollNextEvent*, "OVR.OpenVR", "IVRSystem/_PollNextEvent");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_PollNextEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_PollNextEvent::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRSystem::_PollNextEvent::*)(OVR::OpenVR::VREvent_t&, uint)>(&OVR::OpenVR::IVRSystem::_PollNextEvent::Invoke)> {
  const MethodInfo* get() {
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VREvent_t")->this_arg;
    static auto* uncbVREvent = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_PollNextEvent*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pEvent, uncbVREvent});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_PollNextEvent::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRSystem::_PollNextEvent::*)(OVR::OpenVR::VREvent_t&, uint, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRSystem::_PollNextEvent::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VREvent_t")->this_arg;
    static auto* uncbVREvent = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_PollNextEvent*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pEvent, uncbVREvent, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRSystem::_PollNextEvent::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRSystem::_PollNextEvent::*)(OVR::OpenVR::VREvent_t&, System::IAsyncResult*)>(&OVR::OpenVR::IVRSystem::_PollNextEvent::EndInvoke)> {
  const MethodInfo* get() {
    static auto* pEvent = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VREvent_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRSystem::_PollNextEvent*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pEvent, result});
  }
};
