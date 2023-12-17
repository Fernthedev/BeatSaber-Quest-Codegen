#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ISonyPSPremiumHelper)
namespace GlobalNamespace {
struct __ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
struct __ISonyPSPremiumHelper__GetPremiumStatusResult;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
struct __ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult;
}
namespace GlobalNamespace {
struct __ISonyPSPremiumHelper__GetPremiumStatusResult;
}
namespace GlobalNamespace {
class ISonyPSPremiumHelper;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult);
MARK_VAL_T(::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult);
MARK_REF_PTR_T(::GlobalNamespace::ISonyPSPremiumHelper);
// Type: ::DisplayJoinPremiumDialogResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4574))
// CS Name: ::ISonyPSPremiumHelper::DisplayJoinPremiumDialogResult
struct CORDL_TYPE __ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult_Unwrapped
enum struct ____ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_Failed = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OK value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult const OK;

/// @brief Field Failed value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult const Failed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult_Unwrapped () const noexcept {
return std::bit_cast<____ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GetPremiumStatusResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4575))
// CS Name: ::ISonyPSPremiumHelper::GetPremiumStatusResult
struct CORDL_TYPE __ISonyPSPremiumHelper__GetPremiumStatusResult : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____ISonyPSPremiumHelper__GetPremiumStatusResult_Unwrapped
enum struct ____ISonyPSPremiumHelper__GetPremiumStatusResult_Unwrapped : int32_t {
__E_Authorized = static_cast<int32_t>(0x0),
__E_Unauthorized = static_cast<int32_t>(0x1),
__E_Failed = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Authorized value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult const Authorized;

/// @brief Field Unauthorized value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult const Unauthorized;

/// @brief Field Failed value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult const Failed;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____ISonyPSPremiumHelper__GetPremiumStatusResult_Unwrapped () const noexcept {
return std::bit_cast<____ISonyPSPremiumHelper__GetPremiumStatusResult_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __ISonyPSPremiumHelper__GetPremiumStatusResult(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __ISonyPSPremiumHelper__GetPremiumStatusResult(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __ISonyPSPremiumHelper__GetPremiumStatusResult()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ISonyPSPremiumHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4576))
// CS Name: ::ISonyPSPremiumHelper*
class CORDL_TYPE ISonyPSPremiumHelper {
public:
// Declarations
using GetPremiumStatusResult = ::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult;

using DisplayJoinPremiumDialogResult = ::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult;

/// @brief Method DisplayJoinPremiumDialogAsync addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult>* DisplayJoinPremiumDialogAsync(::System::Threading::CancellationToken  token) ;

/// @brief Method GetPremiumStatusAsync addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult>* GetPremiumStatusAsync(::System::Threading::CancellationToken  token) ;

/// @brief Method NotifyPremiumFeature addr 0x0 size 0xffffffffffffffff virtual true final false
inline void NotifyPremiumFeature(bool  isSpectator) ;

// Ctor Parameters [CppParam { name: "", ty: "ISonyPSPremiumHelper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ISonyPSPremiumHelper(ISonyPSPremiumHelper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ISonyPSPremiumHelper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ISonyPSPremiumHelper(ISonyPSPremiumHelper const& ) = delete;


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyPSPremiumHelper__DisplayJoinPremiumDialogResult, "", "ISonyPSPremiumHelper/DisplayJoinPremiumDialogResult");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ISonyPSPremiumHelper__GetPremiumStatusResult, "", "ISonyPSPremiumHelper/GetPremiumStatusResult");
NEED_NO_BOX(::GlobalNamespace::ISonyPSPremiumHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ISonyPSPremiumHelper*, "", "ISonyPSPremiumHelper");
