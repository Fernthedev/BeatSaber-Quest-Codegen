#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LeaderboardEntry_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LeaderboardEntry.SetScore
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardEntry::*)(int32_t, ::StringW, int32_t, bool, bool)>(&::GlobalNamespace::LeaderboardEntry::SetScore)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x229e66c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardEntry*>::get(),
                            "SetScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LeaderboardEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LeaderboardEntry::*)()>(&::GlobalNamespace::LeaderboardEntry::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x229e7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LeaderboardEntry::__set__scoreText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::LeaderboardEntry::__get__scoreText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::LeaderboardEntry::__get__scoreText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this);
}
constexpr void GlobalNamespace::LeaderboardEntry::__set__playerNameText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x20>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::LeaderboardEntry::__get__playerNameText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::LeaderboardEntry::__get__playerNameText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x20>(this);
}
constexpr void GlobalNamespace::LeaderboardEntry::__set__rankText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x28>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::LeaderboardEntry::__get__rankText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::LeaderboardEntry::__get__rankText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x28>(this);
}
constexpr void GlobalNamespace::LeaderboardEntry::__set__color(::UnityEngine::Color  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Color, 0x30>(this, std::forward<::UnityEngine::Color>(value));
}
constexpr ::UnityEngine::Color& GlobalNamespace::LeaderboardEntry::__get__color()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x30>(this);
}
constexpr ::UnityEngine::Color const& GlobalNamespace::LeaderboardEntry::__get__color() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Color, 0x30>(this);
}
inline void GlobalNamespace::LeaderboardEntry::SetScore(int32_t  score, ::StringW  playerName, int32_t  rank, bool  highlighted, bool  showSeparator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardEntry*>::get(),
                            "SetScore",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, score, playerName, rank, highlighted, showSeparator);
}
inline ::GlobalNamespace::LeaderboardEntry* GlobalNamespace::LeaderboardEntry::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LeaderboardEntry*>());
}
inline void GlobalNamespace::LeaderboardEntry::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LeaderboardEntry*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
