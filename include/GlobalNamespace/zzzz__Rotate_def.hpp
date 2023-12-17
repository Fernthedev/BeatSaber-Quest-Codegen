#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Rotate)
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class Rotate;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Rotate);
// Type: ::Rotate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14378))
// CS Name: ::Rotate*
class CORDL_TYPE Rotate : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x68};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x68 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _rotationVector offset 0x18
 __declspec(property(get=__get__rotationVector, put=__set__rotationVector)) ::UnityEngine::Vector3  _rotationVector;

/// @brief Field _speed offset 0x24
 __declspec(property(get=__get__speed, put=__set__speed)) float_t  _speed;

/// @brief Field _randomize offset 0x28
 __declspec(property(get=__get__randomize, put=__set__randomize)) bool  _randomize;

/// @brief Field _randomMinMultiplier offset 0x2c
 __declspec(property(get=__get__randomMinMultiplier, put=__set__randomMinMultiplier)) ::UnityEngine::Vector3  _randomMinMultiplier;

/// @brief Field _randomMaxMultiplier offset 0x38
 __declspec(property(get=__get__randomMaxMultiplier, put=__set__randomMaxMultiplier)) ::UnityEngine::Vector3  _randomMaxMultiplier;

/// @brief Field _transform offset 0x48
 __declspec(property(get=__get__transform, put=__set__transform)) ::UnityEngine::Transform*  _transform;

/// @brief Field _startRotationAngles offset 0x50
 __declspec(property(get=__get__startRotationAngles, put=__set__startRotationAngles)) ::UnityEngine::Vector3  _startRotationAngles;

/// @brief Field _randomizedMultiplier offset 0x5c
 __declspec(property(get=__get__randomizedMultiplier, put=__set__randomizedMultiplier)) ::UnityEngine::Vector3  _randomizedMultiplier;

constexpr void __set__rotationVector(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__rotationVector() ;

constexpr ::UnityEngine::Vector3 const& __get__rotationVector() const;

constexpr void __set__speed(float_t  value) ;

constexpr float_t& __get__speed() ;

constexpr float_t const& __get__speed() const;

constexpr void __set__randomize(bool  value) ;

constexpr bool& __get__randomize() ;

constexpr bool const& __get__randomize() const;

constexpr void __set__randomMinMultiplier(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__randomMinMultiplier() ;

constexpr ::UnityEngine::Vector3 const& __get__randomMinMultiplier() const;

constexpr void __set__randomMaxMultiplier(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__randomMaxMultiplier() ;

constexpr ::UnityEngine::Vector3 const& __get__randomMaxMultiplier() const;

constexpr void __set__transform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__transform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__transform() const;

constexpr void __set__startRotationAngles(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__startRotationAngles() ;

constexpr ::UnityEngine::Vector3 const& __get__startRotationAngles() const;

constexpr void __set__randomizedMultiplier(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__randomizedMultiplier() ;

constexpr ::UnityEngine::Vector3 const& __get__randomizedMultiplier() const;

/// @brief Method Awake addr 0x20f3c90 size 0xc8 virtual false final false
inline void Awake() ;

/// @brief Method OnBecameVisible addr 0x20f3d58 size 0x20 virtual false final false
inline void OnBecameVisible() ;

/// @brief Method OnBecameInvisible addr 0x20f3de0 size 0xc virtual false final false
inline void OnBecameInvisible() ;

/// @brief Method Update addr 0x20f3dec size 0xbc virtual false final false
inline void Update() ;

/// @brief Method Randomize addr 0x20f3d78 size 0x68 virtual false final false
inline void Randomize() ;

static inline ::GlobalNamespace::Rotate* New_ctor() ;

/// @brief Method .ctor addr 0x20f3ea8 size 0x80 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Rotate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Rotate(Rotate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Rotate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Rotate(Rotate const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Rotate()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Rotate, 0x68>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Rotate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Rotate*, "", "Rotate");
