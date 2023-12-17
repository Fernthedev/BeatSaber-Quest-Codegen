#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Coord)
// Forward declare root types
namespace System {
struct Coord;
}
// Write type traits
MARK_VAL_T(::System::Coord);
// Type: System::Coord
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2645))
// CS Name: ::System::Coord
struct CORDL_TYPE Coord : public ::bs_hook::ValueTypeWrapper<0x4> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field X offset 0x0
 __declspec(property(get=__get_X, put=__set_X)) int16_t  X;

/// @brief Field Y offset 0x2
 __declspec(property(get=__get_Y, put=__set_Y)) int16_t  Y;

constexpr void __set_X(int16_t  value) ;

constexpr int16_t& __get_X() ;

constexpr int16_t const& __get_X() const;

constexpr void __set_Y(int16_t  value) ;

constexpr int16_t& __get_Y() ;

constexpr int16_t const& __get_Y() const;

// Ctor Parameters [CppParam { name: "X", ty: "int16_t", modifiers: "", def_value: None }, CppParam { name: "Y", ty: "int16_t", modifiers: "", def_value: None }]
constexpr Coord(int16_t  X, int16_t  Y) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit Coord(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 Coord()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Coord, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::Coord, "System", "Coord");
