#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_PDG_WorkitemResultInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PDG_WorkitemResultInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo);
// Type: HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9754))
// CS Name: ::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo
struct CORDL_TYPE HAPI_PDG_WorkitemResultInfo : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field resultSH offset 0x0
 __declspec(property(get=__get_resultSH, put=__set_resultSH)) int32_t  resultSH;

/// @brief Field resultTagSH offset 0x4
 __declspec(property(get=__get_resultTagSH, put=__set_resultTagSH)) int32_t  resultTagSH;

/// @brief Field resultHash offset 0x8
 __declspec(property(get=__get_resultHash, put=__set_resultHash)) int64_t  resultHash;

constexpr void __set_resultSH(int32_t  value) ;

constexpr int32_t& __get_resultSH() ;

constexpr int32_t const& __get_resultSH() const;

constexpr void __set_resultTagSH(int32_t  value) ;

constexpr int32_t& __get_resultTagSH() ;

constexpr int32_t const& __get_resultTagSH() const;

constexpr void __set_resultHash(int64_t  value) ;

constexpr int64_t& __get_resultHash() ;

constexpr int64_t const& __get_resultHash() const;

// Ctor Parameters [CppParam { name: "resultSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "resultTagSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "resultHash", ty: "int64_t", modifiers: "", def_value: None }]
constexpr HAPI_PDG_WorkitemResultInfo(int32_t  resultSH, int32_t  resultTagSH, int64_t  resultHash) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_PDG_WorkitemResultInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_PDG_WorkitemResultInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo, 0x10>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo, "HoudiniEngineUnity", "HAPI_PDG_WorkitemResultInfo");
