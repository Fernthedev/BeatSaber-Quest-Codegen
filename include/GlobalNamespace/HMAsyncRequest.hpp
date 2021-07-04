// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMAutoincrementedRequestId
#include "GlobalNamespace/HMAutoincrementedRequestId.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HMAsyncRequest
  class HMAsyncRequest : public GlobalNamespace::HMAutoincrementedRequestId {
    public:
    // Nested type: GlobalNamespace::HMAsyncRequest::CancelHander
    class CancelHander;
    // private System.Boolean _cancelled
    // Size: 0x1
    // Offset: 0x18
    bool cancelled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: cancelled and: cancelHander
    char __padding0[0x7] = {};
    // private HMAsyncRequest/CancelHander _cancelHander
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::HMAsyncRequest::CancelHander* cancelHander;
    // Field size check
    static_assert(sizeof(GlobalNamespace::HMAsyncRequest::CancelHander*) == 0x8);
    // Creating value type constructor for type: HMAsyncRequest
    HMAsyncRequest(bool cancelled_ = {}, GlobalNamespace::HMAsyncRequest::CancelHander* cancelHander_ = {}) noexcept : cancelled{cancelled_}, cancelHander{cancelHander_} {}
    // Deleting conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept = delete;
    // public HMAsyncRequest/CancelHander get_CancelHandler()
    // Offset: 0x124A190
    GlobalNamespace::HMAsyncRequest::CancelHander* get_CancelHandler();
    // public System.Void set_CancelHandler(HMAsyncRequest/CancelHander value)
    // Offset: 0x124A198
    void set_CancelHandler(GlobalNamespace::HMAsyncRequest::CancelHander* value);
    // public System.Boolean get_cancelled()
    // Offset: 0x124A1A0
    bool get_cancelled();
    // public System.Void Cancel()
    // Offset: 0x124A1A8
    void Cancel();
    // public System.Void .ctor()
    // Offset: 0x124A558
    // Implemented from: HMAutoincrementedRequestId
    // Base method: System.Void HMAutoincrementedRequestId::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HMAsyncRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::HMAsyncRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HMAsyncRequest*, creationType>()));
    }
  }; // HMAsyncRequest
  #pragma pack(pop)
  static check_size<sizeof(HMAsyncRequest), 32 + sizeof(GlobalNamespace::HMAsyncRequest::CancelHander*)> __GlobalNamespace_HMAsyncRequestSizeCheck;
  static_assert(sizeof(HMAsyncRequest) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::HMAsyncRequest*, "", "HMAsyncRequest");
// Writing includes for template specializations
#include "GlobalNamespace/HMAsyncRequest_CancelHander.hpp"
// Writing MetadataGetter for method: GlobalNamespace::HMAsyncRequest::get_CancelHandler
// Il2CppName: get_CancelHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::HMAsyncRequest::CancelHander* (GlobalNamespace::HMAsyncRequest::*)()>(&GlobalNamespace::HMAsyncRequest::get_CancelHandler)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMAsyncRequest*), "get_CancelHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMAsyncRequest::set_CancelHandler
// Il2CppName: set_CancelHandler
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMAsyncRequest::*)(GlobalNamespace::HMAsyncRequest::CancelHander*)>(&GlobalNamespace::HMAsyncRequest::set_CancelHandler)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMAsyncRequest*), "set_CancelHandler", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<GlobalNamespace::HMAsyncRequest::CancelHander*>()});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMAsyncRequest::get_cancelled
// Il2CppName: get_cancelled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::HMAsyncRequest::*)()>(&GlobalNamespace::HMAsyncRequest::get_cancelled)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMAsyncRequest*), "get_cancelled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMAsyncRequest::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::HMAsyncRequest::*)()>(&GlobalNamespace::HMAsyncRequest::Cancel)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::HMAsyncRequest*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::HMAsyncRequest::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
