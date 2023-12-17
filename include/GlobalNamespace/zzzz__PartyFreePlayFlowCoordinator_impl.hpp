#pragma once
#include "GlobalNamespace/zzzz__SinglePlayerLevelSelectionFlowCoordinator_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PartyFreePlayFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__EnterPlayerGuestNameViewController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsManager_def.hpp"
#include "GlobalNamespace/zzzz__MenuLightsPresetSO_def.hpp"
#include "GlobalNamespace/zzzz__PartyFreePlayFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__LeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__ResultsViewController_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardViewController_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::*)()>(&::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229b118;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0._ProcessLevelCompletionResultsAfterLevelDidFinish_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::*)(::GlobalNamespace::EnterPlayerGuestNameViewController*, ::StringW)>(&::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::_ProcessLevelCompletionResultsAfterLevelDidFinish_b__0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x229b388;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0*>::get(),
                            "<ProcessLevelCompletionResultsAfterLevelDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnterPlayerGuestNameViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set___4__this(::GlobalNamespace::PartyFreePlayFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PartyFreePlayFlowCoordinator*, 0x10>(this, std::forward<::GlobalNamespace::PartyFreePlayFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::PartyFreePlayFlowCoordinator* GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PartyFreePlayFlowCoordinator*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyFreePlayFlowCoordinator*> GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PartyFreePlayFlowCoordinator*, 0x10>(this);
}
constexpr void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LevelCompletionResults*, 0x18>(this, std::forward<::GlobalNamespace::LevelCompletionResults*>(value));
}
constexpr ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_levelCompletionResults()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelCompletionResults*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LevelCompletionResults*> GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_levelCompletionResults() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LevelCompletionResults*, 0x18>(this);
}
constexpr void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set_leaderboardId(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_leaderboardId()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_leaderboardId() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set_transformedBeatmapData(::GlobalNamespace::IReadonlyBeatmapData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x28>(this, std::forward<::GlobalNamespace::IReadonlyBeatmapData*>(value));
}
constexpr ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_transformedBeatmapData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IReadonlyBeatmapData*> GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_transformedBeatmapData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IReadonlyBeatmapData*, 0x28>(this);
}
constexpr void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set_difficultyBeatmap(::GlobalNamespace::IDifficultyBeatmap*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::IDifficultyBeatmap*, 0x30>(this, std::forward<::GlobalNamespace::IDifficultyBeatmap*>(value));
}
constexpr ::GlobalNamespace::IDifficultyBeatmap* GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_difficultyBeatmap()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IDifficultyBeatmap*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IDifficultyBeatmap*> GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_difficultyBeatmap() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::IDifficultyBeatmap*, 0x30>(this);
}
constexpr void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__set_practice(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x38>(this, std::forward<bool>(value));
}
constexpr bool& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_practice()  {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
constexpr bool const& GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::__get_practice() const {
return ::cordl_internals::getInstanceField<bool, 0x38>(this);
}
inline ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0* GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0*>());
}
inline void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0::_ProcessLevelCompletionResultsAfterLevelDidFinish_b__0(::GlobalNamespace::EnterPlayerGuestNameViewController*  viewController, ::StringW  playerName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass18_0*>::get(),
                            "<ProcessLevelCompletionResultsAfterLevelDidFinish>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnterPlayerGuestNameViewController*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, viewController, playerName);
}
//  Writing Method size for method: ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::*)()>(&::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229b370;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0._HandleResultsViewControllerRestartButtonPressed_b__0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::*)()>(&::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::_HandleResultsViewControllerRestartButtonPressed_b__0)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x229b450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0*>::get(),
                            "<HandleResultsViewControllerRestartButtonPressed>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__set___4__this(::GlobalNamespace::PartyFreePlayFlowCoordinator*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::PartyFreePlayFlowCoordinator*, 0x10>(this, std::forward<::GlobalNamespace::PartyFreePlayFlowCoordinator*>(value));
}
constexpr ::GlobalNamespace::PartyFreePlayFlowCoordinator* GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__get___4__this()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PartyFreePlayFlowCoordinator*, 0x10>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PartyFreePlayFlowCoordinator*> GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__get___4__this() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::PartyFreePlayFlowCoordinator*, 0x10>(this);
}
constexpr void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__set_resultsViewController(::GlobalNamespace::ResultsViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ResultsViewController*, 0x18>(this, std::forward<::GlobalNamespace::ResultsViewController*>(value));
}
constexpr ::GlobalNamespace::ResultsViewController* GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__get_resultsViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ResultsViewController*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ResultsViewController*> GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::__get_resultsViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ResultsViewController*, 0x18>(this);
}
inline ::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0* GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0*>());
}
inline void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0::_HandleResultsViewControllerRestartButtonPressed_b__0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PartyFreePlayFlowCoordinator____c__DisplayClass23_0*>::get(),
                            "<HandleResultsViewControllerRestartButtonPressed>b__0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.get_gameMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::get_gameMode)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x229aaf4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.get_leaderboardViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LeaderboardViewController* (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::get_leaderboardViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229ab34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.get_showBackButtonForMainViewController
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::get_showBackButtonForMainViewController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229ab3c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.get_mainTitle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::get_mainTitle)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x229ab44;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.SinglePlayerLevelSelectionFlowCoordinatorDidActivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(bool, bool)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x229ab88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(bool)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x229ad88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.ProcessLevelCompletionResultsAfterLevelDidFinish
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::IDifficultyBeatmap*, ::GlobalNamespace::GameplayModifiers*, bool)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x229aed4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.WillScoreGoToLeaderboard
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::LevelCompletionResults*, ::StringW, bool)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::WillScoreGoToLeaderboard)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x229b144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "WillScoreGoToLeaderboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.IsNewHighScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::LevelCompletionResults*, ::StringW)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::IsNewHighScore)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x229b194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "IsNewHighScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.ProcessScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::LevelCompletionResults*, ::StringW, ::StringW)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessScore)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x229b1d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "ProcessScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.HandleResultsViewControllerContinueButtonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::ResultsViewController*)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerContinueButtonPressed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x229b26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "HandleResultsViewControllerContinueButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ResultsViewController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator.HandleResultsViewControllerRestartButtonPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)(::GlobalNamespace::ResultsViewController*)>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerRestartButtonPressed)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x229b2a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "HandleResultsViewControllerRestartButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ResultsViewController*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PartyFreePlayFlowCoordinator._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PartyFreePlayFlowCoordinator::*)()>(&::GlobalNamespace::PartyFreePlayFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x229b378;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__set__defaultLightsPreset(::GlobalNamespace::MenuLightsPresetSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuLightsPresetSO*, 0x110>(this, std::forward<::GlobalNamespace::MenuLightsPresetSO*>(value));
}
constexpr ::GlobalNamespace::MenuLightsPresetSO* GlobalNamespace::PartyFreePlayFlowCoordinator::__get__defaultLightsPreset()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuLightsPresetSO*, 0x110>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> GlobalNamespace::PartyFreePlayFlowCoordinator::__get__defaultLightsPreset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuLightsPresetSO*, 0x110>(this);
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__set__resultsClearedLightsPreset(::GlobalNamespace::MenuLightsPresetSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuLightsPresetSO*, 0x118>(this, std::forward<::GlobalNamespace::MenuLightsPresetSO*>(value));
}
constexpr ::GlobalNamespace::MenuLightsPresetSO* GlobalNamespace::PartyFreePlayFlowCoordinator::__get__resultsClearedLightsPreset()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuLightsPresetSO*, 0x118>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> GlobalNamespace::PartyFreePlayFlowCoordinator::__get__resultsClearedLightsPreset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuLightsPresetSO*, 0x118>(this);
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__set__resultsFailedLightsPreset(::GlobalNamespace::MenuLightsPresetSO*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuLightsPresetSO*, 0x120>(this, std::forward<::GlobalNamespace::MenuLightsPresetSO*>(value));
}
constexpr ::GlobalNamespace::MenuLightsPresetSO* GlobalNamespace::PartyFreePlayFlowCoordinator::__get__resultsFailedLightsPreset()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuLightsPresetSO*, 0x120>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsPresetSO*> GlobalNamespace::PartyFreePlayFlowCoordinator::__get__resultsFailedLightsPreset() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuLightsPresetSO*, 0x120>(this);
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__set__menuLightsManager(::GlobalNamespace::MenuLightsManager*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MenuLightsManager*, 0x128>(this, std::forward<::GlobalNamespace::MenuLightsManager*>(value));
}
constexpr ::GlobalNamespace::MenuLightsManager* GlobalNamespace::PartyFreePlayFlowCoordinator::__get__menuLightsManager()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuLightsManager*, 0x128>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MenuLightsManager*> GlobalNamespace::PartyFreePlayFlowCoordinator::__get__menuLightsManager() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MenuLightsManager*, 0x128>(this);
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__set__resultsViewController(::GlobalNamespace::ResultsViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ResultsViewController*, 0x130>(this, std::forward<::GlobalNamespace::ResultsViewController*>(value));
}
constexpr ::GlobalNamespace::ResultsViewController* GlobalNamespace::PartyFreePlayFlowCoordinator::__get__resultsViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ResultsViewController*, 0x130>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ResultsViewController*> GlobalNamespace::PartyFreePlayFlowCoordinator::__get__resultsViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ResultsViewController*, 0x130>(this);
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__set__localLeaderboardViewController(::GlobalNamespace::LocalLeaderboardViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LocalLeaderboardViewController*, 0x138>(this, std::forward<::GlobalNamespace::LocalLeaderboardViewController*>(value));
}
constexpr ::GlobalNamespace::LocalLeaderboardViewController* GlobalNamespace::PartyFreePlayFlowCoordinator::__get__localLeaderboardViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalLeaderboardViewController*, 0x138>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LocalLeaderboardViewController*> GlobalNamespace::PartyFreePlayFlowCoordinator::__get__localLeaderboardViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalLeaderboardViewController*, 0x138>(this);
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__set__enterNameViewController(::GlobalNamespace::EnterPlayerGuestNameViewController*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::EnterPlayerGuestNameViewController*, 0x140>(this, std::forward<::GlobalNamespace::EnterPlayerGuestNameViewController*>(value));
}
constexpr ::GlobalNamespace::EnterPlayerGuestNameViewController* GlobalNamespace::PartyFreePlayFlowCoordinator::__get__enterNameViewController()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnterPlayerGuestNameViewController*, 0x140>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnterPlayerGuestNameViewController*> GlobalNamespace::PartyFreePlayFlowCoordinator::__get__enterNameViewController() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::EnterPlayerGuestNameViewController*, 0x140>(this);
}
constexpr void GlobalNamespace::PartyFreePlayFlowCoordinator::__set__saveData(::GlobalNamespace::ISaveData*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ISaveData*, 0x148>(this, std::forward<::GlobalNamespace::ISaveData*>(value));
}
constexpr ::GlobalNamespace::ISaveData* GlobalNamespace::PartyFreePlayFlowCoordinator::__get__saveData()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISaveData*, 0x148>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ISaveData*> GlobalNamespace::PartyFreePlayFlowCoordinator::__get__saveData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISaveData*, 0x148>(this);
}
inline ::StringW GlobalNamespace::PartyFreePlayFlowCoordinator::get_gameMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "get_gameMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::LeaderboardViewController* GlobalNamespace::PartyFreePlayFlowCoordinator::get_leaderboardViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "get_leaderboardViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LeaderboardViewController*, false>(*this, ___internal_method);
}
inline bool GlobalNamespace::PartyFreePlayFlowCoordinator::get_showBackButtonForMainViewController()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "get_showBackButtonForMainViewController",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::PartyFreePlayFlowCoordinator::get_mainTitle()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "get_mainTitle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidActivate(bool  firstActivation, bool  addedToHierarchy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "SinglePlayerLevelSelectionFlowCoordinatorDidActivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, firstActivation, addedToHierarchy);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate(bool  removedFromHierarchy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "SinglePlayerLevelSelectionFlowCoordinatorDidDeactivate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, removedFromHierarchy);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessLevelCompletionResultsAfterLevelDidFinish(::GlobalNamespace::LevelCompletionResults*  levelCompletionResults, ::GlobalNamespace::IReadonlyBeatmapData*  transformedBeatmapData, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, ::GlobalNamespace::GameplayModifiers*  gameplayModifiers, bool  practice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "ProcessLevelCompletionResultsAfterLevelDidFinish",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayModifiers*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, levelCompletionResults, transformedBeatmapData, difficultyBeatmap, gameplayModifiers, practice);
}
inline bool GlobalNamespace::PartyFreePlayFlowCoordinator::WillScoreGoToLeaderboard(::GlobalNamespace::LevelCompletionResults*  levelCompletionResults, ::StringW  leaderboardId, bool  practice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "WillScoreGoToLeaderboard",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, levelCompletionResults, leaderboardId, practice);
}
inline bool GlobalNamespace::PartyFreePlayFlowCoordinator::IsNewHighScore(::GlobalNamespace::LevelCompletionResults*  levelCompletionResults, ::StringW  leaderboardId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "IsNewHighScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(*this, ___internal_method, levelCompletionResults, leaderboardId);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::ProcessScore(::GlobalNamespace::LevelCompletionResults*  levelCompletionResults, ::StringW  leaderboardId, ::StringW  playerName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "ProcessScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelCompletionResults*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, levelCompletionResults, leaderboardId, playerName);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerContinueButtonPressed(::GlobalNamespace::ResultsViewController*  resultsViewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "HandleResultsViewControllerContinueButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ResultsViewController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, resultsViewController);
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::HandleResultsViewControllerRestartButtonPressed(::GlobalNamespace::ResultsViewController*  resultsViewController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            "HandleResultsViewControllerRestartButtonPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ResultsViewController*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, resultsViewController);
}
inline ::GlobalNamespace::PartyFreePlayFlowCoordinator* GlobalNamespace::PartyFreePlayFlowCoordinator::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::PartyFreePlayFlowCoordinator*>());
}
inline void GlobalNamespace::PartyFreePlayFlowCoordinator::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PartyFreePlayFlowCoordinator*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
