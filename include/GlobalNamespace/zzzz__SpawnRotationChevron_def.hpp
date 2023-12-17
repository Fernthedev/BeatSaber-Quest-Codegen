#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SpawnRotationChevron)
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
class __SpawnRotationChevron__Pool;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class SpawnRotationChevron;
}
namespace GlobalNamespace {
class __SpawnRotationChevron__Pool;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SpawnRotationChevron);
MARK_REF_PTR_T(::GlobalNamespace::__SpawnRotationChevron__Pool);
// Type: ::SpawnRotationChevron
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4995))
// CS Name: ::SpawnRotationChevron*
class CORDL_TYPE SpawnRotationChevron : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
using Pool = ::GlobalNamespace::__SpawnRotationChevron__Pool;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::GlobalNamespace::LightWithIdMonoBehaviour)]{};

/// @brief Field _lights offset 0x30
 __declspec(property(get=__get__lights, put=__set__lights)) ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  _lights;

/// @brief Field _color offset 0x38
 __declspec(property(get=__get__color, put=__set__color)) ::UnityEngine::Color  _color;

/// @brief Field _lightAmount offset 0x48
 __declspec(property(get=__get__lightAmount, put=__set__lightAmount)) float_t  _lightAmount;

constexpr void __set__lights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& __get__lights() ;

constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& __get__lights() const;

constexpr void __set__color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__color() ;

constexpr ::UnityEngine::Color const& __get__color() const;

constexpr void __set__lightAmount(float_t  value) ;

constexpr float_t& __get__lightAmount() ;

constexpr float_t const& __get__lightAmount() const;

/// @brief Method ColorWasSet addr 0x23b5650 size 0xc virtual true final false
inline void ColorWasSet(::UnityEngine::Color  color) ;

/// @brief Method SetLightAmount addr 0x23b56cc size 0x8 virtual false final false
inline void SetLightAmount(float_t  amount) ;

/// @brief Method UpdateLights addr 0x23b565c size 0x70 virtual false final false
inline void UpdateLights() ;

static inline ::GlobalNamespace::SpawnRotationChevron* New_ctor() ;

/// @brief Method .ctor addr 0x23b56d4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevron", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpawnRotationChevron(SpawnRotationChevron && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpawnRotationChevron", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpawnRotationChevron(SpawnRotationChevron const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SpawnRotationChevron()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SpawnRotationChevron, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4995)), TypeDefinitionIndex(TypeDefinitionIndex(11050)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11050), inst: 2827 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4994))
// CS Name: ::SpawnRotationChevron::Pool*
class CORDL_TYPE __SpawnRotationChevron__Pool : public ::Zenject::MonoMemoryPool_1<::GlobalNamespace::SpawnRotationChevron*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::MonoMemoryPool_1<::GlobalNamespace::SpawnRotationChevron*>)]{};

static inline ::GlobalNamespace::__SpawnRotationChevron__Pool* New_ctor() ;

/// @brief Method .ctor addr 0x23b56dc size 0x48 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__SpawnRotationChevron__Pool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SpawnRotationChevron__Pool(__SpawnRotationChevron__Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SpawnRotationChevron__Pool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SpawnRotationChevron__Pool(__SpawnRotationChevron__Pool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SpawnRotationChevron__Pool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SpawnRotationChevron__Pool, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SpawnRotationChevron);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SpawnRotationChevron*, "", "SpawnRotationChevron");
NEED_NO_BOX(::GlobalNamespace::__SpawnRotationChevron__Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SpawnRotationChevron__Pool*, "", "SpawnRotationChevron/Pool");
