#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FlickeringNeonSign)
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace GlobalNamespace {
class __FlickeringNeonSign___FlickeringCoroutine_d__16;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
template<typename T>
class RandomObjectPicker_1;
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
class FlickeringNeonSign;
}
namespace GlobalNamespace {
class __FlickeringNeonSign___FlickeringCoroutine_d__16;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FlickeringNeonSign);
MARK_REF_PTR_T(::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16);
// Type: ::<FlickeringCoroutine>d__16
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4984))
// CS Name: ::FlickeringNeonSign::<FlickeringCoroutine>d__16*
class CORDL_TYPE __FlickeringNeonSign___FlickeringCoroutine_d__16 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::FlickeringNeonSign*  __4__this;

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

constexpr void __set___4__this(::GlobalNamespace::FlickeringNeonSign*  value) ;

constexpr ::GlobalNamespace::FlickeringNeonSign* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FlickeringNeonSign*> __get___4__this() const;

static inline ::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x23b42c8 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x23b4414 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x23b4418 size 0x118 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x23b4530 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x23b4538 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x23b4578 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__FlickeringNeonSign___FlickeringCoroutine_d__16", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FlickeringNeonSign___FlickeringCoroutine_d__16(__FlickeringNeonSign___FlickeringCoroutine_d__16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FlickeringNeonSign___FlickeringCoroutine_d__16", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FlickeringNeonSign___FlickeringCoroutine_d__16(__FlickeringNeonSign___FlickeringCoroutine_d__16 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FlickeringNeonSign___FlickeringCoroutine_d__16()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16, 0x28>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::FlickeringNeonSign
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4985))
// CS Name: ::FlickeringNeonSign*
class CORDL_TYPE FlickeringNeonSign : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _FlickeringCoroutine_d__16 = ::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _flickeringSprite offset 0x18
 __declspec(property(get=__get__flickeringSprite, put=__set__flickeringSprite)) ::UnityEngine::SpriteRenderer*  _flickeringSprite;

/// @brief Field _light offset 0x20
 __declspec(property(get=__get__light, put=__set__light)) ::GlobalNamespace::TubeBloomPrePassLight*  _light;

/// @brief Field _particleSystems offset 0x28
 __declspec(property(get=__get__particleSystems, put=__set__particleSystems)) ::ArrayW<::UnityEngine::ParticleSystem*,::Array<::UnityEngine::ParticleSystem*>*>  _particleSystems;

/// @brief Field _minOnDelay offset 0x30
 __declspec(property(get=__get__minOnDelay, put=__set__minOnDelay)) float_t  _minOnDelay;

/// @brief Field _maxOnDelay offset 0x34
 __declspec(property(get=__get__maxOnDelay, put=__set__maxOnDelay)) float_t  _maxOnDelay;

/// @brief Field _minOffDelay offset 0x38
 __declspec(property(get=__get__minOffDelay, put=__set__minOffDelay)) float_t  _minOffDelay;

/// @brief Field _maxOffDelay offset 0x3c
 __declspec(property(get=__get__maxOffDelay, put=__set__maxOffDelay)) float_t  _maxOffDelay;

/// @brief Field _spriteOnColor offset 0x40
 __declspec(property(get=__get__spriteOnColor, put=__set__spriteOnColor)) ::UnityEngine::Color  _spriteOnColor;

/// @brief Field _lightOnColor offset 0x50
 __declspec(property(get=__get__lightOnColor, put=__set__lightOnColor)) ::UnityEngine::Color  _lightOnColor;

/// @brief Field _onMaterial offset 0x60
 __declspec(property(get=__get__onMaterial, put=__set__onMaterial)) ::UnityEngine::Material*  _onMaterial;

/// @brief Field _offMaterial offset 0x68
 __declspec(property(get=__get__offMaterial, put=__set__offMaterial)) ::UnityEngine::Material*  _offMaterial;

/// @brief Field _sparksAudioClips offset 0x70
 __declspec(property(get=__get__sparksAudioClips, put=__set__sparksAudioClips)) ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  _sparksAudioClips;

