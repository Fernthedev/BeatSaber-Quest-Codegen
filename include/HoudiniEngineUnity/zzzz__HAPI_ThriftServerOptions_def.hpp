#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_ThriftServerOptions)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ThriftServerOptions;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ThriftServerOptions);
// Type: HoudiniEngineUnity::HAPI_ThriftServerOptions
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9729))
// CS Name: ::HoudiniEngineUnity::HAPI_ThriftServerOptions
struct CORDL_TYPE HAPI_ThriftServerOptions : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field autoClose offset 0x0
 __declspec(property(get=__get_autoClose, put=__set_autoClose)) bool  autoClose;

/// @brief Field timeoutMs offset 0x4
 __declspec(property(get=__get_timeoutMs, put=__set_timeoutMs)) float_t  timeoutMs;

constexpr void __set_autoClose(bool  value) ;

constexpr bool& __get_autoClose() ;

constexpr bool const& __get_autoClose() const;

constexpr void __set_timeoutMs(float_t  value) ;

constexpr float_t& __get_timeoutMs() ;

constexpr float_t const& __get_timeoutMs() const;

// Ctor Parameters [CppParam { name: "autoClose", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "timeoutMs", ty: "float_t", modifiers: "", def_value: None }]
constexpr HAPI_ThriftServerOptions(bool  autoClose, float_t  timeoutMs) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_ThriftServerOptions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_ThriftServerOptions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ThriftServerOptions, 0x8>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ThriftServerOptions, "HoudiniEngineUnity", "HAPI_ThriftServerOptions");
