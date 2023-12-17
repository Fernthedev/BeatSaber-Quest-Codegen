#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RequestCacheLevel)
// Forward declare root types
namespace System::Net::Cache {
struct RequestCacheLevel;
}
// Write type traits
MARK_VAL_T(::System::Net::Cache::RequestCacheLevel);
// Type: System.Net.Cache::RequestCacheLevel
namespace System::Net::Cache {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9321))
// CS Name: ::System.Net.Cache::RequestCacheLevel
struct CORDL_TYPE RequestCacheLevel : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RequestCacheLevel_Unwrapped
enum struct __RequestCacheLevel_Unwrapped : int32_t {
__E_Default = static_cast<int32_t>(0x0),
__E_BypassCache = static_cast<int32_t>(0x1),
__E_CacheOnly = static_cast<int32_t>(0x2),
__E_CacheIfAvailable = static_cast<int32_t>(0x3),
__E_Revalidate = static_cast<int32_t>(0x4),
__E_Reload = static_cast<int32_t>(0x5),
__E_NoCacheNoStore = static_cast<int32_t>(0x6),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Default value: static_cast<int32_t>(0x0)
static ::System::Net::Cache::RequestCacheLevel const Default;

/// @brief Field BypassCache value: static_cast<int32_t>(0x1)
static ::System::Net::Cache::RequestCacheLevel const BypassCache;

/// @brief Field CacheOnly value: static_cast<int32_t>(0x2)
static ::System::Net::Cache::RequestCacheLevel const CacheOnly;

/// @brief Field CacheIfAvailable value: static_cast<int32_t>(0x3)
static ::System::Net::Cache::RequestCacheLevel const CacheIfAvailable;

/// @brief Field Revalidate value: static_cast<int32_t>(0x4)
static ::System::Net::Cache::RequestCacheLevel const Revalidate;

/// @brief Field Reload value: static_cast<int32_t>(0x5)
static ::System::Net::Cache::RequestCacheLevel const Reload;

/// @brief Field NoCacheNoStore value: static_cast<int32_t>(0x6)
static ::System::Net::Cache::RequestCacheLevel const NoCacheNoStore;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __RequestCacheLevel_Unwrapped () const noexcept {
return std::bit_cast<__RequestCacheLevel_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RequestCacheLevel(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit RequestCacheLevel(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 RequestCacheLevel()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Cache::RequestCacheLevel, 0x4>, "Size mismatch!");

} // namespace end def System::Net::Cache
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Cache::RequestCacheLevel, "System.Net.Cache", "RequestCacheLevel");
