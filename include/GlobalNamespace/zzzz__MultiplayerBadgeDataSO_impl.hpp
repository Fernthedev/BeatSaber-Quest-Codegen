#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__IDifficultyBeatmap_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeAwardData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSO.get_icon
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Sprite* (::GlobalNamespace::MultiplayerBadgeDataSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataSO::get_icon)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cf8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(),
                            "get_icon",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSO.get_titleLocalizationKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MultiplayerBadgeDataSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataSO::get_titleLocalizationKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cf904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(),
                            "get_titleLocalizationKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSO.get_subtitleLocalizationKey
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::MultiplayerBadgeDataSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataSO::get_subtitleLocalizationKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cf90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(),
                            "get_subtitleLocalizationKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSO.CalculateBadgeData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MultiplayerBadgeAwardData* (::GlobalNamespace::MultiplayerBadgeDataSO::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, ::GlobalNamespace::PlayerDataModel*, ::GlobalNamespace::IDifficultyBeatmap*, float_t)>(&::GlobalNamespace::MultiplayerBadgeDataSO::CalculateBadgeData)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataSO._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerBadgeDataSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23cdc6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::MultiplayerBadgeDataSO::__set__titleLocalizationKey(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::MultiplayerBadgeDataSO::__get__titleLocalizationKey()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& GlobalNamespace::MultiplayerBadgeDataSO::__get__titleLocalizationKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void GlobalNamespace::MultiplayerBadgeDataSO::__set__subtitleLocalizationKey(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& GlobalNamespace::MultiplayerBadgeDataSO::__get__subtitleLocalizationKey()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& GlobalNamespace::MultiplayerBadgeDataSO::__get__subtitleLocalizationKey() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr void GlobalNamespace::MultiplayerBadgeDataSO::__set__icon(::UnityEngine::Sprite*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Sprite*, 0x28>(this, std::forward<::UnityEngine::Sprite*>(value));
}
constexpr ::UnityEngine::Sprite* GlobalNamespace::MultiplayerBadgeDataSO::__get__icon()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> GlobalNamespace::MultiplayerBadgeDataSO::__get__icon() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite*, 0x28>(this);
}
inline ::UnityEngine::Sprite* GlobalNamespace::MultiplayerBadgeDataSO::get_icon()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(),
                            "get_icon",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Sprite*, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::MultiplayerBadgeDataSO::get_titleLocalizationKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(),
                            "get_titleLocalizationKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::MultiplayerBadgeDataSO::get_subtitleLocalizationKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(),
                            "get_subtitleLocalizationKey",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerBadgeAwardData* GlobalNamespace::MultiplayerBadgeDataSO::CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*  resultsData, ::GlobalNamespace::PlayerDataModel*  playerDataModel, ::GlobalNamespace::IDifficultyBeatmap*  difficultyBeatmap, float_t  randomMultiplier)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(),
                            "CalculateBadgeData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IDifficultyBeatmap*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerBadgeAwardData*, false>(*this, ___internal_method, resultsData, playerDataModel, difficultyBeatmap, randomMultiplier);
}
inline ::GlobalNamespace::MultiplayerBadgeDataSO* GlobalNamespace::MultiplayerBadgeDataSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerBadgeDataSO*>());
}
inline void GlobalNamespace::MultiplayerBadgeDataSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataSO*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
