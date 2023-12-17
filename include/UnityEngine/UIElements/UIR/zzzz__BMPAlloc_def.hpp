#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BMPAlloc)
namespace UnityEngine::UIElements::UIR {
struct OwnedState;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::BMPAlloc);
// Type: UnityEngine.UIElements.UIR::BMPAlloc
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7374))
// CS Name: ::UnityEngine.UIElements.UIR::BMPAlloc
struct CORDL_TYPE BMPAlloc : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field page offset 0x0
 __declspec(property(get=__get_page, put=__set_page)) int32_t  page;

/// @brief Field pageLine offset 0x4
 __declspec(property(get=__get_pageLine, put=__set_pageLine)) uint16_t  pageLine;

/// @brief Field bitIndex offset 0x6
 __declspec(property(get=__get_bitIndex, put=__set_bitIndex)) uint8_t  bitIndex;

/// @brief Field ownedState offset 0x7
 __declspec(property(get=__get_ownedState, put=__set_ownedState)) ::UnityEngine::UIElements::UIR::OwnedState  ownedState;

static inline void setStaticF_Invalid(::UnityEngine::UIElements::UIR::BMPAlloc  value) ;

static inline ::UnityEngine::UIElements::UIR::BMPAlloc getStaticF_Invalid() ;

constexpr void __set_page(int32_t  value) ;

constexpr int32_t& __get_page() ;

constexpr int32_t const& __get_page() const;

constexpr void __set_pageLine(uint16_t  value) ;

constexpr uint16_t& __get_pageLine() ;

constexpr uint16_t const& __get_pageLine() const;

constexpr void __set_bitIndex(uint8_t  value) ;

constexpr uint8_t& __get_bitIndex() ;

constexpr uint8_t const& __get_bitIndex() const;

constexpr void __set_ownedState(::UnityEngine::UIElements::UIR::OwnedState  value) ;

constexpr ::UnityEngine::UIElements::UIR::OwnedState& __get_ownedState() ;

constexpr ::UnityEngine::UIElements::UIR::OwnedState const& __get_ownedState() const;

/// @brief Method Equals addr 0x2e87e84 size 0x38 virtual false final false
inline bool Equals(::UnityEngine::UIElements::UIR::BMPAlloc  other) ;

/// @brief Method IsValid addr 0x2e87ebc size 0x10 virtual false final false
inline bool IsValid() ;

/// @brief Method ToString addr 0x2e87ecc size 0xf4 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "page", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "pageLine", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "bitIndex", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "ownedState", ty: "::UnityEngine::UIElements::UIR::OwnedState", modifiers: "", def_value: None }]
constexpr BMPAlloc(int32_t  page, uint16_t  pageLine, uint8_t  bitIndex, ::UnityEngine::UIElements::UIR::OwnedState  ownedState) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit BMPAlloc(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 BMPAlloc()  = default;


// Fields

// Static field Invalid


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::BMPAlloc, 0x8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::BMPAlloc, "UnityEngine.UIElements.UIR", "BMPAlloc");
