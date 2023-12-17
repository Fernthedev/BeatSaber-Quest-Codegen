#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SDKTrackedSpace)
namespace LIV::SDK::Unity {
struct SDKQuaternion;
}
namespace LIV::SDK::Unity {
struct SDKMatrix4x4;
}
namespace LIV::SDK::Unity {
struct SDKVector3;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKTrackedSpace;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKTrackedSpace);
// Type: LIV.SDK.Unity::SDKTrackedSpace
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15117))
// CS Name: ::LIV.SDK.Unity::SDKTrackedSpace
struct CORDL_TYPE SDKTrackedSpace : public ::bs_hook::ValueTypeWrapper<0xa8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xa8};

/// @brief Field trackedSpaceWorldPosition offset 0x0
 __declspec(property(get=__get_trackedSpaceWorldPosition, put=__set_trackedSpaceWorldPosition)) ::LIV::SDK::Unity::SDKVector3  trackedSpaceWorldPosition;

/// @brief Field trackedSpaceWorldRotation offset 0xc
 __declspec(property(get=__get_trackedSpaceWorldRotation, put=__set_trackedSpaceWorldRotation)) ::LIV::SDK::Unity::SDKQuaternion  trackedSpaceWorldRotation;

/// @brief Field trackedSpaceLocalScale offset 0x1c
 __declspec(property(get=__get_trackedSpaceLocalScale, put=__set_trackedSpaceLocalScale)) ::LIV::SDK::Unity::SDKVector3  trackedSpaceLocalScale;

/// @brief Field trackedSpaceLocalToWorldMatrix offset 0x28
 __declspec(property(get=__get_trackedSpaceLocalToWorldMatrix, put=__set_trackedSpaceLocalToWorldMatrix)) ::LIV::SDK::Unity::SDKMatrix4x4  trackedSpaceLocalToWorldMatrix;

/// @brief Field trackedSpaceWorldToLocalMatrix offset 0x68
 __declspec(property(get=__get_trackedSpaceWorldToLocalMatrix, put=__set_trackedSpaceWorldToLocalMatrix)) ::LIV::SDK::Unity::SDKMatrix4x4  trackedSpaceWorldToLocalMatrix;

constexpr void __set_trackedSpaceWorldPosition(::LIV::SDK::Unity::SDKVector3  value) ;

constexpr ::LIV::SDK::Unity::SDKVector3& __get_trackedSpaceWorldPosition() ;

constexpr ::LIV::SDK::Unity::SDKVector3 const& __get_trackedSpaceWorldPosition() const;

constexpr void __set_trackedSpaceWorldRotation(::LIV::SDK::Unity::SDKQuaternion  value) ;

constexpr ::LIV::SDK::Unity::SDKQuaternion& __get_trackedSpaceWorldRotation() ;

constexpr ::LIV::SDK::Unity::SDKQuaternion const& __get_trackedSpaceWorldRotation() const;

constexpr void __set_trackedSpaceLocalScale(::LIV::SDK::Unity::SDKVector3  value) ;

constexpr ::LIV::SDK::Unity::SDKVector3& __get_trackedSpaceLocalScale() ;

constexpr ::LIV::SDK::Unity::SDKVector3 const& __get_trackedSpaceLocalScale() const;

constexpr void __set_trackedSpaceLocalToWorldMatrix(::LIV::SDK::Unity::SDKMatrix4x4  value) ;

constexpr ::LIV::SDK::Unity::SDKMatrix4x4& __get_trackedSpaceLocalToWorldMatrix() ;

constexpr ::LIV::SDK::Unity::SDKMatrix4x4 const& __get_trackedSpaceLocalToWorldMatrix() const;

constexpr void __set_trackedSpaceWorldToLocalMatrix(::LIV::SDK::Unity::SDKMatrix4x4  value) ;

constexpr ::LIV::SDK::Unity::SDKMatrix4x4& __get_trackedSpaceWorldToLocalMatrix() ;

constexpr ::LIV::SDK::Unity::SDKMatrix4x4 const& __get_trackedSpaceWorldToLocalMatrix() const;

/// @brief Method get_empty addr 0x22155b0 size 0x64 virtual false final false
static inline ::LIV::SDK::Unity::SDKTrackedSpace get_empty() ;

/// @brief Method ToString addr 0x22156d8 size 0x244 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "trackedSpaceWorldPosition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "trackedSpaceWorldRotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "trackedSpaceLocalScale", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "trackedSpaceLocalToWorldMatrix", ty: "::LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: None }, CppParam { name: "trackedSpaceWorldToLocalMatrix", ty: "::LIV::SDK::Unity::SDKMatrix4x4", modifiers: "", def_value: None }]
constexpr SDKTrackedSpace(::LIV::SDK::Unity::SDKVector3  trackedSpaceWorldPosition, ::LIV::SDK::Unity::SDKQuaternion  trackedSpaceWorldRotation, ::LIV::SDK::Unity::SDKVector3  trackedSpaceLocalScale, ::LIV::SDK::Unity::SDKMatrix4x4  trackedSpaceLocalToWorldMatrix, ::LIV::SDK::Unity::SDKMatrix4x4  trackedSpaceWorldToLocalMatrix) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SDKTrackedSpace(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0xa8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SDKTrackedSpace()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKTrackedSpace, 0xa8>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKTrackedSpace, "LIV.SDK.Unity", "SDKTrackedSpace");
