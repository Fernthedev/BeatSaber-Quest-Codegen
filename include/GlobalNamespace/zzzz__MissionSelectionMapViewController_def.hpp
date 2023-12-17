#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__ViewController_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MissionSelectionMapViewController)
namespace GlobalNamespace {
class MissionMapAnimationController;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
class MissionNodeSelectionManager;
}
namespace GlobalNamespace {
class __MissionSelectionMapViewController____c__DisplayClass15_0;
}
namespace GlobalNamespace {
struct __MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15;
}
namespace GlobalNamespace {
class MissionNodeVisualController;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class SongPreviewPlayer;
}
namespace GlobalNamespace {
class MissionNode;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace GlobalNamespace {
class PerceivedLoudnessPerLevelModel;
}
namespace HMUI {
class ScrollView;
}
namespace GlobalNamespace {
class AudioClipAsyncLoader;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace UnityEngine {
class AudioClip;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct TaskAwaiter_1;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionSelectionMapViewController;
}
namespace GlobalNamespace {
class __MissionSelectionMapViewController____c__DisplayClass15_0;
}
namespace GlobalNamespace {
struct __MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MissionSelectionMapViewController);
MARK_REF_PTR_T(::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0);
MARK_VAL_T(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15);
// Type: ::<>c__DisplayClass15_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5703))
// CS Name: ::MissionSelectionMapViewController::<>c__DisplayClass15_0*
class CORDL_TYPE __MissionSelectionMapViewController____c__DisplayClass15_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MissionSelectionMapViewController*  __4__this;

/// @brief Field level offset 0x18
 __declspec(property(get=__get_level, put=__set_level)) ::GlobalNamespace::IPreviewBeatmapLevel*  level;

constexpr void __set___4__this(::GlobalNamespace::MissionSelectionMapViewController*  value) ;

constexpr ::GlobalNamespace::MissionSelectionMapViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionSelectionMapViewController*> __get___4__this() const;

constexpr void __set_level(::GlobalNamespace::IPreviewBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel* __get_level() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> __get_level() const;

static inline ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0* New_ctor() ;

/// @brief Method .ctor addr 0x22cb7e0 size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <SongPlayerCrossfadeToLevelAsync>b__0 addr 0x22cb7e8 size 0x2c virtual false final false
inline void _SongPlayerCrossfadeToLevelAsync_b__0() ;

// Ctor Parameters [CppParam { name: "", ty: "__MissionSelectionMapViewController____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MissionSelectionMapViewController____c__DisplayClass15_0(__MissionSelectionMapViewController____c__DisplayClass15_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MissionSelectionMapViewController____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MissionSelectionMapViewController____c__DisplayClass15_0(__MissionSelectionMapViewController____c__DisplayClass15_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __MissionSelectionMapViewController____c__DisplayClass15_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::<SongPlayerCrossfadeToLevelAsync>d__15
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5704))
// CS Name: ::MissionSelectionMapViewController::<SongPlayerCrossfadeToLevelAsync>d__15
struct CORDL_TYPE __MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15 : public ::bs_hook::ValueTypeWrapper<0x50> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x50};

/// @brief Field <>1__state offset 0x0
 __declspec(property(get=__get___1__state, put=__set___1__state)) int32_t  __1__state;

/// @brief Field <>t__builder offset 0x8
 __declspec(property(get=__get___t__builder, put=__set___t__builder)) ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder;

/// @brief Field <>4__this offset 0x28
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::GlobalNamespace::MissionSelectionMapViewController*  __4__this;

/// @brief Field level offset 0x30
 __declspec(property(get=__get_level, put=__set_level)) ::GlobalNamespace::IPreviewBeatmapLevel*  level;

/// @brief Field <>8__1 offset 0x38
 __declspec(property(get=__get___8__1, put=__set___8__1)) ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0*  __8__1;

/// @brief Field <musicVolume>5__2 offset 0x40
 __declspec(property(get=__get__musicVolume_5__2, put=__set__musicVolume_5__2)) float_t  _musicVolume_5__2;

/// @brief Field <>u__1 offset 0x48
 __declspec(property(get=__get___u__1, put=__set___u__1)) ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>  __u__1;

/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr operator  ::System::Runtime::CompilerServices::IAsyncStateMachine*() ;

constexpr void __set___1__state(int32_t  value) ;

constexpr int32_t& __get___1__state() ;

constexpr int32_t const& __get___1__state() const;

constexpr void __set___t__builder(::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  value) ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder& __get___t__builder() ;

constexpr ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder const& __get___t__builder() const;

constexpr void __set___4__this(::GlobalNamespace::MissionSelectionMapViewController*  value) ;

