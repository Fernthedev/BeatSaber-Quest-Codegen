#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TrackAsset)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::Timeline {
struct DiscreteTime;
}
namespace UnityEngine::Timeline {
template<typename T>
class IntervalTree_1;
}
namespace UnityEngine::Playables {
struct PlayableGraph;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::Playables {
class PlayableDirector;
}
namespace UnityEngine::Timeline {
class IPropertyCollector;
}
namespace UnityEngine {
class GameObject;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace UnityEngine::Playables {
struct PlayableBinding;
}
namespace UnityEngine::Playables {
class IPlayableAsset;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::Playables {
class PlayableAsset;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::Timeline {
class IPropertyPreview;
}
namespace UnityEngine::Timeline {
class TrackBindingTypeAttribute;
}
namespace UnityEngine::Timeline {
class ICurvesOwner;
}
namespace UnityEngine::Timeline {
struct __TrackAsset__TransientBuildData;
}
namespace UnityEngine::Timeline {
class __TrackAsset__TrackAssetUpgrade;
}
namespace UnityEngine::Timeline {
class __TrackAsset___get_outputs_d__65;
}
namespace UnityEngine::Timeline {
struct __TrackAsset__Versions;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class AnimationClip;
}
namespace UnityEngine::Timeline {
struct MarkerList;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine::Timeline {
class RuntimeElement;
}
namespace System {
class Type;
}
namespace UnityEngine::Timeline {
class TimelineAsset;
}
namespace UnityEngine::Timeline {
class TimelineClip;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::Timeline {
class IMarker;
}
namespace UnityEngine::Timeline {
class __TrackAsset____c;
}
namespace System {
template<typename T>
class Comparison_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace UnityEngine::Timeline {
struct __TrackAsset__Versions;
}
namespace UnityEngine::Timeline {
class TrackAsset;
}
namespace UnityEngine::Timeline {
class __TrackAsset__TrackAssetUpgrade;
}
namespace UnityEngine::Timeline {
class __TrackAsset____c;
}
namespace UnityEngine::Timeline {
class __TrackAsset___get_outputs_d__65;
}
namespace UnityEngine::Timeline {
struct __TrackAsset__TransientBuildData;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Timeline::__TrackAsset__Versions);
MARK_REF_PTR_T(::UnityEngine::Timeline::TrackAsset);
MARK_REF_PTR_T(::UnityEngine::Timeline::__TrackAsset__TrackAssetUpgrade);
MARK_REF_PTR_T(::UnityEngine::Timeline::__TrackAsset____c);
MARK_REF_PTR_T(::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65);
MARK_VAL_T(::UnityEngine::Timeline::__TrackAsset__TransientBuildData);
// Type: ::Versions
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13857))
// CS Name: ::TrackAsset::Versions
struct CORDL_TYPE __TrackAsset__Versions : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____TrackAsset__Versions_Unwrapped
enum struct ____TrackAsset__Versions_Unwrapped : int32_t {
__E_Initial = static_cast<int32_t>(0x0),
__E_RotationAsEuler = static_cast<int32_t>(0x1),
__E_RootMotionUpgrade = static_cast<int32_t>(0x2),
__E_AnimatedTrackProperties = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Initial value: static_cast<int32_t>(0x0)
static ::UnityEngine::Timeline::__TrackAsset__Versions const Initial;

/// @brief Field RotationAsEuler value: static_cast<int32_t>(0x1)
static ::UnityEngine::Timeline::__TrackAsset__Versions const RotationAsEuler;

/// @brief Field RootMotionUpgrade value: static_cast<int32_t>(0x2)
static ::UnityEngine::Timeline::__TrackAsset__Versions const RootMotionUpgrade;

/// @brief Field AnimatedTrackProperties value: static_cast<int32_t>(0x3)
static ::UnityEngine::Timeline::__TrackAsset__Versions const AnimatedTrackProperties;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator ____TrackAsset__Versions_Unwrapped () const noexcept {
return std::bit_cast<____TrackAsset__Versions_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __TrackAsset__Versions(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TrackAsset__Versions(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TrackAsset__Versions()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TrackAsset__Versions, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// Type: ::TrackAssetUpgrade
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13858))
// CS Name: ::TrackAsset::TrackAssetUpgrade*
class CORDL_TYPE __TrackAsset__TrackAssetUpgrade : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "__TrackAsset__TrackAssetUpgrade", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TrackAsset__TrackAssetUpgrade(__TrackAsset__TrackAssetUpgrade && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TrackAsset__TrackAssetUpgrade", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TrackAsset__TrackAssetUpgrade(__TrackAsset__TrackAssetUpgrade const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TrackAsset__TrackAssetUpgrade()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TrackAsset__TrackAssetUpgrade, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// Type: ::TransientBuildData
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13859))
// CS Name: ::TrackAsset::TransientBuildData
struct CORDL_TYPE __TrackAsset__TransientBuildData : public ::bs_hook::ValueTypeWrapper<0x18> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field trackList offset 0x0
 __declspec(property(get=__get_trackList, put=__set_trackList)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*  trackList;

/// @brief Field clipList offset 0x8
 __declspec(property(get=__get_clipList, put=__set_clipList)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*  clipList;

/// @brief Field markerList offset 0x10
 __declspec(property(get=__get_markerList, put=__set_markerList)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*  markerList;

constexpr void __set_trackList(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* __get_trackList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*> __get_trackList() const;

constexpr void __set_clipList(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* __get_clipList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*> __get_clipList() const;

constexpr void __set_markerList(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* __get_markerList() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*> __get_markerList() const;

/// @brief Method Create addr 0x2c6151c size 0x10c virtual false final false
static inline ::UnityEngine::Timeline::__TrackAsset__TransientBuildData Create() ;

/// @brief Method Clear addr 0x2c5f01c size 0xe0 virtual false final false
inline void Clear() ;

// Ctor Parameters [CppParam { name: "trackList", ty: "::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*", modifiers: "", def_value: None }, CppParam { name: "clipList", ty: "::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*", modifiers: "", def_value: None }, CppParam { name: "markerList", ty: "::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*", modifiers: "", def_value: None }]
constexpr __TrackAsset__TransientBuildData(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*  trackList, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*  clipList, ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*  markerList) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __TrackAsset__TransientBuildData(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x18>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __TrackAsset__TransientBuildData()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TrackAsset__TransientBuildData, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// Type: ::<get_outputs>d__65
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13860))
// CS Name: ::TrackAsset::<get_outputs>d__65*
class CORDL_TYPE __TrackAsset___get_outputs_d__65 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field <>1__state offset 0x10
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current offset 0x18
 __declspec(property(get=__get___2__current, put=__set___2__current)) ::UnityEngine::Playables::PlayableBinding  __2__current;

/// @brief Field <>l__initialThreadId offset 0x38
 __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <>4__this offset 0x40
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::UnityEngine::Timeline::TrackAsset*  __4__this;

 __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current)) ::UnityEngine::Playables::PlayableBinding  System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___2__current(::UnityEngine::Playables::PlayableBinding  value) ;

constexpr ::UnityEngine::Playables::PlayableBinding& __get___2__current() ;

constexpr ::UnityEngine::Playables::PlayableBinding const& __get___2__current() const;

constexpr void __set___l__initialThreadId(int32_t  value) ;

constexpr int32_t& __get___l__initialThreadId() ;

constexpr int32_t const& __get___l__initialThreadId() const;

constexpr void __set___4__this(::UnityEngine::Timeline::TrackAsset*  value) ;

constexpr ::UnityEngine::Timeline::TrackAsset* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::TrackAsset*> __get___4__this() const;

static inline ::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65* New_ctor(int32_t  __1__state) ;

/// @brief Method .ctor addr 0x2c5c02c size 0x34 virtual false final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2c61628 size 0x4 virtual true final true
inline void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2c6162c size 0x244 virtual true final true
inline bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current addr 0x2c61870 size 0x10 virtual true final true
inline ::UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2c61880 size 0x40 virtual true final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2c618c0 size 0x60 virtual true final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator addr 0x2c61920 size 0xa4 virtual true final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2c619c4 size 0x4 virtual true final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

// Ctor Parameters [CppParam { name: "", ty: "__TrackAsset___get_outputs_d__65", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TrackAsset___get_outputs_d__65(__TrackAsset___get_outputs_d__65 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TrackAsset___get_outputs_d__65", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TrackAsset___get_outputs_d__65(__TrackAsset___get_outputs_d__65 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TrackAsset___get_outputs_d__65()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65, 0x48>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// Type: ::<>c
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13861))
// CS Name: ::TrackAsset::<>c*
class CORDL_TYPE __TrackAsset____c : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF___9(::UnityEngine::Timeline::__TrackAsset____c*  value) ;

static inline ::UnityEngine::Timeline::__TrackAsset____c* getStaticF___9() ;

static inline void setStaticF___9__121_0(::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*  value) ;

static inline ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* getStaticF___9__121_0() ;

static inline ::UnityEngine::Timeline::__TrackAsset____c* New_ctor() ;

/// @brief Method .ctor addr 0x2c61a2c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <SortClips>b__121_0 addr 0x2c61a34 size 0x34 virtual false final false
inline int32_t _SortClips_b__121_0(::UnityEngine::Timeline::TimelineClip*  clip1, ::UnityEngine::Timeline::TimelineClip*  clip2) ;

// Ctor Parameters [CppParam { name: "", ty: "__TrackAsset____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TrackAsset____c(__TrackAsset____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TrackAsset____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TrackAsset____c(__TrackAsset____c const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TrackAsset____c()  = default;
public:


// Fields

// Static field <>9

// Static field <>9__121_0


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::__TrackAsset____c, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
// Type: UnityEngine.Timeline::TrackAsset
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10422))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13862))
// CS Name: ::UnityEngine.Timeline::TrackAsset*
class CORDL_TYPE TrackAsset : public ::UnityEngine::Playables::PlayableAsset {
public:
// Declarations
using __c = ::UnityEngine::Timeline::__TrackAsset____c;

using _get_outputs_d__65 = ::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65;

using TransientBuildData = ::UnityEngine::Timeline::__TrackAsset__TransientBuildData;

using TrackAssetUpgrade = ::UnityEngine::Timeline::__TrackAsset__TrackAssetUpgrade;

using Versions = ::UnityEngine::Timeline::__TrackAsset__Versions;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xa0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xa0 - sizeof(::UnityEngine::Playables::PlayableAsset)]{};

/// @brief Field k_LatestVersion offset 0x0
static constexpr int32_t  k_LatestVersion{static_cast<int32_t>(0x3)};

/// @brief Field kDefaultCurvesName offset 0x0
static constexpr ::ConstString  kDefaultCurvesName{u"Track Parameters"};

/// @brief Field m_Version offset 0x18
 __declspec(property(get=__get_m_Version, put=__set_m_Version)) int32_t  m_Version;

/// @brief Field m_AnimClip offset 0x20
 __declspec(property(get=__get_m_AnimClip, put=__set_m_AnimClip)) ::UnityEngine::AnimationClip*  m_AnimClip;

/// @brief Field m_Locked offset 0x28
 __declspec(property(get=__get_m_Locked, put=__set_m_Locked)) bool  m_Locked;

/// @brief Field m_Muted offset 0x29
 __declspec(property(get=__get_m_Muted, put=__set_m_Muted)) bool  m_Muted;

/// @brief Field m_CustomPlayableFullTypename offset 0x30
 __declspec(property(get=__get_m_CustomPlayableFullTypename, put=__set_m_CustomPlayableFullTypename)) ::StringW  m_CustomPlayableFullTypename;

/// @brief Field m_Curves offset 0x38
 __declspec(property(get=__get_m_Curves, put=__set_m_Curves)) ::UnityEngine::AnimationClip*  m_Curves;

/// @brief Field m_Parent offset 0x40
 __declspec(property(get=__get_m_Parent, put=__set_m_Parent)) ::UnityEngine::Playables::PlayableAsset*  m_Parent;

/// @brief Field m_Children offset 0x48
 __declspec(property(get=__get_m_Children, put=__set_m_Children)) ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*  m_Children;

/// @brief Field m_ItemsHash offset 0x50
 __declspec(property(get=__get_m_ItemsHash, put=__set_m_ItemsHash)) int32_t  m_ItemsHash;

/// @brief Field m_ClipsCache offset 0x58
 __declspec(property(get=__get_m_ClipsCache, put=__set_m_ClipsCache)) ::ArrayW<::UnityEngine::Timeline::TimelineClip*,::Array<::UnityEngine::Timeline::TimelineClip*>*>  m_ClipsCache;

/// @brief Field m_Start offset 0x60
 __declspec(property(get=__get_m_Start, put=__set_m_Start)) ::UnityEngine::Timeline::DiscreteTime  m_Start;

/// @brief Field m_End offset 0x68
 __declspec(property(get=__get_m_End, put=__set_m_End)) ::UnityEngine::Timeline::DiscreteTime  m_End;

/// @brief Field m_CacheSorted offset 0x70
 __declspec(property(get=__get_m_CacheSorted, put=__set_m_CacheSorted)) bool  m_CacheSorted;

/// @brief Field m_SupportsNotifications offset 0x71
 __declspec(property(get=__get_m_SupportsNotifications, put=__set_m_SupportsNotifications)) ::System::Nullable_1<bool>  m_SupportsNotifications;

/// @brief Field m_ChildTrackCache offset 0x78
 __declspec(property(get=__get_m_ChildTrackCache, put=__set_m_ChildTrackCache)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*  m_ChildTrackCache;

/// @brief Field m_Clips offset 0x80
 __declspec(property(get=__get_m_Clips, put=__set_m_Clips)) ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*  m_Clips;

/// @brief Field m_Markers offset 0x88
 __declspec(property(get=__get_m_Markers, put=__set_m_Markers)) ::UnityEngine::Timeline::MarkerList  m_Markers;

 __declspec(property(get=get_start)) double_t  start;

 __declspec(property(get=get_end)) double_t  end;

 __declspec(property(get=get_duration)) double_t  duration;

 __declspec(property(get=get_muted, put=set_muted)) bool  muted;

 __declspec(property(get=get_mutedInHierarchy)) bool  mutedInHierarchy;

 __declspec(property(get=get_timelineAsset)) ::UnityEngine::Timeline::TimelineAsset*  timelineAsset;

 __declspec(property(get=get_parent, put=set_parent)) ::UnityEngine::Playables::PlayableAsset*  parent;

 __declspec(property(get=get_clips)) ::ArrayW<::UnityEngine::Timeline::TimelineClip*,::Array<::UnityEngine::Timeline::TimelineClip*>*>  clips;

 __declspec(property(get=get_isEmpty)) bool  isEmpty;

 __declspec(property(get=get_hasClips)) bool  hasClips;

 __declspec(property(get=get_hasCurves)) bool  hasCurves;

 __declspec(property(get=get_isSubTrack)) bool  isSubTrack;

 __declspec(property(get=get_outputs)) ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*  outputs;

 __declspec(property(get=get_customPlayableTypename, put=set_customPlayableTypename)) ::StringW  customPlayableTypename;

 __declspec(property(get=get_curves, put=set_curves)) ::UnityEngine::AnimationClip*  curves;

 __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName)) ::StringW  UnityEngine_Timeline_ICurvesOwner_defaultCurvesName;

