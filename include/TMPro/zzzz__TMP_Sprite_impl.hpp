#pragma once
#include "TMPro/zzzz__TMP_TextElement_Legacy_impl.hpp"
#include "TMPro/zzzz__TMP_Sprite_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_Sprite._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::TMP_Sprite::*)()>(&::TMPro::TMP_Sprite::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c41f34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Sprite*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void TMPro::TMP_Sprite::__set_name(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& TMPro::TMP_Sprite::__get_name()  {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr ::StringW const& TMPro::TMP_Sprite::__get_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this);
}
constexpr void TMPro::TMP_Sprite::__set_hashCode(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x40>(this, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_Sprite::__get_hashCode()  {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr int32_t const& TMPro::TMP_Sprite::__get_hashCode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x40>(this);
}
constexpr void TMPro::TMP_Sprite::__set_unicode(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x44>(this, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_Sprite::__get_unicode()  {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr int32_t const& TMPro::TMP_Sprite::__get_unicode() const {
return ::cordl_internals::getInstanceField<int32_t, 0x44>(this);
}
constexpr void TMPro::TMP_Sprite::__set_pivot(::UnityEngine::Vector2  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x48>(this, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2& TMPro::TMP_Sprite::__get_pivot()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x48>(this);
}
constexpr ::UnityEngine::Vector2 const& TMPro::TMP_Sprite::__get_pivot() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x48>(this);
}
constexpr void TMPro::TMP_Sprite::__set_sprite(::UnityEngine::Sprite*  value)  {
::cordl_internals::setInstanceField<::UnityEngine::Sprite*, 0x50>(this, std::forward<::UnityEngine::Sprite*>(value));
}
constexpr ::UnityEngine::Sprite* TMPro::TMP_Sprite::__get_sprite()  {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite*, 0x50>(this);
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> TMPro::TMP_Sprite::__get_sprite() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Sprite*, 0x50>(this);
}
inline ::TMPro::TMP_Sprite* TMPro::TMP_Sprite::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::TMPro::TMP_Sprite*>());
}
inline void TMPro::TMP_Sprite::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_Sprite*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
