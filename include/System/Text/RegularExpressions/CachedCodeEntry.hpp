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
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexCode
  class RegexCode;
  // Forward declaring type: RegexRunnerFactory
  class RegexRunnerFactory;
  // Forward declaring type: ExclusiveReference
  class ExclusiveReference;
  // Forward declaring type: SharedReference
  class SharedReference;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.CachedCodeEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class CachedCodeEntry : public ::Il2CppObject {
    public:
    // System.String _key
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* key;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // System.Text.RegularExpressions.RegexCode _code
    // Size: 0x8
    // Offset: 0x18
    System::Text::RegularExpressions::RegexCode* code;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexCode*) == 0x8);
    // System.Collections.Hashtable _caps
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Hashtable* caps;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // System.Collections.Hashtable _capnames
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Hashtable* capnames;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // System.String[] _capslist
    // Size: 0x8
    // Offset: 0x30
    ::Array<::Il2CppString*>* capslist;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // System.Int32 _capsize
    // Size: 0x4
    // Offset: 0x38
    int capsize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: capsize and: factory
    char __padding5[0x4] = {};
    // System.Text.RegularExpressions.RegexRunnerFactory _factory
    // Size: 0x8
    // Offset: 0x40
    System::Text::RegularExpressions::RegexRunnerFactory* factory;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::RegexRunnerFactory*) == 0x8);
    // System.Text.RegularExpressions.ExclusiveReference _runnerref
    // Size: 0x8
    // Offset: 0x48
    System::Text::RegularExpressions::ExclusiveReference* runnerref;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::ExclusiveReference*) == 0x8);
    // System.Text.RegularExpressions.SharedReference _replref
    // Size: 0x8
    // Offset: 0x50
    System::Text::RegularExpressions::SharedReference* replref;
    // Field size check
    static_assert(sizeof(System::Text::RegularExpressions::SharedReference*) == 0x8);
    // Creating value type constructor for type: CachedCodeEntry
    CachedCodeEntry(::Il2CppString* key_ = {}, System::Text::RegularExpressions::RegexCode* code_ = {}, System::Collections::Hashtable* caps_ = {}, System::Collections::Hashtable* capnames_ = {}, ::Array<::Il2CppString*>* capslist_ = {}, int capsize_ = {}, System::Text::RegularExpressions::RegexRunnerFactory* factory_ = {}, System::Text::RegularExpressions::ExclusiveReference* runnerref_ = {}, System::Text::RegularExpressions::SharedReference* replref_ = {}) noexcept : key{key_}, code{code_}, caps{caps_}, capnames{capnames_}, capslist{capslist_}, capsize{capsize_}, factory{factory_}, runnerref{runnerref_}, replref{replref_} {}
    // Get instance field reference: System.String _key
    ::Il2CppString*& dyn__key();
    // Get instance field reference: System.Text.RegularExpressions.RegexCode _code
    System::Text::RegularExpressions::RegexCode*& dyn__code();
    // Get instance field reference: System.Collections.Hashtable _caps
    System::Collections::Hashtable*& dyn__caps();
    // Get instance field reference: System.Collections.Hashtable _capnames
    System::Collections::Hashtable*& dyn__capnames();
    // Get instance field reference: System.String[] _capslist
    ::Array<::Il2CppString*>*& dyn__capslist();
    // Get instance field reference: System.Int32 _capsize
    int& dyn__capsize();
    // Get instance field reference: System.Text.RegularExpressions.RegexRunnerFactory _factory
    System::Text::RegularExpressions::RegexRunnerFactory*& dyn__factory();
    // Get instance field reference: System.Text.RegularExpressions.ExclusiveReference _runnerref
    System::Text::RegularExpressions::ExclusiveReference*& dyn__runnerref();
    // Get instance field reference: System.Text.RegularExpressions.SharedReference _replref
    System::Text::RegularExpressions::SharedReference*& dyn__replref();
    // System.Void .ctor(System.String key, System.Collections.Hashtable capnames, System.String[] capslist, System.Text.RegularExpressions.RegexCode code, System.Collections.Hashtable caps, System.Int32 capsize, System.Text.RegularExpressions.ExclusiveReference runner, System.Text.RegularExpressions.SharedReference repl)
    // Offset: 0x186EE2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CachedCodeEntry* New_ctor(::Il2CppString* key, System::Collections::Hashtable* capnames, ::Array<::Il2CppString*>* capslist, System::Text::RegularExpressions::RegexCode* code, System::Collections::Hashtable* caps, int capsize, System::Text::RegularExpressions::ExclusiveReference* runner, System::Text::RegularExpressions::SharedReference* repl) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::RegularExpressions::CachedCodeEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CachedCodeEntry*, creationType>(key, capnames, capslist, code, caps, capsize, runner, repl)));
    }
  }; // System.Text.RegularExpressions.CachedCodeEntry
  #pragma pack(pop)
  static check_size<sizeof(CachedCodeEntry), 80 + sizeof(System::Text::RegularExpressions::SharedReference*)> __System_Text_RegularExpressions_CachedCodeEntrySizeCheck;
  static_assert(sizeof(CachedCodeEntry) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::CachedCodeEntry*, "System.Text.RegularExpressions", "CachedCodeEntry");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::CachedCodeEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