 __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_asset)) ::UnityEngine::Object*  UnityEngine_Timeline_ICurvesOwner_asset;

 __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_assetOwner)) ::UnityEngine::Object*  UnityEngine_Timeline_ICurvesOwner_assetOwner;

 __declspec(property(get=UnityEngine_Timeline_ICurvesOwner_get_targetTrack)) ::UnityEngine::Timeline::TrackAsset*  UnityEngine_Timeline_ICurvesOwner_targetTrack;

 __declspec(property(get=get_subTracksObjects)) ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*  subTracksObjects;

 __declspec(property(get=get_locked, put=set_locked)) bool  locked;

 __declspec(property(get=get_lockedInHierarchy)) bool  lockedInHierarchy;

 __declspec(property(get=get_supportsNotifications)) bool  supportsNotifications;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Convert operator to "::UnityEngine::Timeline::IPropertyPreview"
constexpr operator  ::UnityEngine::Timeline::IPropertyPreview*() noexcept;

/// @brief Convert operator to "::UnityEngine::Timeline::ICurvesOwner"
constexpr operator  ::UnityEngine::Timeline::ICurvesOwner*() noexcept;

constexpr void __set_m_Version(int32_t  value) ;

constexpr int32_t& __get_m_Version() ;

constexpr int32_t const& __get_m_Version() const;

