#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Assets/OVR/Scripts/zzzz__Record_def.hpp"
//  Writing Method size for method: ::Assets::OVR::Scripts::Record._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Assets::OVR::Scripts::Record::*)(int32_t, ::StringW, ::StringW)>(&::Assets::OVR::Scripts::Record::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27f8498;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::Record*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Assets::OVR::Scripts::Record::__set_sortOrder(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& Assets::OVR::Scripts::Record::__get_sortOrder()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& Assets::OVR::Scripts::Record::__get_sortOrder() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr void Assets::OVR::Scripts::Record::__set_category(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x18>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Assets::OVR::Scripts::Record::__get_category()  {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr ::StringW const& Assets::OVR::Scripts::Record::__get_category() const {
return ::cordl_internals::getInstanceField<::StringW, 0x18>(this);
}
constexpr void Assets::OVR::Scripts::Record::__set_message(::StringW  value)  {
::cordl_internals::setInstanceField<::StringW, 0x20>(this, std::forward<::StringW>(value));
}
constexpr ::StringW& Assets::OVR::Scripts::Record::__get_message()  {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
constexpr ::StringW const& Assets::OVR::Scripts::Record::__get_message() const {
return ::cordl_internals::getInstanceField<::StringW, 0x20>(this);
}
inline ::Assets::OVR::Scripts::Record* Assets::OVR::Scripts::Record::New_ctor(int32_t  order, ::StringW  cat, ::StringW  msg)  {
return THROW_UNLESS(::il2cpp_utils::New<::Assets::OVR::Scripts::Record*>(order, cat, msg));
}
inline void Assets::OVR::Scripts::Record::_ctor(int32_t  order, ::StringW  cat, ::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::Record*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method, order, cat, msg);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
