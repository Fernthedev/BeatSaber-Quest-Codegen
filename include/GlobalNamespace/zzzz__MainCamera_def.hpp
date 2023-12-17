#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MainCamera)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class MainCamera;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainCamera);
// Type: ::MainCamera
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5882))
// CS Name: ::MainCamera*
class CORDL_TYPE MainCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _camera offset 0x18
 __declspec(property(get=__get__camera, put=__set__camera)) ::UnityEngine::Camera*  _camera;

/// @brief Field _transform offset 0x20
 __declspec(property(get=__get__transform, put=__set__transform)) ::UnityEngine::Transform*  _transform;

 __declspec(property(get=get_camera)) ::UnityEngine::Camera*  camera;

 __declspec(property(put=set_enableCamera)) bool  enableCamera;

 __declspec(property(get=get_position)) ::UnityEngine::Vector3  position;

 __declspec(property(get=get_rotation)) ::UnityEngine::Quaternion  rotation;

constexpr void __set__camera(::UnityEngine::Camera*  value) ;

constexpr ::UnityEngine::Camera* __get__camera() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> __get__camera() const;

constexpr void __set__transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__transform() const;

/// @brief Method get_camera addr 0x22fa244 size 0x8 virtual false final false
inline ::UnityEngine::Camera* get_camera() ;

/// @brief Method set_enableCamera addr 0x22fa24c size 0x28 virtual false final false
inline void set_enableCamera(bool  value) ;

/// @brief Method get_position addr 0x22fa274 size 0x1c virtual false final false
inline ::UnityEngine::Vector3 get_position() ;

/// @brief Method get_rotation addr 0x22fa290 size 0x1c virtual false final false
inline ::UnityEngine::Quaternion get_rotation() ;

/// @brief Method Awake addr 0x22fa2ac size 0x60 virtual false final false
inline void Awake() ;

static inline ::GlobalNamespace::MainCamera* New_ctor() ;

/// @brief Method .ctor addr 0x22fa30c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MainCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MainCamera(MainCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MainCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MainCamera(MainCamera const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MainCamera()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainCamera, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainCamera);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainCamera*, "", "MainCamera");
