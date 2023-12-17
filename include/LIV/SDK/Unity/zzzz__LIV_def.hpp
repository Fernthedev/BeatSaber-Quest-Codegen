#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LIV)
namespace LIV::SDK::Unity {
struct INVALIDATION_FLAGS;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
struct LayerMask;
}
namespace LIV::SDK::Unity {
class __LIV___WaitForUnityEndOfFrame_d__68;
}
namespace UnityEngine {
class Transform;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
class Action_1;
}
namespace LIV::SDK::Unity {
class SDKRender;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace LIV::SDK::Unity {
class LIV;
}
namespace LIV::SDK::Unity {
class __LIV___WaitForUnityEndOfFrame_d__68;
}
// Write type traits
MARK_REF_PTR_T(::LIV::SDK::Unity::LIV);
MARK_REF_PTR_T(::LIV::SDK::Unity::__LIV___WaitForUnityEndOfFrame_d__68);
// Type: ::<WaitForUnityEndOfFrame>d__68
namespace LIV::SDK::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15093))
// CS Name: ::LIV::<WaitForUnityEndOfFrame>d__68*
class CORDL_TYPE __LIV___WaitForUnityEndOfFrame_d__68 : public ::System::Object {
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
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::LIV::SDK::Unity::LIV*  __4__this;

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

constexpr void __set___4__this(::LIV::SDK::Unity::LIV*  value) ;

constexpr ::LIV::SDK::Unity::LIV* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::LIV::SDK::Unity::LIV*> __get___4__this() const;

static inline ::LIV::SDK::Unity::__LIV___WaitForUnityEndOfFrame_d__68* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x220df54 size 0x28 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x220e934 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x220e938 size 0xd0 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x220eacc size 0x8 virtual true final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x220ead4 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x220eb14 size 0x8 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

// Ctor Parameters [CppParam { name: "", ty: "__LIV___WaitForUnityEndOfFrame_d__68", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__LIV___WaitForUnityEndOfFrame_d__68(__LIV___WaitForUnityEndOfFrame_d__68 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__LIV___WaitForUnityEndOfFrame_d__68", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__LIV___WaitForUnityEndOfFrame_d__68(__LIV___WaitForUnityEndOfFrame_d__68 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __LIV___WaitForUnityEndOfFrame_d__68()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::__LIV___WaitForUnityEndOfFrame_d__68, 0x28>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
// Type: LIV.SDK.Unity::LIV
namespace LIV::SDK::Unity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15094))
// CS Name: ::LIV.SDK.Unity::LIV*
class CORDL_TYPE LIV : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _WaitForUnityEndOfFrame_d__68 = ::LIV::SDK::Unity::__LIV___WaitForUnityEndOfFrame_d__68;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xd0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xd0 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field onActivate offset 0x18
 __declspec(property(get=__get_onActivate, put=__set_onActivate)) ::System::Action*  onActivate;

/// @brief Field onPreRender offset 0x20
 __declspec(property(get=__get_onPreRender, put=__set_onPreRender)) ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*  onPreRender;

/// @brief Field onPreRenderBackground offset 0x28
 __declspec(property(get=__get_onPreRenderBackground, put=__set_onPreRenderBackground)) ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*  onPreRenderBackground;

/// @brief Field onPostRenderBackground offset 0x30
 __declspec(property(get=__get_onPostRenderBackground, put=__set_onPostRenderBackground)) ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*  onPostRenderBackground;

/// @brief Field onPreRenderForeground offset 0x38
 __declspec(property(get=__get_onPreRenderForeground, put=__set_onPreRenderForeground)) ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*  onPreRenderForeground;

/// @brief Field onPostRenderForeground offset 0x40
 __declspec(property(get=__get_onPostRenderForeground, put=__set_onPostRenderForeground)) ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*  onPostRenderForeground;

/// @brief Field onPostRender offset 0x48
 __declspec(property(get=__get_onPostRender, put=__set_onPostRender)) ::System::Action_1<::LIV::SDK::Unity::SDKRender*>*  onPostRender;

/// @brief Field onDeactivate offset 0x50
 __declspec(property(get=__get_onDeactivate, put=__set_onDeactivate)) ::System::Action*  onDeactivate;

/// @brief Field _stage offset 0x58
 __declspec(property(get=__get__stage, put=__set__stage)) ::UnityEngine::Transform*  _stage;

