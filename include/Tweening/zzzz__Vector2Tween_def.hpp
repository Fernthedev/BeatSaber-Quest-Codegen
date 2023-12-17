#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Tweening/zzzz__Tween_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector2Tween)
namespace GlobalNamespace {
struct EaseType;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TValue>
class StaticMemoryPool_7;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Tweening {
class Vector2Tween;
}
// Write type traits
MARK_REF_PTR_T(::Tweening::Vector2Tween);
// Type: Tweening::Vector2Tween
namespace Tweening {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10243)), TypeDefinitionIndex(TypeDefinitionIndex(16099)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(16099), inst: 411 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16094))
// CS Name: ::Tweening::Vector2Tween*
class CORDL_TYPE Vector2Tween : public ::Tweening::Tween_1<::UnityEngine::Vector2> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::Tweening::Tween_1<::UnityEngine::Vector2>)]{};

static inline void setStaticF_Pool(::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,::System::Action_1<::UnityEngine::Vector2>*,float_t,::GlobalNamespace::EaseType,float_t,::Tweening::Vector2Tween*>*  value) ;

static inline ::Zenject::StaticMemoryPool_7<::UnityEngine::Vector2,::UnityEngine::Vector2,::System::Action_1<::UnityEngine::Vector2>*,float_t,::GlobalNamespace::EaseType,float_t,::Tweening::Vector2Tween*>* getStaticF_Pool() ;

static inline ::Tweening::Vector2Tween* New_ctor() ;

/// @brief Method .ctor addr 0x2a0dc68 size 0x48 virtual false final false
inline void _ctor() ;

static inline ::Tweening::Vector2Tween* New_ctor(::UnityEngine::Vector2  fromValue, ::UnityEngine::Vector2  toValue, ::System::Action_1<::UnityEngine::Vector2>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method .ctor addr 0x2a0dcb0 size 0xa8 virtual false final false
inline void _ctor(::UnityEngine::Vector2  fromValue, ::UnityEngine::Vector2  toValue, ::System::Action_1<::UnityEngine::Vector2>*  onUpdate, float_t  duration, ::GlobalNamespace::EaseType  easeType, float_t  delay) ;

/// @brief Method GetValue addr 0x2a0dd58 size 0x34 virtual true final false
inline ::UnityEngine::Vector2 GetValue(float_t  t) ;

// Ctor Parameters [CppParam { name: "", ty: "Vector2Tween", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Vector2Tween(Vector2Tween && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Vector2Tween", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Vector2Tween(Vector2Tween const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Vector2Tween()  = default;
public:


// Fields

// Static field Pool


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tweening::Vector2Tween, 0x60>, "Size mismatch!");

} // namespace end def Tweening
NEED_NO_BOX(::Tweening::Vector2Tween);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::Vector2Tween*, "Tweening", "Vector2Tween");