constexpr void __set_m_AnimClip(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get_m_AnimClip() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get_m_AnimClip() const;

static inline void setStaticF_s_BuildData(::UnityEngine::Timeline::__TrackAsset__TransientBuildData  value) ;

static inline ::UnityEngine::Timeline::__TrackAsset__TransientBuildData getStaticF_s_BuildData() ;

static inline void setStaticF_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip*,::UnityEngine::GameObject*,::UnityEngine::Playables::Playable>*  value) ;

static inline ::System::Action_3<::UnityEngine::Timeline::TimelineClip*,::UnityEngine::GameObject*,::UnityEngine::Playables::Playable>* getStaticF_OnClipPlayableCreate() ;

static inline void setStaticF_OnTrackAnimationPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TrackAsset*,::UnityEngine::GameObject*,::UnityEngine::Playables::Playable>*  value) ;

static inline ::System::Action_3<::UnityEngine::Timeline::TrackAsset*,::UnityEngine::GameObject*,::UnityEngine::Playables::Playable>* getStaticF_OnTrackAnimationPlayableCreate() ;

constexpr void __set_m_Locked(bool  value) ;

constexpr bool& __get_m_Locked() ;

constexpr bool const& __get_m_Locked() const;

constexpr void __set_m_Muted(bool  value) ;

