#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_SpriteAnimator)
namespace System::Collections {
class IEnumerator;
}
namespace TMPro {
class __TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace TMPro {
class TMP_SpriteAsset;
}
namespace TMPro {
class TMP_Text;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace TMPro {
struct TMP_MeshInfo;
}
namespace TMPro {
struct TMP_CharacterInfo;
}
// Forward declare root types
namespace TMPro {
class TMP_SpriteAnimator;
}
namespace TMPro {
class __TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_SpriteAnimator);
MARK_REF_PTR_T(::TMPro::__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7);
// Type: ::<DoSpriteAnimationInternal>d__7
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12418))
// CS Name: ::TMP_SpriteAnimator::<DoSpriteAnimationInternal>d__7*
class CORDL_TYPE __TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x228};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x228 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this offset 0x20
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::TMPro::TMP_SpriteAnimator*  __4__this;

/// @brief Field start offset 0x28
 __declspec(property(get=__get_start, put=__set_start)) int32_t  start;

/// @brief Field end offset 0x2c
 __declspec(property(get=__get_end, put=__set_end)) int32_t  end;

/// @brief Field spriteAsset offset 0x30
 __declspec(property(get=__get_spriteAsset, put=__set_spriteAsset)) ::TMPro::TMP_SpriteAsset*  spriteAsset;

/// @brief Field currentCharacter offset 0x38
 __declspec(property(get=__get_currentCharacter, put=__set_currentCharacter)) int32_t  currentCharacter;

/// @brief Field framerate offset 0x3c
 __declspec(property(get=__get_framerate, put=__set_framerate)) int32_t  framerate;

/// @brief Field <currentFrame>5__2 offset 0x40
 __declspec(property(get=__get__currentFrame_5__2, put=__set__currentFrame_5__2)) int32_t  _currentFrame_5__2;

/// @brief Field <charInfo>5__3 offset 0x48
 __declspec(property(get=__get__charInfo_5__3, put=__set__charInfo_5__3)) ::TMPro::TMP_CharacterInfo  _charInfo_5__3;

/// @brief Field <materialIndex>5__4 offset 0x1c0
 __declspec(property(get=__get__materialIndex_5__4, put=__set__materialIndex_5__4)) int32_t  _materialIndex_5__4;

/// @brief Field <vertexIndex>5__5 offset 0x1c4
 __declspec(property(get=__get__vertexIndex_5__5, put=__set__vertexIndex_5__5)) int32_t  _vertexIndex_5__5;

/// @brief Field <meshInfo>5__6 offset 0x1c8
 __declspec(property(get=__get__meshInfo_5__6, put=__set__meshInfo_5__6)) ::TMPro::TMP_MeshInfo  _meshInfo_5__6;

/// @brief Field <baseSpriteScale>5__7 offset 0x218
 __declspec(property(get=__get__baseSpriteScale_5__7, put=__set__baseSpriteScale_5__7)) float_t  _baseSpriteScale_5__7;

/// @brief Field <elapsedTime>5__8 offset 0x21c
 __declspec(property(get=__get__elapsedTime_5__8, put=__set__elapsedTime_5__8)) float_t  _elapsedTime_5__8;

/// @brief Field <targetTime>5__9 offset 0x220
 __declspec(property(get=__get__targetTime_5__9, put=__set__targetTime_5__9)) float_t  _targetTime_5__9;

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

constexpr void __set___4__this(::TMPro::TMP_SpriteAnimator*  value) ;

constexpr ::TMPro::TMP_SpriteAnimator* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_SpriteAnimator*> __get___4__this() const;

constexpr void __set_start(int32_t  value) ;

constexpr int32_t& __get_start() ;

constexpr int32_t const& __get_start() const;

constexpr void __set_end(int32_t  value) ;

constexpr int32_t& __get_end() ;

constexpr int32_t const& __get_end() const;

constexpr void __set_spriteAsset(::TMPro::TMP_SpriteAsset*  value) ;

constexpr ::TMPro::TMP_SpriteAsset* __get_spriteAsset() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_SpriteAsset*> __get_spriteAsset() const;

constexpr void __set_currentCharacter(int32_t  value) ;

constexpr int32_t& __get_currentCharacter() ;

constexpr int32_t const& __get_currentCharacter() const;

constexpr void __set_framerate(int32_t  value) ;

constexpr int32_t& __get_framerate() ;

constexpr int32_t const& __get_framerate() const;

constexpr void __set__currentFrame_5__2(int32_t  value) ;

constexpr int32_t& __get__currentFrame_5__2() ;

constexpr int32_t const& __get__currentFrame_5__2() const;

constexpr void __set__charInfo_5__3(::TMPro::TMP_CharacterInfo  value) ;

