#pragma once
#include "TMPro/zzzz__TMP_WordInfo_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::TMPro::TMP_WordInfo.GetWord
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::TMPro::TMP_WordInfo::*)()>(&::TMPro::TMP_WordInfo::GetWord)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2c00fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_WordInfo>::get(),
                            "GetWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void TMPro::TMP_WordInfo::__set_textComponent(::TMPro::TMP_Text*  value)  {
::cordl_internals::setInstanceField<::TMPro::TMP_Text*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<::TMPro::TMP_Text*>(value));
}
constexpr ::TMPro::TMP_Text* TMPro::TMP_WordInfo::__get_textComponent()  {
return ::cordl_internals::getInstanceField<::TMPro::TMP_Text*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr ::cordl_internals::to_const_pointer<::TMPro::TMP_Text*> TMPro::TMP_WordInfo::__get_textComponent() const {
return ::cordl_internals::getInstanceField<::TMPro::TMP_Text*, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void TMPro::TMP_WordInfo::__set_firstCharacterIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_WordInfo::__get_firstCharacterIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::TMP_WordInfo::__get_firstCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void TMPro::TMP_WordInfo::__set_lastCharacterIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_WordInfo::__get_lastCharacterIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::TMP_WordInfo::__get_lastCharacterIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void TMPro::TMP_WordInfo::__set_characterCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& TMPro::TMP_WordInfo::__get_characterCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& TMPro::TMP_WordInfo::__get_characterCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline ::StringW TMPro::TMP_WordInfo::GetWord()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::TMP_WordInfo>::get(),
                            "GetWord",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "textComponent", ty: "::TMPro::TMP_Text*", modifiers: "", def_value: Some("csnull") }, CppParam { name: "firstCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "lastCharacterIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "characterCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::TMP_WordInfo::TMP_WordInfo(::TMPro::TMP_Text*  textComponent, int32_t  firstCharacterIndex, int32_t  lastCharacterIndex, int32_t  characterCount) noexcept : ::bs_hook::ValueTypeWrapper<0x18>() {this->textComponent = textComponent;
this->firstCharacterIndex = firstCharacterIndex;
this->lastCharacterIndex = lastCharacterIndex;
this->characterCount = characterCount;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
