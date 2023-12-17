#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LazyState)
// Forward declare root types
namespace System {
struct LazyState;
}
// Write type traits
MARK_VAL_T(::System::LazyState);
// Type: System::LazyState
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2430))
// CS Name: ::System::LazyState
struct CORDL_TYPE LazyState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LazyState_Unwrapped
enum struct __LazyState_Unwrapped : int32_t {
__E_NoneViaConstructor = static_cast<int32_t>(0x0),
__E_NoneViaFactory = static_cast<int32_t>(0x1),
__E_NoneException = static_cast<int32_t>(0x2),
__E_PublicationOnlyViaConstructor = static_cast<int32_t>(0x3),
__E_PublicationOnlyViaFactory = static_cast<int32_t>(0x4),
__E_PublicationOnlyWait = static_cast<int32_t>(0x5),
__E_PublicationOnlyException = static_cast<int32_t>(0x6),
__E_ExecutionAndPublicationViaConstructor = static_cast<int32_t>(0x7),
__E_ExecutionAndPublicationViaFactory = static_cast<int32_t>(0x8),
__E_ExecutionAndPublicationException = static_cast<int32_t>(0x9),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field NoneViaConstructor value: static_cast<int32_t>(0x0)
static ::System::LazyState const NoneViaConstructor;

/// @brief Field NoneViaFactory value: static_cast<int32_t>(0x1)
static ::System::LazyState const NoneViaFactory;

/// @brief Field NoneException value: static_cast<int32_t>(0x2)
static ::System::LazyState const NoneException;

/// @brief Field PublicationOnlyViaConstructor value: static_cast<int32_t>(0x3)
static ::System::LazyState const PublicationOnlyViaConstructor;

/// @brief Field PublicationOnlyViaFactory value: static_cast<int32_t>(0x4)
static ::System::LazyState const PublicationOnlyViaFactory;

/// @brief Field PublicationOnlyWait value: static_cast<int32_t>(0x5)
static ::System::LazyState const PublicationOnlyWait;

/// @brief Field PublicationOnlyException value: static_cast<int32_t>(0x6)
static ::System::LazyState const PublicationOnlyException;

/// @brief Field ExecutionAndPublicationViaConstructor value: static_cast<int32_t>(0x7)
static ::System::LazyState const ExecutionAndPublicationViaConstructor;

/// @brief Field ExecutionAndPublicationViaFactory value: static_cast<int32_t>(0x8)
static ::System::LazyState const ExecutionAndPublicationViaFactory;

/// @brief Field ExecutionAndPublicationException value: static_cast<int32_t>(0x9)
static ::System::LazyState const ExecutionAndPublicationException;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __LazyState_Unwrapped () const noexcept {
return std::bit_cast<__LazyState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LazyState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LazyState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LazyState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::LazyState, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::LazyState, "System", "LazyState");
