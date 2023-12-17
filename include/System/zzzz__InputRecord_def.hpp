#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InputRecord)
// Forward declare root types
namespace System {
struct InputRecord;
}
// Write type traits
MARK_VAL_T(::System::InputRecord);
// Type: System::InputRecord
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2644))
// CS Name: ::System::InputRecord
struct CORDL_TYPE InputRecord : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field EventType offset 0x0
 __declspec(property(get=__get_EventType, put=__set_EventType)) int16_t  EventType;

/// @brief Field KeyDown offset 0x2
 __declspec(property(get=__get_KeyDown, put=__set_KeyDown)) bool  KeyDown;

/// @brief Field RepeatCount offset 0x4
 __declspec(property(get=__get_RepeatCount, put=__set_RepeatCount)) int16_t  RepeatCount;

/// @brief Field VirtualKeyCode offset 0x6
 __declspec(property(get=__get_VirtualKeyCode, put=__set_VirtualKeyCode)) int16_t  VirtualKeyCode;

/// @brief Field VirtualScanCode offset 0x8
 __declspec(property(get=__get_VirtualScanCode, put=__set_VirtualScanCode)) int16_t  VirtualScanCode;

/// @brief Field Character offset 0xa
 __declspec(property(get=__get_Character, put=__set_Character)) char16_t  Character;

/// @brief Field ControlKeyState offset 0xc
 __declspec(property(get=__get_ControlKeyState, put=__set_ControlKeyState)) int32_t  ControlKeyState;

/// @brief Field pad1 offset 0x10
 __declspec(property(get=__get_pad1, put=__set_pad1)) int32_t  pad1;

/// @brief Field pad2 offset 0x14
 __declspec(property(get=__get_pad2, put=__set_pad2)) bool  pad2;

constexpr void __set_EventType(int16_t  value) ;

constexpr int16_t& __get_EventType() ;

constexpr int16_t const& __get_EventType() const;

constexpr void __set_KeyDown(bool  value) ;

constexpr bool& __get_KeyDown() ;

constexpr bool const& __get_KeyDown() const;

constexpr void __set_RepeatCount(int16_t  value) ;

constexpr int16_t& __get_RepeatCount() ;

constexpr int16_t const& __get_RepeatCount() const;

constexpr void __set_VirtualKeyCode(int16_t  value) ;

constexpr int16_t& __get_VirtualKeyCode() ;

constexpr int16_t const& __get_VirtualKeyCode() const;

constexpr void __set_VirtualScanCode(int16_t  value) ;

constexpr int16_t& __get_VirtualScanCode() ;

constexpr int16_t const& __get_VirtualScanCode() const;

constexpr void __set_Character(char16_t  value) ;

constexpr char16_t& __get_Character() ;

constexpr char16_t const& __get_Character() const;

constexpr void __set_ControlKeyState(int32_t  value) ;

constexpr int32_t& __get_ControlKeyState() ;

constexpr int32_t const& __get_ControlKeyState() const;

constexpr void __set_pad1(int32_t  value) ;

constexpr int32_t& __get_pad1() ;

constexpr int32_t const& __get_pad1() const;

constexpr void __set_pad2(bool  value) ;

constexpr bool& __get_pad2() ;

constexpr bool const& __get_pad2() const;

// Ctor Parameters [CppParam { name: "EventType", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "KeyDown", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "RepeatCount", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "VirtualKeyCode", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "VirtualScanCode", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "Character", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "ControlKeyState", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pad1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pad2", ty: "bool", modifiers: "", def_value: None }]
constexpr InputRecord(int16_t  EventType, bool  KeyDown, int16_t  RepeatCount, int16_t  VirtualKeyCode, int16_t  VirtualScanCode, char16_t  Character, int32_t  ControlKeyState, int32_t  pad1, bool  pad2) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit InputRecord(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 InputRecord()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::InputRecord, 0x18>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::InputRecord, "System", "InputRecord");
