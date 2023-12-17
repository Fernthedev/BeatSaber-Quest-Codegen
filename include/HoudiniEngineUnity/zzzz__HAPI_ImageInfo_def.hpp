#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ImageInfo)
namespace HoudiniEngineUnity {
struct HAPI_ImageDataFormat;
}
namespace HoudiniEngineUnity {
struct HAPI_ImagePacking;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ImageInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ImageInfo);
// Type: HoudiniEngineUnity::HAPI_ImageInfo
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9744))
// CS Name: ::HoudiniEngineUnity::HAPI_ImageInfo
struct CORDL_TYPE HAPI_ImageInfo : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field imageFileFormatNameSH offset 0x0
 __declspec(property(get=__get_imageFileFormatNameSH, put=__set_imageFileFormatNameSH)) int32_t  imageFileFormatNameSH;

/// @brief Field xRes offset 0x4
 __declspec(property(get=__get_xRes, put=__set_xRes)) int32_t  xRes;

/// @brief Field yRes offset 0x8
 __declspec(property(get=__get_yRes, put=__set_yRes)) int32_t  yRes;

/// @brief Field dataFormat offset 0xc
 __declspec(property(get=__get_dataFormat, put=__set_dataFormat)) ::HoudiniEngineUnity::HAPI_ImageDataFormat  dataFormat;

/// @brief Field interleaved offset 0x10
 __declspec(property(get=__get_interleaved, put=__set_interleaved)) bool  interleaved;

/// @brief Field packing offset 0x14
 __declspec(property(get=__get_packing, put=__set_packing)) ::HoudiniEngineUnity::HAPI_ImagePacking  packing;

/// @brief Field gamma offset 0x18
 __declspec(property(get=__get_gamma, put=__set_gamma)) double_t  gamma;

constexpr void __set_imageFileFormatNameSH(int32_t  value) ;

constexpr int32_t& __get_imageFileFormatNameSH() ;

constexpr int32_t const& __get_imageFileFormatNameSH() const;

constexpr void __set_xRes(int32_t  value) ;

constexpr int32_t& __get_xRes() ;

constexpr int32_t const& __get_xRes() const;

constexpr void __set_yRes(int32_t  value) ;

constexpr int32_t& __get_yRes() ;

constexpr int32_t const& __get_yRes() const;

constexpr void __set_dataFormat(::HoudiniEngineUnity::HAPI_ImageDataFormat  value) ;

constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat& __get_dataFormat() ;

constexpr ::HoudiniEngineUnity::HAPI_ImageDataFormat const& __get_dataFormat() const;

constexpr void __set_interleaved(bool  value) ;

constexpr bool& __get_interleaved() ;

constexpr bool const& __get_interleaved() const;

constexpr void __set_packing(::HoudiniEngineUnity::HAPI_ImagePacking  value) ;

constexpr ::HoudiniEngineUnity::HAPI_ImagePacking& __get_packing() ;

constexpr ::HoudiniEngineUnity::HAPI_ImagePacking const& __get_packing() const;

constexpr void __set_gamma(double_t  value) ;

constexpr double_t& __get_gamma() ;

constexpr double_t const& __get_gamma() const;

// Ctor Parameters [CppParam { name: "imageFileFormatNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "xRes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "yRes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dataFormat", ty: "::HoudiniEngineUnity::HAPI_ImageDataFormat", modifiers: "", def_value: None }, CppParam { name: "interleaved", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "packing", ty: "::HoudiniEngineUnity::HAPI_ImagePacking", modifiers: "", def_value: None }, CppParam { name: "gamma", ty: "double_t", modifiers: "", def_value: None }]
constexpr HAPI_ImageInfo(int32_t  imageFileFormatNameSH, int32_t  xRes, int32_t  yRes, ::HoudiniEngineUnity::HAPI_ImageDataFormat  dataFormat, bool  interleaved, ::HoudiniEngineUnity::HAPI_ImagePacking  packing, double_t  gamma) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HAPI_ImageInfo(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HAPI_ImageInfo()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ImageInfo, 0x20>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ImageInfo, "HoudiniEngineUnity", "HAPI_ImageInfo");
