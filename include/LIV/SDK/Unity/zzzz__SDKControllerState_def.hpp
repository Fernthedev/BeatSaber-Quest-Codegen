#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SDKControllerState)
namespace LIV::SDK::Unity {
struct SDKVector3;
}
namespace LIV::SDK::Unity {
struct SDKQuaternion;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKControllerState;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKControllerState);
// Type: LIV.SDK.Unity::SDKControllerState
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15121))
// CS Name: ::LIV.SDK.Unity::SDKControllerState
struct CORDL_TYPE SDKControllerState : public ::bs_hook::ValueTypeWrapper<0x8c> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8c};

/// @brief Field hmdposition offset 0x0
 __declspec(property(get=__get_hmdposition, put=__set_hmdposition)) ::LIV::SDK::Unity::SDKVector3  hmdposition;

/// @brief Field hmdrotation offset 0xc
 __declspec(property(get=__get_hmdrotation, put=__set_hmdrotation)) ::LIV::SDK::Unity::SDKQuaternion  hmdrotation;

/// @brief Field calibrationcameraposition offset 0x1c
 __declspec(property(get=__get_calibrationcameraposition, put=__set_calibrationcameraposition)) ::LIV::SDK::Unity::SDKVector3  calibrationcameraposition;

/// @brief Field calibrationcamerarotation offset 0x28
 __declspec(property(get=__get_calibrationcamerarotation, put=__set_calibrationcamerarotation)) ::LIV::SDK::Unity::SDKQuaternion  calibrationcamerarotation;

/// @brief Field cameraposition offset 0x38
 __declspec(property(get=__get_cameraposition, put=__set_cameraposition)) ::LIV::SDK::Unity::SDKVector3  cameraposition;

/// @brief Field camerarotation offset 0x44
 __declspec(property(get=__get_camerarotation, put=__set_camerarotation)) ::LIV::SDK::Unity::SDKQuaternion  camerarotation;

/// @brief Field leftposition offset 0x54
 __declspec(property(get=__get_leftposition, put=__set_leftposition)) ::LIV::SDK::Unity::SDKVector3  leftposition;

/// @brief Field leftrotation offset 0x60
 __declspec(property(get=__get_leftrotation, put=__set_leftrotation)) ::LIV::SDK::Unity::SDKQuaternion  leftrotation;

/// @brief Field rightposition offset 0x70
 __declspec(property(get=__get_rightposition, put=__set_rightposition)) ::LIV::SDK::Unity::SDKVector3  rightposition;

/// @brief Field rightrotation offset 0x7c
 __declspec(property(get=__get_rightrotation, put=__set_rightrotation)) ::LIV::SDK::Unity::SDKQuaternion  rightrotation;

constexpr void __set_hmdposition(::LIV::SDK::Unity::SDKVector3  value) ;

constexpr ::LIV::SDK::Unity::SDKVector3& __get_hmdposition() ;

constexpr ::LIV::SDK::Unity::SDKVector3 const& __get_hmdposition() const;

constexpr void __set_hmdrotation(::LIV::SDK::Unity::SDKQuaternion  value) ;

constexpr ::LIV::SDK::Unity::SDKQuaternion& __get_hmdrotation() ;

constexpr ::LIV::SDK::Unity::SDKQuaternion const& __get_hmdrotation() const;

constexpr void __set_calibrationcameraposition(::LIV::SDK::Unity::SDKVector3  value) ;

constexpr ::LIV::SDK::Unity::SDKVector3& __get_calibrationcameraposition() ;

constexpr ::LIV::SDK::Unity::SDKVector3 const& __get_calibrationcameraposition() const;

constexpr void __set_calibrationcamerarotation(::LIV::SDK::Unity::SDKQuaternion  value) ;

constexpr ::LIV::SDK::Unity::SDKQuaternion& __get_calibrationcamerarotation() ;

constexpr ::LIV::SDK::Unity::SDKQuaternion const& __get_calibrationcamerarotation() const;

constexpr void __set_cameraposition(::LIV::SDK::Unity::SDKVector3  value) ;

constexpr ::LIV::SDK::Unity::SDKVector3& __get_cameraposition() ;

constexpr ::LIV::SDK::Unity::SDKVector3 const& __get_cameraposition() const;

constexpr void __set_camerarotation(::LIV::SDK::Unity::SDKQuaternion  value) ;

constexpr ::LIV::SDK::Unity::SDKQuaternion& __get_camerarotation() ;

constexpr ::LIV::SDK::Unity::SDKQuaternion const& __get_camerarotation() const;

constexpr void __set_leftposition(::LIV::SDK::Unity::SDKVector3  value) ;

constexpr ::LIV::SDK::Unity::SDKVector3& __get_leftposition() ;

constexpr ::LIV::SDK::Unity::SDKVector3 const& __get_leftposition() const;

constexpr void __set_leftrotation(::LIV::SDK::Unity::SDKQuaternion  value) ;

constexpr ::LIV::SDK::Unity::SDKQuaternion& __get_leftrotation() ;

constexpr ::LIV::SDK::Unity::SDKQuaternion const& __get_leftrotation() const;

constexpr void __set_rightposition(::LIV::SDK::Unity::SDKVector3  value) ;

constexpr ::LIV::SDK::Unity::SDKVector3& __get_rightposition() ;

constexpr ::LIV::SDK::Unity::SDKVector3 const& __get_rightposition() const;

constexpr void __set_rightrotation(::LIV::SDK::Unity::SDKQuaternion  value) ;

constexpr ::LIV::SDK::Unity::SDKQuaternion& __get_rightrotation() ;

constexpr ::LIV::SDK::Unity::SDKQuaternion const& __get_rightrotation() const;

/// @brief Method get_empty addr 0x2215f84 size 0x4c virtual false final false
static inline ::LIV::SDK::Unity::SDKControllerState get_empty() ;

/// @brief Method ToString addr 0x2215fd0 size 0x368 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "hmdposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "hmdrotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "calibrationcameraposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "calibrationcamerarotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "cameraposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "camerarotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "leftposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "leftrotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }, CppParam { name: "rightposition", ty: "::LIV::SDK::Unity::SDKVector3", modifiers: "", def_value: None }, CppParam { name: "rightrotation", ty: "::LIV::SDK::Unity::SDKQuaternion", modifiers: "", def_value: None }]
constexpr SDKControllerState(::LIV::SDK::Unity::SDKVector3  hmdposition, ::LIV::SDK::Unity::SDKQuaternion  hmdrotation, ::LIV::SDK::Unity::SDKVector3  calibrationcameraposition, ::LIV::SDK::Unity::SDKQuaternion  calibrationcamerarotation, ::LIV::SDK::Unity::SDKVector3  cameraposition, ::LIV::SDK::Unity::SDKQuaternion  camerarotation, ::LIV::SDK::Unity::SDKVector3  leftposition, ::LIV::SDK::Unity::SDKQuaternion  leftrotation, ::LIV::SDK::Unity::SDKVector3  rightposition, ::LIV::SDK::Unity::SDKQuaternion  rightrotation) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SDKControllerState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8c>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SDKControllerState()  = default;


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKControllerState, 0x8c>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKControllerState, "LIV.SDK.Unity", "SDKControllerState");