/// @brief Field _sparksAudioClipPicker offset 0x78
 __declspec(property(get=__get__sparksAudioClipPicker, put=__set__sparksAudioClipPicker)) ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*  _sparksAudioClipPicker;

constexpr void __set__flickeringSprite(::UnityEngine::SpriteRenderer*  value) ;

constexpr ::UnityEngine::SpriteRenderer* __get__flickeringSprite() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> __get__flickeringSprite() const;

constexpr void __set__light(::GlobalNamespace::TubeBloomPrePassLight*  value) ;

constexpr ::GlobalNamespace::TubeBloomPrePassLight* __get__light() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::TubeBloomPrePassLight*> __get__light() const;

constexpr void __set__particleSystems(::ArrayW<::UnityEngine::ParticleSystem*,::Array<::UnityEngine::ParticleSystem*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::ParticleSystem*,::Array<::UnityEngine::ParticleSystem*>*>& __get__particleSystems() ;

constexpr ::ArrayW<::UnityEngine::ParticleSystem*,::Array<::UnityEngine::ParticleSystem*>*> const& __get__particleSystems() const;

constexpr void __set__minOnDelay(float_t  value) ;

constexpr float_t& __get__minOnDelay() ;

constexpr float_t const& __get__minOnDelay() const;

constexpr void __set__maxOnDelay(float_t  value) ;

constexpr float_t& __get__maxOnDelay() ;

constexpr float_t const& __get__maxOnDelay() const;

constexpr void __set__minOffDelay(float_t  value) ;

constexpr float_t& __get__minOffDelay() ;

constexpr float_t const& __get__minOffDelay() const;

constexpr void __set__maxOffDelay(float_t  value) ;

constexpr float_t& __get__maxOffDelay() ;

constexpr float_t const& __get__maxOffDelay() const;

constexpr void __set__spriteOnColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__spriteOnColor() ;

constexpr ::UnityEngine::Color const& __get__spriteOnColor() const;

constexpr void __set__lightOnColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__lightOnColor() ;

constexpr ::UnityEngine::Color const& __get__lightOnColor() const;

constexpr void __set__onMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__onMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__onMaterial() const;

constexpr void __set__offMaterial(::UnityEngine::Material*  value) ;

constexpr ::UnityEngine::Material* __get__offMaterial() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> __get__offMaterial() const;

constexpr void __set__sparksAudioClips(::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*>& __get__sparksAudioClips() ;

constexpr ::ArrayW<::UnityEngine::AudioClip*,::Array<::UnityEngine::AudioClip*>*> const& __get__sparksAudioClips() const;

constexpr void __set__sparksAudioClipPicker(::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*  value) ;

constexpr ::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>* __get__sparksAudioClipPicker() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomObjectPicker_1<::UnityEngine::AudioClip*>*> __get__sparksAudioClipPicker() const;

/// @brief Method Awake addr 0x23b4180 size 0x84 virtual false final false
inline void Awake() ;

/// @brief Method Start addr 0x23b4204 size 0x3c virtual false final false
inline void Start() ;

/// @brief Method OnEnable addr 0x23b4240 size 0x20 virtual false final false
inline void OnEnable() ;

/// @brief Method FlickeringCoroutine addr 0x23b4260 size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* FlickeringCoroutine() ;

/// @brief Method SetOn addr 0x23b42f0 size 0x110 virtual false final false
inline void SetOn(bool  on) ;

static inline ::GlobalNamespace::FlickeringNeonSign* New_ctor() ;

/// @brief Method .ctor addr 0x23b4400 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "FlickeringNeonSign", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlickeringNeonSign(FlickeringNeonSign && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlickeringNeonSign", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlickeringNeonSign(FlickeringNeonSign const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FlickeringNeonSign()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FlickeringNeonSign, 0x80>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FlickeringNeonSign);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlickeringNeonSign*, "", "FlickeringNeonSign");
NEED_NO_BOX(::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FlickeringNeonSign___FlickeringCoroutine_d__16*, "", "FlickeringNeonSign/<FlickeringCoroutine>d__16");
