// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TermInfoStrings
  struct TermInfoStrings;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ByteMatcher
  class ByteMatcher : public ::Il2CppObject {
    public:
    // private System.Collections.Hashtable map
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Hashtable* map;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.Collections.Hashtable starts
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Hashtable* starts;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // Creating value type constructor for type: ByteMatcher
    ByteMatcher(System::Collections::Hashtable* map_ = {}, System::Collections::Hashtable* starts_ = {}) noexcept : map{map_}, starts{starts_} {}
    // public System.Void AddMapping(System.TermInfoStrings key, System.Byte[] val)
    // Offset: 0x177EB84
    void AddMapping(System::TermInfoStrings key, ::Array<uint8_t>* val);
    // public System.Void Sort()
    // Offset: 0x177EC9C
    void Sort();
    // public System.Boolean StartsWith(System.Int32 c)
    // Offset: 0x177ECA0
    bool StartsWith(int c);
    // public System.TermInfoStrings Match(System.Char[] buffer, System.Int32 offset, System.Int32 length, out System.Int32 used)
    // Offset: 0x177ED30
    System::TermInfoStrings Match(::Array<::Il2CppChar>* buffer, int offset, int length, int& used);
    // public System.Void .ctor()
    // Offset: 0x177F158
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ByteMatcher* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ByteMatcher::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ByteMatcher*, creationType>()));
    }
  }; // System.ByteMatcher
  #pragma pack(pop)
  static check_size<sizeof(ByteMatcher), 24 + sizeof(System::Collections::Hashtable*)> __System_ByteMatcherSizeCheck;
  static_assert(sizeof(ByteMatcher) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::ByteMatcher*, "System", "ByteMatcher");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ByteMatcher::AddMapping
// Il2CppName: AddMapping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ByteMatcher::*)(System::TermInfoStrings, ::Array<uint8_t>*)>(&System::ByteMatcher::AddMapping)> {
  const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "TermInfoStrings")->byval_arg;
    static auto* val = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ByteMatcher*), "AddMapping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, val});
  }
};
// Writing MetadataGetter for method: System::ByteMatcher::Sort
// Il2CppName: Sort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ByteMatcher::*)()>(&System::ByteMatcher::Sort)> {
  const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ByteMatcher*), "Sort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ByteMatcher::StartsWith
// Il2CppName: StartsWith
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ByteMatcher::*)(int)>(&System::ByteMatcher::StartsWith)> {
  const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ByteMatcher*), "StartsWith", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::ByteMatcher::Match
// Il2CppName: Match
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TermInfoStrings (System::ByteMatcher::*)(::Array<::Il2CppChar>*, int, int, int&)>(&System::ByteMatcher::Match)> {
  const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* used = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ByteMatcher*), "Match", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, length, used});
  }
};
// Writing MetadataGetter for method: System::ByteMatcher::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
