#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SmallRect)
// Forward declare root types
namespace System {
struct SmallRect;
}
// Write type traits
MARK_VAL_T(::System::SmallRect);
// Type: System::SmallRect
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2646))
// CS Name: ::System::SmallRect
struct CORDL_TYPE SmallRect : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field Left offset 0x0
 __declspec(property(get=__get_Left, put=__set_Left)) int16_t  Left;

/// @brief Field Top offset 0x2
 __declspec(property(get=__get_Top, put=__set_Top)) int16_t  Top;

/// @brief Field Right offset 0x4
 __declspec(property(get=__get_Right, put=__set_Right)) int16_t  Right;

/// @brief Field Bottom offset 0x6
 __declspec(property(get=__get_Bottom, put=__set_Bottom)) int16_t  Bottom;

constexpr void __set_Left(int16_t  value) ;

constexpr int16_t& __get_Left() ;

constexpr int16_t const& __get_Left() const;

constexpr void __set_Top(int16_t  value) ;

constexpr int16_t& __get_Top() ;

constexpr int16_t const& __get_Top() const;

constexpr void __set_Right(int16_t  value) ;

constexpr int16_t& __get_Right() ;

constexpr int16_t const& __get_Right() const;

constexpr void __set_Bottom(int16_t  value) ;

constexpr int16_t& __get_Bottom() ;

constexpr int16_t const& __get_Bottom() const;

// Ctor Parameters [CppParam { name: "Left", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "Top", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "Right", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "Bottom", ty: "int16_t", modifiers: "", def_value: None }]
constexpr SmallRect(int16_t  Left, int16_t  Top, int16_t  Right, int16_t  Bottom) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SmallRect(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SmallRect()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::SmallRect, 0x8>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::SmallRect, "System", "SmallRect");
