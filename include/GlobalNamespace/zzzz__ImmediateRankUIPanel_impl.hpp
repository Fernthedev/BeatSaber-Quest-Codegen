#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ImmediateRankUIPanel_def.hpp"
#include "GlobalNamespace/zzzz__RankModel_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "GlobalNamespace/zzzz__RelativeScoreAndImmediateRankCounter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ImmediateRankUIPanel.Start
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImmediateRankUIPanel::*)()>(&::GlobalNamespace::ImmediateRankUIPanel::Start)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x23c0d50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImmediateRankUIPanel*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImmediateRankUIPanel.HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImmediateRankUIPanel::*)()>(&::GlobalNamespace::ImmediateRankUIPanel::HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x23c101c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImmediateRankUIPanel*>::get(),
                            "HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImmediateRankUIPanel.RefreshUI
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImmediateRankUIPanel::*)()>(&::GlobalNamespace::ImmediateRankUIPanel::RefreshUI)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x23c0e14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImmediateRankUIPanel*>::get(),
                            "RefreshUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ImmediateRankUIPanel._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ImmediateRankUIPanel::*)()>(&::GlobalNamespace::ImmediateRankUIPanel::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x23c1020;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImmediateRankUIPanel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::ImmediateRankUIPanel::__set__rankText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::ImmediateRankUIPanel::__get__rankText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::ImmediateRankUIPanel::__get__rankText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x18>(this);
}
constexpr void GlobalNamespace::ImmediateRankUIPanel::__set__relativeScoreText(::TMPro::TextMeshProUGUI*  value)  {
::cordl_internals::setInstanceField<::TMPro::TextMeshProUGUI*, 0x20>(this, std::forward<::TMPro::TextMeshProUGUI*>(value));
}
constexpr ::TMPro::TextMeshProUGUI* GlobalNamespace::ImmediateRankUIPanel::__get__relativeScoreText()  {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> GlobalNamespace::ImmediateRankUIPanel::__get__relativeScoreText() const {
return ::cordl_internals::getInstanceField<::TMPro::TextMeshProUGUI*, 0x20>(this);
}
constexpr void GlobalNamespace::ImmediateRankUIPanel::__set__relativeScoreAndImmediateRankCounter(::GlobalNamespace::RelativeScoreAndImmediateRankCounter*  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*, 0x28>(this, std::forward<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*>(value));
}
constexpr ::GlobalNamespace::RelativeScoreAndImmediateRankCounter* GlobalNamespace::ImmediateRankUIPanel::__get__relativeScoreAndImmediateRankCounter()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*, 0x28>(this);
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*> GlobalNamespace::ImmediateRankUIPanel::__get__relativeScoreAndImmediateRankCounter() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::RelativeScoreAndImmediateRankCounter*, 0x28>(this);
}
constexpr void GlobalNamespace::ImmediateRankUIPanel::__set__stringBuilder(::System::Text::StringBuilder*  value)  {
::cordl_internals::setInstanceField<::System::Text::StringBuilder*, 0x30>(this, std::forward<::System::Text::StringBuilder*>(value));
}
constexpr ::System::Text::StringBuilder* GlobalNamespace::ImmediateRankUIPanel::__get__stringBuilder()  {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x30>(this);
}
constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> GlobalNamespace::ImmediateRankUIPanel::__get__stringBuilder() const {
return ::cordl_internals::getInstanceField<::System::Text::StringBuilder*, 0x30>(this);
}
constexpr void GlobalNamespace::ImmediateRankUIPanel::__set__prevRelativeScore(float_t  value)  {
::cordl_internals::setInstanceField<float_t, 0x38>(this, std::forward<float_t>(value));
}
constexpr float_t& GlobalNamespace::ImmediateRankUIPanel::__get__prevRelativeScore()  {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr float_t const& GlobalNamespace::ImmediateRankUIPanel::__get__prevRelativeScore() const {
return ::cordl_internals::getInstanceField<float_t, 0x38>(this);
}
constexpr void GlobalNamespace::ImmediateRankUIPanel::__set__prevImmediateRank(::GlobalNamespace::__RankModel__Rank  value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::__RankModel__Rank, 0x3c>(this, std::forward<::GlobalNamespace::__RankModel__Rank>(value));
}
constexpr ::GlobalNamespace::__RankModel__Rank& GlobalNamespace::ImmediateRankUIPanel::__get__prevImmediateRank()  {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RankModel__Rank, 0x3c>(this);
}
constexpr ::GlobalNamespace::__RankModel__Rank const& GlobalNamespace::ImmediateRankUIPanel::__get__prevImmediateRank() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::__RankModel__Rank, 0x3c>(this);
}
inline void GlobalNamespace::ImmediateRankUIPanel::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImmediateRankUIPanel*>::get(),
                            "Start",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ImmediateRankUIPanel::HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImmediateRankUIPanel*>::get(),
                            "HandleRelativeScoreAndImmediateRankCounterRelativeScoreOrImmediateRankDidChange",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline void GlobalNamespace::ImmediateRankUIPanel::RefreshUI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImmediateRankUIPanel*>::get(),
                            "RefreshUI",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
inline ::GlobalNamespace::ImmediateRankUIPanel* GlobalNamespace::ImmediateRankUIPanel::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ImmediateRankUIPanel*>());
}
inline void GlobalNamespace::ImmediateRankUIPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ImmediateRankUIPanel*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
