// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Globalization.HebrewNumber
#include "System/Globalization/HebrewNumber.hpp"
// Including type: System.Globalization.HebrewNumber/HebrewToken
#include "System/Globalization/HebrewNumber_HebrewToken.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Globalization
namespace System::Globalization {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Globalization.HebrewNumber/HebrewValue
  class HebrewNumber::HebrewValue : public ::Il2CppObject {
    public:
    // System.Globalization.HebrewNumber/HebrewToken token
    // Size: 0x4
    // Offset: 0x10
    System::Globalization::HebrewNumber::HebrewToken token;
    // Field size check
    static_assert(sizeof(System::Globalization::HebrewNumber::HebrewToken) == 0x4);
    // System.Int32 value
    // Size: 0x4
    // Offset: 0x14
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: HebrewValue
    HebrewValue(System::Globalization::HebrewNumber::HebrewToken token_ = {}, int value_ = {}) noexcept : token{token_}, value{value_} {}
    // System.Void .ctor(System.Globalization.HebrewNumber/HebrewToken token, System.Int32 value)
    // Offset: 0x19F5694
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HebrewNumber::HebrewValue* New_ctor(System::Globalization::HebrewNumber::HebrewToken token, int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Globalization::HebrewNumber::HebrewValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HebrewNumber::HebrewValue*, creationType>(token, value)));
    }
  }; // System.Globalization.HebrewNumber/HebrewValue
  #pragma pack(pop)
  static check_size<sizeof(HebrewNumber::HebrewValue), 20 + sizeof(int)> __System_Globalization_HebrewNumber_HebrewValueSizeCheck;
  static_assert(sizeof(HebrewNumber::HebrewValue) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Globalization::HebrewNumber::HebrewValue*, "System.Globalization", "HebrewNumber/HebrewValue");
// Writing includes for template specializations
// Writing MetadataGetter for method: System::Globalization::HebrewNumber::HebrewValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
