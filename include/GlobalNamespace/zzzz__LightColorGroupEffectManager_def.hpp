#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(LightColorGroupEffectManager)
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace Zenject {
class DiContainer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class LightColorGroupEffect;
}
namespace GlobalNamespace {
class ColorBoostBeatmapEventData;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class LightGroup;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LightColorGroupEffectManager;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightColorGroupEffectManager);
// Type: ::LightColorGroupEffectManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4924))
// CS Name: ::LightColorGroupEffectManager*
class CORDL_TYPE LightColorGroupEffectManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _lightGroups offset 0x18
 __declspec(property(get=__get__lightGroups, put=__set__lightGroups)) ::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>  _lightGroups;

/// @brief Field _beatmapCallbacksController offset 0x20
 __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController)) ::GlobalNamespace::BeatmapCallbacksController*  _beatmapCallbacksController;

/// @brief Field _container offset 0x28
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _colorBoostBeatmapDataCallbackWrapper offset 0x30
 __declspec(property(get=__get__colorBoostBeatmapDataCallbackWrapper, put=__set__colorBoostBeatmapDataCallbackWrapper)) ::GlobalNamespace::BeatmapDataCallbackWrapper*  _colorBoostBeatmapDataCallbackWrapper;

/// @brief Field _lightColorGroupEffects offset 0x38
 __declspec(property(get=__get__lightColorGroupEffects, put=__set__lightColorGroupEffects)) ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupEffect*>*  _lightColorGroupEffects;

 __declspec(property(get=get_lightGroups)) ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::LightGroup*>*  lightGroups;

constexpr void __set__lightGroups(::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*>& __get__lightGroups() ;

constexpr ::ArrayW<::GlobalNamespace::LightGroup*,::Array<::GlobalNamespace::LightGroup*>*> const& __get__lightGroups() const;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController* __get__beatmapCallbacksController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> __get__beatmapCallbacksController() const;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__colorBoostBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* __get__colorBoostBeatmapDataCallbackWrapper() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> __get__colorBoostBeatmapDataCallbackWrapper() const;

constexpr void __set__lightColorGroupEffects(::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupEffect*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupEffect*>* __get__lightColorGroupEffects() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::LightColorGroupEffect*>*> __get__lightColorGroupEffects() const;

/// @brief Method get_lightGroups addr 0x23a8d80 size 0x8 virtual false final false
inline ::System::Collections::Generic::IReadOnlyCollection_1<::GlobalNamespace::LightGroup*>* get_lightGroups() ;

/// @brief Method Start addr 0x23a8d88 size 0x2a0 virtual false final false
inline void Start() ;

/// @brief Method OnDestroy addr 0x23a9028 size 0x15c virtual false final false
inline void OnDestroy() ;

/// @brief Method HandleColorBoostBeatmapEvent addr 0x23a9184 size 0x15c virtual false final false
inline void HandleColorBoostBeatmapEvent(::GlobalNamespace::ColorBoostBeatmapEventData*  eventData) ;

static inline ::GlobalNamespace::LightColorGroupEffectManager* New_ctor() ;

/// @brief Method .ctor addr 0x23a92e0 size 0x7c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LightColorGroupEffectManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightColorGroupEffectManager(LightColorGroupEffectManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightColorGroupEffectManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightColorGroupEffectManager(LightColorGroupEffectManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LightColorGroupEffectManager()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorGroupEffectManager, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightColorGroupEffectManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorGroupEffectManager*, "", "LightColorGroupEffectManager");
