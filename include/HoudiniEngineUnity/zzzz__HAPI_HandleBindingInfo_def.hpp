#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_HandleBindingInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_HandleBindingInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_HandleBindingInfo);
// Type: HoudiniEngineUnity::HAPI_HandleBindingInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9737))
// CS Name: ::HoudiniEngineUnity::HAPI_HandleBindingInfo
struct CORDL_TYPE HAPI_HandleBindingInfo : public ::bs_hook::ValueTypeWrapper<0x10> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field handleParmNameSH offset 0x0
 __declspec(property(get=__get_handleParmNameSH, put=__set_handleParmNameSH)) int32_t  handleParmNameSH;

/// @brief Field assetParmNameSH offset 0x4
 __declspec(property(get=__get_assetParmNameSH, put=__set_assetParmNameSH)) int32_t  assetParmNameSH;

/// @brief Field assetParmId offset 0x8
 __declspec(property(get=__get_assetParmId, put=__set_assetParmId)) int32_t  assetParmId;

/// @brief Field assetParmIndex offset 0xc
 __declspec(property(get=__get_assetParmIndex, put=__set_assetParmIndex)) int32_t  assetParmIndex;

constexpr void __set_handleParmNameSH(int32_t  value) ;

constexpr int32_t& __get_handleParmNameSH() ;

constexpr int32_t const& __get_handleParmNameSH() const;

constexpr void __set_assetParmNameSH(int32_t  value) ;

constexpr int32_t& __get_assetParmNameSH() ;

constexpr int32_t const& __get_assetParmNameSH() const;

constexpr void __set_assetParmId(int32_t  value) ;

constexpr int32_t& __get_assetParmId() ;

constexpr int32_t const& __get_assetParmId() const;

constexpr void __set_assetParmIndex(int32_t  value) ;

constexpr int32_t& __get_assetParmIndex() ;

constexpr int32_t const& __get_assetParmIndex() const;

// Ctor Parameters [CppParam { name: "handleParmNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "assetParmNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "assetParmId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "assetParmIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HAPI_HandleBindingInfo(int32_t  handleParmNameSH, int32_t  assetParmNameSH, int32_t  assetParmId, int32_t  assetParmIndex) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_HandleBindingInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x10>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_HandleBindingInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_HandleBindingInfo, 0x10>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_HandleBindingInfo, "HoudiniEngineUnity", "HAPI_HandleBindingInfo");
