#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__OpenedHost_def.hpp"
//  Writing Method size for method: ::System::Xml::OpenedHost._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::OpenedHost::*)()>(&::System::Xml::OpenedHost::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x28a4244;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::OpenedHost*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void System::Xml::OpenedHost::__set_nonCachedConnectionsCount(int32_t  value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this, std::forward<int32_t>(value));
}
constexpr int32_t& System::Xml::OpenedHost::__get_nonCachedConnectionsCount()  {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
constexpr int32_t const& System::Xml::OpenedHost::__get_nonCachedConnectionsCount() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this);
}
inline ::System::Xml::OpenedHost* System::Xml::OpenedHost::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::OpenedHost*>());
}
inline void System::Xml::OpenedHost::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::OpenedHost*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