constexpr ::GlobalNamespace::MissionSelectionMapViewController* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionSelectionMapViewController*> __get___4__this() const;

constexpr void __set_level(::GlobalNamespace::IPreviewBeatmapLevel*  value) ;

constexpr ::GlobalNamespace::IPreviewBeatmapLevel* __get_level() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> __get_level() const;

constexpr void __set___8__1(::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0*  value) ;

constexpr ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0* __get___8__1() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0*> __get___8__1() const;

constexpr void __set__musicVolume_5__2(float_t  value) ;

constexpr float_t& __get__musicVolume_5__2() ;

constexpr float_t const& __get__musicVolume_5__2() const;

constexpr void __set___u__1(::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>  value) ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>& __get___u__1() ;

constexpr ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*> const& __get___u__1() const;

/// @brief Method MoveNext addr 0x22cb814 size 0x49c virtual true final true
inline void MoveNext() ;

/// @brief Method SetStateMachine addr 0x22cbcb0 size 0xc virtual true final true
inline void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine) ;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MissionSelectionMapViewController*", modifiers: "", def_value: None }, CppParam { name: "level", ty: "::GlobalNamespace::IPreviewBeatmapLevel*", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0*", modifiers: "", def_value: None }, CppParam { name: "_musicVolume_5__2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: None }]
constexpr __MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder  __t__builder, ::GlobalNamespace::MissionSelectionMapViewController*  __4__this, ::GlobalNamespace::IPreviewBeatmapLevel*  level, ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0*  __8__1, float_t  _musicVolume_5__2, ::System::Runtime::CompilerServices::TaskAwaiter_1<::UnityEngine::AudioClip*>  __u__1) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit __MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x50>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 __MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MissionSelectionMapViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13605))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5705))
// CS Name: ::MissionSelectionMapViewController*
class CORDL_TYPE MissionSelectionMapViewController : public ::HMUI::ViewController {
public:
// Declarations
using _SongPlayerCrossfadeToLevelAsync_d__15 = ::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15;

using __c__DisplayClass15_0 = ::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xb0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xb0 - sizeof(::HMUI::ViewController)]{};

/// @brief Field _mapScrollView offset 0x70
 __declspec(property(get=__get__mapScrollView, put=__set__mapScrollView)) ::HMUI::ScrollView*  _mapScrollView;

/// @brief Field _missionNodeSelectionManager offset 0x78
 __declspec(property(get=__get__missionNodeSelectionManager, put=__set__missionNodeSelectionManager)) ::GlobalNamespace::MissionNodeSelectionManager*  _missionNodeSelectionManager;

/// @brief Field _missionMapAnimationController offset 0x80
 __declspec(property(get=__get__missionMapAnimationController, put=__set__missionMapAnimationController)) ::GlobalNamespace::MissionMapAnimationController*  _missionMapAnimationController;

/// @brief Field _songPreviewPlayer offset 0x88
 __declspec(property(get=__get__songPreviewPlayer, put=__set__songPreviewPlayer)) ::GlobalNamespace::SongPreviewPlayer*  _songPreviewPlayer;

/// @brief Field _perceivedLoudnessPerLevelModel offset 0x90
 __declspec(property(get=__get__perceivedLoudnessPerLevelModel, put=__set__perceivedLoudnessPerLevelModel)) ::GlobalNamespace::PerceivedLoudnessPerLevelModel*  _perceivedLoudnessPerLevelModel;

/// @brief Field _audioClipAsyncLoader offset 0x98
 __declspec(property(get=__get__audioClipAsyncLoader, put=__set__audioClipAsyncLoader)) ::GlobalNamespace::AudioClipAsyncLoader*  _audioClipAsyncLoader;

/// @brief Field didSelectMissionLevelEvent offset 0xa0
 __declspec(property(get=__get_didSelectMissionLevelEvent, put=__set_didSelectMissionLevelEvent)) ::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*,::GlobalNamespace::MissionNode*>*  didSelectMissionLevelEvent;

/// @brief Field _selectedMissionNode offset 0xa8
 __declspec(property(get=__get__selectedMissionNode, put=__set__selectedMissionNode)) ::GlobalNamespace::MissionNode*  _selectedMissionNode;

 __declspec(property(get=get_animatedUpdateIsRequired)) bool  animatedUpdateIsRequired;

constexpr void __set__mapScrollView(::HMUI::ScrollView*  value) ;

constexpr ::HMUI::ScrollView* __get__mapScrollView() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ScrollView*> __get__mapScrollView() const;

constexpr void __set__missionNodeSelectionManager(::GlobalNamespace::MissionNodeSelectionManager*  value) ;

