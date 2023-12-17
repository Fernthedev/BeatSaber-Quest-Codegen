#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ClothRandomFluctuation)
namespace GlobalNamespace {
class __ClothRandomFluctuation__SineLayer;
}
namespace UnityEngine {
class Cloth;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class ClothRandomFluctuation;
}
namespace GlobalNamespace {
class __ClothRandomFluctuation__SineLayer;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ClothRandomFluctuation);
MARK_REF_PTR_T(::GlobalNamespace::__ClothRandomFluctuation__SineLayer);
// Type: ::SineLayer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4010))
// CS Name: ::ClothRandomFluctuation::SineLayer*
class CORDL_TYPE __ClothRandomFluctuation__SineLayer : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field multiplier offset 0x10
 __declspec(property(get=__get_multiplier, put=__set_multiplier)) float_t  multiplier;

/// @brief Field offset offset 0x14
 __declspec(property(get=__get_offset, put=__set_offset)) float_t  offset;

constexpr void __set_multiplier(float_t  value) ;

constexpr float_t& __get_multiplier() ;

constexpr float_t const& __get_multiplier() const;

constexpr void __set_offset(float_t  value) ;

constexpr float_t& __get_offset() ;

constexpr float_t const& __get_offset() const;

static inline ::GlobalNamespace::__ClothRandomFluctuation__SineLayer* New_ctor() ;

/// @brief Method .ctor addr 0x22225d8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__ClothRandomFluctuation__SineLayer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ClothRandomFluctuation__SineLayer(__ClothRandomFluctuation__SineLayer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ClothRandomFluctuation__SineLayer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ClothRandomFluctuation__SineLayer(__ClothRandomFluctuation__SineLayer const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ClothRandomFluctuation__SineLayer()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ClothRandomFluctuation__SineLayer, 0x18>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::ClothRandomFluctuation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4011))
// CS Name: ::ClothRandomFluctuation*
class CORDL_TYPE ClothRandomFluctuation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SineLayer = ::GlobalNamespace::__ClothRandomFluctuation__SineLayer;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _cloth offset 0x18
 __declspec(property(get=__get__cloth, put=__set__cloth)) ::UnityEngine::Cloth*  _cloth;

/// @brief Field _useLocalExternalFluctuations offset 0x20
 __declspec(property(get=__get__useLocalExternalFluctuations, put=__set__useLocalExternalFluctuations)) bool  _useLocalExternalFluctuations;

/// @brief Field _externalFluctuations offset 0x24
 __declspec(property(get=__get__externalFluctuations, put=__set__externalFluctuations)) ::UnityEngine::Vector3  _externalFluctuations;

/// @brief Field _useLocalRandomFluctuations offset 0x30
 __declspec(property(get=__get__useLocalRandomFluctuations, put=__set__useLocalRandomFluctuations)) bool  _useLocalRandomFluctuations;

/// @brief Field _minFluctuations offset 0x34
 __declspec(property(get=__get__minFluctuations, put=__set__minFluctuations)) ::UnityEngine::Vector3  _minFluctuations;

/// @brief Field _maxFluctuations offset 0x40
 __declspec(property(get=__get__maxFluctuations, put=__set__maxFluctuations)) ::UnityEngine::Vector3  _maxFluctuations;

/// @brief Field _compoundSins offset 0x50
 __declspec(property(get=__get__compoundSins, put=__set__compoundSins)) ::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>*  _compoundSins;

/// @brief Field _speed offset 0x58
 __declspec(property(get=__get__speed, put=__set__speed)) float_t  _speed;

constexpr void __set__cloth(::UnityEngine::Cloth*  value) ;

constexpr ::UnityEngine::Cloth* __get__cloth() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Cloth*> __get__cloth() const;

constexpr void __set__useLocalExternalFluctuations(bool  value) ;

constexpr bool& __get__useLocalExternalFluctuations() ;

constexpr bool const& __get__useLocalExternalFluctuations() const;

constexpr void __set__externalFluctuations(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__externalFluctuations() ;

constexpr ::UnityEngine::Vector3 const& __get__externalFluctuations() const;

constexpr void __set__useLocalRandomFluctuations(bool  value) ;

constexpr bool& __get__useLocalRandomFluctuations() ;

constexpr bool const& __get__useLocalRandomFluctuations() const;

constexpr void __set__minFluctuations(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__minFluctuations() ;

constexpr ::UnityEngine::Vector3 const& __get__minFluctuations() const;

constexpr void __set__maxFluctuations(::UnityEngine::Vector3  value) ;

constexpr ::UnityEngine::Vector3& __get__maxFluctuations() ;

constexpr ::UnityEngine::Vector3 const& __get__maxFluctuations() const;

constexpr void __set__compoundSins(::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>* __get__compoundSins() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__ClothRandomFluctuation__SineLayer*>*> __get__compoundSins() const;

constexpr void __set__speed(float_t  value) ;

constexpr float_t& __get__speed() ;

constexpr float_t const& __get__speed() const;

/// @brief Method Update addr 0x2222354 size 0x8 virtual false final false
inline void Update() ;

/// @brief Method FluctuateCloth addr 0x222235c size 0x170 virtual false final false
inline void FluctuateCloth(::UnityEngine::Cloth*  cloth) ;

/// @brief Method GetNoise addr 0x22224cc size 0x104 virtual false final false
inline float_t GetNoise(float_t  time, float_t  offset) ;

static inline ::GlobalNamespace::ClothRandomFluctuation* New_ctor() ;

/// @brief Method .ctor addr 0x22225d0 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ClothRandomFluctuation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClothRandomFluctuation(ClothRandomFluctuation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClothRandomFluctuation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClothRandomFluctuation(ClothRandomFluctuation const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ClothRandomFluctuation()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ClothRandomFluctuation, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ClothRandomFluctuation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ClothRandomFluctuation*, "", "ClothRandomFluctuation");
NEED_NO_BOX(::GlobalNamespace::__ClothRandomFluctuation__SineLayer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ClothRandomFluctuation__SineLayer*, "", "ClothRandomFluctuation/SineLayer");
