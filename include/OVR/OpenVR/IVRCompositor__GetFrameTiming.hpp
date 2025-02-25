// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRCompositor
#include "OVR/OpenVR/IVRCompositor.hpp"
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
  // Forward declaring type: Compositor_FrameTiming
  struct Compositor_FrameTiming;
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
  // Autogenerated type: OVR.OpenVR.IVRCompositor/OVR.OpenVR._GetFrameTiming
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: DF3440
  class IVRCompositor::_GetFrameTiming : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _GetFrameTiming
    _GetFrameTiming() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1F538B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVRCompositor::_GetFrameTiming* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVRCompositor::_GetFrameTiming::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVRCompositor::_GetFrameTiming*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(ref OVR.OpenVR.Compositor_FrameTiming pTiming, System.UInt32 unFramesAgo)
    // Offset: 0x1F538C0
    bool Invoke(ByRef<OVR::OpenVR::Compositor_FrameTiming> pTiming, uint unFramesAgo);
    // public System.IAsyncResult BeginInvoke(ref OVR.OpenVR.Compositor_FrameTiming pTiming, System.UInt32 unFramesAgo, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1F53B40
    System::IAsyncResult* BeginInvoke(ByRef<OVR::OpenVR::Compositor_FrameTiming> pTiming, uint unFramesAgo, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(ref OVR.OpenVR.Compositor_FrameTiming pTiming, System.IAsyncResult result)
    // Offset: 0x1F53BF4
    bool EndInvoke(ByRef<OVR::OpenVR::Compositor_FrameTiming> pTiming, System::IAsyncResult* result);
  }; // OVR.OpenVR.IVRCompositor/OVR.OpenVR._GetFrameTiming
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVRCompositor::_GetFrameTiming*, "OVR.OpenVR", "IVRCompositor/_GetFrameTiming");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetFrameTiming::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetFrameTiming::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRCompositor::_GetFrameTiming::*)(ByRef<OVR::OpenVR::Compositor_FrameTiming>, uint)>(&OVR::OpenVR::IVRCompositor::_GetFrameTiming::Invoke)> {
  static const MethodInfo* get() {
    static auto* pTiming = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "Compositor_FrameTiming")->this_arg;
    static auto* unFramesAgo = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_GetFrameTiming*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTiming, unFramesAgo});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetFrameTiming::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVRCompositor::_GetFrameTiming::*)(ByRef<OVR::OpenVR::Compositor_FrameTiming>, uint, System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVRCompositor::_GetFrameTiming::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* pTiming = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "Compositor_FrameTiming")->this_arg;
    static auto* unFramesAgo = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_GetFrameTiming*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTiming, unFramesAgo, callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVRCompositor::_GetFrameTiming::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OVR::OpenVR::IVRCompositor::_GetFrameTiming::*)(ByRef<OVR::OpenVR::Compositor_FrameTiming>, System::IAsyncResult*)>(&OVR::OpenVR::IVRCompositor::_GetFrameTiming::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* pTiming = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "Compositor_FrameTiming")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVRCompositor::_GetFrameTiming*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pTiming, result});
  }
};
