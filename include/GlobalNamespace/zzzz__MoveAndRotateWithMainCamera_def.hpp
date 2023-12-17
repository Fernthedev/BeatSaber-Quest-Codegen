#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(MoveAndRotateWithMainCamera)
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class MainCamera;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class MoveAndRotateWithMainCamera;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MoveAndRotateWithMainCamera);
// Type: ::MoveAndRotateWithMainCamera
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5913))
// CS Name: ::MoveAndRotateWithMainCamera*
class CORDL_TYPE MoveAndRotateWithMainCamera : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _mainCamera offset 0x18
 __declspec(property(get=__get__mainCamera, put=__set__mainCamera)) ::GlobalNamespace::MainCamera*  _mainCamera;

/// @brief Field _rotationOffset offset 0x20
 __declspec(property(get=__get__rotationOffset, put=__set__rotationOffset)) ::UnityEngine::Quaternion  _rotationOffset;

/// @brief Field _positionOffset offset 0x30
 __declspec(property(get=__get__positionOffset, put=__set__positionOffset)) ::UnityEngine::Vector3  _positionOffset;

/// @brief Field _transform offset 0x40
 __declspec(property(get=__get__transform, put=__set__transform)) ::UnityEngine::Transform*  _transform;

constexpr void __set__mainCamera(::GlobalNamespace::MainCamera*  value) ;

constexpr ::GlobalNamespace::MainCamera* __get__mainCamera() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MainCamera*> __get__mainCamera() const;

constexpr void __set__rotationOffset(::UnityEngine::Quaternion  value) ;

constexpr ::UnityEngine::Quaternion& __get__rotationOffset() ;

constexpr ::UnityEngine::Quaternion const& __get__rotationOffset() const;

constexpr void __set__positionOffset(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__positionOffset() ;

constexpr ::UnityEngine::Vector3 const& __get__positionOffset() const;

constexpr void __set__transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__transform() const;

/// @brief Method Awake addr 0x22fed4c size 0x4c virtual false final false
inline void Awake() ;

/// @brief Method LateUpdate addr 0x22fed98 size 0xfc virtual false final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::MoveAndRotateWithMainCamera* New_ctor() ;

/// @brief Method .ctor addr 0x22fee94 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MoveAndRotateWithMainCamera", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MoveAndRotateWithMainCamera(MoveAndRotateWithMainCamera && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MoveAndRotateWithMainCamera", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MoveAndRotateWithMainCamera(MoveAndRotateWithMainCamera const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MoveAndRotateWithMainCamera()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MoveAndRotateWithMainCamera, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MoveAndRotateWithMainCamera);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MoveAndRotateWithMainCamera*, "", "MoveAndRotateWithMainCamera");
