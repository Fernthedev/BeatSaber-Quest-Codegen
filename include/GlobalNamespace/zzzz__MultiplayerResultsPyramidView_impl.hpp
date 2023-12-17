#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsPyramidView_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsPyramidViewAvatar_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOffsetPositionByLocalPlayerPosition_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "GlobalNamespace/zzzz__IConnectedPlayer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidView.get_resultAvatarDirectors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> (::GlobalNamespace::MultiplayerResultsPyramidView::*)()>(&::GlobalNamespace::MultiplayerResultsPyramidView::get_resultAvatarDirectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2257e30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(),
                            "get_resultAvatarDirectors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidView.get_badgeTimelines
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> (::GlobalNamespace::MultiplayerResultsPyramidView::*)()>(&::GlobalNamespace::MultiplayerResultsPyramidView::get_badgeTimelines)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2257e38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(),
                            "get_badgeTimelines",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidView.PrespawnAvatars
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsPyramidView::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*)>(&::GlobalNamespace::MultiplayerResultsPyramidView::PrespawnAvatars)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0x22560d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(),
                            "PrespawnAvatars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidView.SetupResults
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsPyramidView::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, ::UnityEngine::Transform*, ::UnityEngine::Transform*)>(&::GlobalNamespace::MultiplayerResultsPyramidView::SetupResults)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x2255aa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(),
                            "SetupResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerResultsPyramidView._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerResultsPyramidView::*)()>(&::GlobalNamespace::MultiplayerResultsPyramidView::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2258820;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__multiplayerOffsetByLocalPlayerPosition(::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*, 0x18>(this, std::forward<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>(value));
}
constexpr ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* GlobalNamespace::MultiplayerResultsPyramidView::__get__multiplayerOffsetByLocalPlayerPosition()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*> GlobalNamespace::MultiplayerResultsPyramidView::__get__multiplayerOffsetByLocalPlayerPosition() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__spawnPoints(::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>, 0x20>(this, std::forward<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>& GlobalNamespace::MultiplayerResultsPyramidView::__get__spawnPoints()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>, 0x20>(this);
}
constexpr ::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*> const& GlobalNamespace::MultiplayerResultsPyramidView::__get__spawnPoints() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::Transform*,::Array<::UnityEngine::Transform*>*>, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__spawnPointsParent(::UnityEngine::Transform*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Transform*, 0x28>(this, std::forward<::UnityEngine::Transform*>(value));
}
constexpr ::UnityEngine::Transform* GlobalNamespace::MultiplayerResultsPyramidView::__get__spawnPointsParent()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Transform*> GlobalNamespace::MultiplayerResultsPyramidView::__get__spawnPointsParent() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Transform*, 0x28>(this);
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__evenCountOffset(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::MultiplayerResultsPyramidView::__get__evenCountOffset()  {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr float_t const& GlobalNamespace::MultiplayerResultsPyramidView::__get__evenCountOffset() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this);
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__avatarsFactory(::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory*, 0x38>(this, std::forward<::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory*>(value));
}
constexpr ::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory* GlobalNamespace::MultiplayerResultsPyramidView::__get__avatarsFactory()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory*, 0x38>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory*> GlobalNamespace::MultiplayerResultsPyramidView::__get__avatarsFactory() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__MultiplayerResultsPyramidViewAvatar__Factory*, 0x38>(this);
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__avatarsDictionary(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>*  value)  {
::cordl_internals::setInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>*, 0x40>(this, std::forward<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>*>(value));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>* GlobalNamespace::MultiplayerResultsPyramidView::__get__avatarsDictionary()  {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>*, 0x40>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>*> GlobalNamespace::MultiplayerResultsPyramidView::__get__avatarsDictionary() const {
return ::cordl_internals::getInstanceField<::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>*, 0x40>(this);
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__resultAvatarDirectors(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x48>(this, std::forward<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>& GlobalNamespace::MultiplayerResultsPyramidView::__get__resultAvatarDirectors()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x48>(this);
}
constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> const& GlobalNamespace::MultiplayerResultsPyramidView::__get__resultAvatarDirectors() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x48>(this);
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__badgeTimelines(::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>  value)  {
::cordl_internals::setInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x50>(this, std::forward<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>>(value));
}
constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>& GlobalNamespace::MultiplayerResultsPyramidView::__get__badgeTimelines()  {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x50>(this);
}
constexpr ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> const& GlobalNamespace::MultiplayerResultsPyramidView::__get__badgeTimelines() const {
return ::cordl_internals::getInstanceField<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, 0x50>(this);
}
constexpr void GlobalNamespace::MultiplayerResultsPyramidView::__set__anyResultsAvatar(::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*, 0x58>(this, std::forward<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*>(value));
}
constexpr ::GlobalNamespace::MultiplayerResultsPyramidViewAvatar* GlobalNamespace::MultiplayerResultsPyramidView::__get__anyResultsAvatar()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*, 0x58>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*> GlobalNamespace::MultiplayerResultsPyramidView::__get__anyResultsAvatar() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::MultiplayerResultsPyramidViewAvatar*, 0x58>(this);
}
inline ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> GlobalNamespace::MultiplayerResultsPyramidView::get_resultAvatarDirectors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(),
                            "get_resultAvatarDirectors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, false>(*this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*> GlobalNamespace::MultiplayerResultsPyramidView::get_badgeTimelines()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(),
                            "get_badgeTimelines",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GameObject*,::Array<::UnityEngine::GameObject*>*>, false>(*this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerResultsPyramidView::PrespawnAvatars(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*  activePlayers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(),
                            "PrespawnAvatars",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IConnectedPlayer*>*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, activePlayers);
}
inline void GlobalNamespace::MultiplayerResultsPyramidView::SetupResults(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*  resultsData, ::UnityEngine::Transform*  badgeStartTransform, ::UnityEngine::Transform*  badgeMidTransform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(),
                            "SetupResults",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, resultsData, badgeStartTransform, badgeMidTransform);
}
inline ::GlobalNamespace::MultiplayerResultsPyramidView* GlobalNamespace::MultiplayerResultsPyramidView::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerResultsPyramidView*>());
}
inline void GlobalNamespace::MultiplayerResultsPyramidView::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerResultsPyramidView*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
