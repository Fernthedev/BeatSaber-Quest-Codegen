#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Globalization/zzzz__CodePageDataItem_def.hpp"
//  Writing Method size for method: ::System::Globalization::CodePageDataItem._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::CodePageDataItem::*)(int32_t)>(&::System::Globalization::CodePageDataItem::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x256c58c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CodePageDataItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CodePageDataItem.CreateString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, uint32_t)>(&::System::Globalization::CodePageDataItem::CreateString)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x256c630;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CodePageDataItem*>::get(),
                            "CreateString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::CodePageDataItem.get_WebName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::CodePageDataItem::*)()>(&::System::Globalization::CodePageDataItem::get_WebName)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x256c6e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CodePageDataItem*>::get(),
                            "get_WebName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Globalization::CodePageDataItem::__set_m_dataIndex(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::CodePageDataItem::__get_m_dataIndex()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& System::Globalization::CodePageDataItem::__get_m_dataIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void System::Globalization::CodePageDataItem::__set_m_uiFamilyCodePage(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Globalization::CodePageDataItem::__get_m_uiFamilyCodePage()  {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr int32_t const& System::Globalization::CodePageDataItem::__get_m_uiFamilyCodePage() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this);
}
constexpr void System::Globalization::CodePageDataItem::__set_m_webName(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& System::Globalization::CodePageDataItem::__get_m_webName()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& System::Globalization::CodePageDataItem::__get_m_webName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void System::Globalization::CodePageDataItem::__set_m_flags(uint32_t  value)  {
::cordl_internals::setInstanceField<uint32_t, 0x20>(this, std::forward<uint32_t>(value));
}
constexpr uint32_t& System::Globalization::CodePageDataItem::__get_m_flags()  {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this);
}
constexpr uint32_t const& System::Globalization::CodePageDataItem::__get_m_flags() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x20>(this);
}
inline void System::Globalization::CodePageDataItem::setStaticF_sep(::ArrayW<char16_t,::Array<char16_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "sep", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CodePageDataItem*>::get>(std::forward<::ArrayW<char16_t,::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t,::Array<char16_t>*> System::Globalization::CodePageDataItem::getStaticF_sep()  {
return ::cordl_internals::getStaticField<::ArrayW<char16_t,::Array<char16_t>*>, "sep", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CodePageDataItem*>::get>();
}
inline ::System::Globalization::CodePageDataItem* System::Globalization::CodePageDataItem::New_ctor(int32_t  dataIndex)  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Globalization::CodePageDataItem*>(dataIndex));
}
inline void System::Globalization::CodePageDataItem::_ctor(int32_t  dataIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CodePageDataItem*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, dataIndex);
}
inline ::StringW System::Globalization::CodePageDataItem::CreateString(::StringW  pStrings, uint32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CodePageDataItem*>::get(),
                            "CreateString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, pStrings, index);
}
inline ::StringW System::Globalization::CodePageDataItem::get_WebName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::CodePageDataItem*>::get(),
                            "get_WebName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
