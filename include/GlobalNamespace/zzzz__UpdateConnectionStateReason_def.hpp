#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UpdateConnectionStateReason)
// Forward declare root types
namespace GlobalNamespace {
struct UpdateConnectionStateReason;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UpdateConnectionStateReason);
// Type: ::UpdateConnectionStateReason
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12992))
// CS Name: ::UpdateConnectionStateReason
struct CORDL_TYPE UpdateConnectionStateReason : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __UpdateConnectionStateReason_Unwrapped
enum struct __UpdateConnectionStateReason_Unwrapped : int32_t {
__E_Init = static_cast<int32_t>(0x0),
__E_PlayerOrderChanged = static_cast<int32_t>(0x1),
__E_Connected = static_cast<int32_t>(0x2),
__E_StartSession = static_cast<int32_t>(0x3),
__E_StartDedicatedServer = static_cast<int32_t>(0x4),
__E_SyncTimeInitialized = static_cast<int32_t>(0x5),
__E_ManualDisconnect = static_cast<int32_t>(0x6),
__E_RemoteDisconnect = static_cast<int32_t>(0x7),
__E_ConnectionFailed = static_cast<int32_t>(0x8),
__E_OnDestroy = static_cast<int32_t>(0x9),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Init value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::UpdateConnectionStateReason const Init;

/// @brief Field PlayerOrderChanged value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::UpdateConnectionStateReason const PlayerOrderChanged;

/// @brief Field Connected value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::UpdateConnectionStateReason const Connected;

/// @brief Field StartSession value: static_cast<int32_t>(0x3)
static ::GlobalNamespace::UpdateConnectionStateReason const StartSession;

/// @brief Field StartDedicatedServer value: static_cast<int32_t>(0x4)
static ::GlobalNamespace::UpdateConnectionStateReason const StartDedicatedServer;

/// @brief Field SyncTimeInitialized value: static_cast<int32_t>(0x5)
static ::GlobalNamespace::UpdateConnectionStateReason const SyncTimeInitialized;

/// @brief Field ManualDisconnect value: static_cast<int32_t>(0x6)
static ::GlobalNamespace::UpdateConnectionStateReason const ManualDisconnect;

/// @brief Field RemoteDisconnect value: static_cast<int32_t>(0x7)
static ::GlobalNamespace::UpdateConnectionStateReason const RemoteDisconnect;

/// @brief Field ConnectionFailed value: static_cast<int32_t>(0x8)
static ::GlobalNamespace::UpdateConnectionStateReason const ConnectionFailed;

/// @brief Field OnDestroy value: static_cast<int32_t>(0x9)
static ::GlobalNamespace::UpdateConnectionStateReason const OnDestroy;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __UpdateConnectionStateReason_Unwrapped () const noexcept {
return std::bit_cast<__UpdateConnectionStateReason_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UpdateConnectionStateReason(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit UpdateConnectionStateReason(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 UpdateConnectionStateReason()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UpdateConnectionStateReason, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UpdateConnectionStateReason, "", "UpdateConnectionStateReason");
