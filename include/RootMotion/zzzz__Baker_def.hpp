#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Baker)
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine {
class Animator;
}
namespace RootMotion {
struct __Baker__Mode;
}
// Forward declare root types
namespace RootMotion {
struct __Baker__Mode;
}
namespace RootMotion {
class Baker;
}
// Write type traits
MARK_VAL_T(::RootMotion::__Baker__Mode);
MARK_REF_PTR_T(::RootMotion::Baker);
// Type: ::Mode
namespace RootMotion {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12470))
// CS Name: ::Baker::Mode
struct CORDL_TYPE __Baker__Mode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Baker__Mode_Unwrapped
enum struct ____Baker__Mode_Unwrapped : int32_t {
__E_AnimationClips = static_cast<int32_t>(0x0),
__E_AnimationStates = static_cast<int32_t>(0x1),
__E_PlayableDirector = static_cast<int32_t>(0x2),
__E_Realtime = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field AnimationClips value: static_cast<int32_t>(0x0)
static ::RootMotion::__Baker__Mode const AnimationClips;

/// @brief Field AnimationStates value: static_cast<int32_t>(0x1)
static ::RootMotion::__Baker__Mode const AnimationStates;

/// @brief Field PlayableDirector value: static_cast<int32_t>(0x2)
static ::RootMotion::__Baker__Mode const PlayableDirector;

/// @brief Field Realtime value: static_cast<int32_t>(0x3)
static ::RootMotion::__Baker__Mode const Realtime;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____Baker__Mode_Unwrapped () const noexcept {
return std::bit_cast<____Baker__Mode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Baker__Mode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __Baker__Mode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __Baker__Mode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::__Baker__Mode, 0x4>, "Size mismatch!");

} // namespace end def RootMotion
// Type: RootMotion::Baker
namespace RootMotion {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12471))
// CS Name: ::RootMotion::Baker*
class CORDL_TYPE Baker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Mode = ::RootMotion::__Baker__Mode;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x78};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x78 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field frameRate offset 0x18
 __declspec(property(get=__get_frameRate, put=__set_frameRate)) int32_t  frameRate;

/// @brief Field keyReductionError offset 0x1c
 __declspec(property(get=__get_keyReductionError, put=__set_keyReductionError)) float_t  keyReductionError;

/// @brief Field mode offset 0x20
 __declspec(property(get=__get_mode, put=__set_mode)) ::RootMotion::__Baker__Mode  mode;

/// @brief Field animationClips offset 0x28
 __declspec(property(get=__get_animationClips, put=__set_animationClips)) ::ArrayW<::UnityEngine::AnimationClip*,::Array<::UnityEngine::AnimationClip*>*>  animationClips;

/// @brief Field animationStates offset 0x30
 __declspec(property(get=__get_animationStates, put=__set_animationStates)) ::ArrayW<::StringW,::Array<::StringW>*>  animationStates;

/// @brief Field loop offset 0x38
 __declspec(property(get=__get_loop, put=__set_loop)) bool  loop;

/// @brief Field saveToFolder offset 0x40
 __declspec(property(get=__get_saveToFolder, put=__set_saveToFolder)) ::StringW  saveToFolder;

/// @brief Field appendName offset 0x48
 __declspec(property(get=__get_appendName, put=__set_appendName)) ::StringW  appendName;

/// @brief Field saveName offset 0x50
 __declspec(property(get=__get_saveName, put=__set_saveName)) ::StringW  saveName;

/// @brief Field <isBaking>k__BackingField offset 0x58
 __declspec(property(get=__get__isBaking_k__BackingField, put=__set__isBaking_k__BackingField)) bool  _isBaking_k__BackingField;

/// @brief Field <bakingProgress>k__BackingField offset 0x5c
 __declspec(property(get=__get__bakingProgress_k__BackingField, put=__set__bakingProgress_k__BackingField)) float_t  _bakingProgress_k__BackingField;

/// @brief Field animator offset 0x60
 __declspec(property(get=__get_animator, put=__set_animator)) ::UnityEngine::Animator*  animator;

/// @brief Field director offset 0x68
 __declspec(property(get=__get_director, put=__set_director)) ::UnityEngine::Playables::PlayableDirector*  director;

/// @brief Field <clipLength>k__BackingField offset 0x70
 __declspec(property(get=__get__clipLength_k__BackingField, put=__set__clipLength_k__BackingField)) float_t  _clipLength_k__BackingField;

 __declspec(property(get=get_isBaking, put=set_isBaking)) bool  isBaking;

 __declspec(property(get=get_bakingProgress, put=set_bakingProgress)) float_t  bakingProgress;

 __declspec(property(get=get_clipLength, put=set_clipLength)) float_t  clipLength;

constexpr void __set_frameRate(int32_t  value) ;

constexpr int32_t& __get_frameRate() ;

constexpr int32_t const& __get_frameRate() const;

constexpr void __set_keyReductionError(float_t  value) ;

constexpr float_t& __get_keyReductionError() ;

constexpr float_t const& __get_keyReductionError() const;

constexpr void __set_mode(::RootMotion::__Baker__Mode  value) ;

