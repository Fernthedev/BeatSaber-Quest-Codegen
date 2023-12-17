#pragma once
#include "System/Xml/zzzz__LineInfo_def.hpp"
//  Writing Method size for method: ::System::Xml::LineInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::LineInfo::*)(int32_t, int32_t)>(&::System::Xml::LineInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28923c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::LineInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::LineInfo.Set
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::LineInfo::*)(int32_t, int32_t)>(&::System::Xml::LineInfo::Set)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28923cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::LineInfo>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::LineInfo::__set_lineNo(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::LineInfo::__get_lineNo()  {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::LineInfo::__get_lineNo() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr void System::Xml::LineInfo::__set_linePos(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::LineInfo::__get_linePos()  {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
constexpr int32_t const& System::Xml::LineInfo::__get_linePos() const {
return ::cordl_internals::getInstanceField<int32_t, 0x4>(this->::bs_hook::ValueTypeWrapper<__IL2CPP_VALUE_TYPE_SIZE>::instance);
}
inline void System::Xml::LineInfo::_ctor(int32_t  lineNo, int32_t  linePos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::LineInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lineNo, linePos);
}
inline void System::Xml::LineInfo::Set(int32_t  lineNo, int32_t  linePos)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::LineInfo>::get(),
                            "Set",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, lineNo, linePos);
}
// Ctor Parameters [CppParam { name: "lineNo", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "linePos", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::LineInfo::LineInfo(int32_t  lineNo, int32_t  linePos) noexcept : ::bs_hook::ValueTypeWrapper<0x8>() {this->lineNo = lineNo;
this->linePos = linePos;
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
