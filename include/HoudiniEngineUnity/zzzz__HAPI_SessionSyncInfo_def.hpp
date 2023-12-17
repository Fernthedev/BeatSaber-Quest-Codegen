#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_SessionSyncInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_SessionSyncInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_SessionSyncInfo);
// Type: HoudiniEngineUnity::HAPI_SessionSyncInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9756))
// CS Name: ::HoudiniEngineUnity::HAPI_SessionSyncInfo
struct CORDL_TYPE HAPI_SessionSyncInfo : public ::bs_hook::ValueTypeWrapper<0x2> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x2};

/// @brief Field cookUsingHoudiniTime offset 0x0
 __declspec(property(get=__get_cookUsingHoudiniTime, put=__set_cookUsingHoudiniTime)) bool  cookUsingHoudiniTime;

/// @brief Field syncViewport offset 0x1
 __declspec(property(get=__get_syncViewport, put=__set_syncViewport)) bool  syncViewport;

constexpr void __set_cookUsingHoudiniTime(bool  value) ;

constexpr bool& __get_cookUsingHoudiniTime() ;

constexpr bool const& __get_cookUsingHoudiniTime() const;

constexpr void __set_syncViewport(bool  value) ;

constexpr bool& __get_syncViewport() ;

constexpr bool const& __get_syncViewport() const;

// Ctor Parameters [CppParam { name: "cookUsingHoudiniTime", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "syncViewport", ty: "bool", modifiers: "", def_value: None }]
constexpr HAPI_SessionSyncInfo(bool  cookUsingHoudiniTime, bool  syncViewport) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_SessionSyncInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x2>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_SessionSyncInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_SessionSyncInfo, 0x2>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_SessionSyncInfo, "HoudiniEngineUnity", "HAPI_SessionSyncInfo");