constexpr bool& __get_m_Muted() ;

constexpr bool const& __get_m_Muted() const;

constexpr void __set_m_CustomPlayableFullTypename(::StringW  value) ;

constexpr ::StringW& __get_m_CustomPlayableFullTypename() ;

constexpr ::StringW const& __get_m_CustomPlayableFullTypename() const;

constexpr void __set_m_Curves(::UnityEngine::AnimationClip*  value) ;

constexpr ::UnityEngine::AnimationClip* __get_m_Curves() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> __get_m_Curves() const;

constexpr void __set_m_Parent(::UnityEngine::Playables::PlayableAsset*  value) ;

constexpr ::UnityEngine::Playables::PlayableAsset* __get_m_Parent() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableAsset*> __get_m_Parent() const;

constexpr void __set_m_Children(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* __get_m_Children() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*> __get_m_Children() const;

constexpr void __set_m_ItemsHash(int32_t  value) ;

constexpr int32_t& __get_m_ItemsHash() ;

constexpr int32_t const& __get_m_ItemsHash() const;

constexpr void __set_m_ClipsCache(::ArrayW<::UnityEngine::Timeline::TimelineClip*,::Array<::UnityEngine::Timeline::TimelineClip*>*>  value) ;

constexpr ::ArrayW<::UnityEngine::Timeline::TimelineClip*,::Array<::UnityEngine::Timeline::TimelineClip*>*>& __get_m_ClipsCache() ;

constexpr ::ArrayW<::UnityEngine::Timeline::TimelineClip*,::Array<::UnityEngine::Timeline::TimelineClip*>*> const& __get_m_ClipsCache() const;

constexpr void __set_m_Start(::UnityEngine::Timeline::DiscreteTime  value) ;

constexpr ::UnityEngine::Timeline::DiscreteTime& __get_m_Start() ;

constexpr ::UnityEngine::Timeline::DiscreteTime const& __get_m_Start() const;

constexpr void __set_m_End(::UnityEngine::Timeline::DiscreteTime  value) ;

constexpr ::UnityEngine::Timeline::DiscreteTime& __get_m_End() ;

constexpr ::UnityEngine::Timeline::DiscreteTime const& __get_m_End() const;

constexpr void __set_m_CacheSorted(bool  value) ;

constexpr bool& __get_m_CacheSorted() ;

constexpr bool const& __get_m_CacheSorted() const;

constexpr void __set_m_SupportsNotifications(::System::Nullable_1<bool>  value) ;

constexpr ::System::Nullable_1<bool>& __get_m_SupportsNotifications() ;

constexpr ::System::Nullable_1<bool> const& __get_m_SupportsNotifications() const;

static inline void setStaticF_s_EmptyCache(::ArrayW<::UnityEngine::Timeline::TrackAsset*,::Array<::UnityEngine::Timeline::TrackAsset*>*>  value) ;

static inline ::ArrayW<::UnityEngine::Timeline::TrackAsset*,::Array<::UnityEngine::Timeline::TrackAsset*>*> getStaticF_s_EmptyCache() ;

constexpr void __set_m_ChildTrackCache(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*  value) ;

constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* __get_m_ChildTrackCache() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*> __get_m_ChildTrackCache() const;

static inline void setStaticF_s_TrackBindingTypeAttributeCache(::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Timeline::TrackBindingTypeAttribute*>*  value) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Type*,::UnityEngine::Timeline::TrackBindingTypeAttribute*>* getStaticF_s_TrackBindingTypeAttributeCache() ;

constexpr void __set_m_Clips(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* __get_m_Clips() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*> __get_m_Clips() const;

constexpr void __set_m_Markers(::UnityEngine::Timeline::MarkerList  value) ;

constexpr ::UnityEngine::Timeline::MarkerList& __get_m_Markers() ;

constexpr ::UnityEngine::Timeline::MarkerList const& __get_m_Markers() const;

/// @brief Method OnBeforeTrackSerialize addr 0x2c5b320 size 0x4 virtual true final false
inline void OnBeforeTrackSerialize() ;

/// @brief Method OnAfterTrackDeserialize addr 0x2c5b324 size 0x4 virtual true final false
inline void OnAfterTrackDeserialize() ;

/// @brief Method OnUpgradeFromVersion addr 0x2c5b328 size 0x4 virtual true final false
inline void OnUpgradeFromVersion(int32_t  oldVersion) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize addr 0x2c5b32c size 0x15c virtual true final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize addr 0x2c5b488 size 0x3bc virtual true final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UpgradeToLatestVersion addr 0x2c5b8cc size 0x4 virtual false final false
inline void UpgradeToLatestVersion() ;

/// @brief Method add_OnClipPlayableCreate addr 0x2c5b8ec size 0xf4 virtual false final false
static inline void add_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip*,::UnityEngine::GameObject*,::UnityEngine::Playables::Playable>*  value) ;

/// @brief Method remove_OnClipPlayableCreate addr 0x2c5b9e0 size 0xf4 virtual false final false
static inline void remove_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip*,::UnityEngine::GameObject*,::UnityEngine::Playables::Playable>*  value) ;

