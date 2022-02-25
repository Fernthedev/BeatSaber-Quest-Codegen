// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: IPv6AddressHelper
  class IPv6AddressHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(System::IPv6AddressHelper);
DEFINE_IL2CPP_ARG_TYPE(System::IPv6AddressHelper*, "System", "IPv6AddressHelper");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IPv6AddressHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class IPv6AddressHelper : public ::Il2CppObject {
    public:
    // static System.String ParseCanonicalName(System.String str, System.Int32 start, ref System.Boolean isLoopback, ref System.String scopeId)
    // Offset: 0x1AA3768
    static ::StringW ParseCanonicalName(::StringW str, int start, ByRef<bool> isLoopback, ByRef<::StringW> scopeId);
    // static System.String CreateCanonicalName(System.UInt16* numbers)
    // Offset: 0x1AA3D18
    static ::StringW CreateCanonicalName(uint16_t* numbers);
    // static private System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> FindCompressionRange(System.UInt16* numbers)
    // Offset: 0x1AA4324
    static System::Collections::Generic::KeyValuePair_2<int, int> FindCompressionRange(uint16_t* numbers);
    // static private System.Boolean ShouldHaveIpv4Embedded(System.UInt16* numbers)
    // Offset: 0x1AA43FC
    static bool ShouldHaveIpv4Embedded(uint16_t* numbers);
    // static private System.Boolean InternalIsValid(System.Char* name, System.Int32 start, ref System.Int32 end, System.Boolean validateStrictAddress)
    // Offset: 0x1AA448C
    static bool InternalIsValid(::Il2CppChar* name, int start, ByRef<int> end, bool validateStrictAddress);
    // static System.Boolean IsValid(System.Char* name, System.Int32 start, ref System.Int32 end)
    // Offset: 0x1AA4760
    static bool IsValid(::Il2CppChar* name, int start, ByRef<int> end);
    // static System.Boolean IsValidStrict(System.Char* name, System.Int32 start, ref System.Int32 end)
    // Offset: 0x1AA4768
    static bool IsValidStrict(::Il2CppChar* name, int start, ByRef<int> end);
    // static System.Boolean Parse(System.String address, System.UInt16* numbers, System.Int32 start, ref System.String scopeId)
    // Offset: 0x1AA382C
    static bool Parse(::StringW address, uint16_t* numbers, int start, ByRef<::StringW> scopeId);
  }; // System.IPv6AddressHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IPv6AddressHelper::ParseCanonicalName
// Il2CppName: ParseCanonicalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int, ByRef<bool>, ByRef<::StringW>)>(&System::IPv6AddressHelper::ParseCanonicalName)> {
  static const MethodInfo* get() {
    static auto* str = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* isLoopback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* scopeId = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IPv6AddressHelper*), "ParseCanonicalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{str, start, isLoopback, scopeId});
  }
};
// Writing MetadataGetter for method: System::IPv6AddressHelper::CreateCanonicalName
// Il2CppName: CreateCanonicalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(uint16_t*)>(&System::IPv6AddressHelper::CreateCanonicalName)> {
  static const MethodInfo* get() {
    static auto* numbers = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt16"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IPv6AddressHelper*), "CreateCanonicalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numbers});
  }
};
// Writing MetadataGetter for method: System::IPv6AddressHelper::FindCompressionRange
// Il2CppName: FindCompressionRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::KeyValuePair_2<int, int> (*)(uint16_t*)>(&System::IPv6AddressHelper::FindCompressionRange)> {
  static const MethodInfo* get() {
    static auto* numbers = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt16"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IPv6AddressHelper*), "FindCompressionRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numbers});
  }
};
// Writing MetadataGetter for method: System::IPv6AddressHelper::ShouldHaveIpv4Embedded
// Il2CppName: ShouldHaveIpv4Embedded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint16_t*)>(&System::IPv6AddressHelper::ShouldHaveIpv4Embedded)> {
  static const MethodInfo* get() {
    static auto* numbers = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt16"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IPv6AddressHelper*), "ShouldHaveIpv4Embedded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{numbers});
  }
};
// Writing MetadataGetter for method: System::IPv6AddressHelper::InternalIsValid
// Il2CppName: InternalIsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar*, int, ByRef<int>, bool)>(&System::IPv6AddressHelper::InternalIsValid)> {
  static const MethodInfo* get() {
    static auto* name = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* validateStrictAddress = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IPv6AddressHelper*), "InternalIsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, start, end, validateStrictAddress});
  }
};
// Writing MetadataGetter for method: System::IPv6AddressHelper::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar*, int, ByRef<int>)>(&System::IPv6AddressHelper::IsValid)> {
  static const MethodInfo* get() {
    static auto* name = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IPv6AddressHelper*), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, start, end});
  }
};
// Writing MetadataGetter for method: System::IPv6AddressHelper::IsValidStrict
// Il2CppName: IsValidStrict
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar*, int, ByRef<int>)>(&System::IPv6AddressHelper::IsValidStrict)> {
  static const MethodInfo* get() {
    static auto* name = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IPv6AddressHelper*), "IsValidStrict", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, start, end});
  }
};
// Writing MetadataGetter for method: System::IPv6AddressHelper::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, uint16_t*, int, ByRef<::StringW>)>(&System::IPv6AddressHelper::Parse)> {
  static const MethodInfo* get() {
    static auto* address = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* numbers = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "UInt16"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* scopeId = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IPv6AddressHelper*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{address, numbers, start, scopeId});
  }
};
