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
// Type namespace: Assets.OVR.Scripts
namespace Assets::OVR::Scripts {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Assets.OVR.Scripts.Record
  class Record : public ::Il2CppObject {
    public:
    // public System.String category
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* category;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.String message
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* message;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: Record
    Record(::Il2CppString* category_ = {}, ::Il2CppString* message_ = {}) noexcept : category{category_}, message{message_} {}
    // public System.Void .ctor(System.String cat, System.String msg)
    // Offset: 0x15A3694
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Record* New_ctor(::Il2CppString* cat, ::Il2CppString* msg) {
      static auto ___internal__logger = ::Logger::get().WithContext("Assets::OVR::Scripts::Record::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Record*, creationType>(cat, msg)));
    }
  }; // Assets.OVR.Scripts.Record
  #pragma pack(pop)
  static check_size<sizeof(Record), 24 + sizeof(::Il2CppString*)> __Assets_OVR_Scripts_RecordSizeCheck;
  static_assert(sizeof(Record) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Assets::OVR::Scripts::Record*, "Assets.OVR.Scripts", "Record");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Assets::OVR::Scripts::Record::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
