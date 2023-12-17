#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKTexture)
namespace LIV::SDK::Unity {
struct TEXTURE_DEVICE;
}
namespace LIV::SDK::Unity {
struct TEXTURE_FORMAT;
}
namespace LIV::SDK::Unity {
struct TEXTURE_ID;
}
namespace LIV::SDK::Unity {
struct TEXTURE_TYPE;
}
namespace LIV::SDK::Unity {
struct TEXTURE_COLOR_SPACE;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKTexture;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKTexture);
// Type: LIV.SDK.Unity::SDKTexture
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15118))
// CS Name: ::LIV.SDK.Unity::SDKTexture
struct CORDL_TYPE SDKTexture : public ::bs_hook::ValueTypeWrapper<0x38> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field id offset 0x0
 __declspec(property(get=__get_id, put=__set_id)) ::LIV::SDK::Unity::TEXTURE_ID  id;

/// @brief Field texturePtr offset 0x8
 __declspec(property(get=__get_texturePtr, put=__set_texturePtr)) ::cordl_internals::intptr_t  texturePtr;

/// @brief Field SharedHandle offset 0x10
 __declspec(property(get=__get_SharedHandle, put=__set_SharedHandle)) ::cordl_internals::intptr_t  SharedHandle;

/// @brief Field device offset 0x18
 __declspec(property(get=__get_device, put=__set_device)) ::LIV::SDK::Unity::TEXTURE_DEVICE  device;

/// @brief Field dummy offset 0x1c
 __declspec(property(get=__get_dummy, put=__set_dummy)) int32_t  dummy;

/// @brief Field type offset 0x20
 __declspec(property(get=__get_type, put=__set_type)) ::LIV::SDK::Unity::TEXTURE_TYPE  type;

/// @brief Field format offset 0x24
 __declspec(property(get=__get_format, put=__set_format)) ::LIV::SDK::Unity::TEXTURE_FORMAT  format;

/// @brief Field colorSpace offset 0x28
 __declspec(property(get=__get_colorSpace, put=__set_colorSpace)) ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE  colorSpace;

/// @brief Field width offset 0x2c
 __declspec(property(get=__get_width, put=__set_width)) int32_t  width;

/// @brief Field height offset 0x30
 __declspec(property(get=__get_height, put=__set_height)) int32_t  height;

constexpr void __set_id(::LIV::SDK::Unity::TEXTURE_ID  value) ;

constexpr ::LIV::SDK::Unity::TEXTURE_ID& __get_id() ;

constexpr ::LIV::SDK::Unity::TEXTURE_ID const& __get_id() const;

constexpr void __set_texturePtr(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_texturePtr() ;

constexpr ::cordl_internals::intptr_t const& __get_texturePtr() const;

constexpr void __set_SharedHandle(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_SharedHandle() ;

constexpr ::cordl_internals::intptr_t const& __get_SharedHandle() const;

constexpr void __set_device(::LIV::SDK::Unity::TEXTURE_DEVICE  value) ;

constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE& __get_device() ;

constexpr ::LIV::SDK::Unity::TEXTURE_DEVICE const& __get_device() const;

constexpr void __set_dummy(int32_t  value) ;

constexpr int32_t& __get_dummy() ;

constexpr int32_t const& __get_dummy() const;

constexpr void __set_type(::LIV::SDK::Unity::TEXTURE_TYPE  value) ;

constexpr ::LIV::SDK::Unity::TEXTURE_TYPE& __get_type() ;

constexpr ::LIV::SDK::Unity::TEXTURE_TYPE const& __get_type() const;

constexpr void __set_format(::LIV::SDK::Unity::TEXTURE_FORMAT  value) ;

constexpr ::LIV::SDK::Unity::TEXTURE_FORMAT& __get_format() ;

constexpr ::LIV::SDK::Unity::TEXTURE_FORMAT const& __get_format() const;

constexpr void __set_colorSpace(::LIV::SDK::Unity::TEXTURE_COLOR_SPACE  value) ;

constexpr ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE& __get_colorSpace() ;

constexpr ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE const& __get_colorSpace() const;

constexpr void __set_width(int32_t  value) ;

constexpr int32_t& __get_width() ;

constexpr int32_t const& __get_width() const;

constexpr void __set_height(int32_t  value) ;

constexpr int32_t& __get_height() ;

constexpr int32_t const& __get_height() const;

/// @brief Method get_empty addr 0x220f644 size 0x5c virtual false final false
static inline ::LIV::SDK::Unity::SDKTexture get_empty() ;

/// @brief Method ToString addr 0x221591c size 0x3a4 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "id", ty: "::LIV::SDK::Unity::TEXTURE_ID", modifiers: "", def_value: None }, CppParam { name: "texturePtr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "SharedHandle", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "device", ty: "::LIV::SDK::Unity::TEXTURE_DEVICE", modifiers: "", def_value: None }, CppParam { name: "dummy", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::LIV::SDK::Unity::TEXTURE_TYPE", modifiers: "", def_value: None }, CppParam { name: "format", ty: "::LIV::SDK::Unity::TEXTURE_FORMAT", modifiers: "", def_value: None }, CppParam { name: "colorSpace", ty: "::LIV::SDK::Unity::TEXTURE_COLOR_SPACE", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SDKTexture(::LIV::SDK::Unity::TEXTURE_ID  id, ::cordl_internals::intptr_t  texturePtr, ::cordl_internals::intptr_t  SharedHandle, ::LIV::SDK::Unity::TEXTURE_DEVICE  device, int32_t  dummy, ::LIV::SDK::Unity::TEXTURE_TYPE  type, ::LIV::SDK::Unity::TEXTURE_FORMAT  format, ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE  colorSpace, int32_t  width, int32_t  height) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SDKTexture(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x38>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SDKTexture()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKTexture, 0x38>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKTexture, "LIV.SDK.Unity", "SDKTexture");