constexpr ::TMPro::TMP_CharacterInfo& __get__charInfo_5__3() ;

constexpr ::TMPro::TMP_CharacterInfo const& __get__charInfo_5__3() const;

constexpr void __set__materialIndex_5__4(int32_t  value) ;

constexpr int32_t& __get__materialIndex_5__4() ;

constexpr int32_t const& __get__materialIndex_5__4() const;

constexpr void __set__vertexIndex_5__5(int32_t  value) ;

constexpr int32_t& __get__vertexIndex_5__5() ;

constexpr int32_t const& __get__vertexIndex_5__5() const;

constexpr void __set__meshInfo_5__6(::TMPro::TMP_MeshInfo  value) ;

constexpr ::TMPro::TMP_MeshInfo& __get__meshInfo_5__6() ;

constexpr ::TMPro::TMP_MeshInfo const& __get__meshInfo_5__6() const;

constexpr void __set__baseSpriteScale_5__7(float_t  value) ;

constexpr float_t& __get__baseSpriteScale_5__7() ;

constexpr float_t const& __get__baseSpriteScale_5__7() const;

constexpr void __set__elapsedTime_5__8(float_t  value) ;

constexpr float_t& __get__elapsedTime_5__8() ;

constexpr float_t const& __get__elapsedTime_5__8() const;

constexpr void __set__targetTime_5__9(float_t  value) ;

constexpr float_t& __get__targetTime_5__9() ;

constexpr float_t const& __get__targetTime_5__9() const;

static inline ::TMPro::__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x2c42180 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2c42228 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2c4222c size 0x8e0 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2c42b30 size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2c42b38 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2c42b78 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7(__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7(__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7, 0x228>, "Size mismatch!");

} // namespace end def TMPro
// Type: TMPro::TMP_SpriteAnimator
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12419))
// CS Name: ::TMPro::TMP_SpriteAnimator*
class CORDL_TYPE TMP_SpriteAnimator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _DoSpriteAnimationInternal_d__7 = ::TMPro::__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field m_animations offset 0x18
 __declspec(property(get=__get_m_animations, put=__set_m_animations)) ::System::Collections::Generic::Dictionary_2<int32_t,bool>*  m_animations;

/// @brief Field m_TextComponent offset 0x20
 __declspec(property(get=__get_m_TextComponent, put=__set_m_TextComponent)) ::TMPro::TMP_Text*  m_TextComponent;

constexpr void __set_m_animations(::System::Collections::Generic::Dictionary_2<int32_t,bool>*  value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,bool>* __get_m_animations() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,bool>*> __get_m_animations() const;

constexpr void __set_m_TextComponent(::TMPro::TMP_Text*  value) ;

constexpr ::TMPro::TMP_Text* __get_m_TextComponent() ;

constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_Text*> __get_m_TextComponent() const;

/// @brief Method Awake addr 0x2c41f44 size 0x50 virtual false final false
inline void Awake() ;

/// @brief Method OnEnable addr 0x2c41f94 size 0x4 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2c41f98 size 0x4 virtual false final false
inline void OnDisable() ;

/// @brief Method StopAllAnimations addr 0x2c41f9c size 0x5c virtual false final false
inline void StopAllAnimations() ;

/// @brief Method DoSpriteAnimation addr 0x2c41ff8 size 0xe8 virtual false final false
inline void DoSpriteAnimation(int32_t  currentCharacter, ::TMPro::TMP_SpriteAsset*  spriteAsset, int32_t  start, int32_t  end, int32_t  framerate) ;

/// @brief Method DoSpriteAnimationInternal addr 0x2c420e0 size 0xa0 virtual false final false
inline ::System::Collections::IEnumerator* DoSpriteAnimationInternal(int32_t  currentCharacter, ::TMPro::TMP_SpriteAsset*  spriteAsset, int32_t  start, int32_t  end, int32_t  framerate) ;

static inline ::TMPro::TMP_SpriteAnimator* New_ctor() ;

/// @brief Method .ctor addr 0x2c421a8 size 0x80 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteAnimator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TMP_SpriteAnimator(TMP_SpriteAnimator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteAnimator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TMP_SpriteAnimator(TMP_SpriteAnimator const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TMP_SpriteAnimator()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_SpriteAnimator, 0x28>, "Size mismatch!");

} // namespace end def TMPro
NEED_NO_BOX(::TMPro::TMP_SpriteAnimator);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SpriteAnimator*, "TMPro", "TMP_SpriteAnimator");
NEED_NO_BOX(::TMPro::__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::__TMP_SpriteAnimator___DoSpriteAnimationInternal_d__7*, "TMPro", "TMP_SpriteAnimator/<DoSpriteAnimationInternal>d__7");
