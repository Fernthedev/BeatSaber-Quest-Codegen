#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTextureData)
namespace GlobalNamespace {
struct OVRTextureFormat;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRTextureData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRTextureData);
// Type: ::OVRTextureData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7568))
// CS Name: ::OVRTextureData
struct CORDL_TYPE OVRTextureData : public ::bs_hook::ValueTypeWrapper<0x20> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field data offset 0x0
 __declspec(property(get=__get_data, put=__set_data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  data;

/// @brief Field width offset 0x8
 __declspec(property(get=__get_width, put=__set_width)) int32_t  width;

/// @brief Field height offset 0xc
 __declspec(property(get=__get_height, put=__set_height)) int32_t  height;

/// @brief Field format offset 0x10
 __declspec(property(get=__get_format, put=__set_format)) ::GlobalNamespace::OVRTextureFormat  format;

/// @brief Field transcodedFormat offset 0x14
 __declspec(property(get=__get_transcodedFormat, put=__set_transcodedFormat)) ::UnityEngine::TextureFormat  transcodedFormat;

/// @brief Field uri offset 0x18
 __declspec(property(get=__get_uri, put=__set_uri)) ::StringW  uri;

constexpr void __set_data(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __get_data() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __get_data() const;

constexpr void __set_width(int32_t  value) ;

constexpr int32_t& __get_width() ;

constexpr int32_t const& __get_width() const;

constexpr void __set_height(int32_t  value) ;

constexpr int32_t& __get_height() ;

constexpr int32_t const& __get_height() const;

constexpr void __set_format(::GlobalNamespace::OVRTextureFormat  value) ;

constexpr ::GlobalNamespace::OVRTextureFormat& __get_format() ;

constexpr ::GlobalNamespace::OVRTextureFormat const& __get_format() const;

constexpr void __set_transcodedFormat(::UnityEngine::TextureFormat  value) ;

constexpr ::UnityEngine::TextureFormat& __get_transcodedFormat() ;

constexpr ::UnityEngine::TextureFormat const& __get_transcodedFormat() const;

constexpr void __set_uri(::StringW  value) ;

constexpr ::StringW& __get_uri() ;

constexpr ::StringW const& __get_uri() const;

// Ctor Parameters [CppParam { name: "data", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "format", ty: "::GlobalNamespace::OVRTextureFormat", modifiers: "", def_value: None }, CppParam { name: "transcodedFormat", ty: "::UnityEngine::TextureFormat", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: None }]
constexpr OVRTextureData(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  width, int32_t  height, ::GlobalNamespace::OVRTextureFormat  format, ::UnityEngine::TextureFormat  transcodedFormat, ::StringW  uri) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit OVRTextureData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x20>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 OVRTextureData()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRTextureData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTextureData, "", "OVRTextureData");
