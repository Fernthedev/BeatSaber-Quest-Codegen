#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_PDG_WorkitemState)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PDG_WorkitemState;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_PDG_WorkitemState);
// Type: HoudiniEngineUnity::HAPI_PDG_WorkitemState
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9724))
// CS Name: ::HoudiniEngineUnity::HAPI_PDG_WorkitemState
struct CORDL_TYPE HAPI_PDG_WorkitemState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HAPI_PDG_WorkitemState_Unwrapped
enum struct __HAPI_PDG_WorkitemState_Unwrapped : int32_t {
__E_HAPI_PDG_WORKITEM_UNDEFINED = static_cast<int32_t>(0x0),
__E_HAPI_PDG_WORKITEM_UNCOOKED = static_cast<int32_t>(0x1),
__E_HAPI_PDG_WORKITEM_WAITING = static_cast<int32_t>(0x2),
__E_HAPI_PDG_WORKITEM_SCHEDULED = static_cast<int32_t>(0x3),
__E_HAPI_PDG_WORKITEM_COOKING = static_cast<int32_t>(0x4),
__E_HAPI_PDG_WORKITEM_COOKED_SUCCESS = static_cast<int32_t>(0x5),
__E_HAPI_PDG_WORKITEM_COOKED_CACHE = static_cast<int32_t>(0x6),
__E_HAPI_PDG_WORKITEM_COOKED_FAIL = static_cast<int32_t>(0x7),
__E_HAPI_PDG_WORKITEM_COOKED_CANCEL = static_cast<int32_t>(0x8),
__E_HAPI_PDG_WORKITEM_DIRTY = static_cast<int32_t>(0x9),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field HAPI_PDG_WORKITEM_UNDEFINED value: static_cast<int32_t>(0x0)
static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_UNDEFINED;

/// @brief Field HAPI_PDG_WORKITEM_UNCOOKED value: static_cast<int32_t>(0x1)
static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_UNCOOKED;

/// @brief Field HAPI_PDG_WORKITEM_WAITING value: static_cast<int32_t>(0x2)
static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_WAITING;

/// @brief Field HAPI_PDG_WORKITEM_SCHEDULED value: static_cast<int32_t>(0x3)
static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_SCHEDULED;

/// @brief Field HAPI_PDG_WORKITEM_COOKING value: static_cast<int32_t>(0x4)
static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_COOKING;

/// @brief Field HAPI_PDG_WORKITEM_COOKED_SUCCESS value: static_cast<int32_t>(0x5)
static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_COOKED_SUCCESS;

/// @brief Field HAPI_PDG_WORKITEM_COOKED_CACHE value: static_cast<int32_t>(0x6)
static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_COOKED_CACHE;

/// @brief Field HAPI_PDG_WORKITEM_COOKED_FAIL value: static_cast<int32_t>(0x7)
static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_COOKED_FAIL;

/// @brief Field HAPI_PDG_WORKITEM_COOKED_CANCEL value: static_cast<int32_t>(0x8)
static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_COOKED_CANCEL;

/// @brief Field HAPI_PDG_WORKITEM_DIRTY value: static_cast<int32_t>(0x9)
static ::HoudiniEngineUnity::HAPI_PDG_WorkitemState const HAPI_PDG_WORKITEM_DIRTY;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __HAPI_PDG_WorkitemState_Unwrapped () const noexcept {
return std::bit_cast<__HAPI_PDG_WorkitemState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_PDG_WorkitemState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_PDG_WorkitemState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_PDG_WorkitemState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PDG_WorkitemState, 0x4>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_WorkitemState, "HoudiniEngineUnity", "HAPI_PDG_WorkitemState");
