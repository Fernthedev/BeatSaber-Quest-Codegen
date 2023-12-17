#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SessionConnectionState)
// Forward declare root types
namespace HoudiniEngineUnity {
struct SessionConnectionState;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::SessionConnectionState);
// Type: HoudiniEngineUnity::SessionConnectionState
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9782))
// CS Name: ::HoudiniEngineUnity::SessionConnectionState
struct CORDL_TYPE SessionConnectionState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SessionConnectionState_Unwrapped
enum struct __SessionConnectionState_Unwrapped : int32_t {
__E_NOT_CONNECTED = static_cast<int32_t>(0x0),
__E_CONNECTED = static_cast<int32_t>(0x1),
__E_FAILED_TO_CONNECT = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NOT_CONNECTED value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::SessionConnectionState const NOT_CONNECTED;

/// @brief Field CONNECTED value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::SessionConnectionState const CONNECTED;

/// @brief Field FAILED_TO_CONNECT value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::SessionConnectionState const FAILED_TO_CONNECT;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __SessionConnectionState_Unwrapped () const noexcept {
return std::bit_cast<__SessionConnectionState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SessionConnectionState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SessionConnectionState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SessionConnectionState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::SessionConnectionState, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::SessionConnectionState, "HoudiniEngineUnity", "SessionConnectionState");
