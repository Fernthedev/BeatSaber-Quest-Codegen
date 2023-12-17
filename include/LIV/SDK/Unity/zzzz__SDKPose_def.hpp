#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKPose)
namespace LIV::SDK::Unity {
struct SDKMatrix4x4;
}
namespace LIV::SDK::Unity {
struct SDKVector3;
}
namespace LIV::SDK::Unity {
struct SDKQuaternion;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKPose;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKPose);
// Type: LIV.SDK.Unity::SDKPose
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15122))
// CS Name: ::LIV.SDK.Unity::SDKPose
struct CORDL_TYPE SDKPose : public ::bs_hook::ValueTypeWrapper<0x70> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x70};

/// @brief Field projectionMatrix offset 0x0
 __declspec(property(get=__get_projectionMatrix, put=__set_projectionMatrix)) ::LIV::SDK::Unity::SDKMatrix4x4  projectionMatrix;

/// @brief Field localPosition offset 0x40
 __declspec(property(get=__get_localPosition, put=__set_localPosition)) ::LIV::SDK::Unity::SDKVector3  localPosition;

/// @brief Field localRotation offset 0x4c
 __declspec(property(get=__get_localRotation, put=__set_localRotation)) ::LIV::SDK::Unity::SDKQuaternion  localRotation;

/// @brief Field verticalFieldOfView offset 0x5c
 __declspec(property(get=__get_verticalFieldOfView, put=__set_verticalFieldOfView)) float_t  verticalFieldOfView;

/// @brief Field nearClipPlane offset 0x60
 __declspec(property(get=__get_nearClipPlane, put=__set_nearClipPlane)) float_t  nearClipPlane;

/// @brief Field farClipPlane offset 0x64
 __declspec(property(get=__get_farClipPlane, put=__set_farClipPlane)) float_t  farClipPlane;

/// @brief Field unused0 offset 0x68
 __declspec(property(get=__get_unused0, put=__set_unused0)) int32_t  unused0;

/// @brief Field unused1 offset 0x6c
 __declspec(property(get=__get_unused1, put=__set_unused1)) int32_t  unused1;

constexpr void __set_projectionMatrix(::LIV::SDK::Unity::SDKMatrix4x4  value) ;

constexpr ::LIV::SDK::Unity::SDKMatrix4x4& __get_projectionMatrix() ;

constexpr ::LIV::SDK::Unity::SDKMatrix4x4 const& __get_projectionMatrix() const;

constexpr void __set_localPosition(::LIV::SDK::Unity::SDKVector3  value) ;

constexpr ::LIV::SDK::Unity::SDKVector3& __get_localPosition() ;

constexpr ::LIV::SDK::Unity::SDKVector3 const& __get_localPosition() const;

constexpr void __set_localRotation(::LIV::SDK::Unity::SDKQuaternion  value) ;

constexpr ::LIV::SDK::Unity::SDKQuaternion& __get_localRotation() ;

constexpr ::LIV::SDK::Unity::SDKQuaternion const& __get_localRotation() const;

constexpr void __set_verticalFieldOfView(float_t  value) ;

constexpr float_t& __get_verticalFieldOfView() ;

constexpr float_t const& __get_verticalFieldOfView() const;

constexpr void __set_nearClipPlane(float_t  value) ;

constexpr float_t& __get_nearClipPlane() ;

constexpr float_t const& __get_nearClipPlane() const;

constexpr void __set_farClipPlane(float_t  value) ;

constexpr float_t& __get_farClipPlane() ;

constexpr float_t const& __get_farClipPlane() const;

constexpr void __set_unused0(int32_t  value) ;

constexpr int32_t& __get_unused0() ;

constexpr int32_t const& __get_unused0() const;

constexpr void __set_unused1(int32_t  value) ;

constexpr int32_t& __get_unused1() ;

constexpr int32_t const& __get_unused1() const;

/// @brief Method get_empty addr 0x220ffb4 size 0x70 virtual false final false
static inline ::LIV::SDK::Unity::SDKPose get_empty() ;

/// @brief Method ToString addr 0x2216338 size 0x278 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "projectionMatrix", ty: "::LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: None }, CppParam { name: "localPosition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "localRotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "verticalFieldOfView", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "nearClipPlane", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "farClipPlane", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "unused0", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "unused1", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SDKPose(::LIV::SDK::Unity::SDKMatrix4x4  projectionMatrix, ::LIV::SDK::Unity::SDKVector3  localPosition, ::LIV::SDK::Unity::SDKQuaternion  localRotation, float_t  verticalFieldOfView, float_t  nearClipPlane, float_t  farClipPlane, int32_t  unused0, int32_t  unused1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SDKPose(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x70>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SDKPose()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKPose, 0x70>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKPose, "LIV.SDK.Unity", "SDKPose");
