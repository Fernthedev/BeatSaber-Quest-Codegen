#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MenuNeonLightsGenerator)
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuNeonLightsGenerator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuNeonLightsGenerator);
// Type: ::MenuNeonLightsGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4693))
// CS Name: ::MenuNeonLightsGenerator*
class CORDL_TYPE MenuNeonLightsGenerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _generate offset 0x18
 __declspec(property(get=__get__generate, put=__set__generate)) bool  _generate;

/// @brief Field _radius offset 0x1c
 __declspec(property(get=__get__radius, put=__set__radius)) float_t  _radius;

/// @brief Field _angle offset 0x20
 __declspec(property(get=__get__angle, put=__set__angle)) float_t  _angle;

/// @brief Field _numberOfElements offset 0x24
 __declspec(property(get=__get__numberOfElements, put=__set__numberOfElements)) int32_t  _numberOfElements;

/// @brief Field _intensityCurve offset 0x28
 __declspec(property(get=__get__intensityCurve, put=__set__intensityCurve)) ::UnityEngine::AnimationCurve*  _intensityCurve;

/// @brief Field _intensityMultiplier offset 0x30
 __declspec(property(get=__get__intensityMultiplier, put=__set__intensityMultiplier)) float_t  _intensityMultiplier;

/// @brief Field _lengthCurve offset 0x38
 __declspec(property(get=__get__lengthCurve, put=__set__lengthCurve)) ::UnityEngine::AnimationCurve*  _lengthCurve;

/// @brief Field _lengthMultiplier offset 0x40
 __declspec(property(get=__get__lengthMultiplier, put=__set__lengthMultiplier)) float_t  _lengthMultiplier;

/// @brief Field _widthCurve offset 0x48
 __declspec(property(get=__get__widthCurve, put=__set__widthCurve)) ::UnityEngine::AnimationCurve*  _widthCurve;

/// @brief Field _widthMultiplier offset 0x50
 __declspec(property(get=__get__widthMultiplier, put=__set__widthMultiplier)) float_t  _widthMultiplier;

/// @brief Field _neonLightPrefab offset 0x58
 __declspec(property(get=__get__neonLightPrefab, put=__set__neonLightPrefab)) ::GlobalNamespace::TubeBloomPrePassLight*  _neonLightPrefab;

/// @brief Field _afterSpawnRotation offset 0x60
 __declspec(property(get=__get__afterSpawnRotation, put=__set__afterSpawnRotation)) ::UnityEngine::Vector3  _afterSpawnRotation;

constexpr void __set__generate(bool  value) ;

constexpr bool& __get__generate() ;

constexpr bool const& __get__generate() const;

constexpr void __set__radius(float_t  value) ;

constexpr float_t& __get__radius() ;

constexpr float_t const& __get__radius() const;

constexpr void __set__angle(float_t  value) ;

constexpr float_t& __get__angle() ;

constexpr float_t const& __get__angle() const;

constexpr void __set__numberOfElements(int32_t  value) ;

constexpr int32_t& __get__numberOfElements() ;

constexpr int32_t const& __get__numberOfElements() const;

constexpr void __set__intensityCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__intensityCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__intensityCurve() const;

constexpr void __set__intensityMultiplier(float_t  value) ;

constexpr float_t& __get__intensityMultiplier() ;

constexpr float_t const& __get__intensityMultiplier() const;

constexpr void __set__lengthCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__lengthCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__lengthCurve() const;

constexpr void __set__lengthMultiplier(float_t  value) ;

constexpr float_t& __get__lengthMultiplier() ;

constexpr float_t const& __get__lengthMultiplier() const;

constexpr void __set__widthCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr ::UnityEngine::AnimationCurve* __get__widthCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> __get__widthCurve() const;

constexpr void __set__widthMultiplier(float_t  value) ;

constexpr float_t& __get__widthMultiplier() ;

constexpr float_t const& __get__widthMultiplier() const;

constexpr void __set__neonLightPrefab(::GlobalNamespace::TubeBloomPrePassLight*  value) ;

constexpr ::GlobalNamespace::TubeBloomPrePassLight* __get__neonLightPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> __get__neonLightPrefab() const;

constexpr void __set__afterSpawnRotation(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__afterSpawnRotation() ;

constexpr ::UnityEngine::Vector3 const& __get__afterSpawnRotation() const;

static inline ::GlobalNamespace::MenuNeonLightsGenerator* New_ctor() ;

/// @brief Method .ctor addr 0x23765e4 size 0x2c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MenuNeonLightsGenerator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MenuNeonLightsGenerator(MenuNeonLightsGenerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MenuNeonLightsGenerator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MenuNeonLightsGenerator(MenuNeonLightsGenerator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MenuNeonLightsGenerator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuNeonLightsGenerator, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuNeonLightsGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuNeonLightsGenerator*, "", "MenuNeonLightsGenerator");
