#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SDKTransform)
namespace LIV::SDK::Unity {
struct SDKQuaternion;
}
namespace LIV::SDK::Unity {
struct SDKVector3;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKTransform;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKTransform);
// Type: LIV.SDK.Unity::SDKTransform
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15119))
// CS Name: ::LIV.SDK.Unity::SDKTransform
struct CORDL_TYPE SDKTransform : public ::bs_hook::ValueTypeWrapper<0x28> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field localPosition offset 0x0
 __declspec(property(get=__get_localPosition, put=__set_localPosition)) ::LIV::SDK::Unity::SDKVector3  localPosition;

/// @brief Field localRotation offset 0xc
 __declspec(property(get=__get_localRotation, put=__set_localRotation)) ::LIV::SDK::Unity::SDKQuaternion  localRotation;

/// @brief Field localScale offset 0x1c
 __declspec(property(get=__get_localScale, put=__set_localScale)) ::LIV::SDK::Unity::SDKVector3  localScale;

constexpr void __set_localPosition(::LIV::SDK::Unity::SDKVector3  value) ;

constexpr ::LIV::SDK::Unity::SDKVector3& __get_localPosition() ;

constexpr ::LIV::SDK::Unity::SDKVector3 const& __get_localPosition() const;

constexpr void __set_localRotation(::LIV::SDK::Unity::SDKQuaternion  value) ;

constexpr ::LIV::SDK::Unity::SDKQuaternion& __get_localRotation() ;

constexpr ::LIV::SDK::Unity::SDKQuaternion const& __get_localRotation() const;

constexpr void __set_localScale(::LIV::SDK::Unity::SDKVector3  value) ;

constexpr ::LIV::SDK::Unity::SDKVector3& __get_localScale() ;

constexpr ::LIV::SDK::Unity::SDKVector3 const& __get_localScale() const;

/// @brief Method get_empty addr 0x2215268 size 0x14 virtual false final false
static inline ::LIV::SDK::Unity::SDKTransform get_empty() ;

/// @brief Method ToString addr 0x2215cc0 size 0xe8 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "localPosition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "localRotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "localScale", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }]
constexpr SDKTransform(::LIV::SDK::Unity::SDKVector3  localPosition, ::LIV::SDK::Unity::SDKQuaternion  localRotation, ::LIV::SDK::Unity::SDKVector3  localScale) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SDKTransform(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x28>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SDKTransform()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKTransform, 0x28>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKTransform, "LIV.SDK.Unity", "SDKTransform");
