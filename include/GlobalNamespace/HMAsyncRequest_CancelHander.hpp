// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMAsyncRequest
#include "GlobalNamespace/HMAsyncRequest.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: HMAsyncRequest/CancelHander
  // [TokenAttribute] Offset: FFFFFFFF
  class HMAsyncRequest::CancelHander : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: CancelHander
    CancelHander() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1268A34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMAsyncRequest::CancelHander* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HMAsyncRequest::CancelHander::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMAsyncRequest::CancelHander*, creationType>(object, method)));
    }
    // public System.Void Invoke(HMAsyncRequest request)
    // Offset: 0x12685B0
    void Invoke(GlobalNamespace::HMAsyncRequest* request);
    // public System.IAsyncResult BeginInvoke(HMAsyncRequest request, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1268A44
    System::IAsyncResult* BeginInvoke(GlobalNamespace::HMAsyncRequest* request, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x1268A68
    void EndInvoke(System::IAsyncResult* result);
  }; // HMAsyncRequest/CancelHander
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HMAsyncRequest::CancelHander*, "", "HMAsyncRequest/CancelHander");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HMAsyncRequest::CancelHander::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::HMAsyncRequest::CancelHander::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMAsyncRequest::CancelHander::*)(GlobalNamespace::HMAsyncRequest*)>(&GlobalNamespace::HMAsyncRequest::CancelHander::Invoke)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("", "HMAsyncRequest")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMAsyncRequest::CancelHander*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMAsyncRequest::CancelHander::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::IAsyncResult* (GlobalNamespace::HMAsyncRequest::CancelHander::*)(GlobalNamespace::HMAsyncRequest*, System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::HMAsyncRequest::CancelHander::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("", "HMAsyncRequest")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMAsyncRequest::CancelHander*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMAsyncRequest::CancelHander::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMAsyncRequest::CancelHander::*)(System::IAsyncResult*)>(&GlobalNamespace::HMAsyncRequest::CancelHander::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMAsyncRequest::CancelHander*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
