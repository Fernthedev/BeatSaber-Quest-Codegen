// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TextElementType
  struct TextElementType/*, public System::Enum*/ {
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: TextElementType
    constexpr TextElementType(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public TMPro.TextElementType Character
    static constexpr const uint8_t Character = 1u;
    // Get static field: static public TMPro.TextElementType Character
    static TMPro::TextElementType _get_Character();
    // Set static field: static public TMPro.TextElementType Character
    static void _set_Character(TMPro::TextElementType value);
    // static field const value: static public TMPro.TextElementType Sprite
    static constexpr const uint8_t Sprite = 2u;
    // Get static field: static public TMPro.TextElementType Sprite
    static TMPro::TextElementType _get_Sprite();
    // Set static field: static public TMPro.TextElementType Sprite
    static void _set_Sprite(TMPro::TextElementType value);
  }; // TMPro.TextElementType
  #pragma pack(pop)
  static check_size<sizeof(TextElementType), 0 + sizeof(uint8_t)> __TMPro_TextElementTypeSizeCheck;
  static_assert(sizeof(TextElementType) == 0x1);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TextElementType, "TMPro", "TextElementType");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
