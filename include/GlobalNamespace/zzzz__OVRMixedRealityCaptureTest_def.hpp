#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRMixedRealityCaptureTest)
namespace GlobalNamespace {
struct __OVRMixedRealityCaptureTest__CameraMode;
}
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
struct __OVRPlugin__Fovf;
}
// Forward declare root types
namespace GlobalNamespace {
struct __OVRMixedRealityCaptureTest__CameraMode;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureTest;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode);
MARK_REF_PTR_T(::GlobalNamespace::OVRMixedRealityCaptureTest);
// Type: ::CameraMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8136))
// CS Name: ::OVRMixedRealityCaptureTest::CameraMode
struct CORDL_TYPE __OVRMixedRealityCaptureTest__CameraMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____OVRMixedRealityCaptureTest__CameraMode_Unwrapped
enum struct ____OVRMixedRealityCaptureTest__CameraMode_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_OverrideFov = static_cast<int32_t>(0x1),
__E_ThirdPerson = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Normal value: static_cast<int32_t>(0x0)
static ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode const Normal;

/// @brief Field OverrideFov value: static_cast<int32_t>(0x1)
static ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode const OverrideFov;

/// @brief Field ThirdPerson value: static_cast<int32_t>(0x2)
static ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode const ThirdPerson;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____OVRMixedRealityCaptureTest__CameraMode_Unwrapped () const noexcept {
return std::bit_cast<____OVRMixedRealityCaptureTest__CameraMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __OVRMixedRealityCaptureTest__CameraMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __OVRMixedRealityCaptureTest__CameraMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __OVRMixedRealityCaptureTest__CameraMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode, 0x4>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRMixedRealityCaptureTest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8137))
// CS Name: ::OVRMixedRealityCaptureTest*
class CORDL_TYPE OVRMixedRealityCaptureTest : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CameraMode = ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field inited offset 0x18
 __declspec(property(get=__get_inited, put=__set_inited)) bool  inited;

/// @brief Field currentMode offset 0x1c
 __declspec(property(get=__get_currentMode, put=__set_currentMode)) ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode  currentMode;

/// @brief Field defaultExternalCamera offset 0x20
 __declspec(property(get=__get_defaultExternalCamera, put=__set_defaultExternalCamera)) ::UnityEngine::Camera*  defaultExternalCamera;

/// @brief Field defaultFov offset 0x28
 __declspec(property(get=__get_defaultFov, put=__set_defaultFov)) ::GlobalNamespace::__OVRPlugin__Fovf  defaultFov;

constexpr void __set_inited(bool  value) ;

constexpr bool& __get_inited() ;

constexpr bool const& __get_inited() const;

constexpr void __set_currentMode(::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode  value) ;

constexpr ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode& __get_currentMode() ;

constexpr ::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode const& __get_currentMode() const;

constexpr void __set_defaultExternalCamera(::UnityEngine::Camera*  value) ;

constexpr ::UnityEngine::Camera* __get_defaultExternalCamera() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> __get_defaultExternalCamera() const;

constexpr void __set_defaultFov(::GlobalNamespace::__OVRPlugin__Fovf  value) ;

constexpr ::GlobalNamespace::__OVRPlugin__Fovf& __get_defaultFov() ;

constexpr ::GlobalNamespace::__OVRPlugin__Fovf const& __get_defaultFov() const;

/// @brief Method Start addr 0x27b3664 size 0xb0 virtual false final false
inline void Start() ;

/// @brief Method Initialize addr 0x27b3714 size 0x224 virtual false final false
inline void Initialize() ;

/// @brief Method UpdateDefaultExternalCamera addr 0x27b3938 size 0x428 virtual false final false
inline void UpdateDefaultExternalCamera() ;

/// @brief Method Update addr 0x27b3d60 size 0x738 virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::OVRMixedRealityCaptureTest* New_ctor() ;

/// @brief Method .ctor addr 0x27b4498 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureTest", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRMixedRealityCaptureTest(OVRMixedRealityCaptureTest && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRMixedRealityCaptureTest", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRMixedRealityCaptureTest(OVRMixedRealityCaptureTest const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRMixedRealityCaptureTest()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRMixedRealityCaptureTest, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRMixedRealityCaptureTest__CameraMode, "", "OVRMixedRealityCaptureTest/CameraMode");
NEED_NO_BOX(::GlobalNamespace::OVRMixedRealityCaptureTest);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMixedRealityCaptureTest*, "", "OVRMixedRealityCaptureTest");
