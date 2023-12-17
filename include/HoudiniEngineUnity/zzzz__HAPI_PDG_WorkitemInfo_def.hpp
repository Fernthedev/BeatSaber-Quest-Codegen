#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_PDG_WorkitemInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PDG_WorkitemInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo);
// Type: HoudiniEngineUnity::HAPI_PDG_WorkitemInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9753))
// CS Name: ::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo
struct CORDL_TYPE HAPI_PDG_WorkitemInfo : public ::bs_hook::ValueTypeWrapper<0xc> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field index offset 0x0
 __declspec(property(get=__get_index, put=__set_index)) int32_t  index;

/// @brief Field numResults offset 0x4
 __declspec(property(get=__get_numResults, put=__set_numResults)) int32_t  numResults;

/// @brief Field nameSH offset 0x8
 __declspec(property(get=__get_nameSH, put=__set_nameSH)) int32_t  nameSH;

constexpr void __set_index(int32_t  value) ;

constexpr int32_t& __get_index() ;

constexpr int32_t const& __get_index() const;

constexpr void __set_numResults(int32_t  value) ;

constexpr int32_t& __get_numResults() ;

constexpr int32_t const& __get_numResults() const;

constexpr void __set_nameSH(int32_t  value) ;

constexpr int32_t& __get_nameSH() ;

constexpr int32_t const& __get_nameSH() const;

// Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "numResults", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_PDG_WorkitemInfo(int32_t  index, int32_t  numResults, int32_t  nameSH) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_PDG_WorkitemInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xc>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_PDG_WorkitemInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo, 0xc>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo, "HoudiniEngineUnity", "HAPI_PDG_WorkitemInfo");
