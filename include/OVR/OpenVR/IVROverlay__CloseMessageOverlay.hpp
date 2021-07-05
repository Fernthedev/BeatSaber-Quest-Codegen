// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVR.OpenVR.IVROverlay
#include "OVR/OpenVR/IVROverlay.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: OVR.OpenVR.IVROverlay/_CloseMessageOverlay
  // [UnmanagedFunctionPointerAttribute] Offset: DCE430
  class IVROverlay::_CloseMessageOverlay : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: _CloseMessageOverlay
    _CloseMessageOverlay() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1EEC7D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IVROverlay::_CloseMessageOverlay* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVR::OpenVR::IVROverlay::_CloseMessageOverlay::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IVROverlay::_CloseMessageOverlay*, creationType>(object, method)));
    }
    // public System.Void Invoke()
    // Offset: 0x1EEC7E4
    void Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x1EEC9F0
    System::IAsyncResult* BeginInvoke(System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1EECA1C
    void EndInvoke(System::IAsyncResult* result);
  }; // OVR.OpenVR.IVROverlay/_CloseMessageOverlay
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(OVR::OpenVR::IVROverlay::_CloseMessageOverlay*, "OVR.OpenVR", "IVROverlay/_CloseMessageOverlay");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_CloseMessageOverlay::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_CloseMessageOverlay::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVROverlay::_CloseMessageOverlay::*)()>(&OVR::OpenVR::IVROverlay::_CloseMessageOverlay::Invoke)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_CloseMessageOverlay*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_CloseMessageOverlay::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (OVR::OpenVR::IVROverlay::_CloseMessageOverlay::*)(System::AsyncCallback*, ::Il2CppObject*)>(&OVR::OpenVR::IVROverlay::_CloseMessageOverlay::BeginInvoke)> {
  const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_CloseMessageOverlay*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, object});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::IVROverlay::_CloseMessageOverlay::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OVR::OpenVR::IVROverlay::_CloseMessageOverlay::*)(System::IAsyncResult*)>(&OVR::OpenVR::IVROverlay::_CloseMessageOverlay::EndInvoke)> {
  const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::IVROverlay::_CloseMessageOverlay*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
