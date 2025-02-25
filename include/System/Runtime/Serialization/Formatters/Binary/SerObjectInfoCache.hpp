// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache
  // [TokenAttribute] Offset: FFFFFFFF
  class SerObjectInfoCache : public ::Il2CppObject {
    public:
    // System.String fullTypeName
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* fullTypeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.String assemblyString
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* assemblyString;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Boolean hasTypeForwardedFrom
    // Size: 0x1
    // Offset: 0x20
    bool hasTypeForwardedFrom;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasTypeForwardedFrom and: memberInfos
    char __padding2[0x7] = {};
    // System.Reflection.MemberInfo[] memberInfos
    // Size: 0x8
    // Offset: 0x28
    ::Array<System::Reflection::MemberInfo*>* memberInfos;
    // Field size check
    static_assert(sizeof(::Array<System::Reflection::MemberInfo*>*) == 0x8);
    // System.String[] memberNames
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Il2CppString*>* memberNames;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.Type[] memberTypes
    // Size: 0x8
    // Offset: 0x38
    ::Array<System::Type*>* memberTypes;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // Creating value type constructor for type: SerObjectInfoCache
    SerObjectInfoCache(::Il2CppString* fullTypeName_ = {}, ::Il2CppString* assemblyString_ = {}, bool hasTypeForwardedFrom_ = {}, ::Array<System::Reflection::MemberInfo*>* memberInfos_ = {}, ::Array<::Il2CppString*>* memberNames_ = {}, ::Array<System::Type*>* memberTypes_ = {}) noexcept : fullTypeName{fullTypeName_}, assemblyString{assemblyString_}, hasTypeForwardedFrom{hasTypeForwardedFrom_}, memberInfos{memberInfos_}, memberNames{memberNames_}, memberTypes{memberTypes_} {}
    // Get instance field reference: System.String fullTypeName
    ::Il2CppString*& dyn_fullTypeName();
    // Get instance field reference: System.String assemblyString
    ::Il2CppString*& dyn_assemblyString();
    // Get instance field reference: System.Boolean hasTypeForwardedFrom
    bool& dyn_hasTypeForwardedFrom();
    // Get instance field reference: System.Reflection.MemberInfo[] memberInfos
    ::Array<System::Reflection::MemberInfo*>*& dyn_memberInfos();
    // Get instance field reference: System.String[] memberNames
    ::Array<::Il2CppString*>*& dyn_memberNames();
    // Get instance field reference: System.Type[] memberTypes
    ::Array<System::Type*>*& dyn_memberTypes();
    // System.Void .ctor(System.String typeName, System.String assemblyName, System.Boolean hasTypeForwardedFrom)
    // Offset: 0x1629558
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerObjectInfoCache* New_ctor(::Il2CppString* typeName, ::Il2CppString* assemblyName, bool hasTypeForwardedFrom) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerObjectInfoCache*, creationType>(typeName, assemblyName, hasTypeForwardedFrom)));
    }
    // System.Void .ctor(System.Type type)
    // Offset: 0x162921C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerObjectInfoCache* New_ctor(System::Type* type) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerObjectInfoCache*, creationType>(type)));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.SerObjectInfoCache
  #pragma pack(pop)
  static check_size<sizeof(SerObjectInfoCache), 56 + sizeof(::Array<System::Type*>*)> __System_Runtime_Serialization_Formatters_Binary_SerObjectInfoCacheSizeCheck;
  static_assert(sizeof(SerObjectInfoCache) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache*, "System.Runtime.Serialization.Formatters.Binary", "SerObjectInfoCache");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::SerObjectInfoCache::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
