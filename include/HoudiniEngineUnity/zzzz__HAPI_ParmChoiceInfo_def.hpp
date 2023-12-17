#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ParmChoiceInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ParmChoiceInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ParmChoiceInfo);
// Type: HoudiniEngineUnity::HAPI_ParmChoiceInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9735))
// CS Name: ::HoudiniEngineUnity::HAPI_ParmChoiceInfo
struct CORDL_TYPE HAPI_ParmChoiceInfo : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field parentParmId offset 0x0
 __declspec(property(get=__get_parentParmId, put=__set_parentParmId)) int32_t  parentParmId;

/// @brief Field labelSH offset 0x4
 __declspec(property(get=__get_labelSH, put=__set_labelSH)) int32_t  labelSH;

/// @brief Field valueSH offset 0x8
 __declspec(property(get=__get_valueSH, put=__set_valueSH)) int32_t  valueSH;

constexpr void __set_parentParmId(int32_t  value) ;

constexpr int32_t& __get_parentParmId() ;

constexpr int32_t const& __get_parentParmId() const;

constexpr void __set_labelSH(int32_t  value) ;

constexpr int32_t& __get_labelSH() ;

constexpr int32_t const& __get_labelSH() const;

constexpr void __set_valueSH(int32_t  value) ;

constexpr int32_t& __get_valueSH() ;

constexpr int32_t const& __get_valueSH() const;

// Ctor Parameters [CppParam { name: "parentParmId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "labelSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "valueSH", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_ParmChoiceInfo(int32_t  parentParmId, int32_t  labelSH, int32_t  valueSH) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_ParmChoiceInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_ParmChoiceInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ParmChoiceInfo, 0xc>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ParmChoiceInfo, "HoudiniEngineUnity", "HAPI_ParmChoiceInfo");
