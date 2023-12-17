#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRScreenFade)
namespace GlobalNamespace {
class __OVRScreenFade___Fade_d__25;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class MeshFilter;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRScreenFade;
}
namespace GlobalNamespace {
class __OVRScreenFade___Fade_d__25;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRScreenFade);
MARK_REF_PTR_T(::GlobalNamespace::__OVRScreenFade___Fade_d__25);
// Type: ::<Fade>d__25
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8164))
// CS Name: ::OVRScreenFade::<Fade>d__25*
class CORDL_TYPE __OVRScreenFade___Fade_d__25 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::OVRScreenFade*  __4__this;

/// @brief Field startAlpha offset 0x28
 __declspec(property(get=__get_startAlpha, put=__set_startAlpha)) float_t  startAlpha;

/// @brief Field endAlpha offset 0x2c
 __declspec(property(get=__get_endAlpha, put=__set_endAlpha)) float_t  endAlpha;

/// @brief Field <elapsedTime>5__2 offset 0x30
 __declspec(property(get=__get__elapsedTime_5__2, put=__set__elapsedTime_5__2)) float_t  _elapsedTime_5__2;

 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::System::Object*  value) ;

constexpr ::System::Object* __get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get___2__current() const;

constexpr void __set___4__this(::GlobalNamespace::OVRScreenFade*  value) ;

constexpr ::GlobalNamespace::OVRScreenFade* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRScreenFade*> __get___4__this() const;

constexpr void __set_startAlpha(float_t  value) ;

constexpr float_t& __get_startAlpha() ;

constexpr float_t const& __get_startAlpha() const;

constexpr void __set_endAlpha(float_t  value) ;

constexpr float_t& __get_endAlpha() ;

constexpr float_t const& __get_endAlpha() const;

constexpr void __set__elapsedTime_5__2(float_t  value) ;

constexpr float_t& __get__elapsedTime_5__2() ;

constexpr float_t const& __get__elapsedTime_5__2() const;

static inline ::GlobalNamespace::__OVRScreenFade___Fade_d__25* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x27bd724 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x27bd778 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x27bd77c size 0x11c virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x27bd898 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x27bd8a0 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x27bd8e0 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__OVRScreenFade___Fade_d__25", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__OVRScreenFade___Fade_d__25(__OVRScreenFade___Fade_d__25 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__OVRScreenFade___Fade_d__25", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__OVRScreenFade___Fade_d__25(__OVRScreenFade___Fade_d__25 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __OVRScreenFade___Fade_d__25()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OVRScreenFade___Fade_d__25, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::OVRScreenFade
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8165))
// CS Name: ::OVRScreenFade*
class CORDL_TYPE OVRScreenFade : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Fade_d__25 = ::GlobalNamespace::__OVRScreenFade___Fade_d__25;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x60};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x60 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field fadeTime offset 0x18
 __declspec(property(get=__get_fadeTime, put=__set_fadeTime)) float_t  fadeTime;

/// @brief Field fadeColor offset 0x1c
 __declspec(property(get=__get_fadeColor, put=__set_fadeColor)) ::UnityEngine::Color  fadeColor;

/// @brief Field fadeOnStart offset 0x2c
 __declspec(property(get=__get_fadeOnStart, put=__set_fadeOnStart)) bool  fadeOnStart;

/// @brief Field renderQueue offset 0x30
 __declspec(property(get=__get_renderQueue, put=__set_renderQueue)) int32_t  renderQueue;

/// @brief Field explicitFadeAlpha offset 0x34
 __declspec(property(get=__get_explicitFadeAlpha, put=__set_explicitFadeAlpha)) float_t  explicitFadeAlpha;

/// @brief Field animatedFadeAlpha offset 0x38
 __declspec(property(get=__get_animatedFadeAlpha, put=__set_animatedFadeAlpha)) float_t  animatedFadeAlpha;

/// @brief Field uiFadeAlpha offset 0x3c
 __declspec(property(get=__get_uiFadeAlpha, put=__set_uiFadeAlpha)) float_t  uiFadeAlpha;

/// @brief Field fadeRenderer offset 0x40
 __declspec(property(get=__get_fadeRenderer, put=__set_fadeRenderer)) ::UnityEngine::MeshRenderer*  fadeRenderer;

/// @brief Field fadeMesh offset 0x48
 __declspec(property(get=__get_fadeMesh, put=__set_fadeMesh)) ::UnityEngine::MeshFilter*  fadeMesh;

/// @brief Field fadeMaterial offset 0x50
 __declspec(property(get=__get_fadeMaterial, put=__set_fadeMaterial)) ::UnityEngine::Material*  fadeMaterial;