/// @brief Field _stageTransform offset 0x60
 __declspec(property(get=__get__stageTransform, put=__set__stageTransform)) ::UnityEngine::Transform*  _stageTransform;

/// @brief Field _HMDCamera offset 0x68
 __declspec(property(get=__get__HMDCamera, put=__set__HMDCamera)) ::UnityEngine::Camera*  _HMDCamera;

/// @brief Field _MRCameraPrefab offset 0x70
 __declspec(property(get=__get__MRCameraPrefab, put=__set__MRCameraPrefab)) ::UnityEngine::Camera*  _MRCameraPrefab;

/// @brief Field _disableStandardAssets offset 0x78
 __declspec(property(get=__get__disableStandardAssets, put=__set__disableStandardAssets)) bool  _disableStandardAssets;

/// @brief Field _spectatorLayerMask offset 0x7c
 __declspec(property(get=__get__spectatorLayerMask, put=__set__spectatorLayerMask)) ::UnityEngine::LayerMask  _spectatorLayerMask;

/// @brief Field _excludeBehaviours offset 0x80
 __declspec(property(get=__get__excludeBehaviours, put=__set__excludeBehaviours)) ::ArrayW<::StringW,::Array<::StringW>*>  _excludeBehaviours;

/// @brief Field _fixPostEffectsAlpha offset 0x88
 __declspec(property(get=__get__fixPostEffectsAlpha, put=__set__fixPostEffectsAlpha)) bool  _fixPostEffectsAlpha;

/// @brief Field _isActive offset 0x89
 __declspec(property(get=__get__isActive, put=__set__isActive)) bool  _isActive;

/// @brief Field _render offset 0x90
 __declspec(property(get=__get__render, put=__set__render)) ::LIV::SDK::Unity::SDKRender*  _render;

/// @brief Field _wasReady offset 0x98
 __declspec(property(get=__get__wasReady, put=__set__wasReady)) bool  _wasReady;

/// @brief Field _invalidate offset 0x9c
 __declspec(property(get=__get__invalidate, put=__set__invalidate)) ::LIV::SDK::Unity::INVALIDATION_FLAGS  _invalidate;

/// @brief Field _stageCandidate offset 0xa0
 __declspec(property(get=__get__stageCandidate, put=__set__stageCandidate)) ::UnityEngine::Transform*  _stageCandidate;

/// @brief Field _HMDCameraCandidate offset 0xa8
 __declspec(property(get=__get__HMDCameraCandidate, put=__set__HMDCameraCandidate)) ::UnityEngine::Camera*  _HMDCameraCandidate;

/// @brief Field _MRCameraPrefabCandidate offset 0xb0
 __declspec(property(get=__get__MRCameraPrefabCandidate, put=__set__MRCameraPrefabCandidate)) ::UnityEngine::Camera*  _MRCameraPrefabCandidate;

/// @brief Field _excludeBehavioursCandidate offset 0xb8
 __declspec(property(get=__get__excludeBehavioursCandidate, put=__set__excludeBehavioursCandidate)) ::ArrayW<::StringW,::Array<::StringW>*>  _excludeBehavioursCandidate;

/// @brief Field _enabled offset 0xc0
 __declspec(property(get=__get__enabled, put=__set__enabled)) bool  _enabled;

