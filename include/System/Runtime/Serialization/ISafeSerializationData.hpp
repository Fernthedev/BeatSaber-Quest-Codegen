// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.ISafeSerializationData
  // [TokenAttribute] Offset: FFFFFFFF
  class ISafeSerializationData {
    public:
    // Creating value type constructor for type: ISafeSerializationData
    ISafeSerializationData() noexcept {}
    // public System.Void CompleteDeserialization(System.Object deserialized)
    // Offset: 0xFFFFFFFF
    void CompleteDeserialization(::Il2CppObject* deserialized);
  }; // System.Runtime.Serialization.ISafeSerializationData
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ISafeSerializationData*, "System.Runtime.Serialization", "ISafeSerializationData");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::ISafeSerializationData::CompleteDeserialization
// Il2CppName: CompleteDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::ISafeSerializationData::*)(::Il2CppObject*)>(&System::Runtime::Serialization::ISafeSerializationData::CompleteDeserialization)> {
  static const MethodInfo* get() {
    static auto* deserialized = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::ISafeSerializationData*), "CompleteDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deserialized});
  }
};
