#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(LightTranslationGroupEffectManager)
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class LightTranslationGroupEffect;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class LightTranslationGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class LightTranslationGroupEffectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightTranslationGroupEffectManager);
// Type: ::LightTranslationGroupEffectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4948))
// CS Name: ::LightTranslationGroupEffectManager*
class CORDL_TYPE LightTranslationGroupEffectManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _lightTranslationGroups offset 0x18
 __declspec(property(get=__get__lightTranslationGroups, put=__set__lightTranslationGroups)) ::ArrayW<::GlobalNamespace::LightTranslationGroup*,::Array<::GlobalNamespace::LightTranslationGroup*>*>  _lightTranslationGroups;

/// @brief Field _container offset 0x20
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _lightTranslationGroupEffects offset 0x28
 __declspec(property(get=__get__lightTranslationGroupEffects, put=__set__lightTranslationGroupEffects)) ::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>*  _lightTranslationGroupEffects;

constexpr void __set__lightTranslationGroups(::ArrayW<::GlobalNamespace::LightTranslationGroup*,::Array<::GlobalNamespace::LightTranslationGroup*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::LightTranslationGroup*,::Array<::GlobalNamespace::LightTranslationGroup*>*>& __get__lightTranslationGroups() ;

constexpr ::ArrayW<::GlobalNamespace::LightTranslationGroup*,::Array<::GlobalNamespace::LightTranslationGroup*>*> const& __get__lightTranslationGroups() const;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__lightTranslationGroupEffects(::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>* __get__lightTranslationGroupEffects() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::LightTranslationGroupEffect*>*> __get__lightTranslationGroupEffects() const;

/// @brief Method Start addr 0x23abb84 size 0x3f4 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23abf78 size 0x148 virtual false final false
inline void OnDestroy() ;

static inline ::GlobalNamespace::LightTranslationGroupEffectManager* New_ctor() ;

/// @brief Method .ctor addr 0x23ac0c0 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroupEffectManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightTranslationGroupEffectManager(LightTranslationGroupEffectManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightTranslationGroupEffectManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightTranslationGroupEffectManager(LightTranslationGroupEffectManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightTranslationGroupEffectManager()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightTranslationGroupEffectManager, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightTranslationGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationGroupEffectManager*, "", "LightTranslationGroupEffectManager");
