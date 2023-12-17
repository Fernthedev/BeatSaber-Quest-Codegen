#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GCHandleType)
// Forward declare root types
namespace System::Runtime::InteropServices {
struct GCHandleType;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::GCHandleType);
// Type: System.Runtime.InteropServices::GCHandleType
namespace System::Runtime::InteropServices {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3308))
// CS Name: ::System.Runtime.InteropServices::GCHandleType
struct CORDL_TYPE GCHandleType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GCHandleType_Unwrapped
enum struct __GCHandleType_Unwrapped : int32_t {
__E_Weak = static_cast<int32_t>(0x0),
__E_WeakTrackResurrection = static_cast<int32_t>(0x1),
__E_Normal = static_cast<int32_t>(0x2),
__E_Pinned = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Weak value: static_cast<int32_t>(0x0)
static ::System::Runtime::InteropServices::GCHandleType const Weak;

/// @brief Field WeakTrackResurrection value: static_cast<int32_t>(0x1)
static ::System::Runtime::InteropServices::GCHandleType const WeakTrackResurrection;

/// @brief Field Normal value: static_cast<int32_t>(0x2)
static ::System::Runtime::InteropServices::GCHandleType const Normal;

/// @brief Field Pinned value: static_cast<int32_t>(0x3)
static ::System::Runtime::InteropServices::GCHandleType const Pinned;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __GCHandleType_Unwrapped () const noexcept {
return std::bit_cast<__GCHandleType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GCHandleType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GCHandleType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GCHandleType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::GCHandleType, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::GCHandleType, "System.Runtime.InteropServices", "GCHandleType");
