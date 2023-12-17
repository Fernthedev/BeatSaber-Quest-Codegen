#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__LevelFailedText_def.hpp"
#include "Polyglot/zzzz__LocalizedTextMeshPro_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelFailedText.OverrideText
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFailedText::*)(::StringW)>(&::GlobalNamespace::LevelFailedText::OverrideText)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x239a1f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedText*>::get(),
                            "OverrideText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFailedText._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFailedText::*)()>(&::GlobalNamespace::LevelFailedText::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x239a240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedText*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void GlobalNamespace::LevelFailedText::__set__text(::TMPro::TMP_Text*  value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_Text*, 0x18>(this, std::forward<::TMPro::TMP_Text*>(value));
}
constexpr ::TMPro::TMP_Text* GlobalNamespace::LevelFailedText::__get__text()  {
return ::cordl_internals::getInstanceField<::TMPro::TMP_Text*, 0x18>(this);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_Text*> GlobalNamespace::LevelFailedText::__get__text() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_Text*, 0x18>(this);
}
constexpr void GlobalNamespace::LevelFailedText::__set__localizedText(::Polyglot::LocalizedTextMeshPro*  value)  {
::cordl_internals::setInstanceField<::Polyglot::LocalizedTextMeshPro*, 0x20>(this, std::forward<::Polyglot::LocalizedTextMeshPro*>(value));
}
constexpr ::Polyglot::LocalizedTextMeshPro* GlobalNamespace::LevelFailedText::__get__localizedText()  {
return ::cordl_internals::getInstanceField<::Polyglot::LocalizedTextMeshPro*, 0x20>(this);
}
constexpr ::cordl_internals::to_const_pointer<::Polyglot::LocalizedTextMeshPro*> GlobalNamespace::LevelFailedText::__get__localizedText() const {
return ::cordl_internals::getInstanceField<::Polyglot::LocalizedTextMeshPro*, 0x20>(this);
}
inline void GlobalNamespace::LevelFailedText::OverrideText(::StringW  text)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedText*>::get(),
                            "OverrideText",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, text);
}
inline ::GlobalNamespace::LevelFailedText* GlobalNamespace::LevelFailedText::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::LevelFailedText*>());
}
inline void GlobalNamespace::LevelFailedText::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFailedText*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
