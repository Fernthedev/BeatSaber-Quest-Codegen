#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CaretInfo)
namespace TMPro {
struct CaretPosition;
}
// Forward declare root types
namespace TMPro {
struct CaretInfo;
}
// Write type traits
MARK_VAL_T(::TMPro::CaretInfo);
// Type: TMPro::CaretInfo
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12455))
// CS Name: ::TMPro::CaretInfo
struct CORDL_TYPE CaretInfo : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field index offset 0x0
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field position offset 0x4
 __declspec(property(get=__get_position, put=__set_position)) ::TMPro::CaretPosition  position;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_position(::TMPro::CaretPosition  value) ;

constexpr ::TMPro::CaretPosition& __get_position() ;

constexpr ::TMPro::CaretPosition const& __get_position() const;

/// @brief Method .ctor addr 0x2c49080 size 0x8 virtual false final false
inline void _ctor(int32_t  index, ::TMPro::CaretPosition  position) ;

// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "position", ty: "::TMPro::CaretPosition", modifiers: "", def_value: None }]
constexpr CaretInfo(int32_t  index, ::TMPro::CaretPosition  position) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CaretInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CaretInfo()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::CaretInfo, 0x8>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::CaretInfo, "TMPro", "CaretInfo");
