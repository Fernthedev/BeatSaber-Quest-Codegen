#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(KerningPairKey)
// Forward declare root types
namespace TMPro {
struct KerningPairKey;
}
// Write type traits
MARK_VAL_T(::TMPro::KerningPairKey);
// Type: TMPro::KerningPairKey
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12361))
// CS Name: ::TMPro::KerningPairKey
struct CORDL_TYPE KerningPairKey : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field ascii_Left offset 0x0
 __declspec(property(get=__get_ascii_Left, put=__set_ascii_Left)) uint32_t  ascii_Left;

/// @brief Field ascii_Right offset 0x4
 __declspec(property(get=__get_ascii_Right, put=__set_ascii_Right)) uint32_t  ascii_Right;

/// @brief Field key offset 0x8
 __declspec(property(get=__get_key, put=__set_key)) uint32_t  key;

constexpr void __set_ascii_Left(uint32_t  value) ;

constexpr uint32_t& __get_ascii_Left() ;

constexpr uint32_t const& __get_ascii_Left() const;

constexpr void __set_ascii_Right(uint32_t  value) ;

constexpr uint32_t& __get_ascii_Right() ;

constexpr uint32_t const& __get_ascii_Right() const;

constexpr void __set_key(uint32_t  value) ;

constexpr uint32_t& __get_key() ;

constexpr uint32_t const& __get_key() const;

/// @brief Method .ctor addr 0x2c102e8 size 0x10 virtual false final false
inline void _ctor(uint32_t  ascii_left, uint32_t  ascii_right) ;

// Ctor Parameters [CppParam { name: "ascii_Left", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ascii_Right", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr KerningPairKey(uint32_t  ascii_Left, uint32_t  ascii_Right, uint32_t  key) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit KerningPairKey(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 KerningPairKey()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::KerningPairKey, 0xc>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::KerningPairKey, "TMPro", "KerningPairKey");
