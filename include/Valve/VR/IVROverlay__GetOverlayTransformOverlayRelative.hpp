// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Valve.VR.IVROverlay
#include "Valve/VR/IVROverlay.hpp"
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
  // Forward declaring type: EVROverlayError
  struct EVROverlayError;
  // Forward declaring type: HmdMatrix34_t
  struct HmdMatrix34_t;
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
  // Autogenerated type: Valve.VR.IVROverlay/_GetOverlayTransformOverlayRelative
  // [UnmanagedFunctionPointerAttribute] Offset: DD41E4
  class IVROverlay::_GetOverlayTransformOverlayRelative : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetOverlayTransformOverlayRelative
    _GetOverlayTransformOverlayRelative() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1FCAF4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_GetOverlayTransformOverlayRelative* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_GetOverlayTransformOverlayRelative*, creationType>(object, method)));
    }
    // public Valve.VR.EVROverlayError Invoke(System.UInt64 ulOverlayHandle, ref System.UInt64 ulOverlayHandleParent, ref Valve.VR.HmdMatrix34_t pmatParentOverlayToOverlayTransform)
    // Offset: 0x1FCAF5C
    Valve::VR::EVROverlayError Invoke(uint64_t ulOverlayHandle, uint64_t& ulOverlayHandleParent, Valve::VR::HmdMatrix34_t& pmatParentOverlayToOverlayTransform);
    // public System.IAsyncResult BeginInvoke(System.UInt64 ulOverlayHandle, ref System.UInt64 ulOverlayHandleParent, ref Valve.VR.HmdMatrix34_t pmatParentOverlayToOverlayTransform, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1FCB1F8
    System::IAsyncResult* BeginInvoke(uint64_t ulOverlayHandle, uint64_t& ulOverlayHandleParent, Valve::VR::HmdMatrix34_t& pmatParentOverlayToOverlayTransform, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public Valve.VR.EVROverlayError EndInvoke(ref System.UInt64 ulOverlayHandleParent, ref Valve.VR.HmdMatrix34_t pmatParentOverlayToOverlayTransform, System.IAsyncResult result)
    // Offset: 0x1FCB2C4
    Valve::VR::EVROverlayError EndInvoke(uint64_t& ulOverlayHandleParent, Valve::VR::HmdMatrix34_t& pmatParentOverlayToOverlayTransform, System::IAsyncResult* result);
  }; // Valve.VR.IVROverlay/_GetOverlayTransformOverlayRelative
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative*, "Valve.VR", "IVROverlay/_GetOverlayTransformOverlayRelative");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative::*)(uint64_t, uint64_t&, Valve::VR::HmdMatrix34_t&)>(&Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative::Invoke)> {
  const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* ulOverlayHandleParent = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* pmatParentOverlayToOverlayTransform = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix34_t")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative::*)(uint64_t, uint64_t&, Valve::VR::HmdMatrix34_t&, System::AsyncCallback*, ::Il2CppObject*)>(&Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* ulOverlayHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* ulOverlayHandleParent = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* pmatParentOverlayToOverlayTransform = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix34_t")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandle, ulOverlayHandleParent, pmatParentOverlayToOverlayTransform, callback, object});
  }
};
// Writing MetadataGetter for method: Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Valve::VR::EVROverlayError (Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative::*)(uint64_t&, Valve::VR::HmdMatrix34_t&, System::IAsyncResult*)>(&Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative::EndInvoke)> {
  const MethodInfo* get() {
    static auto* ulOverlayHandleParent = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    static auto* pmatParentOverlayToOverlayTransform = &::il2cpp_utils::GetClassFromName("Valve.VR", "HmdMatrix34_t")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Valve::VR::IVROverlay::_GetOverlayTransformOverlayRelative*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ulOverlayHandleParent, pmatParentOverlayToOverlayTransform, result});
  }
};