/// @brief Field isFading offset 0x58
 __declspec(property(get=__get_isFading, put=__set_isFading)) bool  isFading;

 __declspec(property(get=get_currentAlpha)) float_t  currentAlpha;

static inline void setStaticF__instance_k__BackingField(::GlobalNamespace::OVRScreenFade*  value) ;

static inline ::GlobalNamespace::OVRScreenFade* getStaticF__instance_k__BackingField() ;

constexpr void __set_fadeTime(float_t  value) ;

constexpr float_t& __get_fadeTime() ;

constexpr float_t const& __get_fadeTime() const;

constexpr void __set_fadeColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_fadeColor() ;

constexpr ::UnityEngine::Color const& __get_fadeColor() const;

constexpr void __set_fadeOnStart(bool  value) ;

constexpr bool& __get_fadeOnStart() ;

constexpr bool const& __get_fadeOnStart() const;

constexpr void __set_renderQueue(int32_t  value) ;

constexpr int32_t& __get_renderQueue() ;

constexpr int32_t const& __get_renderQueue() const;

constexpr void __set_explicitFadeAlpha(float_t  value) ;

constexpr float_t& __get_explicitFadeAlpha() ;

constexpr float_t const& __get_explicitFadeAlpha() const;

constexpr void __set_animatedFadeAlpha(float_t  value) ;

constexpr float_t& __get_animatedFadeAlpha() ;

constexpr float_t const& __get_animatedFadeAlpha() const;

constexpr void __set_uiFadeAlpha(float_t  value) ;

constexpr float_t& __get_uiFadeAlpha() ;

constexpr float_t const& __get_uiFadeAlpha() const;

constexpr void __set_fadeRenderer(::UnityEngine::MeshRenderer*  value) ;

constexpr ::UnityEngine::MeshRenderer* __get_fadeRenderer() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> __get_fadeRenderer() const;

constexpr void __set_fadeMesh(::UnityEngine::MeshFilter*  value) ;

constexpr ::UnityEngine::MeshFilter* __get_fadeMesh() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshFilter*> __get_fadeMesh() const;

constexpr void __set_fadeMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get_fadeMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get_fadeMaterial() const;

constexpr void __set_isFading(bool  value) ;

constexpr bool& __get_isFading() ;

constexpr bool const& __get_isFading() const;

/// @brief Method get_instance addr 0x27bcdac size 0x48 virtual false final false
static inline ::GlobalNamespace::OVRScreenFade* get_instance() ;

/// @brief Method set_instance addr 0x27bcdf4 size 0x4c virtual false final false
static inline void set_instance(::GlobalNamespace::OVRScreenFade*  value) ;

/// @brief Method get_currentAlpha addr 0x27bce40 size 0xbc virtual false final false
inline float_t get_currentAlpha() ;

/// @brief Method Start addr 0x27bcefc size 0x49c virtual false final false
inline void Start() ;

/// @brief Method FadeIn addr 0x27bd398 size 0x28 virtual false final false
inline void FadeIn() ;

/// @brief Method FadeOut addr 0x27bd43c size 0x28 virtual false final false
inline void FadeOut() ;

/// @brief Method OnLevelFinishedLoading addr 0x27bd464 size 0x28 virtual false final false
inline void OnLevelFinishedLoading(int32_t  level) ;

/// @brief Method OnEnable addr 0x27bd48c size 0x18 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDestroy addr 0x27bd4a4 size 0x154 virtual false final false
inline void OnDestroy() ;

/// @brief Method SetUIFade addr 0x27bd5f8 size 0x1c virtual false final false
inline void SetUIFade(float_t  level) ;

/// @brief Method SetExplicitFade addr 0x27bd71c size 0x8 virtual false final false
inline void SetExplicitFade(float_t  level) ;

/// @brief Method Fade addr 0x27bd3c0 size 0x7c virtual false final false
inline ::System::Collections::IEnumerator* Fade(float_t  startAlpha, float_t  endAlpha) ;

/// @brief Method SetMaterialAlpha addr 0x27bd614 size 0x108 virtual false final false
inline void SetMaterialAlpha() ;

static inline ::GlobalNamespace::OVRScreenFade* New_ctor() ;

/// @brief Method .ctor addr 0x27bd74c size 0x2c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "OVRScreenFade", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRScreenFade(OVRScreenFade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRScreenFade", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRScreenFade(OVRScreenFade const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 OVRScreenFade()  = default;
public:


// Fields

// Static field <instance>k__BackingField


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRScreenFade, 0x60>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRScreenFade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRScreenFade*, "", "OVRScreenFade");
NEED_NO_BOX(::GlobalNamespace::__OVRScreenFade___Fade_d__25);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OVRScreenFade___Fade_d__25*, "", "OVRScreenFade/<Fade>d__25");