/// @brief Method add_OnTrackAnimationPlayableCreate addr 0x2c5bad4 size 0xf4 virtual false final false
static inline void add_OnTrackAnimationPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TrackAsset*,::UnityEngine::GameObject*,::UnityEngine::Playables::Playable>*  value) ;

/// @brief Method remove_OnTrackAnimationPlayableCreate addr 0x2c5bbc8 size 0xf4 virtual false final false
static inline void remove_OnTrackAnimationPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TrackAsset*,::UnityEngine::GameObject*,::UnityEngine::Playables::Playable>*  value) ;

/// @brief Method get_start addr 0x2c5bcbc size 0x60 virtual false final false
inline double_t get_start() ;

/// @brief Method get_end addr 0x2c593e0 size 0x60 virtual false final false
inline double_t get_end() ;

/// @brief Method get_duration addr 0x2c5be28 size 0x60 virtual true final true
inline double_t get_duration() ;

/// @brief Method get_muted addr 0x2c5be90 size 0x8 virtual false final false
inline bool get_muted() ;

/// @brief Method set_muted addr 0x2c5be98 size 0xc virtual false final false
inline void set_muted(bool  value) ;

/// @brief Method get_mutedInHierarchy addr 0x2c590b4 size 0x18c virtual false final false
inline bool get_mutedInHierarchy() ;

/// @brief Method get_timelineAsset addr 0x2c597b0 size 0x16c virtual false final false
inline ::UnityEngine::Timeline::TimelineAsset* get_timelineAsset() ;

/// @brief Method get_parent addr 0x2c5bea4 size 0x8 virtual false final false
inline ::UnityEngine::Playables::PlayableAsset* get_parent() ;

/// @brief Method set_parent addr 0x2c5beac size 0x8 virtual false final false
inline void set_parent(::UnityEngine::Playables::PlayableAsset*  value) ;

/// @brief Method GetClips addr 0x2c54c78 size 0x4 virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* GetClips() ;

/// @brief Method get_clips addr 0x2c510ac size 0xb0 virtual false final false
inline ::ArrayW<::UnityEngine::Timeline::TimelineClip*,::Array<::UnityEngine::Timeline::TimelineClip*>*> get_clips() ;

