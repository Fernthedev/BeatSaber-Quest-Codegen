// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: TMPro.TagValueType
#include "TMPro/TagValueType.hpp"
// Including type: TMPro.TagUnitType
#include "TMPro/TagUnitType.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: TMPro.RichTextTagAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  struct RichTextTagAttribute/*, public System::ValueType*/ {
    public:
    // public System.Int32 nameHashCode
    // Size: 0x4
    // Offset: 0x0
    int nameHashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 valueHashCode
    // Size: 0x4
    // Offset: 0x4
    int valueHashCode;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public TMPro.TagValueType valueType
    // Size: 0x4
    // Offset: 0x8
    TMPro::TagValueType valueType;
    // Field size check
    static_assert(sizeof(TMPro::TagValueType) == 0x4);
    // public System.Int32 valueStartIndex
    // Size: 0x4
    // Offset: 0xC
    int valueStartIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 valueLength
    // Size: 0x4
    // Offset: 0x10
    int valueLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public TMPro.TagUnitType unitType
    // Size: 0x4
    // Offset: 0x14
    TMPro::TagUnitType unitType;
    // Field size check
    static_assert(sizeof(TMPro::TagUnitType) == 0x4);
    // Creating value type constructor for type: RichTextTagAttribute
    constexpr RichTextTagAttribute(int nameHashCode_ = {}, int valueHashCode_ = {}, TMPro::TagValueType valueType_ = {}, int valueStartIndex_ = {}, int valueLength_ = {}, TMPro::TagUnitType unitType_ = {}) noexcept : nameHashCode{nameHashCode_}, valueHashCode{valueHashCode_}, valueType{valueType_}, valueStartIndex{valueStartIndex_}, valueLength{valueLength_}, unitType{unitType_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 nameHashCode
    int& dyn_nameHashCode();
    // Get instance field reference: public System.Int32 valueHashCode
    int& dyn_valueHashCode();
    // Get instance field reference: public TMPro.TagValueType valueType
    TMPro::TagValueType& dyn_valueType();
    // Get instance field reference: public System.Int32 valueStartIndex
    int& dyn_valueStartIndex();
    // Get instance field reference: public System.Int32 valueLength
    int& dyn_valueLength();
    // Get instance field reference: public TMPro.TagUnitType unitType
    TMPro::TagUnitType& dyn_unitType();
  }; // TMPro.RichTextTagAttribute
  #pragma pack(pop)
  static check_size<sizeof(RichTextTagAttribute), 20 + sizeof(TMPro::TagUnitType)> __TMPro_RichTextTagAttributeSizeCheck;
  static_assert(sizeof(RichTextTagAttribute) == 0x18);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::RichTextTagAttribute, "TMPro", "RichTextTagAttribute");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
