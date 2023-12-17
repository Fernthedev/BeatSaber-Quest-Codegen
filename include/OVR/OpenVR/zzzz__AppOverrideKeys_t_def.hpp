#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AppOverrideKeys_t)
// Forward declare root types
namespace OVR::OpenVR {
struct AppOverrideKeys_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::AppOverrideKeys_t);
// Type: OVR.OpenVR::AppOverrideKeys_t
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8703))
// CS Name: ::OVR.OpenVR::AppOverrideKeys_t
struct CORDL_TYPE AppOverrideKeys_t : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field pchKey offset 0x0
 __declspec(property(get=__get_pchKey, put=__set_pchKey)) ::cordl_internals::intptr_t  pchKey;

/// @brief Field pchValue offset 0x8
 __declspec(property(get=__get_pchValue, put=__set_pchValue)) ::cordl_internals::intptr_t  pchValue;

constexpr void __set_pchKey(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_pchKey() ;

constexpr ::cordl_internals::intptr_t const& __get_pchKey() const;

constexpr void __set_pchValue(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_pchValue() ;

constexpr ::cordl_internals::intptr_t const& __get_pchValue() const;

// Ctor Parameters [CppParam { name: "pchKey", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "pchValue", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr AppOverrideKeys_t(::cordl_internals::intptr_t  pchKey, ::cordl_internals::intptr_t  pchValue) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AppOverrideKeys_t(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AppOverrideKeys_t()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::AppOverrideKeys_t, 0x10>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::AppOverrideKeys_t, "OVR.OpenVR", "AppOverrideKeys_t");
