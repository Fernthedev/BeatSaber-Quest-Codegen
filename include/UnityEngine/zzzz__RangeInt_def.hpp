#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RangeInt)
// Forward declare root types
namespace UnityEngine {
struct RangeInt;
}
// Write type traits
MARK_VAL_T(::UnityEngine::RangeInt);
// Type: UnityEngine::RangeInt
namespace UnityEngine {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10197))
// CS Name: ::UnityEngine::RangeInt
struct CORDL_TYPE RangeInt : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field start offset 0x0
 __declspec(property(get=__get_start, put=__set_start)) int32_t  start;

/// @brief Field length offset 0x4
 __declspec(property(get=__get_length, put=__set_length)) int32_t  length;

 __declspec(property(get=get_end)) int32_t  end;

constexpr void __set_start(int32_t  value) ;

constexpr int32_t& __get_start() ;

constexpr int32_t const& __get_start() const;

constexpr void __set_length(int32_t  value) ;

constexpr int32_t& __get_length() ;

constexpr int32_t const& __get_length() const;

/// @brief Method get_end addr 0x2ccef64 size 0xc virtual false final false
inline int32_t get_end() ;

/// @brief Method .ctor addr 0x2ccef70 size 0x8 virtual false final false
inline void _ctor(int32_t  start, int32_t  length) ;

// Ctor Parameters [CppParam { name: "start", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RangeInt(int32_t  start, int32_t  length) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RangeInt(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RangeInt()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RangeInt, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RangeInt, "UnityEngine", "RangeInt");
