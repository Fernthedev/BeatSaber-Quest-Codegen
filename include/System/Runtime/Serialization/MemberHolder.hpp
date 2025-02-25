// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.MemberHolder
  // [TokenAttribute] Offset: FFFFFFFF
  class MemberHolder : public ::Il2CppObject {
    public:
    // System.Type memberType
    // Size: 0x8
    // Offset: 0x10
    System::Type* memberType;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // System.Runtime.Serialization.StreamingContext context
    // Size: 0xC
    // Offset: 0x18
    System::Runtime::Serialization::StreamingContext context;
    // Field size check
    static_assert(sizeof(System::Runtime::Serialization::StreamingContext) == 0xC);
    // Creating value type constructor for type: MemberHolder
    MemberHolder(System::Type* memberType_ = {}, System::Runtime::Serialization::StreamingContext context_ = {}) noexcept : memberType{memberType_}, context{context_} {}
    // Get instance field reference: System.Type memberType
    System::Type*& dyn_memberType();
    // Get instance field reference: System.Runtime.Serialization.StreamingContext context
    System::Runtime::Serialization::StreamingContext& dyn_context();
    // System.Void .ctor(System.Type type, System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x16BCA78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MemberHolder* New_ctor(System::Type* type, System::Runtime::Serialization::StreamingContext ctx) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::MemberHolder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MemberHolder*, creationType>(type, ctx)));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x16BCAB8
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x16BCAD8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // System.Runtime.Serialization.MemberHolder
  #pragma pack(pop)
  static check_size<sizeof(MemberHolder), 24 + sizeof(System::Runtime::Serialization::StreamingContext)> __System_Runtime_Serialization_MemberHolderSizeCheck;
  static_assert(sizeof(MemberHolder) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::MemberHolder*, "System.Runtime.Serialization", "MemberHolder");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::MemberHolder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::MemberHolder::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::Serialization::MemberHolder::*)()>(&System::Runtime::Serialization::MemberHolder::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::MemberHolder*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::MemberHolder::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Serialization::MemberHolder::*)(::Il2CppObject*)>(&System::Runtime::Serialization::MemberHolder::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::MemberHolder*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
