#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MidiEvent)
namespace MidiParser {
struct MetaEventType;
}
// Forward declare root types
namespace MidiParser {
struct MidiEvent;
}
// Write type traits
MARK_VAL_T(::MidiParser::MidiEvent);
// Type: MidiParser::MidiEvent
namespace MidiParser {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16230))
// CS Name: ::MidiParser::MidiEvent
struct CORDL_TYPE MidiEvent : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field AbsoluteTicksTime offset 0x0
 __declspec(property(get=__get_AbsoluteTicksTime, put=__set_AbsoluteTicksTime)) int32_t  AbsoluteTicksTime;

/// @brief Field Type offset 0x4
 __declspec(property(get=__get_Type, put=__set_Type)) uint8_t  Type;

/// @brief Field Arg1 offset 0x8
 __declspec(property(get=__get_Arg1, put=__set_Arg1)) int32_t  Arg1;

/// @brief Field Arg2 offset 0xc
 __declspec(property(get=__get_Arg2, put=__set_Arg2)) int32_t  Arg2;

/// @brief Field Arg3 offset 0x10
 __declspec(property(get=__get_Arg3, put=__set_Arg3)) int32_t  Arg3;

 __declspec(property(get=get_MetaEventType)) ::MidiParser::MetaEventType  MetaEventType;

 __declspec(property(get=get_Channel)) int32_t  Channel;

 __declspec(property(get=get_Note)) int32_t  Note;

 __declspec(property(get=get_Velocity)) int32_t  Velocity;

 __declspec(property(get=get_Value)) int32_t  Value;

constexpr void __set_AbsoluteTicksTime(int32_t  value) ;

constexpr int32_t& __get_AbsoluteTicksTime() ;

constexpr int32_t const& __get_AbsoluteTicksTime() const;

constexpr void __set_Type(uint8_t  value) ;

constexpr uint8_t& __get_Type() ;

constexpr uint8_t const& __get_Type() const;

constexpr void __set_Arg1(int32_t  value) ;

constexpr int32_t& __get_Arg1() ;

constexpr int32_t const& __get_Arg1() const;

constexpr void __set_Arg2(int32_t  value) ;

constexpr int32_t& __get_Arg2() ;

constexpr int32_t const& __get_Arg2() const;

constexpr void __set_Arg3(int32_t  value) ;

constexpr int32_t& __get_Arg3() ;

constexpr int32_t const& __get_Arg3() const;

/// @brief Method get_MetaEventType addr 0x23e6720 size 0x8 virtual false final false
inline ::MidiParser::MetaEventType get_MetaEventType() ;

/// @brief Method get_Channel addr 0x23e6728 size 0x8 virtual false final false
inline int32_t get_Channel() ;

/// @brief Method get_Note addr 0x23e6730 size 0x8 virtual false final false
inline int32_t get_Note() ;

/// @brief Method get_Velocity addr 0x23e6738 size 0x8 virtual false final false
inline int32_t get_Velocity() ;

/// @brief Method get_Value addr 0x23e6740 size 0x8 virtual false final false
inline int32_t get_Value() ;

// Ctor Parameters [CppParam { name: "AbsoluteTicksTime", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "Arg1", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Arg2", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Arg3", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MidiEvent(int32_t  AbsoluteTicksTime, uint8_t  Type, int32_t  Arg1, int32_t  Arg2, int32_t  Arg3) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MidiEvent(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MidiEvent()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::MidiParser::MidiEvent, 0x14>, "Size mismatch!");

} // namespace end def MidiParser
DEFINE_IL2CPP_ARG_TYPE(::MidiParser::MidiEvent, "MidiParser", "MidiEvent");