/// @brief Method get_isEmpty addr 0x2c5beb4 size 0x6c virtual true final false
inline bool get_isEmpty() ;

/// @brief Method get_hasClips addr 0x2c4ed70 size 0x54 virtual false final false
inline bool get_hasClips() ;

/// @brief Method get_hasCurves addr 0x2c5bf20 size 0x8c virtual true final true
inline bool get_hasCurves() ;

/// @brief Method get_isSubTrack addr 0x2c519e0 size 0x120 virtual false final false
inline bool get_isSubTrack() ;

/// @brief Method get_outputs addr 0x2c5bfb4 size 0x78 virtual true final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* get_outputs() ;

/// @brief Method GetChildTracks addr 0x2c535a4 size 0x18 virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* GetChildTracks() ;

/// @brief Method get_customPlayableTypename addr 0x2c5c26c size 0x8 virtual false final false
inline ::StringW get_customPlayableTypename() ;

/// @brief Method set_customPlayableTypename addr 0x2c5c274 size 0x8 virtual false final false
inline void set_customPlayableTypename(::StringW  value) ;

/// @brief Method get_curves addr 0x2c5c27c size 0x8 virtual true final true
inline ::UnityEngine::AnimationClip* get_curves() ;

/// @brief Method set_curves addr 0x2c5c284 size 0x8 virtual false final false
inline void set_curves(::UnityEngine::AnimationClip*  value) ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName addr 0x2c5c28c size 0x40 virtual true final true
inline ::StringW UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName() ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_asset addr 0x2c5c2cc size 0x4 virtual true final true
inline ::UnityEngine::Object* UnityEngine_Timeline_ICurvesOwner_get_asset() ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_assetOwner addr 0x2c5c2d0 size 0x4 virtual true final true
inline ::UnityEngine::Object* UnityEngine_Timeline_ICurvesOwner_get_assetOwner() ;

/// @brief Method UnityEngine.Timeline.ICurvesOwner.get_targetTrack addr 0x2c5c2d4 size 0x4 virtual true final true
inline ::UnityEngine::Timeline::TrackAsset* UnityEngine_Timeline_ICurvesOwner_get_targetTrack() ;

/// @brief Method get_subTracksObjects addr 0x2c5c2d8 size 0x8 virtual false final false
inline ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* get_subTracksObjects() ;

/// @brief Method get_locked addr 0x2c5c2e0 size 0x8 virtual false final false
inline bool get_locked() ;

/// @brief Method set_locked addr 0x2c5c2e8 size 0xc virtual false final false
inline void set_locked(bool  value) ;

/// @brief Method get_lockedInHierarchy addr 0x2c5c2f4 size 0x18c virtual false final false
inline bool get_lockedInHierarchy() ;

/// @brief Method get_supportsNotifications addr 0x2c5c480 size 0xb4 virtual false final false
inline bool get_supportsNotifications() ;

/// @brief Method __internalAwake addr 0x2c5c534 size 0xcc virtual false final false
inline void __internalAwake() ;

/// @brief Method CreateCurves addr 0x2c5c600 size 0xb4 virtual true final true
inline void CreateCurves(::StringW  curvesClipName) ;

/// @brief Method CreateTrackMixer addr 0x2c5c6b4 size 0x70 virtual true final false
inline ::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, int32_t  inputCount) ;

/// @brief Method CreatePlayable addr 0x2c5c724 size 0x50 virtual true final true
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go) ;

/// @brief Method CreateDefaultClip addr 0x2c5c774 size 0x2cc virtual false final false
inline ::UnityEngine::Timeline::TimelineClip* CreateDefaultClip() ;

/// @brief Method CreateClip addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline ::UnityEngine::Timeline::TimelineClip* CreateClip() ;

/// @brief Method DeleteClip addr 0x2c5ca70 size 0x114 virtual false final false
inline bool DeleteClip(::UnityEngine::Timeline::TimelineClip*  clip) ;

/// @brief Method CreateMarker addr 0x2c5cb84 size 0xc virtual false final false
inline ::UnityEngine::Timeline::IMarker* CreateMarker(::System::Type*  type, double_t  time) ;

/// @brief Method CreateMarker addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
inline T CreateMarker(double_t  time) ;

/// @brief Method DeleteMarker addr 0x2c5ce90 size 0x8 virtual false final false
inline bool DeleteMarker(::UnityEngine::Timeline::IMarker*  marker) ;

/// @brief Method GetMarkers addr 0x2c5b8d0 size 0x1c virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* GetMarkers() ;

/// @brief Method GetMarkerCount addr 0x2c5bfac size 0x8 virtual false final false
inline int32_t GetMarkerCount() ;

/// @brief Method GetMarker addr 0x2c5d0e4 size 0x8 virtual false final false
inline ::UnityEngine::Timeline::IMarker* GetMarker(int32_t  idx) ;

/// @brief Method CreateClip addr 0x2c5d14c size 0x130 virtual false final false
inline ::UnityEngine::Timeline::TimelineClip* CreateClip(::System::Type*  requestedType) ;

