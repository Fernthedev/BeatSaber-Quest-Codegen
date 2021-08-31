// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
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
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.Serialization.SerializationEntry
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: D9D190
  struct SerializationEntry/*, public System::ValueType*/ {
    public:
    // private System.Type m_type
    // Size: 0x8
    // Offset: 0x0
    System::Type* m_type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Object m_value
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppObject* m_value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.String m_name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: SerializationEntry
    constexpr SerializationEntry(System::Type* m_type_ = {}, ::Il2CppObject* m_value_ = {}, ::Il2CppString* m_name_ = {}) noexcept : m_type{m_type_}, m_value{m_value_}, m_name{m_name_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field: private System.Type m_type
    System::Type* _get_m_type();
    // Set instance field: private System.Type m_type
    void _set_m_type(System::Type* value);
    // Get instance field: private System.Object m_value
    ::Il2CppObject* _get_m_value();
    // Set instance field: private System.Object m_value
    void _set_m_value(::Il2CppObject* value);
    // Get instance field: private System.String m_name
    ::Il2CppString* _get_m_name();
    // Set instance field: private System.String m_name
    void _set_m_name(::Il2CppString* value);
    // public System.Object get_Value()
    // Offset: 0x16BD790
    ::Il2CppObject* get_Value();
    // public System.String get_Name()
    // Offset: 0x16BD798
    ::Il2CppString* get_Name();
    // System.Void .ctor(System.String entryName, System.Object entryValue, System.Type entryType)
    // Offset: 0x16BD7A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    SerializationEntry(::Il2CppString* entryName, ::Il2CppObject* entryValue, System::Type* entryType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Serialization::SerializationEntry::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(entryName), ::il2cpp_utils::ExtractType(entryValue), ::il2cpp_utils::ExtractType(entryType)})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, entryName, entryValue, entryType);
    }
  }; // System.Runtime.Serialization.SerializationEntry
  #pragma pack(pop)
  static check_size<sizeof(SerializationEntry), 16 + sizeof(::Il2CppString*)> __System_Runtime_Serialization_SerializationEntrySizeCheck;
  static_assert(sizeof(SerializationEntry) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationEntry, "System.Runtime.Serialization", "SerializationEntry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEntry::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Serialization::SerializationEntry::*)()>(&System::Runtime::Serialization::SerializationEntry::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEntry), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEntry::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (System::Runtime::Serialization::SerializationEntry::*)()>(&System::Runtime::Serialization::SerializationEntry::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::SerializationEntry), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::SerializationEntry::SerializationEntry
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