constexpr ::RootMotion::__Baker__Mode& __get_mode() ;

constexpr ::RootMotion::__Baker__Mode const& __get_mode() const;

constexpr void __set_animationClips(::ArrayW<::UnityEngine::AnimationClip*,::Array<::UnityEngine::AnimationClip*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::AnimationClip*,::Array<::UnityEngine::AnimationClip*>*>& __get_animationClips() ;

constexpr ::ArrayW<::UnityEngine::AnimationClip*,::Array<::UnityEngine::AnimationClip*>*> const& __get_animationClips() const;

constexpr void __set_animationStates(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get_animationStates() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get_animationStates() const;

constexpr void __set_loop(bool  value) ;

constexpr bool& __get_loop() ;

constexpr bool const& __get_loop() const;

constexpr void __set_saveToFolder(::StringW  value) ;

constexpr ::StringW& __get_saveToFolder() ;

constexpr ::StringW const& __get_saveToFolder() const;

constexpr void __set_appendName(::StringW  value) ;

constexpr ::StringW& __get_appendName() ;

constexpr ::StringW const& __get_appendName() const;

constexpr void __set_saveName(::StringW  value) ;

constexpr ::StringW& __get_saveName() ;

constexpr ::StringW const& __get_saveName() const;

constexpr void __set__isBaking_k__BackingField(bool  value) ;

constexpr bool& __get__isBaking_k__BackingField() ;

constexpr bool const& __get__isBaking_k__BackingField() const;

constexpr void __set__bakingProgress_k__BackingField(float_t  value) ;

constexpr float_t& __get__bakingProgress_k__BackingField() ;

constexpr float_t const& __get__bakingProgress_k__BackingField() const;

constexpr void __set_animator(::UnityEngine::Animator*  value) ;

constexpr ::UnityEngine::Animator* __get_animator() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Animator*> __get_animator() const;

constexpr void __set_director(::UnityEngine::Playables::PlayableDirector*  value) ;

constexpr ::UnityEngine::Playables::PlayableDirector* __get_director() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableDirector*> __get_director() const;

constexpr void __set__clipLength_k__BackingField(float_t  value) ;

constexpr float_t& __get__clipLength_k__BackingField() ;

constexpr float_t const& __get__clipLength_k__BackingField() const;

/// @brief Method OpenUserManual addr 0x1230bd8 size 0x44 virtual false final false
inline void OpenUserManual() ;

/// @brief Method OpenScriptReference addr 0x1230c1c size 0x44 virtual false final false
inline void OpenScriptReference() ;

/// @brief Method SupportGroup addr 0x1230c60 size 0x44 virtual false final false
inline void SupportGroup() ;

/// @brief Method ASThread addr 0x1230ca4 size 0x44 virtual false final false
inline void ASThread() ;

/// @brief Method get_isBaking addr 0x1230ce8 size 0x8 virtual false final false
inline bool get_isBaking() ;

/// @brief Method set_isBaking addr 0x1230cf0 size 0xc virtual false final false
inline void set_isBaking(bool  value) ;

/// @brief Method get_bakingProgress addr 0x1230cfc size 0x8 virtual false final false
inline float_t get_bakingProgress() ;

/// @brief Method set_bakingProgress addr 0x1230d04 size 0x8 virtual false final false
inline void set_bakingProgress(float_t  value) ;

/// @brief Method GetCharacterRoot addr 0x0 size 0xffffffffffffffff virtual true final false
inline ::UnityEngine::Transform* GetCharacterRoot() ;

/// @brief Method OnStartBaking addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnStartBaking() ;

/// @brief Method OnSetLoopFrame addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnSetLoopFrame(float_t  time) ;

/// @brief Method OnSetCurves addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnSetCurves(ByRef<::UnityEngine::AnimationClip*>  clip) ;

/// @brief Method OnSetKeyframes addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnSetKeyframes(float_t  time, bool  lastFrame) ;

/// @brief Method get_clipLength addr 0x1230d0c size 0x8 virtual false final false
inline float_t get_clipLength() ;

/// @brief Method set_clipLength addr 0x1230d14 size 0x8 virtual false final false
inline void set_clipLength(float_t  value) ;

/// @brief Method BakeClip addr 0x1230d1c size 0x4 virtual false final false
inline void BakeClip() ;

/// @brief Method StartBaking addr 0x1230d20 size 0x4 virtual false final false
inline void StartBaking() ;

/// @brief Method StopBaking addr 0x1230d24 size 0x4 virtual false final false
inline void StopBaking() ;

static inline ::RootMotion::Baker* New_ctor() ;

/// @brief Method .ctor addr 0x1230d28 size 0xf8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "Baker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Baker(Baker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Baker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Baker(Baker const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Baker()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::RootMotion::Baker, 0x78>, "Size mismatch!");

} // namespace end def RootMotion
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::__Baker__Mode, "RootMotion", "Baker/Mode");
NEED_NO_BOX(::RootMotion::Baker);
DEFINE_IL2CPP_ARG_TYPE(::RootMotion::Baker*, "RootMotion", "Baker");