/// @brief Method CreateAndAddNewClipOfType addr 0x2c5ca40 size 0x30 virtual false final false
inline ::UnityEngine::Timeline::TimelineClip* CreateAndAddNewClipOfType(::System::Type*  requestedType) ;

/// @brief Method CreateClipOfType addr 0x2c5d4fc size 0x1e0 virtual false final false
inline ::UnityEngine::Timeline::TimelineClip* CreateClipOfType(::System::Type*  requestedType) ;

/// @brief Method CreateClipFromPlayableAsset addr 0x2c5d97c size 0x284 virtual false final false
inline ::UnityEngine::Timeline::TimelineClip* CreateClipFromPlayableAsset(::UnityEngine::Playables::IPlayableAsset*  asset) ;

/// @brief Method CreateClipFromAsset addr 0x2c5d6dc size 0x2a0 virtual false final false
inline ::UnityEngine::Timeline::TimelineClip* CreateClipFromAsset(::UnityEngine::ScriptableObject*  playableAsset) ;

/// @brief Method GetMarkersRaw addr 0x2c5de5c size 0x8 virtual false final false
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ScriptableObject*>* GetMarkersRaw() ;

/// @brief Method ClearMarkers addr 0x2c5de64 size 0x8 virtual false final false
inline void ClearMarkers() ;

/// @brief Method AddMarker addr 0x2c5dedc size 0x8 virtual false final false
inline void AddMarker(::UnityEngine::ScriptableObject*  e) ;

/// @brief Method DeleteMarkerRaw addr 0x2c5dfd0 size 0x34 virtual false final false
inline bool DeleteMarkerRaw(::UnityEngine::ScriptableObject*  marker) ;

/// @brief Method GetTimeRangeHash addr 0x2c5e0c4 size 0x314 virtual false final false
inline int32_t GetTimeRangeHash() ;

/// @brief Method AddClip addr 0x2c55c38 size 0xd4 virtual false final false
inline void AddClip(::UnityEngine::Timeline::TimelineClip*  newClip) ;

/// @brief Method CreateNotificationsPlayable addr 0x2c5e3d8 size 0x2d0 virtual false final false
inline ::UnityEngine::Playables::Playable CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::Playables::Playable  mixerPlayable, ::UnityEngine::GameObject*  go, ::UnityEngine::Playables::Playable  timelinePlayable) ;

/// @brief Method CreatePlayableGraph addr 0x2c5ea28 size 0x2c0 virtual false final false
inline ::UnityEngine::Playables::Playable CreatePlayableGraph(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*  tree, ::UnityEngine::Playables::Playable  timelinePlayable) ;

/// @brief Method CompileClips addr 0x2c5f0fc size 0x428 virtual true final false
inline ::UnityEngine::Playables::Playable CompileClips(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, ::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TimelineClip*>*  timelineClips, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*  tree) ;

/// @brief Method GatherCompilableTracks addr 0x2c5f680 size 0x3d4 virtual false final false
inline void GatherCompilableTracks(::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TrackAsset*>*  tracks) ;

/// @brief Method GatherNotifications addr 0x2c5e6a8 size 0x380 virtual false final false
inline void GatherNotifications(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*  markers) ;

/// @brief Method CreateMixerPlayableGraph addr 0x2c5fa88 size 0x5a8 virtual true final false
inline ::UnityEngine::Playables::Playable CreateMixerPlayableGraph(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*  tree) ;

/// @brief Method ConfigureTrackAnimation addr 0x2c5f524 size 0x15c virtual false final false
inline void ConfigureTrackAnimation(::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*  tree, ::UnityEngine::GameObject*  go, ::UnityEngine::Playables::Playable  blend) ;

/// @brief Method SortClips addr 0x2c60030 size 0x128 virtual false final false
inline void SortClips() ;

/// @brief Method ClearClipsInternal addr 0x2c60158 size 0x78 virtual false final false
inline void ClearClipsInternal() ;

/// @brief Method ClearSubTracksInternal addr 0x2c601d0 size 0x78 virtual false final false
inline void ClearSubTracksInternal() ;

/// @brief Method OnClipMove addr 0x2c558bc size 0x8 virtual false final false
inline void OnClipMove() ;

/// @brief Method CreateNewClipContainerInternal addr 0x2c5dc00 size 0x25c virtual false final false
inline ::UnityEngine::Timeline::TimelineClip* CreateNewClipContainerInternal() ;

/// @brief Method AddChild addr 0x2c5a720 size 0x104 virtual false final false
inline void AddChild(::UnityEngine::Timeline::TrackAsset*  child) ;

/// @brief Method MoveLastTrackBefore addr 0x2c60248 size 0x1f0 virtual false final false
inline void MoveLastTrackBefore(::UnityEngine::Timeline::TrackAsset*  asset) ;

/// @brief Method RemoveSubTrack addr 0x2c589dc size 0x7c virtual false final false
inline bool RemoveSubTrack(::UnityEngine::Timeline::TrackAsset*  child) ;

