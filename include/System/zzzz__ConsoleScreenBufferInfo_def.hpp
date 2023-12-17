#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleScreenBufferInfo)
namespace System {
struct SmallRect;
}
namespace System {
struct Coord;
}
// Forward declare root types
namespace System {
struct ConsoleScreenBufferInfo;
}
// Write type traits
MARK_VAL_T(::System::ConsoleScreenBufferInfo);
// Type: System::ConsoleScreenBufferInfo
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2647))
// CS Name: ::System::ConsoleScreenBufferInfo
struct CORDL_TYPE ConsoleScreenBufferInfo : public ::bs_hook::ValueTypeWrapper<0x16> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x16};

/// @brief Field Size offset 0x0
 __declspec(property(get=__get_Size, put=__set_Size)) ::System::Coord  Size;

/// @brief Field CursorPosition offset 0x4
 __declspec(property(get=__get_CursorPosition, put=__set_CursorPosition)) ::System::Coord  CursorPosition;

/// @brief Field Attribute offset 0x8
 __declspec(property(get=__get_Attribute, put=__set_Attribute)) int16_t  Attribute;

/// @brief Field Window offset 0xa
 __declspec(property(get=__get_Window, put=__set_Window)) ::System::SmallRect  Window;

/// @brief Field MaxWindowSize offset 0x12
 __declspec(property(get=__get_MaxWindowSize, put=__set_MaxWindowSize)) ::System::Coord  MaxWindowSize;

constexpr void __set_Size(::System::Coord  value) ;

constexpr ::System::Coord& __get_Size() ;

constexpr ::System::Coord const& __get_Size() const;

constexpr void __set_CursorPosition(::System::Coord  value) ;

constexpr ::System::Coord& __get_CursorPosition() ;

constexpr ::System::Coord const& __get_CursorPosition() const;

constexpr void __set_Attribute(int16_t  value) ;

constexpr int16_t& __get_Attribute() ;

constexpr int16_t const& __get_Attribute() const;

constexpr void __set_Window(::System::SmallRect  value) ;

constexpr ::System::SmallRect& __get_Window() ;

constexpr ::System::SmallRect const& __get_Window() const;

constexpr void __set_MaxWindowSize(::System::Coord  value) ;

constexpr ::System::Coord& __get_MaxWindowSize() ;

constexpr ::System::Coord const& __get_MaxWindowSize() const;

// Ctor Parameters [CppParam { name: "Size", ty: "::System::Coord", modifiers: "", def_value: None }, CppParam { name: "CursorPosition", ty: "::System::Coord", modifiers: "", def_value: None }, CppParam { name: "Attribute", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "Window", ty: "::System::SmallRect", modifiers: "", def_value: None }, CppParam { name: "MaxWindowSize", ty: "::System::Coord", modifiers: "", def_value: None }]
constexpr ConsoleScreenBufferInfo(::System::Coord  Size, ::System::Coord  CursorPosition, int16_t  Attribute, ::System::SmallRect  Window, ::System::Coord  MaxWindowSize) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ConsoleScreenBufferInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x16>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ConsoleScreenBufferInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ConsoleScreenBufferInfo, 0x16>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleScreenBufferInfo, "System", "ConsoleScreenBufferInfo");
