#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SmoothCamera)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Camera;
}
namespace GlobalNamespace {
class MainCamera;
}
// Forward declare root types
namespace GlobalNamespace {
class SmoothCamera;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SmoothCamera);
// Type: ::SmoothCamera
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5330))
// CS Name: ::SmoothCamera*
class CORDL_TYPE SmoothCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _camera offset 0x18
 __declspec(property(get=__get__camera, put=__set__camera)) ::UnityEngine::Camera*  _camera;

/// @brief Field _mainCamera offset 0x20
 __declspec(property(get=__get__mainCamera, put=__set__mainCamera)) ::GlobalNamespace::MainCamera*  _mainCamera;

/// @brief Field _thirdPersonPosition offset 0x28
 __declspec(property(get=__get__thirdPersonPosition, put=__set__thirdPersonPosition)) ::UnityEngine::Vector3  _thirdPersonPosition;

/// @brief Field _thirdPersonEulerAngles offset 0x34
 __declspec(property(get=__get__thirdPersonEulerAngles, put=__set__thirdPersonEulerAngles)) ::UnityEngine::Vector3  _thirdPersonEulerAngles;

/// @brief Field _thirdPersonEnabled offset 0x40
 __declspec(property(get=__get__thirdPersonEnabled, put=__set__thirdPersonEnabled)) bool  _thirdPersonEnabled;

/// @brief Field _rotationSmooth offset 0x44
 __declspec(property(get=__get__rotationSmooth, put=__set__rotationSmooth)) float_t  _rotationSmooth;

/// @brief Field _positionSmooth offset 0x48
 __declspec(property(get=__get__positionSmooth, put=__set__positionSmooth)) float_t  _positionSmooth;

constexpr void __set__camera(::UnityEngine::Camera*  value) ;

constexpr ::UnityEngine::Camera* __get__camera() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> __get__camera() const;

constexpr void __set__mainCamera(::GlobalNamespace::MainCamera*  value) ;

constexpr ::GlobalNamespace::MainCamera* __get__mainCamera() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainCamera*> __get__mainCamera() const;

constexpr void __set__thirdPersonPosition(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__thirdPersonPosition() ;

constexpr ::UnityEngine::Vector3 const& __get__thirdPersonPosition() const;

constexpr void __set__thirdPersonEulerAngles(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__thirdPersonEulerAngles() ;

constexpr ::UnityEngine::Vector3 const& __get__thirdPersonEulerAngles() const;

constexpr void __set__thirdPersonEnabled(bool  value) ;

constexpr bool& __get__thirdPersonEnabled() ;

constexpr bool const& __get__thirdPersonEnabled() const;

constexpr void __set__rotationSmooth(float_t  value) ;

constexpr float_t& __get__rotationSmooth() ;

constexpr float_t const& __get__rotationSmooth() const;

constexpr void __set__positionSmooth(float_t  value) ;

constexpr float_t& __get__positionSmooth() ;

constexpr float_t const& __get__positionSmooth() const;

/// @brief Method Init addr 0x2268100 size 0x1a8 virtual false final false
inline void Init(float_t  fieldOfView, float_t  positionSmooth, float_t  rotationSmooth, bool  thirdPersonEnabled, ::UnityEngine::Vector3  thirdPersonPosition, ::UnityEngine::Vector3  thirdPersonEulerAngles) ;

/// @brief Method OnEnable addr 0x22682a8 size 0x20 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x22682c8 size 0x20 virtual false final false
inline void OnDisable() ;

/// @brief Method LateUpdate addr 0x22682e8 size 0x1f4 virtual false final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::SmoothCamera* New_ctor() ;

/// @brief Method .ctor addr 0x22684dc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SmoothCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SmoothCamera(SmoothCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SmoothCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SmoothCamera(SmoothCamera const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SmoothCamera()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SmoothCamera, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SmoothCamera);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SmoothCamera*, "", "SmoothCamera");
