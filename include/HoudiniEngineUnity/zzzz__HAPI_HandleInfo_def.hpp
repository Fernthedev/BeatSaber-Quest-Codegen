#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_HandleInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_HandleInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_HandleInfo);
// Type: HoudiniEngineUnity::HAPI_HandleInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9736))
// CS Name: ::HoudiniEngineUnity::HAPI_HandleInfo
struct CORDL_TYPE HAPI_HandleInfo : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field nameSH offset 0x0
 __declspec(property(get=__get_nameSH, put=__set_nameSH)) int32_t  nameSH;

/// @brief Field typeNameSH offset 0x4
 __declspec(property(get=__get_typeNameSH, put=__set_typeNameSH)) int32_t  typeNameSH;

/// @brief Field bindingsCount offset 0x8
 __declspec(property(get=__get_bindingsCount, put=__set_bindingsCount)) int32_t  bindingsCount;

constexpr void __set_nameSH(int32_t  value) ;

constexpr int32_t& __get_nameSH() ;

constexpr int32_t const& __get_nameSH() const;

constexpr void __set_typeNameSH(int32_t  value) ;

constexpr int32_t& __get_typeNameSH() ;

constexpr int32_t const& __get_typeNameSH() const;

constexpr void __set_bindingsCount(int32_t  value) ;

constexpr int32_t& __get_bindingsCount() ;

constexpr int32_t const& __get_bindingsCount() const;

// Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "typeNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bindingsCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_HandleInfo(int32_t  nameSH, int32_t  typeNameSH, int32_t  bindingsCount) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_HandleInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_HandleInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_HandleInfo, 0xc>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_HandleInfo, "HoudiniEngineUnity", "HAPI_HandleInfo");
