// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Enum/ValuesAndNames
  class Enum::ValuesAndNames : public ::Il2CppObject {
    public:
    // public System.UInt64[] Values
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint64_t>* Values;
    // Field size check
    static_assert(sizeof(::Array<uint64_t>*) == 0x8);
    // public System.String[] Names
    // Size: 0x8
    // Offset: 0x18
    ::Array<::Il2CppString*>* Names;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: ValuesAndNames
    ValuesAndNames(::Array<uint64_t>* Values_ = {}, ::Array<::Il2CppString*>* Names_ = {}) noexcept : Values{Values_}, Names{Names_} {}
    // public System.Void .ctor(System.UInt64[] values, System.String[] names)
    // Offset: 0x17A8C0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Enum::ValuesAndNames* New_ctor(::Array<uint64_t>* values, ::Array<::Il2CppString*>* names) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Enum::ValuesAndNames::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Enum::ValuesAndNames*, creationType>(values, names)));
    }
  }; // System.Enum/ValuesAndNames
  #pragma pack(pop)
  static check_size<sizeof(Enum::ValuesAndNames), 24 + sizeof(::Array<::Il2CppString*>*)> __System_Enum_ValuesAndNamesSizeCheck;
  static_assert(sizeof(Enum::ValuesAndNames) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Enum::ValuesAndNames*, "System", "Enum/ValuesAndNames");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Enum::ValuesAndNames::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