constexpr ::GlobalNamespace::MissionNodeSelectionManager* __get__missionNodeSelectionManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNodeSelectionManager*> __get__missionNodeSelectionManager() const;

constexpr void __set__missionMapAnimationController(::GlobalNamespace::MissionMapAnimationController*  value) ;

constexpr ::GlobalNamespace::MissionMapAnimationController* __get__missionMapAnimationController() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionMapAnimationController*> __get__missionMapAnimationController() const;

constexpr void __set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer*  value) ;

constexpr ::GlobalNamespace::SongPreviewPlayer* __get__songPreviewPlayer() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> __get__songPreviewPlayer() const;

constexpr void __set__perceivedLoudnessPerLevelModel(::GlobalNamespace::PerceivedLoudnessPerLevelModel*  value) ;

constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel* __get__perceivedLoudnessPerLevelModel() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PerceivedLoudnessPerLevelModel*> __get__perceivedLoudnessPerLevelModel() const;

constexpr void __set__audioClipAsyncLoader(::GlobalNamespace::AudioClipAsyncLoader*  value) ;

constexpr ::GlobalNamespace::AudioClipAsyncLoader* __get__audioClipAsyncLoader() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioClipAsyncLoader*> __get__audioClipAsyncLoader() const;

constexpr void __set_didSelectMissionLevelEvent(::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*,::GlobalNamespace::MissionNode*>*  value) ;

constexpr ::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*,::GlobalNamespace::MissionNode*>* __get_didSelectMissionLevelEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*,::GlobalNamespace::MissionNode*>*> __get_didSelectMissionLevelEvent() const;

constexpr void __set__selectedMissionNode(::GlobalNamespace::MissionNode*  value) ;

constexpr ::GlobalNamespace::MissionNode* __get__selectedMissionNode() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionNode*> __get__selectedMissionNode() const;

/// @brief Method add_didSelectMissionLevelEvent addr 0x22cb29c size 0xb0 virtual false final false
inline void add_didSelectMissionLevelEvent(::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*,::GlobalNamespace::MissionNode*>*  value) ;

/// @brief Method remove_didSelectMissionLevelEvent addr 0x22cb34c size 0xb0 virtual false final false
inline void remove_didSelectMissionLevelEvent(::System::Action_2<::GlobalNamespace::MissionSelectionMapViewController*,::GlobalNamespace::MissionNode*>*  value) ;

/// @brief Method get_animatedUpdateIsRequired addr 0x22cb3fc size 0x1c virtual false final false
inline bool get_animatedUpdateIsRequired() ;

/// @brief Method DidActivate addr 0x22cb418 size 0x144 virtual true final false
inline void DidActivate(bool  firstActivation, bool  addedToHierarchy, bool  screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x22cb55c size 0x130 virtual true final false
inline void DidDeactivate(bool  removedFromHierarchy, bool  screenSystemDisabling) ;

/// @brief Method HandleMissionNodeSelectionManagerDidSelectMissionNode addr 0x22cb68c size 0x6c virtual false final false
inline void HandleMissionNodeSelectionManagerDidSelectMissionNode(::GlobalNamespace::MissionNodeVisualController*  missionNodeVisualController) ;

/// @brief Method SongPlayerCrossfadeToLevelAsync addr 0x22cb6f8 size 0xa0 virtual false final false
inline void SongPlayerCrossfadeToLevelAsync(::GlobalNamespace::IPreviewBeatmapLevel*  level) ;

/// @brief Method ShowMissionClearedAnimation addr 0x22cb798 size 0x24 virtual false final false
inline void ShowMissionClearedAnimation(::System::Action*  finishCallback) ;

/// @brief Method DeselectSelectedNode addr 0x22cb7bc size 0x1c virtual false final false
inline void DeselectSelectedNode() ;

static inline ::GlobalNamespace::MissionSelectionMapViewController* New_ctor() ;

/// @brief Method .ctor addr 0x22cb7d8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MissionSelectionMapViewController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MissionSelectionMapViewController(MissionSelectionMapViewController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MissionSelectionMapViewController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MissionSelectionMapViewController(MissionSelectionMapViewController const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MissionSelectionMapViewController()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MissionSelectionMapViewController, 0xb0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MissionSelectionMapViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionSelectionMapViewController*, "", "MissionSelectionMapViewController");
NEED_NO_BOX(::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionSelectionMapViewController____c__DisplayClass15_0*, "", "MissionSelectionMapViewController/<>c__DisplayClass15_0");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MissionSelectionMapViewController___SongPlayerCrossfadeToLevelAsync_d__15, "", "MissionSelectionMapViewController/<SongPlayerCrossfadeToLevelAsync>d__15");