/// @brief Field _waitForEndOfFrameCoroutine offset 0xc8
 __declspec(property(get=__get__waitForEndOfFrameCoroutine, put=__set__waitForEndOfFrameCoroutine)) ::UnityEngine::Coroutine*  _waitForEndOfFrameCoroutine;

 __declspec(property(get=get_stage, put=set_stage)) ::UnityEngine::Transform*  stage;

 __declspec(property(get=get_trackedSpaceOrigin, put=set_trackedSpaceOrigin)) ::UnityEngine::Transform*  trackedSpaceOrigin;

 __declspec(property(get=get_stageLocalToWorldMatrix)) ::UnityEngine::Matrix4x4  stageLocalToWorldMatrix;

 __declspec(property(get=get_stageWorldToLocalMatrix)) ::UnityEngine::Matrix4x4  stageWorldToLocalMatrix;

 __declspec(property(get=get_stageTransform, put=set_stageTransform)) ::UnityEngine::Transform*  stageTransform;

 __declspec(property(get=get_HMDCamera, put=set_HMDCamera)) ::UnityEngine::Camera*  HMDCamera;

 __declspec(property(get=get_MRCameraPrefab, put=set_MRCameraPrefab)) ::UnityEngine::Camera*  MRCameraPrefab;

 __declspec(property(get=get_disableStandardAssets, put=set_disableStandardAssets)) bool  disableStandardAssets;

 __declspec(property(get=get_spectatorLayerMask, put=set_spectatorLayerMask)) ::UnityEngine::LayerMask  spectatorLayerMask;

 __declspec(property(get=get_excludeBehaviours, put=set_excludeBehaviours)) ::ArrayW<::StringW,::Array<::StringW>*>  excludeBehaviours;

 __declspec(property(get=get_fixPostEffectsAlpha, put=set_fixPostEffectsAlpha)) bool  fixPostEffectsAlpha;

 __declspec(property(get=get_isValid)) bool  isValid;

 __declspec(property(get=get_isActive)) bool  isActive;

 __declspec(property(get=get__isReady)) bool  _isReady;

 __declspec(property(get=get_render)) ::LIV::SDK::Unity::SDKRender*  render;

constexpr void __set_onActivate(::System::Action*  value) ;

constexpr ::System::Action* __get_onActivate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_onActivate() const;

constexpr void __set_onPreRender(::System::Action_1<::LIV::SDK::Unity::SDKRender*>*  value) ;

constexpr ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* __get_onPreRender() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::LIV::SDK::Unity::SDKRender*>*> __get_onPreRender() const;

constexpr void __set_onPreRenderBackground(::System::Action_1<::LIV::SDK::Unity::SDKRender*>*  value) ;

constexpr ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* __get_onPreRenderBackground() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::LIV::SDK::Unity::SDKRender*>*> __get_onPreRenderBackground() const;

constexpr void __set_onPostRenderBackground(::System::Action_1<::LIV::SDK::Unity::SDKRender*>*  value) ;

constexpr ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* __get_onPostRenderBackground() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::LIV::SDK::Unity::SDKRender*>*> __get_onPostRenderBackground() const;

constexpr void __set_onPreRenderForeground(::System::Action_1<::LIV::SDK::Unity::SDKRender*>*  value) ;

constexpr ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* __get_onPreRenderForeground() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::LIV::SDK::Unity::SDKRender*>*> __get_onPreRenderForeground() const;

constexpr void __set_onPostRenderForeground(::System::Action_1<::LIV::SDK::Unity::SDKRender*>*  value) ;

constexpr ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* __get_onPostRenderForeground() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::LIV::SDK::Unity::SDKRender*>*> __get_onPostRenderForeground() const;

constexpr void __set_onPostRender(::System::Action_1<::LIV::SDK::Unity::SDKRender*>*  value) ;

constexpr ::System::Action_1<::LIV::SDK::Unity::SDKRender*>* __get_onPostRender() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::LIV::SDK::Unity::SDKRender*>*> __get_onPostRender() const;

constexpr void __set_onDeactivate(::System::Action*  value) ;

constexpr ::System::Action* __get_onDeactivate() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action*> __get_onDeactivate() const;

