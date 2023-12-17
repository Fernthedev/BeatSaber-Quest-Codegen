#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(IntroTutorialRing)
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IntroTutorialRing;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IntroTutorialRing);
// Type: ::IntroTutorialRing
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5337))
// CS Name: ::IntroTutorialRing*
class CORDL_TYPE IntroTutorialRing : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x70};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x70 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _progressImages offset 0x18
 __declspec(property(get=__get__progressImages, put=__set__progressImages)) ::ArrayW<::UnityEngine::UI::Image*,::Array<::UnityEngine::UI::Image*>*>  _progressImages;

/// @brief Field _saberType offset 0x20
 __declspec(property(get=__get__saberType, put=__set__saberType)) ::GlobalNamespace::SaberType  _saberType;

/// @brief Field _particleSystem offset 0x28
 __declspec(property(get=__get__particleSystem, put=__set__particleSystem)) ::UnityEngine::ParticleSystem*  _particleSystem;

/// @brief Field _canvasGroup offset 0x30
 __declspec(property(get=__get__canvasGroup, put=__set__canvasGroup)) ::UnityEngine::CanvasGroup*  _canvasGroup;

/// @brief Field _activationDuration offset 0x38
 __declspec(property(get=__get__activationDuration, put=__set__activationDuration)) float_t  _activationDuration;

/// @brief Field _ringGLowImages offset 0x40
 __declspec(property(get=__get__ringGLowImages, put=__set__ringGLowImages)) ::ArrayW<::UnityEngine::UI::Image*,::Array<::UnityEngine::UI::Image*>*>  _ringGLowImages;

/// @brief Field _colorManager offset 0x48
 __declspec(property(get=__get__colorManager, put=__set__colorManager)) ::GlobalNamespace::ColorManager*  _colorManager;

/// @brief Field _highlighted offset 0x50
 __declspec(property(get=__get__highlighted, put=__set__highlighted)) bool  _highlighted;

/// @brief Field _emitNextParticleTimer offset 0x54
 __declspec(property(get=__get__emitNextParticleTimer, put=__set__emitNextParticleTimer)) float_t  _emitNextParticleTimer;

/// @brief Field _activationProgress offset 0x58
 __declspec(property(get=__get__activationProgress, put=__set__activationProgress)) float_t  _activationProgress;

/// @brief Field _sabersInside offset 0x60
 __declspec(property(get=__get__sabersInside, put=__set__sabersInside)) ::System::Collections::Generic::HashSet_1<::GlobalNamespace::SaberType>*  _sabersInside;

/// @brief Field _sabersInsideAfterOnEnable offset 0x68
 __declspec(property(get=__get__sabersInsideAfterOnEnable, put=__set__sabersInsideAfterOnEnable)) bool  _sabersInsideAfterOnEnable;

 __declspec(property(put=set_alpha)) float_t  alpha;

 __declspec(property(get=get_fullyActivated)) bool  fullyActivated;

 __declspec(property(get=get_saberType, put=set_saberType)) ::GlobalNamespace::SaberType  saberType;

constexpr void __set__progressImages(::ArrayW<::UnityEngine::UI::Image*,::Array<::UnityEngine::UI::Image*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UI::Image*,::Array<::UnityEngine::UI::Image*>*>& __get__progressImages() ;

constexpr ::ArrayW<::UnityEngine::UI::Image*,::Array<::UnityEngine::UI::Image*>*> const& __get__progressImages() const;

constexpr void __set__saberType(::GlobalNamespace::SaberType  value) ;

constexpr ::GlobalNamespace::SaberType& __get__saberType() ;

constexpr ::GlobalNamespace::SaberType const& __get__saberType() const;

constexpr void __set__particleSystem(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get__particleSystem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get__particleSystem() const;

constexpr void __set__canvasGroup(::UnityEngine::CanvasGroup*  value) ;

constexpr ::UnityEngine::CanvasGroup* __get__canvasGroup() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> __get__canvasGroup() const;

constexpr void __set__activationDuration(float_t  value) ;

constexpr float_t& __get__activationDuration() ;

constexpr float_t const& __get__activationDuration() const;

constexpr void __set__ringGLowImages(::ArrayW<::UnityEngine::UI::Image*,::Array<::UnityEngine::UI::Image*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::UI::Image*,::Array<::UnityEngine::UI::Image*>*>& __get__ringGLowImages() ;

constexpr ::ArrayW<::UnityEngine::UI::Image*,::Array<::UnityEngine::UI::Image*>*> const& __get__ringGLowImages() const;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager*  value) ;

constexpr ::GlobalNamespace::ColorManager* __get__colorManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> __get__colorManager() const;

constexpr void __set__highlighted(bool  value) ;

constexpr bool& __get__highlighted() ;

constexpr bool const& __get__highlighted() const;

constexpr void __set__emitNextParticleTimer(float_t  value) ;

constexpr float_t& __get__emitNextParticleTimer() ;

constexpr float_t const& __get__emitNextParticleTimer() const;

constexpr void __set__activationProgress(float_t  value) ;

constexpr float_t& __get__activationProgress() ;

constexpr float_t const& __get__activationProgress() const;

constexpr void __set__sabersInside(::System::Collections::Generic::HashSet_1<::GlobalNamespace::SaberType>*  value) ;

constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::SaberType>* __get__sabersInside() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::GlobalNamespace::SaberType>*> __get__sabersInside() const;

constexpr void __set__sabersInsideAfterOnEnable(bool  value) ;

constexpr bool& __get__sabersInsideAfterOnEnable() ;

constexpr bool const& __get__sabersInsideAfterOnEnable() const;

/// @brief Method set_alpha addr 0x2269230 size 0x1c virtual false final false
inline void set_alpha(float_t  value) ;

/// @brief Method get_fullyActivated addr 0x2268fec size 0x24 virtual false final false
inline bool get_fullyActivated() ;

/// @brief Method get_saberType addr 0x22693dc size 0x8 virtual false final false
inline ::GlobalNamespace::SaberType get_saberType() ;

/// @brief Method set_saberType addr 0x22693e4 size 0x8 virtual false final false
inline void set_saberType(::GlobalNamespace::SaberType  value) ;

/// @brief Method Start addr 0x22693ec size 0x8c virtual false final false
inline void Start() ;

/// @brief Method OnEnable addr 0x2269478 size 0x50 virtual false final false
inline void OnEnable() ;

/// @brief Method Update addr 0x22694c8 size 0x11c virtual false final false
inline void Update() ;

/// @brief Method SetProgressImagesfillAmount addr 0x22695e4 size 0x70 virtual false final false
inline void SetProgressImagesfillAmount(float_t  fillAmount) ;

/// @brief Method OnTriggerEnter addr 0x2269654 size 0x108 virtual false final false
inline void OnTriggerEnter(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerExit addr 0x226975c size 0x108 virtual false final false
inline void OnTriggerExit(::UnityEngine::Collider*  other) ;

/// @brief Method OnTriggerStay addr 0x2269864 size 0x108 virtual false final false
inline void OnTriggerStay(::UnityEngine::Collider*  other) ;

static inline ::GlobalNamespace::IntroTutorialRing* New_ctor() ;

/// @brief Method .ctor addr 0x226996c size 0x88 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "IntroTutorialRing", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IntroTutorialRing(IntroTutorialRing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IntroTutorialRing", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IntroTutorialRing(IntroTutorialRing const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 IntroTutorialRing()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::IntroTutorialRing, 0x70>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IntroTutorialRing);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IntroTutorialRing*, "", "IntroTutorialRing");
