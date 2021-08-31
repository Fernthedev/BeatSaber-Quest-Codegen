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
// Forward declaring namespace: System::IO
namespace System::IO {
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.SearchPattern2
  // [TokenAttribute] Offset: FFFFFFFF
  class SearchPattern2 : public ::Il2CppObject {
    public:
    // Nested type: System::IO::SearchPattern2::Op
    class Op;
    // Nested type: System::IO::SearchPattern2::OpCode
    struct OpCode;
    // private System.IO.SearchPattern2/System.IO.Op ops
    // Size: 0x8
    // Offset: 0x10
    System::IO::SearchPattern2::Op* ops;
    // Field size check
    static_assert(sizeof(System::IO::SearchPattern2::Op*) == 0x8);
    // private System.Boolean ignore
    // Size: 0x1
    // Offset: 0x18
    bool ignore;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasWildcard
    // Size: 0x1
    // Offset: 0x19
    bool hasWildcard;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasWildcard and: pattern
    char __padding2[0x6] = {};
    // private System.String pattern
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* pattern;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: SearchPattern2
    SearchPattern2(System::IO::SearchPattern2::Op* ops_ = {}, bool ignore_ = {}, bool hasWildcard_ = {}, ::Il2CppString* pattern_ = {}) noexcept : ops{ops_}, ignore{ignore_}, hasWildcard{hasWildcard_}, pattern{pattern_} {}
    // Get static field: static readonly System.Char[] WildcardChars
    static ::Array<::Il2CppChar>* _get_WildcardChars();
    // Set static field: static readonly System.Char[] WildcardChars
    static void _set_WildcardChars(::Array<::Il2CppChar>* value);
    // Get static field: static readonly System.Char[] InvalidChars
    static ::Array<::Il2CppChar>* _get_InvalidChars();
    // Set static field: static readonly System.Char[] InvalidChars
    static void _set_InvalidChars(::Array<::Il2CppChar>* value);
    // Get instance field: private System.IO.SearchPattern2/System.IO.Op ops
    System::IO::SearchPattern2::Op* _get_ops();
    // Set instance field: private System.IO.SearchPattern2/System.IO.Op ops
    void _set_ops(System::IO::SearchPattern2::Op* value);
    // Get instance field: private System.Boolean ignore
    bool _get_ignore();
    // Set instance field: private System.Boolean ignore
    void _set_ignore(bool value);
    // Get instance field: private System.Boolean hasWildcard
    bool _get_hasWildcard();
    // Set instance field: private System.Boolean hasWildcard
    void _set_hasWildcard(bool value);
    // Get instance field: private System.String pattern
    ::Il2CppString* _get_pattern();
    // Set instance field: private System.String pattern
    void _set_pattern(::Il2CppString* value);
    // public System.Boolean get_HasWildcard()
    // Offset: 0x18BDB3C
    bool get_HasWildcard();
    // public System.Void .ctor(System.String pattern)
    // Offset: 0x18BCAB0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SearchPattern2* New_ctor(::Il2CppString* pattern) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::SearchPattern2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SearchPattern2*, creationType>(pattern)));
    }
    // public System.Void .ctor(System.String pattern, System.Boolean ignore)
    // Offset: 0x18BD810
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SearchPattern2* New_ctor(::Il2CppString* pattern, bool ignore) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::SearchPattern2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SearchPattern2*, creationType>(pattern, ignore)));
    }
    // static private System.Void .cctor()
    // Offset: 0x18BDB74
    static void _cctor();
    // private System.Void Compile(System.String pattern)
    // Offset: 0x18BD858
    void Compile(::Il2CppString* pattern);
  }; // System.IO.SearchPattern2
  #pragma pack(pop)
  static check_size<sizeof(SearchPattern2), 32 + sizeof(::Il2CppString*)> __System_IO_SearchPattern2SizeCheck;
  static_assert(sizeof(SearchPattern2) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::SearchPattern2*, "System.IO", "SearchPattern2");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::SearchPattern2::get_HasWildcard
// Il2CppName: get_HasWildcard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IO::SearchPattern2::*)()>(&System::IO::SearchPattern2::get_HasWildcard)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::SearchPattern2*), "get_HasWildcard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::SearchPattern2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::SearchPattern2::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::SearchPattern2::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::SearchPattern2::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::SearchPattern2*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::SearchPattern2::Compile
// Il2CppName: Compile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::SearchPattern2::*)(::Il2CppString*)>(&System::IO::SearchPattern2::Compile)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::SearchPattern2*), "Compile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern});
  }
};