constexpr void __set__stage(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__stage() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__stage() const;

constexpr void __set__stageTransform(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__stageTransform() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__stageTransform() const;

constexpr void __set__HMDCamera(::UnityEngine::Camera*  value) ;

constexpr ::UnityEngine::Camera* __get__HMDCamera() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> __get__HMDCamera() const;

constexpr void __set__MRCameraPrefab(::UnityEngine::Camera*  value) ;

constexpr ::UnityEngine::Camera* __get__MRCameraPrefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> __get__MRCameraPrefab() const;

constexpr void __set__disableStandardAssets(bool  value) ;

constexpr bool& __get__disableStandardAssets() ;

constexpr bool const& __get__disableStandardAssets() const;

constexpr void __set__spectatorLayerMask(::UnityEngine::LayerMask  value) ;

constexpr ::UnityEngine::LayerMask& __get__spectatorLayerMask() ;

constexpr ::UnityEngine::LayerMask const& __get__spectatorLayerMask() const;

constexpr void __set__excludeBehaviours(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get__excludeBehaviours() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get__excludeBehaviours() const;

constexpr void __set__fixPostEffectsAlpha(bool  value) ;

constexpr bool& __get__fixPostEffectsAlpha() ;

constexpr bool const& __get__fixPostEffectsAlpha() const;

constexpr void __set__isActive(bool  value) ;

constexpr bool& __get__isActive() ;

constexpr bool const& __get__isActive() const;

constexpr void __set__render(::LIV::SDK::Unity::SDKRender*  value) ;

constexpr ::LIV::SDK::Unity::SDKRender* __get__render() ;

constexpr ::cordl_internals::to_const_pointer<::LIV::SDK::Unity::SDKRender*> __get__render() const;

constexpr void __set__wasReady(bool  value) ;

constexpr bool& __get__wasReady() ;

constexpr bool const& __get__wasReady() const;

constexpr void __set__invalidate(::LIV::SDK::Unity::INVALIDATION_FLAGS  value) ;

constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS& __get__invalidate() ;

constexpr ::LIV::SDK::Unity::INVALIDATION_FLAGS const& __get__invalidate() const;

constexpr void __set__stageCandidate(::UnityEngine::Transform*  value) ;

constexpr ::UnityEngine::Transform* __get__stageCandidate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> __get__stageCandidate() const;

constexpr void __set__HMDCameraCandidate(::UnityEngine::Camera*  value) ;

constexpr ::UnityEngine::Camera* __get__HMDCameraCandidate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> __get__HMDCameraCandidate() const;

constexpr void __set__MRCameraPrefabCandidate(::UnityEngine::Camera*  value) ;

constexpr ::UnityEngine::Camera* __get__MRCameraPrefabCandidate() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> __get__MRCameraPrefabCandidate() const;

constexpr void __set__excludeBehavioursCandidate(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __get__excludeBehavioursCandidate() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __get__excludeBehavioursCandidate() const;

constexpr void __set__enabled(bool  value) ;

constexpr bool& __get__enabled() ;

constexpr bool const& __get__enabled() const;

constexpr void __set__waitForEndOfFrameCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr ::UnityEngine::Coroutine* __get__waitForEndOfFrameCoroutine() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Coroutine*> __get__waitForEndOfFrameCoroutine() const;

/// @brief Method get_stage addr 0x220d6d8 size 0x90 virtual false final false
inline ::UnityEngine::Transform* get_stage() ;

/// @brief Method set_stage addr 0x220d768 size 0x90 virtual false final false
inline void set_stage(::UnityEngine::Transform*  value) ;

/// @brief Method get_trackedSpaceOrigin addr 0x220d80c size 0x4 virtual false final false
inline ::UnityEngine::Transform* get_trackedSpaceOrigin() ;

/// @brief Method set_trackedSpaceOrigin addr 0x220d810 size 0x4 virtual false final false
inline void set_trackedSpaceOrigin(::UnityEngine::Transform*  value) ;

/// @brief Method get_stageLocalToWorldMatrix addr 0x220d814 size 0xf8 virtual false final false
inline ::UnityEngine::Matrix4x4 get_stageLocalToWorldMatrix() ;

/// @brief Method get_stageWorldToLocalMatrix addr 0x220d90c size 0xf8 virtual false final false
inline ::UnityEngine::Matrix4x4 get_stageWorldToLocalMatrix() ;

/// @brief Method get_stageTransform addr 0x220da04 size 0x8 virtual false final false
inline ::UnityEngine::Transform* get_stageTransform() ;

/// @brief Method set_stageTransform addr 0x220da0c size 0x8 virtual false final false
inline void set_stageTransform(::UnityEngine::Transform*  value) ;

/// @brief Method get_HMDCamera addr 0x220da14 size 0x8 virtual false final false
inline ::UnityEngine::Camera* get_HMDCamera() ;

/// @brief Method set_HMDCamera addr 0x220da1c size 0xec virtual false final false
inline void set_HMDCamera(::UnityEngine::Camera*  value) ;

/// @brief Method get_MRCameraPrefab addr 0x220db08 size 0x8 virtual false final false
inline ::UnityEngine::Camera* get_MRCameraPrefab() ;

/// @brief Method set_MRCameraPrefab addr 0x220db10 size 0x84 virtual false final false
inline void set_MRCameraPrefab(::UnityEngine::Camera*  value) ;

/// @brief Method get_disableStandardAssets addr 0x220db94 size 0x8 virtual false final false
inline bool get_disableStandardAssets() ;

/// @brief Method set_disableStandardAssets addr 0x220db9c size 0xc virtual false final false
inline void set_disableStandardAssets(bool  value) ;

/// @brief Method get_spectatorLayerMask addr 0x220dba8 size 0x8 virtual false final false
inline ::UnityEngine::LayerMask get_spectatorLayerMask() ;

/// @brief Method set_spectatorLayerMask addr 0x220dbb0 size 0x8 virtual false final false
inline void set_spectatorLayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method get_excludeBehaviours addr 0x220dbb8 size 0x8 virtual false final false
inline ::ArrayW<::StringW,::Array<::StringW>*> get_excludeBehaviours() ;

/// @brief Method set_excludeBehaviours addr 0x220dbc0 size 0x20 virtual false final false
inline void set_excludeBehaviours(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

/// @brief Method get_fixPostEffectsAlpha addr 0x220dbe0 size 0x8 virtual false final false
inline bool get_fixPostEffectsAlpha() ;

/// @brief Method set_fixPostEffectsAlpha addr 0x220dbe8 size 0xc virtual false final false
inline void set_fixPostEffectsAlpha(bool  value) ;

/// @brief Method get_isValid addr 0x220dbf4 size 0xf4 virtual false final false
inline bool get_isValid() ;

/// @brief Method get_isActive addr 0x220dce8 size 0x8 virtual false final false
inline bool get_isActive() ;

/// @brief Method get__isReady addr 0x220dcf0 size 0x74 virtual false final false
inline bool get__isReady() ;

/// @brief Method get_render addr 0x220ddfc size 0x8 virtual false final false
inline ::LIV::SDK::Unity::SDKRender* get_render() ;

/// @brief Method OnEnable addr 0x220de04 size 0xc virtual false final false
inline void OnEnable() ;

/// @brief Method Update addr 0x220de54 size 0x18 virtual false final false
inline void Update() ;

/// @brief Method OnDisable addr 0x220dee4 size 0x8 virtual false final false
inline void OnDisable() ;

/// @brief Method WaitForUnityEndOfFrame addr 0x220deec size 0x68 virtual false final false
inline ::System::Collections::IEnumerator* WaitForUnityEndOfFrame() ;

/// @brief Method Activate addr 0x220df7c size 0x18 virtual false final false
inline void Activate() ;

/// @brief Method UpdateSDKReady addr 0x220de10 size 0x44 virtual false final false
inline void UpdateSDKReady() ;

/// @brief Method OnSDKReadyChanged addr 0x220df94 size 0xc virtual false final false
inline void OnSDKReadyChanged(bool  value) ;

/// @brief Method OnSDKActivate addr 0x220dfa0 size 0xac virtual false final false
inline void OnSDKActivate() ;

/// @brief Method OnSDKDeactivate addr 0x220e04c size 0xb4 virtual false final false
inline void OnSDKDeactivate() ;

/// @brief Method CreateAssets addr 0x220e24c size 0x70 virtual false final false
inline void CreateAssets() ;

/// @brief Method DestroyAssets addr 0x220e324 size 0x20 virtual false final false
inline void DestroyAssets() ;

/// @brief Method StartRenderCoroutine addr 0x220e2bc size 0x44 virtual false final false
inline void StartRenderCoroutine() ;

/// @brief Method StopRenderCoroutine addr 0x220e300 size 0x24 virtual false final false
inline void StopRenderCoroutine() ;

/// @brief Method SubmitSDKOutput addr 0x220e100 size 0x14c virtual false final false
inline void SubmitSDKOutput() ;

/// @brief Method Invalidate addr 0x220de6c size 0x78 virtual false final false
inline void Invalidate() ;

static inline ::LIV::SDK::Unity::LIV* New_ctor() ;

/// @brief Method .ctor addr 0x220e774 size 0x1c0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "LIV", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LIV(LIV && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LIV", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LIV(LIV const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LIV()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::LIV, 0xd0>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
NEED_NO_BOX(::LIV::SDK::Unity::LIV);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::LIV*, "LIV.SDK.Unity", "LIV");
NEED_NO_BOX(::LIV::SDK::Unity::__LIV___WaitForUnityEndOfFrame_d__68);
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::__LIV___WaitForUnityEndOfFrame_d__68*, "LIV.SDK.Unity", "LIV/<WaitForUnityEndOfFrame>d__68");
