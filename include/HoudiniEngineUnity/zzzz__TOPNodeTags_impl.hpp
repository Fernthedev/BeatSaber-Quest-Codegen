#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__TOPNodeTags_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::TOPNodeTags._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::TOPNodeTags::*)()>(&::HoudiniEngineUnity::TOPNodeTags::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x219a6dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::TOPNodeTags*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void HoudiniEngineUnity::TOPNodeTags::__set__show(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x10>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::TOPNodeTags::__get__show()  {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr bool const& HoudiniEngineUnity::TOPNodeTags::__get__show() const {
return ::cordl_internals::getInstanceField<bool, 0x10>(this);
}
constexpr void HoudiniEngineUnity::TOPNodeTags::__set__autoload(bool  value)  {
::cordl_internals::setInstanceField<bool, 0x11>(this, std::forward<bool>(value));
}
constexpr bool& HoudiniEngineUnity::TOPNodeTags::__get__autoload()  {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
constexpr bool const& HoudiniEngineUnity::TOPNodeTags::__get__autoload() const {
return ::cordl_internals::getInstanceField<bool, 0x11>(this);
}
inline ::HoudiniEngineUnity::TOPNodeTags* HoudiniEngineUnity::TOPNodeTags::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::TOPNodeTags*>());
}
inline void HoudiniEngineUnity::TOPNodeTags::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::TOPNodeTags*>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(*this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
