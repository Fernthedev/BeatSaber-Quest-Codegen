#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKClipPlane)
namespace LIV::SDK::Unity {
struct SDKMatrix4x4;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKClipPlane;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKClipPlane);
// Type: LIV.SDK.Unity::SDKClipPlane
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15120))
// CS Name: ::LIV.SDK.Unity::SDKClipPlane
struct CORDL_TYPE SDKClipPlane : public ::bs_hook::ValueTypeWrapper<0x4c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4c};

/// @brief Field transform offset 0x0
 __declspec(property(get=__get_transform, put=__set_transform)) ::LIV::SDK::Unity::SDKMatrix4x4  transform;

/// @brief Field width offset 0x40
 __declspec(property(get=__get_width, put=__set_width)) int32_t  width;

/// @brief Field height offset 0x44
 __declspec(property(get=__get_height, put=__set_height)) int32_t  height;

/// @brief Field tesselation offset 0x48
 __declspec(property(get=__get_tesselation, put=__set_tesselation)) float_t  tesselation;

constexpr void __set_transform(::LIV::SDK::Unity::SDKMatrix4x4  value) ;

constexpr ::LIV::SDK::Unity::SDKMatrix4x4& __get_transform() ;

constexpr ::LIV::SDK::Unity::SDKMatrix4x4 const& __get_transform() const;

constexpr void __set_width(int32_t  value) ;

constexpr int32_t& __get_width() ;

constexpr int32_t const& __get_width() const;

constexpr void __set_height(int32_t  value) ;

constexpr int32_t& __get_height() ;

constexpr int32_t const& __get_height() const;

constexpr void __set_tesselation(float_t  value) ;

constexpr float_t& __get_tesselation() ;

constexpr float_t const& __get_tesselation() const;

/// @brief Method get_empty addr 0x2215234 size 0x34 virtual false final false
static inline ::LIV::SDK::Unity::SDKClipPlane get_empty() ;

/// @brief Method ToString addr 0x2215da8 size 0x1dc virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "transform", ty: "::LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: None }, CppParam { name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tesselation", ty: "float_t", modifiers: "", def_value: None }]
constexpr SDKClipPlane(::LIV::SDK::Unity::SDKMatrix4x4  transform, int32_t  width, int32_t  height, float_t  tesselation) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SDKClipPlane(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x4c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SDKClipPlane()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKClipPlane, 0x4c>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKClipPlane, "LIV.SDK.Unity", "SDKClipPlane");
