// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.IllogicalCallContext
#include "System/Runtime/Remoting/Messaging/IllogicalCallContext.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.Remoting.Messaging.IllogicalCallContext/Reader
  struct IllogicalCallContext::Reader/*, public System::ValueType*/ {
    public:
    // private System.Runtime.Remoting.Messaging.IllogicalCallContext m_ctx
    // Size: 0x8
    // Offset: 0x0
    System::Runtime::Remoting::Messaging::IllogicalCallContext* m_ctx;
    // Field size check
    static_assert(sizeof(System::Runtime::Remoting::Messaging::IllogicalCallContext*) == 0x8);
    // Creating value type constructor for type: Reader
    constexpr Reader(System::Runtime::Remoting::Messaging::IllogicalCallContext* m_ctx_ = {}) noexcept : m_ctx{m_ctx_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator System::Runtime::Remoting::Messaging::IllogicalCallContext*
    constexpr operator System::Runtime::Remoting::Messaging::IllogicalCallContext*() const noexcept {
      return m_ctx;
    }
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IllogicalCallContext ctx)
    // Offset: 0xF038D4
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Reader(System::Runtime::Remoting::Messaging::IllogicalCallContext* ctx)
    // public System.Boolean get_IsNull()
    // Offset: 0xF038DC
    bool get_IsNull();
    // public System.Object GetData(System.String name)
    // Offset: 0xF038EC
    ::Il2CppObject* GetData(::Il2CppString* name);
  }; // System.Runtime.Remoting.Messaging.IllogicalCallContext/Reader
  #pragma pack(pop)
  static check_size<sizeof(IllogicalCallContext::Reader), 0 + sizeof(System::Runtime::Remoting::Messaging::IllogicalCallContext*)> __System_Runtime_Remoting_Messaging_IllogicalCallContext_ReaderSizeCheck;
  static_assert(sizeof(IllogicalCallContext::Reader) == 0x8);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader, "System.Runtime.Remoting.Messaging", "IllogicalCallContext/Reader");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader::Reader
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader::get_IsNull
// Il2CppName: get_IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader::*)()>(&System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader::get_IsNull)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader), "get_IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader::GetData
// Il2CppName: GetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader::*)(::Il2CppString*)>(&System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader::GetData)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::IllogicalCallContext::Reader), "GetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<::Il2CppString*>()});
  }
};