/// @brief Method RemoveClip addr 0x2c55bd8 size 0x60 virtual false final false
inline void RemoveClip(::UnityEngine::Timeline::TimelineClip*  clip) ;

/// @brief Method GetEvaluationTime addr 0x2c54070 size 0x25c virtual true final false
inline void GetEvaluationTime(ByRef<double_t>  outStart, ByRef<double_t>  outDuration) ;

/// @brief Method GetSequenceTime addr 0x2c543c8 size 0x10 virtual true final false
inline void GetSequenceTime(ByRef<double_t>  outStart, ByRef<double_t>  outDuration) ;

/// @brief Method GatherProperties addr 0x2c60454 size 0x6d4 virtual true final false
inline void GatherProperties(::UnityEngine::Playables::PlayableDirector*  director, ::UnityEngine::Timeline::IPropertyCollector*  driver) ;

/// @brief Method GetGameObjectBinding addr 0x2c4f060 size 0x178 virtual false final false
inline ::UnityEngine::GameObject* GetGameObjectBinding(::UnityEngine::Playables::PlayableDirector*  director) ;

/// @brief Method ValidateClipType addr 0x2c5d27c size 0x280 virtual false final false
inline bool ValidateClipType(::System::Type*  clipType) ;

/// @brief Method OnCreateClip addr 0x2c4f228 size 0x4 virtual true final false
inline void OnCreateClip(::UnityEngine::Timeline::TimelineClip*  clip) ;

/// @brief Method UpdateDuration addr 0x2c5bd1c size 0x10c virtual false final false
inline void UpdateDuration() ;

/// @brief Method CalculateItemsHash addr 0x2c51cc8 size 0x88 virtual true final false
inline int32_t CalculateItemsHash() ;

/// @brief Method CreatePlayable addr 0x2c60c90 size 0x2a4 virtual true final false
inline ::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  gameObject, ::UnityEngine::Timeline::TimelineClip*  clip) ;

/// @brief Method Invalidate addr 0x2c5b844 size 0x88 virtual false final false
inline void Invalidate() ;

/// @brief Method GetNotificationDuration addr 0x2c543d8 size 0x164 virtual false final false
inline double_t GetNotificationDuration() ;

/// @brief Method CanCompileClips addr 0x2c4edc4 size 0x5c virtual true final false
inline bool CanCompileClips() ;

/// @brief Method CanCreateTrackMixer addr 0x2c60f34 size 0x10 virtual true final false
inline bool CanCreateTrackMixer() ;

/// @brief Method IsCompilable addr 0x2c60f44 size 0x3cc virtual false final false
inline bool IsCompilable() ;

/// @brief Method UpdateChildTrackCache addr 0x2c5c060 size 0x20c virtual false final false
inline void UpdateChildTrackCache() ;

/// @brief Method Hash addr 0x2c61310 size 0x38 virtual true final false
inline int32_t Hash() ;

/// @brief Method GetClipsHash addr 0x2c60b28 size 0x168 virtual false final false
inline int32_t GetClipsHash() ;

/// @brief Method GetAnimationClipHash addr 0x2c51bdc size 0xec virtual false final false
static inline int32_t GetAnimationClipHash(::UnityEngine::AnimationClip*  clip) ;

/// @brief Method HasNotifications addr 0x2c60438 size 0x1c virtual false final false
inline bool HasNotifications() ;

/// @brief Method CanCompileNotifications addr 0x2c5fa54 size 0x34 virtual false final false
inline bool CanCompileNotifications() ;

/// @brief Method CanCreateMixerRecursive addr 0x2c5ece8 size 0x334 virtual false final false
inline bool CanCreateMixerRecursive() ;

static inline ::UnityEngine::Timeline::TrackAsset* New_ctor() ;

/// @brief Method .ctor addr 0x2c4f288 size 0xd0 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TrackAsset", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackAsset(TrackAsset && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackAsset", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackAsset(TrackAsset const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TrackAsset()  = default;
public:


// Fields

// Static field s_BuildData

// Static field OnClipPlayableCreate

// Static field OnTrackAnimationPlayableCreate

// Static field s_EmptyCache

// Static field s_TrackBindingTypeAttributeCache


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TrackAsset, 0xa0>, "Size mismatch!");

} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TrackAsset__Versions, "UnityEngine.Timeline", "TrackAsset/Versions");
NEED_NO_BOX(::UnityEngine::Timeline::TrackAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackAsset*, "UnityEngine.Timeline", "TrackAsset");
NEED_NO_BOX(::UnityEngine::Timeline::__TrackAsset__TrackAssetUpgrade);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TrackAsset__TrackAssetUpgrade*, "UnityEngine.Timeline", "TrackAsset/TrackAssetUpgrade");
NEED_NO_BOX(::UnityEngine::Timeline::__TrackAsset____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TrackAsset____c*, "UnityEngine.Timeline", "TrackAsset/<>c");
NEED_NO_BOX(::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*, "UnityEngine.Timeline", "TrackAsset/<get_outputs>d__65");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::__TrackAsset__TransientBuildData, "UnityEngine.Timeline", "TrackAsset/TransientBuildData");
