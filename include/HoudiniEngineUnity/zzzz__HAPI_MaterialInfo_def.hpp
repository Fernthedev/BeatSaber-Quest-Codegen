#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_MaterialInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_MaterialInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_MaterialInfo);
// Type: HoudiniEngineUnity::HAPI_MaterialInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9742))
// CS Name: ::HoudiniEngineUnity::HAPI_MaterialInfo
struct CORDL_TYPE HAPI_MaterialInfo : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field nodeId offset 0x0
 __declspec(property(get=__get_nodeId, put=__set_nodeId)) int32_t  nodeId;

/// @brief Field exists offset 0x4
 __declspec(property(get=__get_exists, put=__set_exists)) bool  exists;

/// @brief Field hasChanged offset 0x5
 __declspec(property(get=__get_hasChanged, put=__set_hasChanged)) bool  hasChanged;

constexpr void __set_nodeId(int32_t  value) ;

constexpr int32_t& __get_nodeId() ;

constexpr int32_t const& __get_nodeId() const;

constexpr void __set_exists(bool  value) ;

constexpr bool& __get_exists() ;

constexpr bool const& __get_exists() const;

constexpr void __set_hasChanged(bool  value) ;

constexpr bool& __get_hasChanged() ;

constexpr bool const& __get_hasChanged() const;

// Ctor Parameters [CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "exists", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasChanged", ty: "bool", modifiers: "", def_value: None }]
constexpr HAPI_MaterialInfo(int32_t  nodeId, bool  exists, bool  hasChanged) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_MaterialInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_MaterialInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_MaterialInfo, 0x8>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_MaterialInfo, "HoudiniEngineUnity", "HAPI_MaterialInfo");
